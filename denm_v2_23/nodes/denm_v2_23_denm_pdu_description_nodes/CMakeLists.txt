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
# This file belongs to the DLR Wind project de.dlr.ts.v2x:denm_v2_23:1.0
# 
# Module: DENM_PDU_Description {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#     wg1(1) denmPduRelease2(103831) major-version-2(2) minor-version-2(2)}
# 
# For support contact v2x-ts@dlr.de
# 
# 
cmake_minimum_required(VERSION 3.13)
project(denm_v2_23_denm_pdu_description_nodes)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)
add_definitions(-DWIND_ROS_VERSION=1)
add_definitions(-DV2X_MESSAGE_ID=1)
add_definitions(-DV2X_PROTOCOL_VERSION=2)

find_package(catkin REQUIRED COMPONENTS
    roscpp
    denm_v2_23_denm_pdu_description_msgs
    its_container_v4_etsi_its_cdd_msgs
)
find_package(Boost)

catkin_package(
    INCLUDE_DIRS include  # This indicates that the folder "include" within the package folder is where exported headers go
    CATKIN_DEPENDS its_container_v4_etsi_its_cdd_msgs
)

##------------------  Receiver  ------------------##
add_executable(receiver
    src/receiver.cpp
    src/udp_receiver.cpp
    src/screen_logger.cpp
    src/denm_v2_23_denm_pdu_description_receiver.cpp
    src/denm_v2_23_denm_pdu_description_wer_decoder.cpp
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
    src/denm_v2_23_denm_pdu_description_sender.cpp
    src/denm_v2_23_denm_pdu_description_wer_encoder.cpp
)
add_dependencies(sender ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(sender ${catkin_LIBRARIES})
target_include_directories(sender PRIVATE include ${catkin_INCLUDE_DIRS})
install(TARGETS sender RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
##------------------------------------------------##

