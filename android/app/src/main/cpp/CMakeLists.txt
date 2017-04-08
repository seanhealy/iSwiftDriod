cmake_minimum_required(VERSION 3.4.1)

set(PROJECT_NAME iSwiftAndroid)
project(${PROJECT_NAME})

file(GLOB_RECURSE SOURCES

  # source
  "${CMAKE_SOURCE_DIR}/src/main/cpp/*"
  "${CMAKE_SOURCE_DIR}/android/app/src/main/cpp/*"

  # djinni support lib
  "${CMAKE_SOURCE_DIR}/deps/djinni/support-lib/jni/*"

  # djinni generated source
  #"${CMAKE_SOURCE_DIR}/generated-src/cpp/*"
  "${CMAKE_SOURCE_DIR}/generated-src/jni/*"

)

include_directories(

  # source
  "${CMAKE_SOURCE_DIR}/src/main/cpp/"

  # djinni support lib
  "${CMAKE_SOURCE_DIR}/deps/djinni/support-lib/jni/"

  # djinni generated source
  #"${CMAKE_SOURCE_DIR}/generated-src/cpp/"
  "${CMAKE_SOURCE_DIR}/generated-src/jni/"

)

add_library(${PROJECT_NAME} SHARED ${SOURCES})
