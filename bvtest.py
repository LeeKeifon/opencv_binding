import cv2
import sys
sys.path.append('build')
import bv


im = cv2.imread('holes.jpg', cv2.IMREAD_GRAYSCALE)
imfilled = im.copy()
bv.fillHoles(imfilled)

filters = bv.bv_Filters() 
imedge = filters.edge(im)

cv2.imwrite("after-fill.jpg", imfilled)
# cv2.imshow("Original image", im)
# cv2.imshow("Python Module Function Example", imfilled)
# cv2.imshow("Python Module Class Example", imedge)
# cv2.waitKey(0)

#/lib/opencv/build/unix-install/opencv.pc
# PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/usr/local/lib/pkgconfig
# export PKG_CONFIG_PATH




# /lib/opencv/build/unix-install/opencv.pc

#export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/
#export PKG_CONFIG_PATH=/lib/opencv/build/unix-install

