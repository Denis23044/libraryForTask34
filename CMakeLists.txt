cmake_minimum_required(VERSION 3.21)
project(library_for_task34)

set(CMAKE_CXX_STANDARD 14)

add_library(library_for_task34 SHARED library.cpp Plate.cpp Plate.h Contact.cpp Contact.h ContactData.cpp ContactData.h PowerContact.cpp PowerContact.h Device.cpp Device.h)
