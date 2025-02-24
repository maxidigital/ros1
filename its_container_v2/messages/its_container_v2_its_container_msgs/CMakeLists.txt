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
# This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0
# 
# Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#     wg1(1) ts(102894) cdd(2) version(2)}
# 
# For support contact v2x-ts@dlr.de
# 
# 
cmake_minimum_required(VERSION 3.13)
project(its_container_v2_its_container_msgs)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)
add_definitions(-DWIND_ROS_VERSION=1)
add_definitions(-DV2X_MESSAGE_ID=null)
add_definitions(-DV2X_PROTOCOL_VERSION=null)

find_package(catkin REQUIRED COMPONENTS
    std_msgs
    message_generation
)

add_message_files(
    FILES
    AccelerationConfidence.msg
    AccelerationControl.msg
    AccidentSubCauseCode.msg
    ActionID.msg
    AdverseWeatherConditionAdhesionSubCauseCode.msg
    AdverseWeatherConditionExtremeWeatherConditionSubCauseCode.msg
    AdverseWeatherConditionPrecipitationSubCauseCode.msg
    AdverseWeatherConditionVisibilitySubCauseCode.msg
    Altitude.msg
    AltitudeConfidence.msg
    AltitudeValue.msg
    CauseCode.msg
    CauseCodeType.msg
    CenDsrcTollingZone.msg
    CenDsrcTollingZoneID.msg
    ClosedLanes.msg
    CollisionRiskSubCauseCode.msg
    Curvature.msg
    CurvatureCalculationMode.msg
    CurvatureConfidence.msg
    CurvatureValue.msg
    DangerousEndOfQueueSubCauseCode.msg
    DangerousGoodsBasic.msg
    DangerousGoodsExtended.msg
    DangerousGoodsExtendedCompanyName.msg
    DangerousGoodsExtendedElevatedTemperature.msg
    DangerousGoodsExtendedEmergencyActionCode.msg
    DangerousGoodsExtendedLimitedQuantity.msg
    DangerousGoodsExtendedTunnelsRestricted.msg
    DangerousGoodsExtendedUnNumber.msg
    DangerousSituationSubCauseCode.msg
    DeltaAltitude.msg
    DeltaLatitude.msg
    DeltaLongitude.msg
    DeltaReferencePosition.msg
    DigitalMap.msg
    DriveDirection.msg
    DrivingLaneStatus.msg
    EmbarkationStatus.msg
    EmergencyPriority.msg
    EmergencyVehicleApproachingSubCauseCode.msg
    EnergyStorageType.msg
    EventHistory.msg
    EventPoint.msg
    ExteriorLights.msg
    HardShoulderStatus.msg
    HazardousLocationAnimalOnTheRoadSubCauseCode.msg
    HazardousLocationDangerousCurveSubCauseCode.msg
    HazardousLocationObstacleOnTheRoadSubCauseCode.msg
    HazardousLocationSurfaceConditionSubCauseCode.msg
    Heading.msg
    HeadingConfidence.msg
    HeadingValue.msg
    HeightLonCarr.msg
    HumanPresenceOnTheRoadSubCauseCode.msg
    HumanProblemSubCauseCode.msg
    InformationQuality.msg
    ItineraryPath.msg
    ItsPduHeader.msg
    ItsPduHeaderMessageID.msg
    ItsPduHeaderProtocolVersion.msg
    LanePosition.msg
    LateralAcceleration.msg
    LateralAccelerationValue.msg
    Latitude.msg
    LightBarSirenInUse.msg
    Longitude.msg
    LongitudinalAcceleration.msg
    LongitudinalAccelerationValue.msg
    NumberOfOccupants.msg
    OpeningDaysHours.msg
    PathDeltaTime.msg
    PathHistory.msg
    PathPoint.msg
    PerformanceClass.msg
    PhoneNumber.msg
    PosCentMass.msg
    PosConfidenceEllipse.msg
    PosFrontAx.msg
    PosLonCarr.msg
    PosPillar.msg
    PositionOfOccupants.msg
    PositionOfPillars.msg
    PositioningSolutionType.msg
    PostCrashSubCauseCode.msg
    ProtectedCommunicationZone.msg
    ProtectedCommunicationZonesRSU.msg
    ProtectedZoneID.msg
    ProtectedZoneRadius.msg
    ProtectedZoneType.msg
    PtActivation.msg
    PtActivationData.msg
    PtActivationType.msg
    ReferencePosition.msg
    RelevanceDistance.msg
    RelevanceTrafficDirection.msg
    RequestResponseIndication.msg
    RescueAndRecoveryWorkInProgressSubCauseCode.msg
    RestrictedTypes.msg
    RoadType.msg
    RoadworksSubCauseCode.msg
    SemiAxisLength.msg
    SequenceNumber.msg
    SignalViolationSubCauseCode.msg
    SlowVehicleSubCauseCode.msg
    SpecialTransportType.msg
    Speed.msg
    SpeedConfidence.msg
    SpeedLimit.msg
    SpeedValue.msg
    StationID.msg
    StationType.msg
    StationarySince.msg
    StationaryVehicleSubCauseCode.msg
    SteeringWheelAngle.msg
    SteeringWheelAngleConfidence.msg
    SteeringWheelAngleValue.msg
    SubCauseCodeType.msg
    Temperature.msg
    TimestampIts.msg
    Traces.msg
    TrafficConditionSubCauseCode.msg
    TrafficRule.msg
    TransmissionInterval.msg
    TurningRadius.msg
    VDS.msg
    ValidityDuration.msg
    VehicleBreakdownSubCauseCode.msg
    VehicleIdentification.msg
    VehicleLength.msg
    VehicleLengthConfidenceIndication.msg
    VehicleLengthValue.msg
    VehicleMass.msg
    VehicleRole.msg
    VehicleWidth.msg
    VerticalAcceleration.msg
    VerticalAccelerationValue.msg
    WMInumber.msg
    WheelBaseVehicle.msg
    WrongWayDrivingSubCauseCode.msg
    YawRate.msg
    YawRateConfidence.msg
    YawRateValue.msg
)

generate_messages(
    DEPENDENCIES
    std_msgs
)

catkin_package(
    CATKIN_DEPENDS message_runtime 
)

add_library(${PROJECT_NAME} INTERFACE)

add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS}) 

export(TARGETS ${PROJECT_NAME} FILE ${PROJECT_NAME}.cmake)
