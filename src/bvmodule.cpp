#ifndef BVMODULE_HPP
#define BVMODULE_HPP
#include"bvmodule.hpp"
//namespace bv
//{
//
//  void fillHoles(Mat &im)
//  {
//    Mat im_th;
//
//    // Binarize the image by thresholding
//    threshold(im, im_th, 128, 255, THRESH_BINARY);
//    // Flood fill
//    Mat im_floodfill = im_th.clone();
//    floodFill(im_floodfill, cv::Point(0,0), Scalar(255));
//
//    // Invert floodfilled image
//    Mat im_floodfill_inv;
//    bitwise_not(im_floodfill, im_floodfill_inv);
//
//    // Combine the two images to fill holes
//    im = (im_th | im_floodfill_inv);
//
//  }
//
//
//  void Filters::edge(InputArray im, OutputArray imedge)
//  {
//    // Perform canny edge detection
//    Canny(im,imedge,100,200);
//  }
//
//  Filters::Filters()
//  {
//  }
//}
namespace bv{
    void remap(InputArray src, OutputArray dst, InputArray xmap, InputArray ymap, int interpolation, bool enable_gpu_flag = false,
               int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar(), Stream & stream = Stream::Null())
               {
                    if(!enable_gpu_flag)
                        cv::remap(src,dst,xmap,ymap,interpolation,borderMode,borderValue);
                    else
                    //according to the source code, we don't need to upload gpuMat
                        cv::cuda::remap(src,dst,xmap,ymap,interpolation,borderMode,borderValue,stream);// TODO: do i need to download the gpuMat?
                }
}
#endif