# 
# Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)
# Institute of Transportation Systems. (https://www.dlr.de/ts/)
# 
# Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore
# 
# This program and the accompanying materials are made available under the
# terms of the Eclipse Public License 2.0 which is available at
# http://www.eclipse.org/legal/epl-2.0.
# 
# SPDX-License-Identifier: EPL-2.0
# 
# 
# File automatically generated with DLR Wind v2
# 
# This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0
# 
# Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#     wg1(1) en(302637) cam(2) version(2)}
# 
# For support contact v2x-ts@dlr.de
# 
# 
cmake_minimum_required(VERSION 3.13)
project(mad_cam_pdu_descriptions_nodes)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)
add_definitions(-DWIND_ROS_VERSION=1)
add_definitions(-DV2X_MESSAGE_ID=2)
add_definitions(-DV2X_PROTOCOL_VERSION=2)

find_package(catkin REQUIRED COMPONENTS
    roscpp
    its_container_v2_its_container_msgs
    mad_cam_pdu_descriptions_msgs
)
find_package(Boost)

catkin_package(
    INCLUDE_DIRS include  # This indicates that the folder "include" within the package folder is where exported headers go
    CATKIN_DEPENDS its_container_v2_its_container_msgs
)

##------------------  Receiver  ------------------##
add_executable(receiver
    src/receiver.cpp
    src/udp_receiver.cpp
    src/screen_logger.cpp
    src/mad_cam_pdu_descriptions_receiver.cpp
    src/mad_cam_pdu_descriptions_wer_decoder.cpp
)
add_dependencies(receiver ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(receiver ${catkin_LIBRARIES})
target_include_directories(receiver PRIVATE include ${catkin_INCLUDE_DIRS})
install(TARGETS receiver RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
##------------------------------------------------##

##------------------   Sender   ------------------##
add_executable(sender
    src/sender.cpp
    src/udp_sender.cpp
    src/screen_logger.cpp
    src/mad_cam_pdu_descriptions_sender.cpp
    src/mad_cam_pdu_descriptions_wer_encoder.cpp
)
add_dependencies(sender ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(sender ${catkin_LIBRARIES})
target_include_directories(sender PRIVATE include ${catkin_INCLUDE_DIRS})
install(TARGETS sender RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
##------------------------------------------------##

