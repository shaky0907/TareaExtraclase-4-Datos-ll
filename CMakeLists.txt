cmake_minimum_required(VERSION 3.19)
project(TareaExtraclase_4_Datos_ll)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(SHA1)

add_executable(SHA1
        SHA1/SHA1.cpp
        SHA1/SHA1.h
        SHA1Main.cpp
        SHA1/SHA1Transmitter.cpp SHA1/SHA1Transmitter.h SHA1/SHA1Receiver.cpp SHA1/SHA1Receiver.h)
add_executable(MD5 MD5.cpp)