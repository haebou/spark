/*
 * Modbot
*/

#ifndef SRC_FACETRACKER_H_
#define SRC_FACETRACKER_H_

#include <opencv2/core/core.hpp>
#include "opencv2/highgui.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/imgproc/imgproc.hpp"

class FaceTracker {
 public:
  FaceTracker(std::string haarcascade_filename);
  
  bool run();

  cv::Mat detectFaces(cv::Mat input_frame);

 private:
  cv::CascadeClassifier face_cascade_;
};

#endif  // #ifndef SRC_TRACKER_H_