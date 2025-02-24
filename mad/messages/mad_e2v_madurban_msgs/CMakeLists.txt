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
# Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#     wg1(1) en(302637) e2v(1) version(3)}
# 
# For support contact v2x-ts@dlr.de
# 
# 
cmake_minimum_required(VERSION 3.13)
project(mad_e2v_madurban_msgs)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)
add_definitions(-DWIND_ROS_VERSION=1)
add_definitions(-DV2X_MESSAGE_ID=108)
add_definitions(-DV2X_PROTOCOL_VERSION=3)

find_package(catkin REQUIRED COMPONENTS
    std_msgs
    message_generation
    its_container_v4_etsi_its_cdd_msgs
)

add_message_files(
    FILES
    BehaviourContainer.msg
    Behaviours.msg
    CartesianAngleRange.msg
    CartesianAngleRanges.msg
    ControlAdvice.msg
    EPUHighFrequencyContainer.msg
    EPULowFrequencyContainer.msg
    EPUSectionCapabilities.msg
    EPUSectionCapabilitiesCompanyName.msg
    EPUSectionDimensions.msg
    EPUtoVehicle.msg
    EPUtoVehiclePayload.msg
    ExcludedShapes.msg
    HornAdvice.msg
    IncludedShapes.msg
    LateralAccelerationRange.msg
    LateralFluctuationMargin.msg
    LongitudinalAccelerationRange.msg
    ManagementContainer.msg
    ManeuverAdvice.msg
    ManeuverAdviceMRM.msg
    ManeuverAdviceNominal.msg
    MovementAdvice.msg
    ObjectIdentifierList.msg
    PathPointPredicted.msg
    PathPredicted.msg
    RouteRadius.msg
    RssCheckResult.msg
    RssCheckResults.msg
    RssDynamics.msg
    RssLateralResponse.msg
    RssLongitudinalResponse.msg
    RssObjectData.msg
    RssProperResponse.msg
    RssProperResponseFlags.msg
    RssRoute.msg
    RssUnstructuredConstellationResponse.msg
    RssVehicleRouteState.msg
    SafetyAdvices.msg
    SafetyContainer.msg
    SteeringAngleValue.msg
    TrajectoryAdvice.msg
    VelocityComponentRange.msg
    YawAccelerationValue.msg
)

generate_messages(
    DEPENDENCIES
    std_msgs
    its_container_v4_etsi_its_cdd_msgs
)

catkin_package(
    CATKIN_DEPENDS message_runtime its_container_v4_etsi_its_cdd_msgs
)

add_library(${PROJECT_NAME} INTERFACE)

add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS}) 

export(TARGETS ${PROJECT_NAME} FILE ${PROJECT_NAME}.cmake)
