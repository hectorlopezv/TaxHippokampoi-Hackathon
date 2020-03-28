cmake_minimum_required(VERSION 3.15)
project(TaxHippokampoi_Hackathon C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(taxis)
include_directories(Clients)

add_executable(TaxHippokampoi_Hackathon
        taxis/taxis.h
        taxis/controllers.c
        clients/clients.h
        taxis/utils.c
        clients/controllers.c
        taxi-handler.h
        taxi-handler.c
        test/main.c
        )
