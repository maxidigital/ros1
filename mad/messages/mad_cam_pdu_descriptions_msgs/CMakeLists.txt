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
project(mad_cam_pdu_descriptions_msgs)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)
add_definitions(-DWIND_ROS_VERSION=1)

find_package(catkin REQUIRED COMPONENTS
    std_msgs
    message_generation
    its_container_v2_its_container_msgs
)

add_message_files(
    FILES
    AccelerationValue.msg
    BasicContainer.msg
    BasicVehicleContainerHighFrequency.msg
    BasicVehicleContainerLowFrequency.msg
    CamParameters.msg
    CoopAwareness.msg
    CurvatureValue.msg
    DangerousGoodsContainer.msg
    DeltaAltitude.msg
    DeltaLatitude.msg
    DeltaLongitude.msg
    DeltaReferencePosition.msg
    EmergencyContainer.msg
    GenerationDeltaTime.msg
    HeadingValue.msg
    HighFrequencyContainer.msg
    LevelsOfControl.msg
    LocalDestination.msg
    LowFrequencyContainer.msg
    MADCAM.msg
    MADCapabilities.msg
    MADControlMode.msg
    MADControlModeState.msg
    MADDrivingMode.msg
    MADVehicleContainerHighFrequency.msg
    MADVehicleContainerLowFrequency.msg
    PosCentMass.msg
    PosFrontAx.msg
    PublicTransportContainer.msg
    RSUContainerHighFrequency.msg
    RescueContainer.msg
    RoadWorksContainerBasic.msg
    SafetyCarContainer.msg
    SpecialTransportContainer.msg
    SpecialVehicleContainer.msg
    SpeedValue.msg
    VehicleDimensions.msg
    VehicleMass.msg
    WheelBaseVehicle.msg
)

generate_messages(
    DEPENDENCIES
    std_msgs
    its_container_v2_its_container_msgs
)

catkin_package(
    CATKIN_DEPENDS message_runtime its_container_v2_its_container_msgs
)

add_library(${PROJECT_NAME} INTERFACE)

add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS}) 

export(TARGETS ${PROJECT_NAME} FILE ${PROJECT_NAME}.cmake)
