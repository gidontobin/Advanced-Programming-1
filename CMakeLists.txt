cmake_minimum_required(VERSION 3.20)
project(AP)

set(CMAKE_CXX_STANDARD 14)

add_executable(AP main.cpp anomaly_detection_util.cpp anomaly_detection_util.h AnomalyDetector.h SimpleAnomalyDetector.cpp SimpleAnomalyDetector.h timeseries.cpp timeseries.h)
