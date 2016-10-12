#include "aruco_unity.hpp"
#include "aruco_unity/utility/exception.hpp"
#include "aruco_unity/utility/vector_vector_point2f.hpp"

extern "C" {
  void au_detectMarkers1(cv::Mat* image, cv::Ptr<cv::aruco::Dictionary>* dictionary, std::vector<std::vector<cv::Point2f>>** corners,
    std::vector<int>** ids, const cv::Ptr<cv::aruco::DetectorParameters>* parameters, std::vector<std::vector<cv::Point2f>>** rejectedImgPoints,
    cv::Exception* exception) {
    try {
      *corners = new std::vector<std::vector<cv::Point2f>>();
      *rejectedImgPoints = new std::vector<std::vector<cv::Point2f>>();
      *ids = new std::vector<int>();

      cv::aruco::detectMarkers(*image, *dictionary, **corners, **ids, *parameters, **rejectedImgPoints);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_detectMarkers2(cv::Mat* image, cv::Ptr<cv::aruco::Dictionary>* dictionary, std::vector<std::vector<cv::Point2f>>** corners,
    std::vector<int>** ids, const cv::Ptr<cv::aruco::DetectorParameters>* parameters, cv::Exception* exception) {
    try {
      *corners = new std::vector<std::vector<cv::Point2f>>();
      *ids = new std::vector<int>();

      cv::aruco::detectMarkers(*image, *dictionary, **corners, **ids, *parameters);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_detectMarkers3(cv::Mat* image, cv::Ptr<cv::aruco::Dictionary>* dictionary, std::vector<std::vector<cv::Point2f>>** corners,
    std::vector<int>** ids, cv::Exception* exception) {
    try {
      *corners = new std::vector<std::vector<cv::Point2f>>();
      *ids = new std::vector<int>();

      cv::aruco::detectMarkers(*image, *dictionary, **corners, **ids);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_drawDetectedMarkers1(cv::Mat* image, std::vector<std::vector<cv::Point2f>>* corners, std::vector<int>* ids,
    cv::Scalar* borderColor, cv::Exception* exception) {
    try {
      cv::aruco::drawDetectedMarkers(*image, *corners, *ids, *borderColor);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_drawDetectedMarkers2(cv::Mat* image, std::vector<std::vector<cv::Point2f>>* corners, std::vector<int>* ids,
    cv::Exception* exception) {
    try {
      cv::aruco::drawDetectedMarkers(*image, *corners, *ids);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_drawDetectedMarkers3(cv::Mat* image, std::vector<std::vector<cv::Point2f>>* corners, cv::Exception* exception) {
    try {
      cv::aruco::drawDetectedMarkers(*image, *corners);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_drawDetectedMarkers4(cv::Mat* image, std::vector<std::vector<cv::Point2f>>* corners, cv::Scalar* borderColor, cv::Exception* exception) {
    try {
      cv::aruco::drawDetectedMarkers(*image, *corners, cv::noArray(), *borderColor);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_refineDetectedMarkers1(cv::Mat* image, cv::Ptr<cv::aruco::Board>* board, cv::Mat* detectedCorners, cv::Mat* detectedIds, 
    cv::Mat* rejectedCorners, cv::Mat* cameraMatrix, cv::Mat* distCoeffs, float minRepDistance, float errorCorrectionRate, bool checkAllOrders, 
    cv::Mat* recoveredIdxs, const cv::Ptr<cv::aruco::DetectorParameters>* parameters, cv::Exception* exception) {
    try {
      cv::aruco::refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners, *cameraMatrix,
        *distCoeffs, minRepDistance, errorCorrectionRate, checkAllOrders, *recoveredIdxs, *parameters);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_refineDetectedMarkers2(cv::Mat* image, cv::Ptr<cv::aruco::Board>* board, cv::Mat* detectedCorners, cv::Mat* detectedIds, 
    cv::Mat* rejectedCorners, cv::Mat* cameraMatrix, cv::Mat* distCoeffs, float minRepDistance, float errorCorrectionRate, bool checkAllOrders, 
    cv::Mat* recoveredIdxs, cv::Exception* exception) {
    try {
      cv::aruco::refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners, *cameraMatrix,
        *distCoeffs, minRepDistance, errorCorrectionRate, checkAllOrders, *recoveredIdxs);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_refineDetectedMarkers3(cv::Mat* image, cv::Ptr<cv::aruco::Board>* board, cv::Mat* detectedCorners, cv::Mat* detectedIds, 
    cv::Mat* rejectedCorners, cv::Mat* cameraMatrix, cv::Mat* distCoeffs, float minRepDistance, float errorCorrectionRate, bool checkAllOrders, 
    cv::Exception* exception) {
    try {
      cv::aruco::refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners, *cameraMatrix,
        *distCoeffs, minRepDistance, errorCorrectionRate, checkAllOrders);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_refineDetectedMarkers4(cv::Mat* image, cv::Ptr<cv::aruco::Board>* board, cv::Mat* detectedCorners, cv::Mat* detectedIds, 
    cv::Mat* rejectedCorners, cv::Mat* cameraMatrix, cv::Mat* distCoeffs, float minRepDistance, float errorCorrectionRate, 
    cv::Exception* exception) {
    try {
      cv::aruco::refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners, *cameraMatrix,
        *distCoeffs, minRepDistance, errorCorrectionRate);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_refineDetectedMarkers5(cv::Mat* image, cv::Ptr<cv::aruco::Board>* board, cv::Mat* detectedCorners, cv::Mat* detectedIds, 
    cv::Mat* rejectedCorners, cv::Mat* cameraMatrix, cv::Mat* distCoeffs, float minRepDistance, cv::Exception* exception) {
    try {
      cv::aruco::refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners, *cameraMatrix,
        *distCoeffs, minRepDistance);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_refineDetectedMarkers6(cv::Mat* image, cv::Ptr<cv::aruco::Board>* board, cv::Mat* detectedCorners, cv::Mat* detectedIds, 
    cv::Mat* rejectedCorners, cv::Mat* cameraMatrix, cv::Mat* distCoeffs, cv::Exception* exception) {
    try {
      cv::aruco::refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners, *cameraMatrix,
        *distCoeffs);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_refineDetectedMarkers7(cv::Mat* image, cv::Ptr<cv::aruco::Board>* board, cv::Mat* detectedCorners, cv::Mat* detectedIds, 
    cv::Mat* rejectedCorners, cv::Mat* cameraMatrix, cv::Exception* exception) {
    try {
      cv::aruco::refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners, *cameraMatrix);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }

  void au_refineDetectedMarkers8(cv::Mat* image, cv::Ptr<cv::aruco::Board>* board, cv::Mat* detectedCorners, cv::Mat* detectedIds, 
    cv::Mat* rejectedCorners, cv::Exception* exception) {
    try {
      cv::aruco::refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners);
    }
    catch (const cv::Exception& e) {
      ARUCO_UNITY_COPY_EXCEPTION(exception, e);
      return;
    }
  }
}