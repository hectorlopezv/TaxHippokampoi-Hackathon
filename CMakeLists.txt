cmake_minimum_required(VERSION 3.15)
project(TaxHippokampoi_Hackathon C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(taxis)

add_executable(TaxHippokampoi_Hackathon
        taxis/taxis.h
        taxis/controllers.c taxis/utils.c)
