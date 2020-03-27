cmake_minimum_required(VERSION 3.15)
project(TaxHippokampoi_Hackathon C)

set(CMAKE_C_STANDARD 11)

include_directories(taxis)
include_directories(Clients)

add_executable(TaxHippokampoi_Hackathon
        taxis/controllers.c
        taxis/taxis.h
        taxis/utils.c
        Clien
        taxi-handler.c
        taxi-handler.h)
