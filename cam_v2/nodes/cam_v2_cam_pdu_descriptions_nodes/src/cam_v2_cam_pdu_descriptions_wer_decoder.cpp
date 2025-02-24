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
#include <cam_v2_cam_pdu_descriptions_wer_decoder.h>


/**
 *
 */
namespace wind
{
    namespace decoder_cam_v2_cam_pdu_descriptions
    {        
        
        #if WIND_ROS_VERSION == 1
          bool WerDecoder::decode(cam_v2_cam_pdu_descriptions_msgs::CAM* ros, const uint8_t *buffer)
        #else
          bool WerDecoder::decode(cam_v2_cam_pdu_descriptions_msgs::msg::CAM* ros, const uint8_t *buffer)
        #endif
        {
            const uint8_t *start = buffer;
            int64_t __aux64__;
	
    // CAM  SEQUENCE
        //  header     ItsPduHeader      
        //  cam        CoopAwareness     
    
    // Field name: hheader
        // ItsPduHeader  SEQUENCE
            //  protocolVersion ItsPduHeader_protocolVersion     
            //  messageID       ItsPduHeader_messageID           
            //  stationID       StationID                        
        
        // Field name: protocol_version
        // Integer
        // UINT8  min(0) max(255) span(256) datatype(UInt8)
        uint8_t* _tmp_1 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_1;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->print() << "|" << tools::brown("000000") << "| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.protocol_version.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->error() << "Error: Value in 'hheader.protocol_version.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
            return false;
        }
        
        // Field name: message_id
        // Integer
        // UINT8  min(0) max(255) span(256) datatype(UInt8)
        uint8_t* _tmp_2 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_2;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->print() << "|" << tools::brown("000001") << "| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.message_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->error() << "Error: Value in 'hheader.message_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
            return false;
        }
        
