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
# This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v1_23:1.0
# 
# Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#     wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}
# 
# For support contact v2x-ts@dlr.de
# 
# 
cmake_minimum_required(VERSION 3.13)
project(cpm_v1_23_cpm_pdu_descriptions_msgs)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)
add_definitions(-DWIND_ROS_VERSION=1)

find_package(catkin REQUIRED COMPONENTS
    std_msgs
    message_generation
    cpm_v1_23_cpm_originatingstationcontainers_msgs
    cpm_v1_23_cpm_perceivedobjectcontainer_msgs
    cpm_v1_23_cpm_perceptionregioncontainer_msgs
    cpm_v1_23_cpm_sensorinformationcontainer_msgs
    its_container_v3_etsi_its_cdd_msgs
)

add_message_files(
    FILES
    CollectivePerceptionMessage.msg
    ConstraintWrappedCpmContainers.msg
    CpmContainerId.msg
    CpmPayload.msg
    ManagementContainer.msg
    MessageRateRange.msg
    WrappedCpmContainer.msg
    WrappedCpmContainers.msg
)

generate_messages(
    DEPENDENCIES
    std_msgs
    cpm_v1_23_cpm_perceptionregioncontainer_msgs
    cpm_v1_23_cpm_perceivedobjectcontainer_msgs
    cpm_v1_23_cpm_sensorinformationcontainer_msgs
    cpm_v1_23_cpm_originatingstationcontainers_msgs
    its_container_v3_etsi_its_cdd_msgs
)

catkin_package(
    CATKIN_DEPENDS message_runtime cpm_v1_23_cpm_perceptionregioncontainer_msgs cpm_v1_23_cpm_perceivedobjectcontainer_msgs cpm_v1_23_cpm_sensorinformationcontainer_msgs cpm_v1_23_cpm_originatingstationcontainers_msgs its_container_v3_etsi_its_cdd_msgs
)

add_library(${PROJECT_NAME} INTERFACE)

add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS}) 

export(TARGETS ${PROJECT_NAME} FILE ${PROJECT_NAME}.cmake)
