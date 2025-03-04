/*
 *
 * Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)
 * Institute of Transportation Systems. (https://www.dlr.de/ts/)
 *
 * 
 * Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore
 * 
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 * 
 * SPDX-License-Identifier: EPL-2.0
 * 
 *
 * 
 * File automatically generated with DLR Wind v2
 * 
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:cam_v2:4.0
 * 
 * Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(302637) cam(2) version(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <cam_v2_cam_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_cam_v2_cam_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const cam_v2_cam_pdu_descriptions_msgs::CAM::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<cam_v2_cam_pdu_descriptions_msgs::msg::CAM>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const cam_v2_cam_pdu_descriptions_msgs::msg::CAM* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // CAM  SEQUENCE
        //  header     ItsPduHeader      
        //  cam        CoopAwareness     
    // Optional fields bytemap
    
    // Field:  type(ItsPduHeader) name(hheader) extGroup(0)
        // ItsPduHeader  SEQUENCE
            //  protocolVersion ItsPduHeader_protocolVersion     
            //  messageID       ItsPduHeader_messageID           
            //  stationID       StationID                        
        // Optional fields bytemap
        
        // Field:  type(ItsPduHeader_protocolVersion) name(protocol_version) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->print() << "|" << tools::brown("000000") << "| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_1 = (uint8_t*) buffer++;
        *_tmp_1 = ros->hheader.protocol_version.value; 
        __aux64__ = ros->hheader.protocol_version.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.protocol_version.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->error() << "Error: Value in 'hheader.protocol_version.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(ItsPduHeader_messageID) name(message_id) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->print() << "|" << tools::brown("000001") << "| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_2 = (uint8_t*) buffer++;
        *_tmp_2 = ros->hheader.message_id.value; 
        __aux64__ = ros->hheader.message_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.message_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->error() << "Error: Value in 'hheader.message_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(StationID) name(station_id) extGroup(0)
        // Integer
        
        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
        if(debug) {
            logger->print() << "|" << tools::brown("000002") << "| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_3 = (uint32_t*) buffer; buffer += 4;
        *_tmp_3 = ros->hheader.station_id.value; 
        __aux64__ = ros->hheader.station_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->error() << "Error: Value in 'hheader.station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
            return -1;
        }
    
    // Field:  type(CoopAwareness) name(cam) extGroup(0)
        // CoopAwareness  SEQUENCE
            //  generationDeltaTime GenerationDeltaTime     
            //  camParameters       CamParameters           
        // Optional fields bytemap
        
        // Field:  type(GenerationDeltaTime) name(generation_delta_time) extGroup(0)
        // Integer
        
        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
        if(debug) {
            logger->print() << "|" << tools::brown("000003") << "| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
                         " cam.generation_delta_time.value: " << ros->cam.generation_delta_time.value;
        }
        
        uint16_t* _tmp_4 = (uint16_t*) buffer; buffer += 2;
        *_tmp_4 = ros->cam.generation_delta_time.value; 
        __aux64__ = ros->cam.generation_delta_time.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'cam.generation_delta_time.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->error() << "Error: Value in 'cam.generation_delta_time.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
            return -1;
        }
        
        // Field:  type(CamParameters) name(cam_parameters) extGroup(0)
            // CamParameters  SEQUENCE
                //  basicContainer          BasicContainer              
                //  highFrequencyContainer  HighFrequencyContainer      
                //  lowFrequencyContainer   LowFrequencyContainer     OPTIONAL  
                //  specialVehicleContainer SpecialVehicleContainer   OPTIONAL  
                //  ...
            uint8_t* _ext_flag_5 = (uint8_t*) buffer++;  // Write extension flag for CamParameters
            *_ext_flag_5 = 0;  
            
            // Optional fields bytemap
            char* _tmp_5 = (char*) buffer++;
            *_tmp_5 = (ros->cam.cam_parameters.low_frequency_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->print() << "|" << tools::brown("000004") << "| Optional field low_frequency_container = " << *_tmp_5;
            char* _tmp_6 = (char*) buffer++;
            *_tmp_6 = (ros->cam.cam_parameters.special_vehicle_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->print() << "|" << tools::brown("000005") << "| Optional field special_vehicle_container = " << *_tmp_6;
            
            // Field:  type(BasicContainer) name(basic_container) extGroup(0)
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_6 = (uint8_t*) buffer++;  // Write extension flag for BasicContainer
                *_ext_flag_6 = 0;  
                
                // Optional fields bytemap
                
                // Field:  type(StationType) name(station_type) extGroup(0)
                // Integer
                
                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                if(debug) {
                    logger->print() << "|" << tools::brown("000006") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
                                 " cam.cam_parameters.basic_container.station_type.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.station_type.value);
                }
                
                uint8_t* _tmp_7 = (uint8_t*) buffer++;
                *_tmp_7 = ros->cam.cam_parameters.basic_container.station_type.value; 
                __aux64__ = ros->cam.cam_parameters.basic_container.station_type.value;
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                    logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                    return -1;
                }
                
                // Field:  type(ReferencePosition) name(reference_position) extGroup(0)
                    // ReferencePosition  SEQUENCE
                        //  latitude                  Latitude                 
                        //  longitude                 Longitude                
                        //  positionConfidenceEllipse PosConfidenceEllipse     
                        //  altitude                  Altitude                 
                    // Optional fields bytemap
                    
                    // Field:  type(Latitude) name(latitude) extGroup(0)
                    // Real
                    
                    // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                    if(debug) {
                        logger->print() << "|" << tools::brown("000007") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.latitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    }
                    
                    double _tmp_9 = ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    _tmp_9 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_9);
                    _tmp_9 -= -900000000;
                    uint32_t* _tmp_8 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_8 = static_cast<uint32_t>(_tmp_9);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(Longitude) name(longitude) extGroup(0)
                    // Real
                    
                    // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                    if(debug) {
                        logger->print() << "|" << tools::brown("000008") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.longitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    }
                    
                    double _tmp_11 = ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    _tmp_11 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_11);
                    _tmp_11 -= -1800000000;
                    uint32_t* _tmp_10 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_10 = static_cast<uint32_t>(_tmp_11);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(PosConfidenceEllipse) name(position_confidence_ellipse) extGroup(0)
                        // PosConfidenceEllipse  SEQUENCE
                            //  semiMajorConfidence  SemiAxisLength     
                            //  semiMinorConfidence  SemiAxisLength     
                            //  semiMajorOrientation HeadingValue       
                        // Optional fields bytemap
                        
                        // Field:  type(SemiAxisLength) name(semi_major_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000009") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        }
                        
                        float _tmp_13 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        _tmp_13 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_13);
                        uint16_t* _tmp_12 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_12 = static_cast<uint16_t>(_tmp_13);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000010") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        }
                        
                        float _tmp_15 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        _tmp_15 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_15);
                        uint16_t* _tmp_14 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_14 = static_cast<uint16_t>(_tmp_15);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000011") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        }
                        
                        float _tmp_17 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        _tmp_17 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17);
                        uint16_t* _tmp_16 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_16 = static_cast<uint16_t>(_tmp_17);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(Altitude) name(altitude) extGroup(0)
                        // Altitude  SEQUENCE
                            //  altitudeValue      AltitudeValue          
                            //  altitudeConfidence AltitudeConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(AltitudeValue) name(altitude_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(-100000) max(800001) span(900002) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000012") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value: " << ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        }
                        
                        float _tmp_19 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        _tmp_19 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_19);
                        _tmp_19 -= -100000;
                        uint32_t* _tmp_18 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_18 = static_cast<uint32_t>(_tmp_19);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -100000) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") less than (-100000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 800001) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") exceeds max allowable (800001); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000013") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                        
                        uint8_t* _tmp_20 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_20 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value; 
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                            return -1;
                        }
                
                if(*_ext_flag_6) {
                }
            
            // Field:  type(HighFrequencyContainer) name(high_frequency_container) extGroup(0)
            // Choice
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency
            uint8_t* _ext_flag_15 = (uint8_t*) buffer; 
            buffer++;
            *_ext_flag_15 = 0; 
            
            uint8_t* _choice_1 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.size() != 0) {  // CHOICE 0  fieldType(HighFrequencyContainer) 
                *_choice_1 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|" << tools::brown("000014") << "| Choice selection: 0";
            
                    // BasicVehicleContainerHighFrequency  SEQUENCE
                        //  heading                  Heading                      
                        //  speed                    Speed                        
                        //  driveDirection           DriveDirection               
                        //  vehicleLength            VehicleLength                
                        //  vehicleWidth             VehicleWidth                 
                        //  longitudinalAcceleration LongitudinalAcceleration     
                        //  curvature                Curvature                    
                        //  curvatureCalculationMode CurvatureCalculationMode     
                        //  yawRate                  YawRate                      
                        //  accelerationControl      AccelerationControl        OPTIONAL  
                        //  lanePosition             LanePosition               OPTIONAL  
                        //  steeringWheelAngle       SteeringWheelAngle         OPTIONAL  
                        //  lateralAcceleration      LateralAcceleration        OPTIONAL  
                        //  verticalAcceleration     VerticalAcceleration       OPTIONAL  
                        //  performanceClass         PerformanceClass           OPTIONAL  
                        //  cenDsrcTollingZone       CenDsrcTollingZone         OPTIONAL  
                    // Optional fields bytemap
                    char* _tmp_22 = (char*) buffer++;
                    *_tmp_22 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->print() << "|" << tools::brown("000015") << "| Optional field acceleration_control = " << *_tmp_22;
                    char* _tmp_23 = (char*) buffer++;
                    *_tmp_23 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->print() << "|" << tools::brown("000016") << "| Optional field lane_position = " << *_tmp_23;
                    char* _tmp_24 = (char*) buffer++;
                    *_tmp_24 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->print() << "|" << tools::brown("000017") << "| Optional field steering_wheel_angle = " << *_tmp_24;
                    char* _tmp_25 = (char*) buffer++;
                    *_tmp_25 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->print() << "|" << tools::brown("000018") << "| Optional field lateral_acceleration = " << *_tmp_25;
                    char* _tmp_26 = (char*) buffer++;
                    *_tmp_26 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->print() << "|" << tools::brown("000019") << "| Optional field vertical_acceleration = " << *_tmp_26;
                    char* _tmp_27 = (char*) buffer++;
                    *_tmp_27 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->print() << "|" << tools::brown("000020") << "| Optional field performance_class = " << *_tmp_27;
                    char* _tmp_28 = (char*) buffer++;
                    *_tmp_28 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->print() << "|" << tools::brown("000021") << "| Optional field cen_dsrc_tolling_zone = " << *_tmp_28;
                    
                    // Field:  type(Heading) name(heading) extGroup(0)
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000022") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        }
                        
                        float _tmp_30 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        _tmp_30 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_30);
                        uint16_t* _tmp_29 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_29 = static_cast<uint16_t>(_tmp_30);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(HeadingConfidence) name(heading_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000023") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value);
                        }
                        
                        float _tmp_32 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value;
                        _tmp_32 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_32);
                        _tmp_32 -= 1;
                        uint8_t* _tmp_31 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_31 = static_cast<uint8_t>(_tmp_32);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(Speed) name(speed) extGroup(0)
                        // Speed  SEQUENCE
                            //  speedValue      SpeedValue          
                            //  speedConfidence SpeedConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(SpeedValue) name(speed_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000024") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        }
                        
                        float _tmp_34 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        _tmp_34 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_34);
                        uint16_t* _tmp_33 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_33 = static_cast<uint16_t>(_tmp_34);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SpeedConfidence) name(speed_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000025") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value);
                        }
                        
                        float _tmp_36 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value;
                        _tmp_36 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_36);
                        _tmp_36 -= 1;
                        uint8_t* _tmp_35 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_35 = static_cast<uint8_t>(_tmp_36);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(DriveDirection) name(drive_direction) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(2) span(3) dataType(Int32)
                    if(debug) {
                        logger->print() << "|" << tools::brown("000026") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value);
                    }
                    
                    uint8_t* _tmp_37 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_37 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value; 
                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(VehicleLength) name(vehicle_length) extGroup(0)
                        // VehicleLength  SEQUENCE
                            //  vehicleLengthValue                VehicleLengthValue                    
                            //  vehicleLengthConfidenceIndication VehicleLengthConfidenceIndication     
                        // Optional fields bytemap
                        
                        // Field:  type(VehicleLengthValue) name(vehicle_length_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000027") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        }
                        
                        float _tmp_39 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        _tmp_39 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_39);
                        _tmp_39 -= 1;
                        uint16_t* _tmp_38 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_38 = static_cast<uint16_t>(_tmp_39);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(VehicleLengthConfidenceIndication) name(vehicle_length_confidence_indication) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(4) span(5) dataType(Int32)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000028") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                        
                        uint8_t* _tmp_40 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_40 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") exceeds max allowable (4); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(VehicleWidth) name(vehicle_width) extGroup(0)
                    // Real
                    
                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                    if(debug) {
                        logger->print() << "|" << tools::brown("000029") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value);
                    }
                    
                    float _tmp_42 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value;
                    _tmp_42 *= 10.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_42);
                    _tmp_42 -= 1;
                    uint8_t* _tmp_41 = (uint8_t*) buffer; buffer += 1;
                    *_tmp_41 = static_cast<uint8_t>(_tmp_42);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' (" << __aux64__ << ") less than (1); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 62) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(LongitudinalAcceleration) name(longitudinal_acceleration) extGroup(0)
                        // LongitudinalAcceleration  SEQUENCE
                            //  longitudinalAccelerationValue      LongitudinalAccelerationValue     
                            //  longitudinalAccelerationConfidence AccelerationConfidence            
                        // Optional fields bytemap
                        
                        // Field:  type(LongitudinalAccelerationValue) name(longitudinal_acceleration_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000030") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        }
                        
                        float _tmp_44 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        _tmp_44 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_44);
                        _tmp_44 -= -160;
                        uint16_t* _tmp_43 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_43 = static_cast<uint16_t>(_tmp_44);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(AccelerationConfidence) name(longitudinal_acceleration_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000031") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value);
                        }
                        
                        float _tmp_46 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                        _tmp_46 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_46);
                        uint8_t* _tmp_45 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_45 = static_cast<uint8_t>(_tmp_46);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 102) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(Curvature) name(curvature) extGroup(0)
                        // Curvature  SEQUENCE
                            //  curvatureValue      CurvatureValue          
                            //  curvatureConfidence CurvatureConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(CurvatureValue) name(curvature_value) extGroup(0)
                        // Integer
                        
                        // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000032") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        }
                        
                        uint16_t* _tmp_47 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value - -1023;
                        *_tmp_47 = __aux64__;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(CurvatureConfidence) name(curvature_confidence) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(7) span(8) dataType(Int32)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000033") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                        
                        uint8_t* _tmp_48 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_48 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(CurvatureCalculationMode) name(curvature_calculation_mode) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(2) span(3) dataType(Int32)
                    uint8_t* _ext_flag_28 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    if(debug) {
                        logger->print() << "|" << tools::brown("000034") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value);
                    }
                    
                    uint8_t* _tmp_49 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_49 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value; 
                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(YawRate) name(yaw_rate) extGroup(0)
                        // YawRate  SEQUENCE
                            //  yawRateValue      YawRateValue          
                            //  yawRateConfidence YawRateConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(YawRateValue) name(yaw_rate_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000035") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        }
                        
                        float _tmp_51 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        _tmp_51 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_51);
                        _tmp_51 -= -32766;
                        uint16_t* _tmp_50 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_50 = static_cast<uint16_t>(_tmp_51);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -32766) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") less than (-32766); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(YawRateConfidence) name(yaw_rate_confidence) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(8) span(9) dataType(Int32)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000036") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                        
                        uint8_t* _tmp_52 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_52 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 8) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") exceeds max allowable (8); message dropped.";
                            return -1;
                        }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() == 1) {
                        // Field:  type(AccelerationControl) name(acceleration_control) extGroup(0)
                        // BitString
                        // BIT_STRING  min(7) max(7) span(1)
                        if(debug)
                            logger->print() << "|" << tools::brown("000037") << "| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size());
                        
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() < 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " is less than allowable (7); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_53 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size();
                        if(__aux64__ > 7) __aux64__ = 7;
                        *_tmp_53 = __aux64__ - 7;
                        buffer += 1;
                        
                        int __ifa = __aux64__;
                        for(int a = 0; a < __ifa; a++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[a]? 1: 0);
                        }
                    }
                    else if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() > 1) {
                        logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                        return -1;
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() == 1) {
                        // Field:  type(LanePosition) name(lane_position) extGroup(0)
                        // Integer
                        
                        // INT8  min(-1) max(14) span(16) dataType(Int8)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000038") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value);
                        }
                        
                        uint8_t* _tmp_54 = (uint8_t*) buffer++;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value - -1;
                        *_tmp_54 = __aux64__;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' (" << __aux64__ << ") less than (-1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 14) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' (" << __aux64__ << ") exceeds max allowable (14); message dropped.";
                            return -1;
                        }
                    }
                    else if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() > 1) {
                        logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                        return -1;
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() == 1) {
                        // Field:  type(SteeringWheelAngle) name(steering_wheel_angle) extGroup(0)
                            // SteeringWheelAngle  SEQUENCE
                                //  steeringWheelAngleValue      SteeringWheelAngleValue          
                                //  steeringWheelAngleConfidence SteeringWheelAngleConfidence     
                            // Optional fields bytemap
                            
                            // Field:  type(SteeringWheelAngleValue) name(steering_wheel_angle_value) extGroup(0)
                            // Integer
                            
                            // INT16  min(-511) max(512) span(1024) dataType(Int16)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000039") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            }
                            
                            uint16_t* _tmp_55 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value - -511;
                            *_tmp_55 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -511) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") less than (-511); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 512) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") exceeds max allowable (512); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(SteeringWheelAngleConfidence) name(steering_wheel_angle_confidence) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(127) span(127) dataType(UInt8)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000040") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                            }
                            
                            uint8_t* _tmp_56 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value - 1;
                            *_tmp_56 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    else if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() > 1) {
                        logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                        return -1;
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() == 1) {
                        // Field:  type(LateralAcceleration) name(lateral_acceleration) extGroup(0)
                            // LateralAcceleration  SEQUENCE
                                //  lateralAccelerationValue      LateralAccelerationValue     
                                //  lateralAccelerationConfidence AccelerationConfidence       
                            // Optional fields bytemap
                            
                            // Field:  type(LateralAccelerationValue) name(lateral_acceleration_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000041") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            }
                            
                            float _tmp_58 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            _tmp_58 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_58);
                            _tmp_58 -= -160;
                            uint16_t* _tmp_57 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_57 = static_cast<uint16_t>(_tmp_58);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationConfidence) name(lateral_acceleration_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000042") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value);
                            }
                            
                            float _tmp_60 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value;
                            _tmp_60 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_60);
                            uint8_t* _tmp_59 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_59 = static_cast<uint8_t>(_tmp_60);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                return -1;
                            }
                    }
                    else if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() > 1) {
                        logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                        return -1;
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() == 1) {
                        // Field:  type(VerticalAcceleration) name(vertical_acceleration) extGroup(0)
                            // VerticalAcceleration  SEQUENCE
                                //  verticalAccelerationValue      VerticalAccelerationValue     
                                //  verticalAccelerationConfidence AccelerationConfidence        
                            // Optional fields bytemap
                            
                            // Field:  type(VerticalAccelerationValue) name(vertical_acceleration_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000043") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            }
                            
                            float _tmp_62 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            _tmp_62 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_62);
                            _tmp_62 -= -160;
                            uint16_t* _tmp_61 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_61 = static_cast<uint16_t>(_tmp_62);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationConfidence) name(vertical_acceleration_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000044") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value);
                            }
                            
                            float _tmp_64 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value;
                            _tmp_64 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_64);
                            uint8_t* _tmp_63 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_63 = static_cast<uint8_t>(_tmp_64);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                return -1;
                            }
                    }
                    else if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() > 1) {
                        logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                        return -1;
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() == 1) {
                        // Field:  type(PerformanceClass) name(performance_class) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(7) span(8) dataType(UInt8)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000045") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value);
                        }
                        
                        uint8_t* _tmp_65 = (uint8_t*) buffer++;
                        *_tmp_65 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                    }
                    else if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() > 1) {
                        logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                        return -1;
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() == 1) {
                        // Field:  type(CenDsrcTollingZone) name(cen_dsrc_tolling_zone) extGroup(0)
                            // CenDsrcTollingZone  SEQUENCE
                                //  protectedZoneLatitude  Latitude                 
                                //  protectedZoneLongitude Longitude                
                                //  cenDsrcTollingZoneID   CenDsrcTollingZoneID   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_39 = (uint8_t*) buffer++;  // Write extension flag for CenDsrcTollingZone
                            *_ext_flag_39 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_66 = (char*) buffer++;
                            *_tmp_66 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->print() << "|" << tools::brown("000046") << "| Optional field cen_dsrc_tolling_zone_id = " << *_tmp_66;
                            
                            // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                            // Real
                            
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000047") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            }
                            
                            double _tmp_68 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            _tmp_68 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_68);
                            _tmp_68 -= -900000000;
                            uint32_t* _tmp_67 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_67 = static_cast<uint32_t>(_tmp_68);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                            // Real
                            
                            // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000048") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            }
                            
                            double _tmp_70 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            _tmp_70 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_70);
                            _tmp_70 -= -1800000000;
                            uint32_t* _tmp_69 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_69 = static_cast<uint32_t>(_tmp_70);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                return -1;
                            }
                            
                            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() == 1) {
                                // Field:  type(CenDsrcTollingZoneID) name(cen_dsrc_tolling_zone_id) extGroup(0)
                                // Integer
                                
                                // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000049") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                 " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                }
                                
                                uint32_t* _tmp_71 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_71 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value; 
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                    return -1;
                                }
                            }
                            else if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() > 1) {
                                logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                return -1;
                            }
                            
                            if(*_ext_flag_39) {
                            }
                    }
                    else if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() > 1) {
                        logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                        return -1;
                    }
            
            }
            else if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.size() != 0)  // CHOICE 1  fieldType(HighFrequencyContainer) 
            {
                *_choice_1 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|" << tools::brown("000050") << "| Choice selection: 1";
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_43 = (uint8_t*) buffer++;  // Write extension flag for RSUContainerHighFrequency
                    *_ext_flag_43 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_73 = (char*) buffer++;
                    *_tmp_73 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->print() << "|" << tools::brown("000051") << "| Optional field protected_communication_zones_rsu = " << *_tmp_73;
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() == 1) {
                        // Field:  type(ProtectedCommunicationZonesRSU) name(protected_communication_zones_rsu) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        uint16_t* _tmp_74 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_74 = __aux64__ - 1;
                        
                        int __ifb = __aux64__;
                        for(int b = 0; b < __ifb; b++) { 
                            
                                // ProtectedCommunicationZone  SEQUENCE
                                    //  protectedZoneType      ProtectedZoneType       
                                    //  expiryTime             TimestampIts          OPTIONAL  
                                    //  protectedZoneLatitude  Latitude                
                                    //  protectedZoneLongitude Longitude               
                                    //  protectedZoneRadius    ProtectedZoneRadius   OPTIONAL  
                                    //  protectedZoneID        ProtectedZoneID       OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_44 = (uint8_t*) buffer++;  // Write extension flag for ProtectedCommunicationZone
                                *_ext_flag_44 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_75 = (char*) buffer++;
                                *_tmp_75 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000053") << "| Optional field expiry_time = " << *_tmp_75;
                                char* _tmp_76 = (char*) buffer++;
                                *_tmp_76 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000054") << "| Optional field protected_zone_radius = " << *_tmp_76;
                                char* _tmp_77 = (char*) buffer++;
                                *_tmp_77 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000055") << "| Optional field protected_zone_id = " << *_tmp_77;
                                
                                // Field:  type(ProtectedZoneType) name(protected_zone_type) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(1) span(2) dataType(Int32)
                                uint8_t* _ext_flag_45 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000056") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value);
                                }
                                
                                uint8_t* _tmp_78 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_78 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value; 
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.size() == 1) {
                                    // Field:  type(TimestampIts) name(expiry_time) extGroup(0)
                                    // Integer
                                    
                                    // INT64  min(0) max(4398046511103) span(4398046511104) dataType(Int64)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000057") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value;
                                    }
                                    
                                    uint64_t* _tmp_79 = (uint64_t*)buffer; buffer += 8;
                                    *_tmp_79 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' (" << __aux64__ << ") exceeds max allowable (4398046511103); message dropped.";
                                        return -1;
                                    }
                                }
                                else if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.size() > 1) {
                                    logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000058") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value;
                                }
                                
                                double _tmp_81 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value;
                                _tmp_81 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_81);
                                _tmp_81 -= -900000000;
                                uint32_t* _tmp_80 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_80 = static_cast<uint32_t>(_tmp_81);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000059") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value;
                                }
                                
                                double _tmp_83 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value;
                                _tmp_83 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_83);
                                _tmp_83 -= -1800000000;
                                uint32_t* _tmp_82 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_82 = static_cast<uint32_t>(_tmp_83);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.size() == 1) {
                                    // Field:  type(ProtectedZoneRadius) name(protected_zone_radius) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(1) max(255) span(255) dataType(UInt8)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000060") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value);
                                    }
                                    
                                    uint8_t* _ext_flag_49 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].
                                    *_ext_flag_49 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value >= 1 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value <= 255) ? 0 : 1;
                                    
                                    if(*_ext_flag_49) {
                                        uint8_t* _tmp_85 = (uint8_t*) buffer++; 
                                        if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value >= 0 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value <= INT32_MAX) {
                                            *_tmp_85 = 0;
                                        
                                            uint32_t* _tmp_84 = (uint32_t*)buffer; buffer += 4;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value;
                                            __aux64__ -= INT32_MIN;
                                            *_tmp_84 = __aux64__;
                                        } 
                                        else
                                        {
                                            *_tmp_85 = 1;
                                        
                                            uint64_t* _tmp_84 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value;
                                            __aux64__ -= INT64_MIN;
                                            *_tmp_84 = __aux64__;
                                        }
                                    } else {
                                        uint8_t* _tmp_84 = (uint8_t*) buffer++;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value - 1;
                                        *_tmp_84 = __aux64__;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value;
                                    }
                                }
                                else if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.size() > 1) {
                                    logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.size() == 1) {
                                    // Field:  type(ProtectedZoneID) name(protected_zone_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000061") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_86 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_86 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                        return -1;
                                    }
                                }
                                else if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.size() > 1) {
                                    logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                    return -1;
                                }
                                
                                if(*_ext_flag_44) {
                                }
                        }
                    }
                    else if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() > 1) {
                        logger->error() << "Error: In 'ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                        return -1;
                    }
                    
                    if(*_ext_flag_43) {
                    }
            
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_1) << ") selected in CHOICE HighFrequencyContainer in 'cam.cam_parameters.high_frequency_container'; message dropped.";
                return -1;
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() == 1) {
                // Field:  type(LowFrequencyContainer) name(low_frequency_container) extGroup(0)
                // Choice
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency
                uint8_t* _ext_flag_51 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_51 = 0; 
                
                uint8_t* _choice_2 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.size() != 0) {  // CHOICE 0  fieldType(LowFrequencyContainer) 
                    *_choice_2 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|" << tools::brown("000062") << "| Choice selection: 0";
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        // Optional fields bytemap
                        
                        // Field:  type(VehicleRole) name(vehicle_role) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000063") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        uint8_t* _tmp_89 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_89 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value; 
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(ExteriorLights) name(exterior_lights) extGroup(0)
                        // BitString
                        // BIT_STRING  min(8) max(8) span(1)
                        if(debug)
                            logger->print() << "|" << tools::brown("000064") << "| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size());
                        
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() < 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " is less than allowable (8); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() > 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " exceeds max allowable (8); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_90 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size();
                        if(__aux64__ > 8) __aux64__ = 8;
                        *_tmp_90 = __aux64__ - 8;
                        buffer += 1;
                        
                        int __ifc = __aux64__;
                        for(int c = 0; c < __ifc; c++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values[c]? 1: 0);
                        }
                        
                        // Field:  type(PathHistory) name(path_history) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(40) span(41) ext(false)
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements.size();
                        if(__aux64__ > 40) __aux64__ = 40;
                        uint16_t* _tmp_91 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_91 = __aux64__;
                        
                        int __ifd = __aux64__;
                        for(int d = 0; d < __ifd; d++) { 
                            
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_92 = (char*) buffer++;
                                *_tmp_92 = (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000066") << "| Optional field path_delta_time = " << *_tmp_92;
                                
                                // Field:  type(DeltaReferencePosition) name(path_position) extGroup(0)
                                    // DeltaReferencePosition  SEQUENCE
                                        //  deltaLatitude  DeltaLatitude      
                                        //  deltaLongitude DeltaLongitude     
                                        //  deltaAltitude  DeltaAltitude      
                                    // Optional fields bytemap
                                    
                                    // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000067") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value;
                                    }
                                    
                                    double _tmp_94 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value;
                                    _tmp_94 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_94);
                                    _tmp_94 -= -131071;
                                    uint32_t* _tmp_93 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_93 = static_cast<uint32_t>(_tmp_94);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000068") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value;
                                    }
                                    
                                    double _tmp_96 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value;
                                    _tmp_96 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_96);
                                    _tmp_96 -= -131071;
                                    uint32_t* _tmp_95 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_95 = static_cast<uint32_t>(_tmp_96);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000069") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value;
                                    }
                                    
                                    float _tmp_98 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value;
                                    _tmp_98 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_98);
                                    _tmp_98 -= -12700;
                                    uint16_t* _tmp_97 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_97 = static_cast<uint16_t>(_tmp_98);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                        return -1;
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time.size() == 1) {
                                    // Field:  type(PathDeltaTime) name(path_delta_time) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000070") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                    }
                                    
                                    uint8_t* _ext_flag_56 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].
                                    float _tmp_99 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                    _tmp_99 *= 100.0;
                                    __aux64__ = static_cast<int64_t>(_tmp_99);
                                    *_ext_flag_56 = (__aux64__ >= 1 && __aux64__ <= 65535) ? 0 : 1;
                                    
                                    if(*_ext_flag_56) {
                                        uint8_t* _tmp_100 = (uint8_t*) buffer++; 
                                    
                                        if(__aux64__ >= INT32_MIN && __aux64__ <= INT32_MAX) {
                                            *_tmp_100 = 0;
                                    
                                            float _tmp_102 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                            _tmp_102 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_102);
                                            _tmp_102 -= INT32_MIN;
                                            uint32_t* _tmp_101 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_101 = static_cast<uint32_t>(_tmp_102);
                                        }
                                        else
                                        {
                                            *_tmp_100 = 1;
                                    
                                            float _tmp_104 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                            _tmp_104 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_104);
                                            _tmp_104 -= INT64_MIN;
                                            uint32_t* _tmp_103 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_103 = static_cast<uint32_t>(_tmp_104);
                                        }
                                    }
                                    else
                                    {
                                        float _tmp_106 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                        _tmp_106 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_106);
                                        _tmp_106 -= 1;
                                        uint16_t* _tmp_105 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_105 = static_cast<uint16_t>(_tmp_106);
                                    }
                                }
                                else if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time.size() > 1) {
                                    logger->error() << "Error: In 'ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                    return -1;
                                }
                                
                        }
                
                }
                else
                {
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_2) << ") selected in CHOICE LowFrequencyContainer in 'cam.cam_parameters.low_frequency_container[0]'; message dropped.";
                    return -1;
                }
            }
            else if(ros->cam.cam_parameters.low_frequency_container.size() > 1) {
                logger->error() << "Error: In 'ros->cam.cam_parameters.low_frequency_container', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                return -1;
            }
            
            if(ros->cam.cam_parameters.special_vehicle_container.size() == 1) {
                // Field:  type(SpecialVehicleContainer) name(special_vehicle_container) extGroup(0)
                // Choice
                   // #0  publicTransportContainer   PublicTransportContainer
                   // #1  specialTransportContainer   SpecialTransportContainer
                   // #2  dangerousGoodsContainer   DangerousGoodsContainer
                   // #3  roadWorksContainerBasic   RoadWorksContainerBasic
                   // #4  rescueContainer   RescueContainer
                   // #5  emergencyContainer   EmergencyContainer
                   // #6  safetyCarContainer   SafetyCarContainer
                uint8_t* _ext_flag_57 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_57 = 0; 
                
                uint8_t* _choice_3 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.size() != 0) {  // CHOICE 0  fieldType(SpecialVehicleContainer) 
                    *_choice_3 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|" << tools::brown("000071") << "| Choice selection: 0";
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_107 = (char*) buffer++;
                        *_tmp_107 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000072") << "| Optional field pt_activation = " << *_tmp_107;
                        
                        // Field:  type(EmbarkationStatus) name(embarkation_status) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_108 = (uint8_t*)buffer++;
                        *_tmp_108 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000073") << "| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status: " << (*_tmp_108);
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() == 1) {
                            // Field:  type(PtActivation) name(pt_activation) extGroup(0)
                                // PtActivation  SEQUENCE
                                    //  ptActivationType PtActivationType     
                                    //  ptActivationData PtActivationData     
                                // Optional fields bytemap
                                
                                // Field:  type(PtActivationType) name(pt_activation_type) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000074") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value);
                                }
                                
                                uint8_t* _tmp_109 = (uint8_t*) buffer++;
                                *_tmp_109 = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(PtActivationData) name(pt_activation_data) extGroup(0)
                                // OctetString
                                // OCTET_STRING  min(1) max(20) span(20)
                                
                                if(debug)
                                    logger->print() << "|" << tools::brown("000075") << "| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size(): cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data" << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size());
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size() < 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.value' (" << 
                                                ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size() << ") is less than allowable (1); message dropped.";
                                    return -1;
                                }
                                if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size() > 20) {
                                    logger->warning() << "Error: Value in 'ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.value' (" << 
                                                ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size() << ") exceeds max allowable (20); message dropped.";
                                    return -1;
                                }
                                uint8_t* _tmp_110 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size();
                                if(__aux64__ > 20) __aux64__ = 20;
                                *_tmp_110 = __aux64__ - 1;
                                
                                int __ife = __aux64__;
                                for(int e = 0; e < __ife; e++) {
                                    int8_t* __m__ = (int8_t*)buffer++;
                                    *__m__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values[e];
                                }
                        }
                        else if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() > 1) {
                            logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.size() != 0)  // CHOICE 1  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 1;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|" << tools::brown("000076") << "| Choice selection: 1";
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        // Optional fields bytemap
                        
                        // Field:  type(SpecialTransportType) name(special_transport_type) extGroup(0)
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        if(debug)
                            logger->print() << "|" << tools::brown("000077") << "| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() < 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " is less than allowable (4); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() > 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " exceeds max allowable (4); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_111 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size();
                        if(__aux64__ > 4) __aux64__ = 4;
                        *_tmp_111 = __aux64__ - 4;
                        buffer += 1;
                        
                        int __iff = __aux64__;
                        for(int f = 0; f < __iff; f++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values[f]? 1: 0);
                        }
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->print() << "|" << tools::brown("000078") << "| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_112 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_112 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifg = __aux64__;
                        for(int g = 0; g < __ifg; g++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[g]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.size() != 0)  // CHOICE 2  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 2;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|" << tools::brown("000079") << "| Choice selection: 2";
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        // Optional fields bytemap
                        
                        // Field:  type(DangerousGoodsBasic) name(dangerous_goods_basic) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(19) span(20) dataType(Int32)
                        if(debug) {
                            logger->print() << "|" << tools::brown("000080") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                        
                        uint8_t* _tmp_113 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_113 = ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value; 
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 19) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' (" << __aux64__ << ") exceeds max allowable (19); message dropped.";
                            return -1;
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic.size() != 0)  // CHOICE 3  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 3;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|" << tools::brown("000081") << "| Choice selection: 3";
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_114 = (char*) buffer++;
                        *_tmp_114 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000082") << "| Optional field roadworks_sub_cause_code = " << *_tmp_114;
                        char* _tmp_115 = (char*) buffer++;
                        *_tmp_115 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000083") << "| Optional field closed_lanes = " << *_tmp_115;
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() == 1) {
                            // Field:  type(RoadworksSubCauseCode) name(roadworks_sub_cause_code) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000084") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value);
                            }
                            
                            uint8_t* _tmp_116 = (uint8_t*) buffer++;
                            *_tmp_116 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value; 
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                        else if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() > 1) {
                            logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->print() << "|" << tools::brown("000085") << "| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_117 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_117 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifh = __aux64__;
                        for(int h = 0; h < __ifh; h++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[h]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() == 1) {
                            // Field:  type(ClosedLanes) name(closed_lanes) extGroup(0)
                                // ClosedLanes  SEQUENCE
                                    //  innerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  outerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  drivingLaneStatus       DrivingLaneStatus    OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_61 = (uint8_t*) buffer++;  // Write extension flag for ClosedLanes
                                *_ext_flag_61 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_118 = (char*) buffer++;
                                *_tmp_118 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000086") << "| Optional field innerhard_shoulder_status = " << *_tmp_118;
                                char* _tmp_119 = (char*) buffer++;
                                *_tmp_119 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000087") << "| Optional field outerhard_shoulder_status = " << *_tmp_119;
                                char* _tmp_120 = (char*) buffer++;
                                *_tmp_120 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->print() << "|" << tools::brown("000088") << "| Optional field driving_lane_status = " << *_tmp_120;
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() == 1) {
                                    // Field:  type(HardShoulderStatus) name(innerhard_shoulder_status) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000089") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_121 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_121 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                }
                                else if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() > 1) {
                                    logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() == 1) {
                                    // Field:  type(HardShoulderStatus) name(outerhard_shoulder_status) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000090") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_122 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_122 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                }
                                else if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() > 1) {
                                    logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() == 1) {
                                    // Field:  type(DrivingLaneStatus) name(driving_lane_status) extGroup(0)
                                    // BitString
                                    // BIT_STRING  min(1) max(13) span(13)
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000091") << "| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size());
                                    
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() < 1) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " is less than allowable (1); message dropped.";
                                        return -1;
                                    }
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() > 13) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " exceeds max allowable (13); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_123 = (uint8_t*)buffer;
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size();
                                    if(__aux64__ > 13) __aux64__ = 13;
                                    *_tmp_123 = __aux64__ - 1;
                                    buffer += 1;
                                    
                                    int __ifi = __aux64__;
                                    for(int i = 0; i < __ifi; i++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[i]? 1: 0);
                                    }
                                }
                                else if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() > 1) {
                                    logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                                    return -1;
                                }
                                
                                if(*_ext_flag_61) {
                                }
                        }
                        else if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() > 1) {
                            logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.size() != 0)  // CHOICE 4  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 4;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|" << tools::brown("000092") << "| Choice selection: 4";
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        // Optional fields bytemap
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->print() << "|" << tools::brown("000093") << "| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_125 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_125 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifj = __aux64__;
                        for(int j = 0; j < __ifj; j++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[j]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.size() != 0)  // CHOICE 5  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 5;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|" << tools::brown("000094") << "| Choice selection: 5";
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_126 = (char*) buffer++;
                        *_tmp_126 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000095") << "| Optional field incident_indication = " << *_tmp_126;
                        char* _tmp_127 = (char*) buffer++;
                        *_tmp_127 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000096") << "| Optional field emergency_priority = " << *_tmp_127;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->print() << "|" << tools::brown("000097") << "| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_128 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_128 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifk = __aux64__;
                        for(int k = 0; k < __ifk; k++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[k]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() == 1) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_64 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_64 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000098") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_129 = (uint8_t*) buffer++;
                                *_tmp_129 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SubCauseCodeType) name(sub_cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000099") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_130 = (uint8_t*) buffer++;
                                *_tmp_130 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(*_ext_flag_64) {
                                }
                        }
                        else if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() > 1) {
                            logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() == 1) {
                            // Field:  type(EmergencyPriority) name(emergency_priority) extGroup(0)
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            if(debug)
                                logger->print() << "|" << tools::brown("000100") << "| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size());
                            
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() < 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " is less than allowable (2); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() > 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " exceeds max allowable (2); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_132 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size();
                            if(__aux64__ > 2) __aux64__ = 2;
                            *_tmp_132 = __aux64__ - 2;
                            buffer += 1;
                            
                            int __ifl = __aux64__;
                            for(int l = 0; l < __ifl; l++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[l]? 1: 0);
                            }
                        }
                        else if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() > 1) {
                            logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.size() != 0)  // CHOICE 6  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 6;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|" << tools::brown("000101") << "| Choice selection: 6";
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_133 = (char*) buffer++;
                        *_tmp_133 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000102") << "| Optional field incident_indication = " << *_tmp_133;
                        char* _tmp_134 = (char*) buffer++;
                        *_tmp_134 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000103") << "| Optional field traffic_rule = " << *_tmp_134;
                        char* _tmp_135 = (char*) buffer++;
                        *_tmp_135 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->print() << "|" << tools::brown("000104") << "| Optional field speed_limit = " << *_tmp_135;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->print() << "|" << tools::brown("000105") << "| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_136 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_136 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifm = __aux64__;
                        for(int m = 0; m < __ifm; m++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[m]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() == 1) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_67 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_67 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000106") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_137 = (uint8_t*) buffer++;
                                *_tmp_137 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SubCauseCodeType) name(sub_cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000107") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_138 = (uint8_t*) buffer++;
                                *_tmp_138 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(*_ext_flag_67) {
                                }
                        }
                        else if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() > 1) {
                            logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() == 1) {
                            // Field:  type(TrafficRule) name(traffic_rule) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(3) span(4) dataType(Int32)
                            uint8_t* _ext_flag_70 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            if(debug) {
                                logger->print() << "|" << tools::brown("000108") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                            
                            uint8_t* _tmp_140 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_140 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value; 
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                return -1;
                            }
                        }
                        else if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() > 1) {
                            logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() == 1) {
                            // Field:  type(SpeedLimit) name(speed_limit) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(255) span(255) dataType(UInt8)
                            if(debug) {
                                logger->print() << "|" << tools::brown("000109") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value);
                            }
                            
                            uint8_t* _tmp_141 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value - 1;
                            *_tmp_141 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                        else if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() > 1) {
                            logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                            return -1;
                        }
                
                }
                else
                {
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_3) << ") selected in CHOICE SpecialVehicleContainer in 'cam.cam_parameters.special_vehicle_container[0]'; message dropped.";
                    return -1;
                }
            }
            else if(ros->cam.cam_parameters.special_vehicle_container.size() > 1) {
                logger->error() << "Error: In 'ros->cam.cam_parameters.special_vehicle_container', invalid optional field implementation. Optional fields must contain 0 elements (not present) or 1 element (present). Multiple elements are not allowed. Message dropped.";
                return -1;
            }
            
            if(*_ext_flag_5) {
            }
    
	
            return buffer - start;
        }
    } 
}