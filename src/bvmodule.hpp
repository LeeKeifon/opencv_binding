//#include <opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//namespace bv
//{
//
//	CV_EXPORTS_W void fillHoles(Mat &mat);
//
//	class CV_EXPORTS_W Filters
//	{
//	public:
//		CV_WRAP Filters();
//		CV_WRAP void edge(InputArray im, OutputArray imedge);
//	};
//}
#include "opencv2/cudawarping.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core.hpp"
//#include <opencv2/opencv.hpp>
namespace bv{
	CV_EXPORTS_W void remap(	InputArray  src,
								OutputArray dst,
								InputArray 	xmap,
								InputArray 	ymap,
								bool        enable_gpu_flag = false,
								int 	    interpolation,
								int 	    borderMode = BORDER_CONSTANT,
								Scalar 	    borderValue = Scalar(),
								Stream & 	stream = Stream::Null());
}

