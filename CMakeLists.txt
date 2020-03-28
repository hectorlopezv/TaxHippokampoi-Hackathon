cmake_minimum_required(VERSION 3.15)
project(TaxHippokampoi_Hackathon C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(taxis)
include_directories(Clients)

set(CLIENTS 
						clients/clients.h
						clients/controllers.c
						)

set(TAXIS
						taxis/taxis.h
						taxis/controllers.c
						taxis/utils.c
						)

add_executable(TaxHippokampoi_Hackathon
				${CLIENTS}
				${TAXIS}
        taxi-handler.h
        taxi-handler.c
        test/main.c
        )
