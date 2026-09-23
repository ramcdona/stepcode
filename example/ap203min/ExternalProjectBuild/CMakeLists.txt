#
# CMakeLists.txt for AP203 Minimum
#
#  This file is released to the public domain.  Any part of this file may be
# freely copied in part or in full for any purpose.  No acknowledgment is required
# for the use of this file.
#
cmake_minimum_required(VERSION 3.12)
project(AP203Minimum)

INCLUDE( ExternalProject )

set(CMAKE_MODULE_PATH ${AP203Minimum_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

# Sets STEPCODE_INSTALL_DIR, STEPCODE_INCLUDE_DIR, STEPCODE_LIBRARIES,
# STEPCODE_SYSTEM_LIBRARIES and STEPCODE_DEFINITIONS.
INCLUDE( External_STEPCode )

MESSAGE( STATUS "STEPCODE_INSTALL_DIR: " ${STEPCODE_INSTALL_DIR} )

set(SRCS ../ap203min.cpp)

set(HDRS )

add_executable( ${PROJECT_NAME} ${SRCS} ${HDRS})

add_dependencies( ${PROJECT_NAME} STEPCODE )

target_include_directories( ${PROJECT_NAME} PRIVATE ${STEPCODE_INCLUDE_DIR} )

target_compile_definitions( ${PROJECT_NAME} PRIVATE ${STEPCODE_DEFINITIONS} )

target_link_libraries( ${PROJECT_NAME}
    ${STEPCODE_LIBRARIES}
    ${STEPCODE_SYSTEM_LIBRARIES}
)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