        // Field name: station_id
        // Integer
        // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
        uint32_t* _tmp_3 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_3;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->print() << "|" << tools::brown("000002") << "| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'hheader.station_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->error() << "Error: Value in 'hheader.station_id.value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
            return false;
        }
    
    // Field name: cam
        // CoopAwareness  SEQUENCE
            //  generationDeltaTime GenerationDeltaTime     
            //  camParameters       CamParameters           
        
        // Field name: generation_delta_time
        // Integer
        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
        uint16_t* _tmp_4 = (uint16_t*) buffer; buffer += 2;
        __aux64__ = *_tmp_4;
        ros->cam.generation_delta_time.value = __aux64__;
        
        if(debug) {
            logger->print() << "|" << tools::brown("000003") << "| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
                         " cam.generation_delta_time.value: " << ros->cam.generation_delta_time.value;
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->error() << "Error: Value in 'cam.generation_delta_time.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->error() << "Error: Value in 'cam.generation_delta_time.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
            return false;
        }
        
        // Field name: cam_parameters
            // CamParameters  SEQUENCE
                //  basicContainer          BasicContainer              
                //  highFrequencyContainer  HighFrequencyContainer      
                //  lowFrequencyContainer   LowFrequencyContainer     OPTIONAL  
                //  specialVehicleContainer SpecialVehicleContainer   OPTIONAL  
                //  ...
            uint8_t* _ext_flag_1 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.
            
            if(debug) {
                logger->print() << "|" << tools::brown("000004") << "| Reading ext flag from ros->cam.cam_parameters.: " << int(*_ext_flag_1);
            }
            
            if(*(buffer++)) { 
                cam_v2_cam_pdu_descriptions_msgs::LowFrequencyContainer _tmp_5;
                ros->cam.cam_parameters.low_frequency_container.push_back(_tmp_5);
            
                if(debug)
                    logger->print() << "|" << tools::brown("000005") << "| ros->cam.cam_parameters.low_frequency_container " << tools::green("present");
            }
            if(*(buffer++)) { 
                cam_v2_cam_pdu_descriptions_msgs::SpecialVehicleContainer _tmp_6;
                ros->cam.cam_parameters.special_vehicle_container.push_back(_tmp_6);
            
                if(debug)
                    logger->print() << "|" << tools::brown("000006") << "| ros->cam.cam_parameters.special_vehicle_container " << tools::green("present");
            }
            
            // Field name: basic_container
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_2 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.basic_container.
                
                if(debug) {
                    logger->print() << "|" << tools::brown("000007") << "| Reading ext flag from ros->cam.cam_parameters.basic_container.: " << int(*_ext_flag_2);
                }
                
                
                // Field name: station_type
                // Integer
                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                uint8_t* _tmp_7 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_7;
                ros->cam.cam_parameters.basic_container.station_type.value = __aux64__;
                
                if(debug) {
                    logger->print() << "|" << tools::brown("000008") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
                                 " cam.cam_parameters.basic_container.station_type.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.station_type.value);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                    logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                    return false;
                }
                
                // Field name: reference_position
                    // ReferencePosition  SEQUENCE
                        //  latitude                  Latitude                 
                        //  longitude                 Longitude                
                        //  positionConfidenceEllipse PosConfidenceEllipse     
                        //  altitude                  Altitude                 
                    
                    // Field name: latitude
                    // Real
                    // Double
                    // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                    uint32_t* _tmp_8 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value = *_tmp_8;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value += -900000000;
                    __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value /= 1.0E7;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000009") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << " cam.cam_parameters.basic_container.reference_position.latitude: " <<
                                     ros->cam.cam_parameters.basic_container.reference_position.latitude.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: longitude
                    // Real
                    // Double
                    // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                    uint32_t* _tmp_9 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value = *_tmp_9;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value += -1800000000;
                    __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value /= 1.0E7;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000010") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << " cam.cam_parameters.basic_container.reference_position.longitude: " <<
                                     ros->cam.cam_parameters.basic_container.reference_position.longitude.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: position_confidence_ellipse
                        // PosConfidenceEllipse  SEQUENCE
                            //  semiMajorConfidence  SemiAxisLength     
                            //  semiMinorConfidence  SemiAxisLength     
                            //  semiMajorOrientation HeadingValue       
                        
                        // Field name: semi_major_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_10 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value = *_tmp_10;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000011") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_minor_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_11 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value = *_tmp_11;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000012") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_major_orientation
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_12 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value = *_tmp_12;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000013") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: altitude
                        // Altitude  SEQUENCE
                            //  altitudeValue      AltitudeValue          
                            //  altitudeConfidence AltitudeConfidence     
                        
                        // Field name: altitude_value
                        // Real
                        // Float
                        // FLOAT  min(-100000) max(800001) span(900002) scaleDivisor(100.0) dataType(Float)
                        uint32_t* _tmp_13 = (uint32_t*) buffer; buffer += 4;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value = *_tmp_13;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value += -100000;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -100000) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' " << (__aux64__) << " is less than allowable (-100000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 800001) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' " << (__aux64__) << " exceeds max allowable (800001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000014") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: altitude_confidence
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_14 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_14;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000015") << "| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                if(*_ext_flag_2) { // from ros->cam.cam_parameters.basic_container. 
                    uint8_t* _tmp_15 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_1[*_tmp_15];
                    
                    if(debug)
                        logger->print() << "|" << tools::brown("000016") << "| Reading number of exts from ros->cam.cam_parameters.basic_container.: " << static_cast<unsigned int>(*_tmp_15);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_15; i++)
                        _array_1[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_15; i++) {
                        uint16_t* _tmp_16 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_16; i++)
                            buffer++;
                    }
                    
                }
            
            // Field name: high_frequency_container
            // Choice
            uint8_t* _ext_flag_10 = (uint8_t*)buffer++; // ext flag
            
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency   
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency   
            uint8_t _choice_1 = *(buffer++);
            
            if(*_ext_flag_10)
                _choice_1 += 1 + 1; // Ext addition
            
            if(_choice_1 == 0) {
                cam_v2_cam_pdu_descriptions_msgs::BasicVehicleContainerHighFrequency _tmp_17;
                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.push_back(_tmp_17);
            
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
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::AccelerationControl _tmp_18;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.push_back(_tmp_18);
                    
                        if(debug)
                            logger->print() << "|" << tools::brown("000017") << "| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::LanePosition _tmp_19;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.push_back(_tmp_19);
                    
                        if(debug)
                            logger->print() << "|" << tools::brown("000018") << "| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::SteeringWheelAngle _tmp_20;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.push_back(_tmp_20);
                    
                        if(debug)
                            logger->print() << "|" << tools::brown("000019") << "| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::LateralAcceleration _tmp_21;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.push_back(_tmp_21);
                    
                        if(debug)
                            logger->print() << "|" << tools::brown("000020") << "| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::VerticalAcceleration _tmp_22;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.push_back(_tmp_22);
                    
                        if(debug)
                            logger->print() << "|" << tools::brown("000021") << "| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::PerformanceClass _tmp_23;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.push_back(_tmp_23);
                    
                        if(debug)
                            logger->print() << "|" << tools::brown("000022") << "| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::CenDsrcTollingZone _tmp_24;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.push_back(_tmp_24);
                    
                        if(debug)
                            logger->print() << "|" << tools::brown("000023") << "| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone " << tools::green("present");
                    }
                    
                    // Field name: heading
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        
                        // Field name: heading_value
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_25 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value = *_tmp_25;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000024") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: heading_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_26 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value = *_tmp_26;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000025") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: speed
                        // Speed  SEQUENCE
                            //  speedValue      SpeedValue          
                            //  speedConfidence SpeedConfidence     
                        
                        // Field name: speed_value
                        // Real
                        // Float
                        // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_27 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value = *_tmp_27;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000026") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: speed_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                        uint8_t* _tmp_28 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value = *_tmp_28;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000027") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: drive_direction
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _tmp_29 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_29;
                    __aux64__ += 0;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value = __aux64__;
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                        return false;
                    }
                    
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000028") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value);
                    }
                    
                    // Field name: vehicle_length
                        // VehicleLength  SEQUENCE
                            //  vehicleLengthValue                VehicleLengthValue                    
                            //  vehicleLengthConfidenceIndication VehicleLengthConfidenceIndication     
                        
                        // Field name: vehicle_length_value
                        // Real
                        // Float
                        // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_30 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value = *_tmp_30;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000029") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: vehicle_length_confidence_indication
                        // Enumerated
                        // INT32  min(0) max(4) span(5) datatype(Int32)
                        uint8_t* _tmp_31 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_31;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000030") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                    
                    // Field name: vehicle_width
                    // Real
                    // Float
                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                    uint8_t* _tmp_32 = (uint8_t*) buffer++;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value = *_tmp_32;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value += 1;
                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value /= 10.0;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 62) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' " << (__aux64__) << " exceeds max allowable (62); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000031") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width: " <<
                                     ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: longitudinal_acceleration
                        // LongitudinalAcceleration  SEQUENCE
                            //  longitudinalAccelerationValue      LongitudinalAccelerationValue     
                            //  longitudinalAccelerationConfidence AccelerationConfidence            
                        
                        // Field name: longitudinal_acceleration_value
                        // Real
                        // Float
                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_33 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value = *_tmp_33;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value += -160;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000032") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longitudinal_acceleration_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_34 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value = *_tmp_34;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 102) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000033") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: curvature
                        // Curvature  SEQUENCE
                            //  curvatureValue      CurvatureValue          
                            //  curvatureConfidence CurvatureConfidence     
                        
                        // Field name: curvature_value
                        // Integer
                        // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                        uint16_t* _tmp_35 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_35;
                        __aux64__ += -1023;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000034") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                            return false;
                        }
                        
                        // Field name: curvature_confidence
                        // Enumerated
                        // INT32  min(0) max(7) span(8) datatype(Int32)
                        uint8_t* _tmp_36 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_36;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000035") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                    
                    // Field name: curvature_calculation_mode
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _ext_flag_22 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000036") << "| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.: " << int(*_ext_flag_22);
                    }
                    
                    uint8_t* _tmp_37 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_37;
                    __aux64__ += 0;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value = __aux64__;
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                        return false;
                    }
                    
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000037") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value);
                    }
                    
                    // Field name: yaw_rate
                        // YawRate  SEQUENCE
                            //  yawRateValue      YawRateValue          
                            //  yawRateConfidence YawRateConfidence     
                        
                        // Field name: yaw_rate_value
                        // Real
                        // Float
                        // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_38 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value = *_tmp_38;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value += -32766;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -32766) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' " << (__aux64__) << " is less than allowable (-32766); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000038") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: yaw_rate_confidence
                        // Enumerated
                        // INT32  min(0) max(8) span(9) datatype(Int32)
                        uint8_t* _tmp_39 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_39;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 8) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000039") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0) {
                        // Field name: acceleration_control
                        // BitString
                        // BIT_STRING  min(7) max(7) span(1)
                        uint8_t* _tmp_40 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_40 + 7;
                        buffer += 1;
                        
                        if(debug)
                            logger->print() << "|" << tools::brown("000040") << "| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << __aux64__;
                        
                        int _if__tmp_40 = __aux64__;
                        for(int a = 0; a < _if__tmp_40; a++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[a] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 7) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (__aux64__) << " is less than allowable (7); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0) {
                        // Field name: lane_position
                        // Integer
                        // INT8  min(-1) max(14) span(16) datatype(Int8)
                        uint8_t* _tmp_41 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_41;
                        __aux64__ += -1;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000041") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' " << (__aux64__) << " is less than allowable (-1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 14) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' " << (__aux64__) << " exceeds max allowable (14); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() != 0) {
                        // Field name: steering_wheel_angle
                            // SteeringWheelAngle  SEQUENCE
                                //  steeringWheelAngleValue      SteeringWheelAngleValue          
                                //  steeringWheelAngleConfidence SteeringWheelAngleConfidence     
                            
                            // Field name: steering_wheel_angle_value
                            // Integer
                            // INT16  min(-511) max(512) span(1024) datatype(Int16)
                            uint16_t* _tmp_42 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_42;
                            __aux64__ += -511;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000042") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -511) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " is less than allowable (-511); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 512) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " exceeds max allowable (512); message dropped.";
                                return false;
                            }
                            
                            // Field name: steering_wheel_angle_confidence
                            // Integer
                            // UINT8  min(1) max(127) span(127) datatype(UInt8)
                            uint8_t* _tmp_43 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_43;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000043") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                return false;
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() != 0) {
                        // Field name: lateral_acceleration
                            // LateralAcceleration  SEQUENCE
                                //  lateralAccelerationValue      LateralAccelerationValue     
                                //  lateralAccelerationConfidence AccelerationConfidence       
                            
                            // Field name: lateral_acceleration_value
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_44 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value = *_tmp_44;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value += -160;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000044") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: lateral_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_45 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value = *_tmp_45;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000045") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() != 0) {
                        // Field name: vertical_acceleration
                            // VerticalAcceleration  SEQUENCE
                                //  verticalAccelerationValue      VerticalAccelerationValue     
                                //  verticalAccelerationConfidence AccelerationConfidence        
                            
                            // Field name: vertical_acceleration_value
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_46 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value = *_tmp_46;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value += -160;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000046") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vertical_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_47 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value = *_tmp_47;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000047") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0) {
                        // Field name: performance_class
                        // Integer
                        // UINT8  min(0) max(7) span(8) datatype(UInt8)
                        uint8_t* _tmp_48 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_48;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000048") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() != 0) {
                        // Field name: cen_dsrc_tolling_zone
                            // CenDsrcTollingZone  SEQUENCE
                                //  protectedZoneLatitude  Latitude                 
                                //  protectedZoneLongitude Longitude                
                                //  cenDsrcTollingZoneID   CenDsrcTollingZoneID   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_29 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000049") << "| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << int(*_ext_flag_29);
                            }
                            
                            if(*(buffer++)) { 
                                its_container_v2_its_container_msgs::CenDsrcTollingZoneID _tmp_49;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.push_back(_tmp_49);
                            
                                if(debug)
                                    logger->print() << "|" << tools::brown("000050") << "| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id " << tools::green("present");
                            }
                            
                            // Field name: protected_zone_latitude
                            // Real
                            // Double
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_50 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value = *_tmp_50;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value += -900000000;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value /= 1.0E7;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000051") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: protected_zone_longitude
                            // Real
                            // Double
                            // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_51 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value = *_tmp_51;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value += -1800000000;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value /= 1.0E7;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000052") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value << " (" << __aux64__ << ")";
                            }
                            
                            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                // Field name: cen_dsrc_tolling_zone_id
                                // Integer
                                // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                uint32_t* _tmp_52 = (uint32_t*) buffer; buffer += 4;
                                __aux64__ = *_tmp_52;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000053") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                 " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                    return false;
                                }
                            }
                            if(*_ext_flag_29) { // from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0]. 
                                uint8_t* _tmp_53 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_2[*_tmp_53];
                                
                                if(debug)
                                    logger->print() << "|" << tools::brown("000054") << "| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << static_cast<unsigned int>(*_tmp_53);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_53; i++)
                                    _array_2[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_53; i++) {
                                    uint16_t* _tmp_54 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_54; i++)
                                        buffer++;
                                }
                                
                            }
                    }
            }
            else if(_choice_1 == 1)  // CHOICE HighFrequencyContainer  fieldName(rsu_container_high_frequency)
            {
                cam_v2_cam_pdu_descriptions_msgs::RSUContainerHighFrequency _tmp_55;
                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.push_back(_tmp_55);
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_32 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].
                    
                    if(debug) {
                        logger->print() << "|" << tools::brown("000055") << "| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << int(*_ext_flag_32);
                    }
                    
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::ProtectedCommunicationZonesRSU _tmp_56;
                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.push_back(_tmp_56);
                    
                        if(debug)
                            logger->print() << "|" << tools::brown("000056") << "| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu " << tools::green("present");
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0) {
                        // Field name: protected_communication_zones_rsu
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16)
                        int16_t* _tmp_57 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_57;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_57 = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000057") << "| SequenceOf ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0]. size: " << int(__aux64__);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 16) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                            return false;
                        }
                        
                        
                        for(int b = 0; b < _if__tmp_57; b++) {
                            its_container_v2_its_container_msgs::ProtectedCommunicationZone seqof_b;  // SEQUENCE
                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.push_back(seqof_b);
                        
                                // ProtectedCommunicationZone  SEQUENCE
                                    //  protectedZoneType      ProtectedZoneType       
                                    //  expiryTime             TimestampIts          OPTIONAL  
                                    //  protectedZoneLatitude  Latitude                
                                    //  protectedZoneLongitude Longitude               
                                    //  protectedZoneRadius    ProtectedZoneRadius   OPTIONAL  
                                    //  protectedZoneID        ProtectedZoneID       OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_33 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000058") << "| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].: " << int(*_ext_flag_33);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::TimestampIts _tmp_58;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.push_back(_tmp_58);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000059") << "| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::ProtectedZoneRadius _tmp_59;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.push_back(_tmp_59);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000060") << "| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::ProtectedZoneID _tmp_60;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.push_back(_tmp_60);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000061") << "| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id " << tools::green("present");
                                }
                                
                                // Field name: protected_zone_type
                                // Enumerated
                                // INT32  min(0) max(1) span(2) datatype(Int32)
                                uint8_t* _ext_flag_34 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000062") << "| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.: " << int(*_ext_flag_34);
                                }
                                
                                uint8_t* _tmp_61 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_61;
                                __aux64__ += 0;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' " << (__aux64__) << " exceeds max allowable (1); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000063") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value);
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.size() != 0) {
                                    // Field name: expiry_time
                                    // Integer
                                    // INT64  min(0) max(4398046511103) span(4398046511104) datatype(Int64)
                                    uint64_t* _tmp_62 = (uint64_t*)buffer; buffer += 8;
                                    __aux64__ = *_tmp_62;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000064") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' " << (__aux64__) << " exceeds max allowable (4398046511103); message dropped.";
                                        return false;
                                    }
                                }
                                
                                // Field name: protected_zone_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_63 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value = *_tmp_63;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value += -900000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000065") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: protected_zone_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_64 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value = *_tmp_64;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value += -1800000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000066") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.size() != 0) {
                                    // Field name: protected_zone_radius
                                    // Integer
                                    // UINT8  min(1) max(255) span(255) datatype(UInt8)
                                    uint8_t* _ext_flag_37 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000067") << "| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].: " << int(*_ext_flag_37);
                                    }
                                    
                                    if(*_ext_flag_37) {
                                        uint8_t* _tmp_66 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_66) {
                                            uint64_t* _tmp_67 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = *_tmp_67;
                                            __aux64__ += INT64_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value = __aux64__;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_67 = (uint32_t*) buffer; buffer += 4;
                                            __aux64__ = *_tmp_67;
                                            __aux64__ += INT32_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value = __aux64__;
                                        }
                                    }
                                    else
                                    {
                                        uint8_t* _tmp_65 = (uint8_t*) buffer++;
                                        __aux64__ = *_tmp_65;
                                        __aux64__ += 1;
                                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value = __aux64__;
                                    
                                        if(debug) {
                                            logger->print() << "|" << tools::brown("000068") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value) << 
                                                         " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value);
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                            return false;
                                        }
                                        
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.size() != 0) {
                                    // Field name: protected_zone_id
                                    // Integer
                                    // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                    uint32_t* _tmp_68 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_68;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000069") << "| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_33) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b]. 
                                    uint8_t* _tmp_69 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_3[*_tmp_69];
                                    
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000070") << "| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].: " << static_cast<unsigned int>(*_tmp_69);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_69; i++)
                                        _array_3[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_69; i++) {
                                        uint16_t* _tmp_70 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_70; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                    }
                    if(*_ext_flag_32) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0]. 
                        uint8_t* _tmp_71 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_4[*_tmp_71];
                        
                        if(debug)
                            logger->print() << "|" << tools::brown("000071") << "| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << static_cast<unsigned int>(*_tmp_71);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_71; i++)
                            _array_4[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_71; i++) {
                            uint16_t* _tmp_72 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_72; i++)
                                buffer++;
                        }
                        
                    }
            }
            else
            {
                uint16_t* _tmp_73 = (uint16_t*)buffer;  // OpenType length
                buffer += 2 + int(*_tmp_73);            // Ignoring opentype data
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() != 0) {
                // Field name: low_frequency_container
                // Choice
                uint8_t* _ext_flag_38 = (uint8_t*)buffer++; // ext flag
                
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency   
                uint8_t _choice_2 = *(buffer++);
                
                if(*_ext_flag_38)
                    _choice_2 += 0 + 1; // Ext addition
                
                if(_choice_2 == 0) {
                    cam_v2_cam_pdu_descriptions_msgs::BasicVehicleContainerLowFrequency _tmp_74;
                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.push_back(_tmp_74);
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        
                        // Field name: vehicle_role
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_75 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_75;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000072") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        // Field name: exterior_lights
                        // BitString
                        // BIT_STRING  min(8) max(8) span(1)
                        uint8_t* _tmp_76 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_76 + 8;
                        buffer += 1;
                        
                        if(debug)
                            logger->print() << "|" << tools::brown("000073") << "| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << __aux64__;
                        
                        int _if__tmp_76 = __aux64__;
                        for(int c = 0; c < _if__tmp_76; c++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values[c] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 8) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 8) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                            return false;
                        }
                        
                        // Field name: path_history
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(40) span(41)
                        int16_t* _tmp_77 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_77;
                        
                        int _if__tmp_77 = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000074") << "| SequenceOf ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history. size: " << int(__aux64__);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 40) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.value' " << (__aux64__) << " exceeds max allowable (40); message dropped.";
                            return false;
                        }
                        
                        
                        for(int d = 0; d < _if__tmp_77; d++) {
                            its_container_v2_its_container_msgs::PathPoint seqof_d;  // SEQUENCE
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements.push_back(seqof_d);
                        
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::PathDeltaTime _tmp_78;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time.push_back(_tmp_78);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000075") << "| ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time " << tools::green("present");
                                }
                                
                                // Field name: path_position
                                    // DeltaReferencePosition  SEQUENCE
                                        //  deltaLatitude  DeltaLatitude      
                                        //  deltaLongitude DeltaLongitude     
                                        //  deltaAltitude  DeltaAltitude      
                                    
                                    // Field name: delta_latitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_79 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value = *_tmp_79;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000076") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_longitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_80 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value = *_tmp_80;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000077") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_altitude
                                    // Real
                                    // Float
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_81 = (uint16_t*) buffer; buffer += 2;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value = *_tmp_81;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value += -12700;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000078") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value << " (" << __aux64__ << ")";
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time.size() != 0) {
                                    // Field name: path_delta_time
                                    // Real
                                    // Float
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    uint8_t* _ext_flag_43 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000079") << "| Reading ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].: " << int(*_ext_flag_43);
                                    }
                                    
                                    if(*_ext_flag_43) {
                                        uint8_t* _tmp_83 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_83) {
                                            uint64_t* _tmp_84 = (uint64_t*)buffer; buffer += 8;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value = *_tmp_84;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value += INT64_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value /= 100.0;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_84 = (uint32_t*) buffer; buffer += 4;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value = *_tmp_84;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value += INT32_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value /= 100.0;
                                        }
                                    }
                                    else
                                    {
                                        uint16_t* _tmp_82 = (uint16_t*) buffer; buffer += 2;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value = *_tmp_82;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value += 1;
                                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value /= 100.0;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000080") << "| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0]: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                }
                else
                {
                    uint16_t* _tmp_85 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_85);            // Ignoring opentype data
                }
            }
            
            if(ros->cam.cam_parameters.special_vehicle_container.size() != 0) {
                // Field name: special_vehicle_container
                // Choice
                uint8_t* _ext_flag_44 = (uint8_t*)buffer++; // ext flag
                
                   // #0  publicTransportContainer   PublicTransportContainer   
                   // #1  specialTransportContainer   SpecialTransportContainer   
                   // #2  dangerousGoodsContainer   DangerousGoodsContainer   
                   // #3  roadWorksContainerBasic   RoadWorksContainerBasic   
                   // #4  rescueContainer   RescueContainer   
                   // #5  emergencyContainer   EmergencyContainer   
                   // #6  safetyCarContainer   SafetyCarContainer   
                uint8_t _choice_3 = *(buffer++);
                
                if(*_ext_flag_44)
                    _choice_3 += 6 + 1; // Ext addition
                
                if(_choice_3 == 0) {
                    cam_v2_cam_pdu_descriptions_msgs::PublicTransportContainer _tmp_86;
                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.push_back(_tmp_86);
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::PtActivation _tmp_87;
                            ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.push_back(_tmp_87);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000081") << "| ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation " << tools::green("present");
                        }
                        
                        // Field name: embarkation_status
                        // Value
                        // Boolean
                        uint8_t* _tmp_88 = (uint8_t*)buffer;
                        buffer++;
                        ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value = (*_tmp_88 == 1);
                        if(debug)
                            logger->print() << "|" << tools::brown("000082") << "| \033[37;1mbool  \033[0m ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.: " << (*_tmp_88);
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0) {
                            // Field name: pt_activation
                                // PtActivation  SEQUENCE
                                    //  ptActivationType PtActivationType     
                                    //  ptActivationData PtActivationData     
                                
                                // Field name: pt_activation_type
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_89 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_89;
                                ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000083") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: pt_activation_data
                                // OctetString
                                // min(1) max(20) span(20)
                                uint8_t* _tmp_90 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = *_tmp_90 + 1;
                                
                                int _if__tmp_90 = __aux64__;
                                for(int e = 0; e < _if__tmp_90; e++) {
                                    int8_t* __n__ = (int8_t*)buffer++;
                                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.push_back(*__n__);
                                }
                        }
                }
                else if(_choice_3 == 1)  // CHOICE SpecialVehicleContainer  fieldName(special_transport_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::SpecialTransportContainer _tmp_91;
                    ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.push_back(_tmp_91);
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        
                        // Field name: special_transport_type
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        uint8_t* _tmp_92 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_92 + 4;
                        buffer += 1;
                        
                        if(debug)
                            logger->print() << "|" << tools::brown("000084") << "| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << __aux64__;
                        
                        int _if__tmp_92 = __aux64__;
                        for(int f = 0; f < _if__tmp_92; f++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values[f] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 4) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (__aux64__) << " is less than allowable (4); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                            return false;
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_93 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_93 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->print() << "|" << tools::brown("000085") << "| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_93 = __aux64__;
                        for(int g = 0; g < _if__tmp_93; g++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[g] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                }
                else if(_choice_3 == 2)  // CHOICE SpecialVehicleContainer  fieldName(dangerous_goods_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::DangerousGoodsContainer _tmp_94;
                    ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.push_back(_tmp_94);
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        
                        // Field name: dangerous_goods_basic
                        // Enumerated
                        // INT32  min(0) max(19) span(20) datatype(Int32)
                        uint8_t* _tmp_95 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_95;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 19) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' " << (__aux64__) << " exceeds max allowable (19); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|" << tools::brown("000086") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                }
                else if(_choice_3 == 3)  // CHOICE SpecialVehicleContainer  fieldName(road_works_container_basic)
                {
                    cam_v2_cam_pdu_descriptions_msgs::RoadWorksContainerBasic _tmp_96;
                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic.push_back(_tmp_96);
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::RoadworksSubCauseCode _tmp_97;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.push_back(_tmp_97);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000087") << "| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::ClosedLanes _tmp_98;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.push_back(_tmp_98);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000088") << "| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes " << tools::green("present");
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0) {
                            // Field name: roadworks_sub_cause_code
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_99 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_99;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000089") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_100 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_100 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->print() << "|" << tools::brown("000090") << "| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_100 = __aux64__;
                        for(int h = 0; h < _if__tmp_100; h++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[h] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0) {
                            // Field name: closed_lanes
                                // ClosedLanes  SEQUENCE
                                    //  innerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  outerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  drivingLaneStatus       DrivingLaneStatus    OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_46 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000091") << "| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << int(*_ext_flag_46);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::HardShoulderStatus _tmp_101;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.push_back(_tmp_101);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000092") << "| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::HardShoulderStatus _tmp_102;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.push_back(_tmp_102);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000093") << "| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::DrivingLaneStatus _tmp_103;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.push_back(_tmp_103);
                                
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000094") << "| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status " << tools::green("present");
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0) {
                                    // Field name: innerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_104 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_104;
                                    __aux64__ += 0;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000095") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0) {
                                    // Field name: outerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_105 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_105;
                                    __aux64__ += 0;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|" << tools::brown("000096") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0) {
                                    // Field name: driving_lane_status
                                    // BitString
                                    // BIT_STRING  min(1) max(13) span(13)
                                    uint8_t* _tmp_106 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_106 + 1;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000097") << "| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << __aux64__;
                                    
                                    int _if__tmp_106 = __aux64__;
                                    for(int i = 0; i < _if__tmp_106; i++) {
                                        uint8_t __c__;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[i] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 13) {
                                        logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (__aux64__) << " exceeds max allowable (13); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_46) { // from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0]. 
                                    uint8_t* _tmp_107 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_5[*_tmp_107];
                                    
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000098") << "| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << static_cast<unsigned int>(*_tmp_107);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_107; i++)
                                        _array_5[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_107; i++) {
                                        uint16_t* _tmp_108 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_108; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                }
                else if(_choice_3 == 4)  // CHOICE SpecialVehicleContainer  fieldName(rescue_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::RescueContainer _tmp_109;
                    ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.push_back(_tmp_109);
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_110 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_110 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->print() << "|" << tools::brown("000099") << "| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_110 = __aux64__;
                        for(int j = 0; j < _if__tmp_110; j++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[j] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                }
                else if(_choice_3 == 5)  // CHOICE SpecialVehicleContainer  fieldName(emergency_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::EmergencyContainer _tmp_111;
                    ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.push_back(_tmp_111);
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::CauseCode _tmp_112;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.push_back(_tmp_112);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000100") << "| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::EmergencyPriority _tmp_113;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.push_back(_tmp_113);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000101") << "| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_114 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_114 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->print() << "|" << tools::brown("000102") << "| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_114 = __aux64__;
                        for(int k = 0; k < _if__tmp_114; k++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[k] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0) {
                            // Field name: incident_indication
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_49 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000103") << "| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << int(*_ext_flag_49);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_115 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_115;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000104") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: sub_cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_116 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_116;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000105") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                if(*_ext_flag_49) { // from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_117 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_6[*_tmp_117];
                                    
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000106") << "| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_117);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_117; i++)
                                        _array_6[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_117; i++) {
                                        uint16_t* _tmp_118 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_118; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0) {
                            // Field name: emergency_priority
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            uint8_t* _tmp_119 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_119 + 2;
                            buffer += 1;
                            
                            if(debug)
                                logger->print() << "|" << tools::brown("000107") << "| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << __aux64__;
                            
                            int _if__tmp_119 = __aux64__;
                            for(int l = 0; l < _if__tmp_119; l++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[l] = (*__b__ == 1);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                return false;
                            }
                        }
                }
                else if(_choice_3 == 6)  // CHOICE SpecialVehicleContainer  fieldName(safety_car_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::SafetyCarContainer _tmp_120;
                    ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.push_back(_tmp_120);
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::CauseCode _tmp_121;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.push_back(_tmp_121);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000108") << "| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::TrafficRule _tmp_122;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.push_back(_tmp_122);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000109") << "| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::SpeedLimit _tmp_123;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.push_back(_tmp_123);
                        
                            if(debug)
                                logger->print() << "|" << tools::brown("000110") << "| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_124 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_124 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->print() << "|" << tools::brown("000111") << "| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_124 = __aux64__;
                        for(int m = 0; m < _if__tmp_124; m++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[m] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0) {
                            // Field name: incident_indication
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_50 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000112") << "| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << int(*_ext_flag_50);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_125 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_125;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000113") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: sub_cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_126 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_126;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|" << tools::brown("000114") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                if(*_ext_flag_50) { // from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_127 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_7[*_tmp_127];
                                    
                                    if(debug)
                                        logger->print() << "|" << tools::brown("000115") << "| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_127);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_127; i++)
                                        _array_7[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_127; i++) {
                                        uint16_t* _tmp_128 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_128; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0) {
                            // Field name: traffic_rule
                            // Enumerated
                            // INT32  min(0) max(3) span(4) datatype(Int32)
                            uint8_t* _ext_flag_51 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000116") << "| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].: " << int(*_ext_flag_51);
                            }
                            
                            uint8_t* _tmp_129 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_129;
                            __aux64__ += 0;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000117") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0) {
                            // Field name: speed_limit
                            // Integer
                            // UINT8  min(1) max(255) span(255) datatype(UInt8)
                            uint8_t* _tmp_130 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_130;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|" << tools::brown("000118") << "| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->error() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                }
                else
                {
                    uint16_t* _tmp_131 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_131);            // Ignoring opentype data
                }
            }
            if(*_ext_flag_1) { // from ros->cam.cam_parameters. 
                uint8_t* _tmp_132 = (uint8_t*) buffer++;  // number of extensions
                bool _array_8[*_tmp_132];
                
                if(debug)
                    logger->print() << "|" << tools::brown("000119") << "| Reading number of exts from ros->cam.cam_parameters.: " << static_cast<unsigned int>(*_tmp_132);
                
                // Extensions bytemap
                for(int i = 0; i < *_tmp_132; i++)
                    _array_8[i] = (*buffer++) != 0;
                
                // Discarding unknown OpenType containers
                for(int i = 0; i < *_tmp_132; i++) {
                    uint16_t* _tmp_133 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                    if(debug) {
                    }
                
                    for(int i = 0; i < *_tmp_133; i++)
                        buffer++;
                }
                
            }
	
	        return true;
        }
    }
}