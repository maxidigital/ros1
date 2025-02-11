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
        uint8_t* _tmp_19019 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_19019;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016844\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.protocol_version.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'hheader.protocol_version.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
            return false;
        }
        
        // Field name: message_id
        // Integer
        // UINT8  min(0) max(255) span(256) datatype(UInt8)
        uint8_t* _tmp_19020 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_19020;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016845\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.message_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'hheader.message_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
            return false;
        }
        
        // Field name: station_id
        // Integer
        // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
        uint32_t* _tmp_19021 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_19021;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016846\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.station_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->warning() << "Error: Value in 'hheader.station_id.value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
            return false;
        }
    
    // Field name: cam
        // CoopAwareness  SEQUENCE
            //  generationDeltaTime GenerationDeltaTime     
            //  camParameters       CamParameters           
        
        // Field name: generation_delta_time
        // Integer
        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
        uint16_t* _tmp_19022 = (uint16_t*) buffer; buffer += 2;
        __aux64__ = *_tmp_19022;
        ros->cam.generation_delta_time.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016847\033[0m| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
                         " cam.generation_delta_time.value: " << ros->cam.generation_delta_time.value;
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'cam.generation_delta_time.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->warning() << "Error: Value in 'cam.generation_delta_time.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
            return false;
        }
        
        // Field name: cam_parameters
            // CamParameters  SEQUENCE
                //  basicContainer          BasicContainer              
                //  highFrequencyContainer  HighFrequencyContainer      
                //  lowFrequencyContainer   LowFrequencyContainer     OPTIONAL  
                //  specialVehicleContainer SpecialVehicleContainer   OPTIONAL  
                //  ...
            uint8_t* _ext_flag_8428 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m016848\033[0m| Reading ext flag from ros->cam.cam_parameters.: " << int(*_ext_flag_8428);
            }
            
            if(*(buffer++)) { 
                cam_v2_cam_pdu_descriptions_msgs::LowFrequencyContainer _tmp_19023;
                ros->cam.cam_parameters.low_frequency_container.push_back(_tmp_19023);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016849\033[0m| ros->cam.cam_parameters.low_frequency_container " << tools::green("present");
            }
            if(*(buffer++)) { 
                cam_v2_cam_pdu_descriptions_msgs::SpecialVehicleContainer _tmp_19024;
                ros->cam.cam_parameters.special_vehicle_container.push_back(_tmp_19024);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016850\033[0m| ros->cam.cam_parameters.special_vehicle_container " << tools::green("present");
            }
            
            // Field name: basic_container
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_8429 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.basic_container.
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016851\033[0m| Reading ext flag from ros->cam.cam_parameters.basic_container.: " << int(*_ext_flag_8429);
                }
                
                
                // Field name: station_type
                // Integer
                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                uint8_t* _tmp_19025 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_19025;
                ros->cam.cam_parameters.basic_container.station_type.value = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016852\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
                                 " cam.cam_parameters.basic_container.station_type.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.station_type.value);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                    logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
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
                    uint32_t* _tmp_19026 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value = *_tmp_19026;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value += -900000000;
                    __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value /= 1.0E7;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016853\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << " cam.cam_parameters.basic_container.reference_position.latitude: " <<
                                     ros->cam.cam_parameters.basic_container.reference_position.latitude.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: longitude
                    // Real
                    // Double
                    // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                    uint32_t* _tmp_19027 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value = *_tmp_19027;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value += -1800000000;
                    __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value /= 1.0E7;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016854\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << " cam.cam_parameters.basic_container.reference_position.longitude: " <<
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
                        uint16_t* _tmp_19028 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value = *_tmp_19028;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016855\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_minor_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_19029 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value = *_tmp_19029;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016856\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_major_orientation
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_19030 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value = *_tmp_19030;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016857\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation: " <<
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
                        uint32_t* _tmp_19031 = (uint32_t*) buffer; buffer += 4;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value = *_tmp_19031;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value += -100000;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -100000) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' " << (__aux64__) << " is less than allowable (-100000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 800001) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' " << (__aux64__) << " exceeds max allowable (800001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016858\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: altitude_confidence
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_19032 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_19032;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016859\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                if(*_ext_flag_8429) { // from ros->cam.cam_parameters.basic_container. 
                    uint8_t* _tmp_19033 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_237[*_tmp_19033];
                    
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016860\033[0m| Reading number of exts from ros->cam.cam_parameters.basic_container.: " << static_cast<unsigned int>(*_tmp_19033);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_19033; i++)
                        _array_237[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_19033; i++) {
                        uint16_t* _tmp_19034 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_19034; i++)
                            buffer++;
                    }
                    
                }
            
            // Field name: high_frequency_container
            // Choice
            uint8_t* _ext_flag_8437 = (uint8_t*)buffer++; // ext flag
            
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency   
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency   
            uint8_t _choice_424 = *(buffer++);
            
            if(*_ext_flag_8437)
                _choice_424 += 1 + 1; // Ext addition
            
            if(_choice_424 == 0) {
                cam_v2_cam_pdu_descriptions_msgs::BasicVehicleContainerHighFrequency _tmp_19035;
                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.push_back(_tmp_19035);
            
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
                        its_container_v2_its_container_msgs::AccelerationControl _tmp_19036;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.push_back(_tmp_19036);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016861\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::LanePosition _tmp_19037;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.push_back(_tmp_19037);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016862\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::SteeringWheelAngle _tmp_19038;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.push_back(_tmp_19038);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016863\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::LateralAcceleration _tmp_19039;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.push_back(_tmp_19039);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016864\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::VerticalAcceleration _tmp_19040;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.push_back(_tmp_19040);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016865\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::PerformanceClass _tmp_19041;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.push_back(_tmp_19041);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016866\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::CenDsrcTollingZone _tmp_19042;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.push_back(_tmp_19042);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016867\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone " << tools::green("present");
                    }
                    
                    // Field name: heading
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        
                        // Field name: heading_value
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_19043 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value = *_tmp_19043;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016868\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: heading_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_19044 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value = *_tmp_19044;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016869\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence: " <<
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
                        uint16_t* _tmp_19045 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value = *_tmp_19045;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016870\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: speed_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                        uint8_t* _tmp_19046 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value = *_tmp_19046;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016871\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: drive_direction
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _tmp_19047 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_19047;
                    __aux64__ += 0;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value = __aux64__;
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                        return false;
                    }
                    
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016872\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
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
                        uint16_t* _tmp_19048 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value = *_tmp_19048;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016873\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: vehicle_length_confidence_indication
                        // Enumerated
                        // INT32  min(0) max(4) span(5) datatype(Int32)
                        uint8_t* _tmp_19049 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_19049;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016874\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                    
                    // Field name: vehicle_width
                    // Real
                    // Float
                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                    uint8_t* _tmp_19050 = (uint8_t*) buffer++;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value = *_tmp_19050;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value += 1;
                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value /= 10.0;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 62) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' " << (__aux64__) << " exceeds max allowable (62); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016875\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width: " <<
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
                        uint16_t* _tmp_19051 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value = *_tmp_19051;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value += -160;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016876\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longitudinal_acceleration_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_19052 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value = *_tmp_19052;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 102) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016877\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: curvature
                        // Curvature  SEQUENCE
                            //  curvatureValue      CurvatureValue          
                            //  curvatureConfidence CurvatureConfidence     
                        
                        // Field name: curvature_value
                        // Integer
                        // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                        uint16_t* _tmp_19053 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_19053;
                        __aux64__ += -1023;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016878\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                            return false;
                        }
                        
                        // Field name: curvature_confidence
                        // Enumerated
                        // INT32  min(0) max(7) span(8) datatype(Int32)
                        uint8_t* _tmp_19054 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_19054;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016879\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                    
                    // Field name: curvature_calculation_mode
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _ext_flag_8449 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016880\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.: " << int(*_ext_flag_8449);
                    }
                    
                    uint8_t* _tmp_19055 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_19055;
                    __aux64__ += 0;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value = __aux64__;
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                        return false;
                    }
                    
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016881\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
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
                        uint16_t* _tmp_19056 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value = *_tmp_19056;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value += -32766;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -32766) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' " << (__aux64__) << " is less than allowable (-32766); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016882\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: yaw_rate_confidence
                        // Enumerated
                        // INT32  min(0) max(8) span(9) datatype(Int32)
                        uint8_t* _tmp_19057 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_19057;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 8) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016883\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0) {
                        // Field name: acceleration_control
                        // BitString
                        // BIT_STRING  min(7) max(7) span(1)
                        uint8_t* _tmp_19058 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_19058 + 7;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016884\033[0m| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << __aux64__;
                        
                        int _if__tmp_19058 = __aux64__;
                        for(int n = 0; n < _if__tmp_19058; n++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[n] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (__aux64__) << " is less than allowable (7); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0) {
                        // Field name: lane_position
                        // Integer
                        // INT8  min(-1) max(14) span(16) datatype(Int8)
                        uint8_t* _tmp_19059 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_19059;
                        __aux64__ += -1;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016885\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' " << (__aux64__) << " is less than allowable (-1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 14) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' " << (__aux64__) << " exceeds max allowable (14); message dropped.";
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
                            uint16_t* _tmp_19060 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_19060;
                            __aux64__ += -511;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016886\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -511) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " is less than allowable (-511); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 512) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " exceeds max allowable (512); message dropped.";
                                return false;
                            }
                            
                            // Field name: steering_wheel_angle_confidence
                            // Integer
                            // UINT8  min(1) max(127) span(127) datatype(UInt8)
                            uint8_t* _tmp_19061 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_19061;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016887\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
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
                            uint16_t* _tmp_19062 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value = *_tmp_19062;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value += -160;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016888\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: lateral_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_19063 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value = *_tmp_19063;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016889\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence: " <<
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
                            uint16_t* _tmp_19064 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value = *_tmp_19064;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value += -160;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016890\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vertical_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_19065 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value = *_tmp_19065;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016891\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0) {
                        // Field name: performance_class
                        // Integer
                        // UINT8  min(0) max(7) span(8) datatype(UInt8)
                        uint8_t* _tmp_19066 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_19066;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016892\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
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
                            uint8_t* _ext_flag_8456 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016893\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << int(*_ext_flag_8456);
                            }
                            
                            if(*(buffer++)) { 
                                its_container_v2_its_container_msgs::CenDsrcTollingZoneID _tmp_19067;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.push_back(_tmp_19067);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016894\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id " << tools::green("present");
                            }
                            
                            // Field name: protected_zone_latitude
                            // Real
                            // Double
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_19068 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value = *_tmp_19068;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value += -900000000;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value /= 1.0E7;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016895\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: protected_zone_longitude
                            // Real
                            // Double
                            // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_19069 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value = *_tmp_19069;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value += -1800000000;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value /= 1.0E7;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016896\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value << " (" << __aux64__ << ")";
                            }
                            
                            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                // Field name: cen_dsrc_tolling_zone_id
                                // Integer
                                // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                uint32_t* _tmp_19070 = (uint32_t*) buffer; buffer += 4;
                                __aux64__ = *_tmp_19070;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016897\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                 " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                    return false;
                                }
                            }
                            if(*_ext_flag_8456) { // from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0]. 
                                uint8_t* _tmp_19071 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_238[*_tmp_19071];
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016898\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << static_cast<unsigned int>(*_tmp_19071);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_19071; i++)
                                    _array_238[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_19071; i++) {
                                    uint16_t* _tmp_19072 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_19072; i++)
                                        buffer++;
                                }
                                
                            }
                    }
            }
            else if(_choice_424 == 1)  // CHOICE HighFrequencyContainer  fieldName(rsu_container_high_frequency)
            {
                cam_v2_cam_pdu_descriptions_msgs::RSUContainerHighFrequency _tmp_19073;
                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.push_back(_tmp_19073);
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_8459 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016899\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << int(*_ext_flag_8459);
                    }
                    
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::ProtectedCommunicationZonesRSU _tmp_19074;
                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.push_back(_tmp_19074);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016900\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu " << tools::green("present");
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0) {
                        // Field name: protected_communication_zones_rsu
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16)
                        int16_t* _tmp_19075 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_19075;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_19075 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016901\033[0m| SequenceOf ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0]. size: " << int(*_tmp_19075);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 16) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                            return false;
                        }
                        
                        
                        for(int o = 0; o < _if__tmp_19075; o++) {
                            its_container_v2_its_container_msgs::ProtectedCommunicationZone seqof_o;  // SEQUENCE
                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.push_back(seqof_o);
                        
                                // ProtectedCommunicationZone  SEQUENCE
                                    //  protectedZoneType      ProtectedZoneType       
                                    //  expiryTime             TimestampIts          OPTIONAL  
                                    //  protectedZoneLatitude  Latitude                
                                    //  protectedZoneLongitude Longitude               
                                    //  protectedZoneRadius    ProtectedZoneRadius   OPTIONAL  
                                    //  protectedZoneID        ProtectedZoneID       OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_8460 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016902\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].: " << int(*_ext_flag_8460);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::TimestampIts _tmp_19076;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].expiry_time.push_back(_tmp_19076);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016903\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].expiry_time " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::ProtectedZoneRadius _tmp_19077;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius.push_back(_tmp_19077);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016904\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::ProtectedZoneID _tmp_19078;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_id.push_back(_tmp_19078);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016905\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_id " << tools::green("present");
                                }
                                
                                // Field name: protected_zone_type
                                // Enumerated
                                // INT32  min(0) max(1) span(2) datatype(Int32)
                                uint8_t* _ext_flag_8461 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_type.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016906\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_type.: " << int(*_ext_flag_8461);
                                }
                                
                                uint8_t* _tmp_19079 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_19079;
                                __aux64__ += 0;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_type.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_type.value' " << (__aux64__) << " exceeds max allowable (1); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016907\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_type.value);
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].expiry_time.size() != 0) {
                                    // Field name: expiry_time
                                    // Integer
                                    // INT64  min(0) max(4398046511103) span(4398046511104) datatype(Int64)
                                    uint64_t* _tmp_19080 = (uint64_t*)buffer; buffer += 8;
                                    __aux64__ = *_tmp_19080;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].expiry_time[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016908\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].expiry_time[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].expiry_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].expiry_time[0].value' " << (__aux64__) << " exceeds max allowable (4398046511103); message dropped.";
                                        return false;
                                    }
                                }
                                
                                // Field name: protected_zone_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_19081 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_latitude.value = *_tmp_19081;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_latitude.value += -900000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_latitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_latitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016909\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_latitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: protected_zone_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_19082 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_longitude.value = *_tmp_19082;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_longitude.value += -1800000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_longitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_longitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016910\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_longitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius.size() != 0) {
                                    // Field name: protected_zone_radius
                                    // Integer
                                    // UINT8  min(1) max(255) span(255) datatype(UInt8)
                                    uint8_t* _ext_flag_8464 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016911\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].: " << int(*_ext_flag_8464);
                                    }
                                    
                                    if(*_ext_flag_8464) {
                                        uint8_t* _tmp_19084 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_19084) {
                                            uint64_t* _tmp_19085 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = *_tmp_19085;
                                            __aux64__ += INT64_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].value = __aux64__;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_19085 = (uint32_t*) buffer; buffer += 4;
                                            __aux64__ = *_tmp_19085;
                                            __aux64__ += INT32_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].value = __aux64__;
                                        }
                                    }
                                    else
                                    {
                                        uint8_t* _tmp_19083 = (uint8_t*) buffer++;
                                        __aux64__ = *_tmp_19083;
                                        __aux64__ += 1;
                                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].value = __aux64__;
                                    
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016912\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].value) << 
                                                         " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].value);
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_radius[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                            return false;
                                        }
                                        
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_id.size() != 0) {
                                    // Field name: protected_zone_id
                                    // Integer
                                    // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                    uint32_t* _tmp_19086 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_19086;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016913\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_id[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].protected_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_8460) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o]. 
                                    uint8_t* _tmp_19087 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_239[*_tmp_19087];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016914\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[o].: " << static_cast<unsigned int>(*_tmp_19087);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_19087; i++)
                                        _array_239[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_19087; i++) {
                                        uint16_t* _tmp_19088 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_19088; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                    }
                    if(*_ext_flag_8459) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0]. 
                        uint8_t* _tmp_19089 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_240[*_tmp_19089];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016915\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << static_cast<unsigned int>(*_tmp_19089);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_19089; i++)
                            _array_240[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_19089; i++) {
                            uint16_t* _tmp_19090 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_19090; i++)
                                buffer++;
                        }
                        
                    }
            }
            else
            {
                uint16_t* _tmp_19091 = (uint16_t*)buffer;  // OpenType length
                buffer += 2 + int(*_tmp_19091);            // Ignoring opentype data
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() != 0) {
                // Field name: low_frequency_container
                // Choice
                uint8_t* _ext_flag_8465 = (uint8_t*)buffer++; // ext flag
                
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency   
                uint8_t _choice_425 = *(buffer++);
                
                if(*_ext_flag_8465)
                    _choice_425 += 0 + 1; // Ext addition
                
                if(_choice_425 == 0) {
                    cam_v2_cam_pdu_descriptions_msgs::BasicVehicleContainerLowFrequency _tmp_19092;
                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.push_back(_tmp_19092);
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        
                        // Field name: vehicle_role
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_19093 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_19093;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016916\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        // Field name: exterior_lights
                        // BitString
                        // BIT_STRING  min(8) max(8) span(1)
                        uint8_t* _tmp_19094 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_19094 + 8;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016917\033[0m| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << __aux64__;
                        
                        int _if__tmp_19094 = __aux64__;
                        for(int p = 0; p < _if__tmp_19094; p++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values[p] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 8) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 8) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                            return false;
                        }
                        
                        // Field name: path_history
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(40) span(41)
                        int16_t* _tmp_19095 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_19095;
                        
                        int _if__tmp_19095 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016918\033[0m| SequenceOf ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history. size: " << int(*_tmp_19095);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 40) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.value' " << (__aux64__) << " exceeds max allowable (40); message dropped.";
                            return false;
                        }
                        
                        
                        for(int q = 0; q < _if__tmp_19095; q++) {
                            its_container_v2_its_container_msgs::PathPoint seqof_q;  // SEQUENCE
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements.push_back(seqof_q);
                        
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::PathDeltaTime _tmp_19096;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time.push_back(_tmp_19096);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016919\033[0m| ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time " << tools::green("present");
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
                                    uint32_t* _tmp_19097 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_latitude.value = *_tmp_19097;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_latitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_latitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_latitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016920\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_latitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_latitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_latitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_longitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_19098 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_longitude.value = *_tmp_19098;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_longitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_longitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_longitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016921\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_longitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_longitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_longitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_altitude
                                    // Real
                                    // Float
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_19099 = (uint16_t*) buffer; buffer += 2;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_altitude.value = *_tmp_19099;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_altitude.value += -12700;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_altitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_altitude.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016922\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_altitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_altitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_position.delta_altitude.value << " (" << __aux64__ << ")";
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time.size() != 0) {
                                    // Field name: path_delta_time
                                    // Real
                                    // Float
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    uint8_t* _ext_flag_8470 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016923\033[0m| Reading ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].: " << int(*_ext_flag_8470);
                                    }
                                    
                                    if(*_ext_flag_8470) {
                                        uint8_t* _tmp_19101 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_19101) {
                                            uint64_t* _tmp_19102 = (uint64_t*)buffer; buffer += 8;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value = *_tmp_19102;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value += INT64_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value /= 100.0;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_19102 = (uint32_t*) buffer; buffer += 4;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value = *_tmp_19102;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value += INT32_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value /= 100.0;
                                        }
                                    }
                                    else
                                    {
                                        uint16_t* _tmp_19100 = (uint16_t*) buffer; buffer += 2;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value = *_tmp_19100;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value += 1;
                                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value /= 100.0;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016924\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0]: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[q].path_delta_time[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                }
                else
                {
                    uint16_t* _tmp_19103 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_19103);            // Ignoring opentype data
                }
            }
            
            if(ros->cam.cam_parameters.special_vehicle_container.size() != 0) {
                // Field name: special_vehicle_container
                // Choice
                uint8_t* _ext_flag_8471 = (uint8_t*)buffer++; // ext flag
                
                   // #0  publicTransportContainer   PublicTransportContainer   
                   // #1  specialTransportContainer   SpecialTransportContainer   
                   // #2  dangerousGoodsContainer   DangerousGoodsContainer   
                   // #3  roadWorksContainerBasic   RoadWorksContainerBasic   
                   // #4  rescueContainer   RescueContainer   
                   // #5  emergencyContainer   EmergencyContainer   
                   // #6  safetyCarContainer   SafetyCarContainer   
                uint8_t _choice_426 = *(buffer++);
                
                if(*_ext_flag_8471)
                    _choice_426 += 6 + 1; // Ext addition
                
                if(_choice_426 == 0) {
                    cam_v2_cam_pdu_descriptions_msgs::PublicTransportContainer _tmp_19104;
                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.push_back(_tmp_19104);
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::PtActivation _tmp_19105;
                            ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.push_back(_tmp_19105);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016925\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation " << tools::green("present");
                        }
                        
                        // Field name: embarkation_status
                        // Value
                        // Boolean
                        uint8_t* _tmp_19106 = (uint8_t*)buffer;
                        buffer++;
                        ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value = (*_tmp_19106 == 1);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016926\033[0m| \033[37;1mbool  \033[0m ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.: " << (*_tmp_19106);
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0) {
                            // Field name: pt_activation
                                // PtActivation  SEQUENCE
                                    //  ptActivationType PtActivationType     
                                    //  ptActivationData PtActivationData     
                                
                                // Field name: pt_activation_type
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_19107 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_19107;
                                ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016927\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: pt_activation_data
                                // OctetString
                                // min(1) max(20) span(20)
                                uint8_t* _tmp_19108 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = *_tmp_19108 + 1;
                                
                                int _if__tmp_19108 = __aux64__;
                                for(int r = 0; r < _if__tmp_19108; r++) {
                                    int8_t* __n__ = (int8_t*)buffer++;
                                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.push_back(*__n__);
                                }
                        }
                }
                else if(_choice_426 == 1)  // CHOICE SpecialVehicleContainer  fieldName(special_transport_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::SpecialTransportContainer _tmp_19109;
                    ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.push_back(_tmp_19109);
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        
                        // Field name: special_transport_type
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        uint8_t* _tmp_19110 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_19110 + 4;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016928\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << __aux64__;
                        
                        int _if__tmp_19110 = __aux64__;
                        for(int s = 0; s < _if__tmp_19110; s++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values[s] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 4) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (__aux64__) << " is less than allowable (4); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                            return false;
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_19111 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_19111 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016929\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_19111 = __aux64__;
                        for(int t = 0; t < _if__tmp_19111; t++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[t] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                }
                else if(_choice_426 == 2)  // CHOICE SpecialVehicleContainer  fieldName(dangerous_goods_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::DangerousGoodsContainer _tmp_19112;
                    ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.push_back(_tmp_19112);
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        
                        // Field name: dangerous_goods_basic
                        // Enumerated
                        // INT32  min(0) max(19) span(20) datatype(Int32)
                        uint8_t* _tmp_19113 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_19113;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 19) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' " << (__aux64__) << " exceeds max allowable (19); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016930\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                }
                else if(_choice_426 == 3)  // CHOICE SpecialVehicleContainer  fieldName(road_works_container_basic)
                {
                    cam_v2_cam_pdu_descriptions_msgs::RoadWorksContainerBasic _tmp_19114;
                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic.push_back(_tmp_19114);
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::RoadworksSubCauseCode _tmp_19115;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.push_back(_tmp_19115);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016931\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::ClosedLanes _tmp_19116;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.push_back(_tmp_19116);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016932\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes " << tools::green("present");
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0) {
                            // Field name: roadworks_sub_cause_code
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_19117 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_19117;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016933\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_19118 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_19118 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016934\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_19118 = __aux64__;
                        for(int u = 0; u < _if__tmp_19118; u++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[u] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0) {
                            // Field name: closed_lanes
                                // ClosedLanes  SEQUENCE
                                    //  innerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  outerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  drivingLaneStatus       DrivingLaneStatus    OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_8473 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016935\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << int(*_ext_flag_8473);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::HardShoulderStatus _tmp_19119;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.push_back(_tmp_19119);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016936\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::HardShoulderStatus _tmp_19120;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.push_back(_tmp_19120);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016937\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::DrivingLaneStatus _tmp_19121;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.push_back(_tmp_19121);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016938\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status " << tools::green("present");
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0) {
                                    // Field name: innerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_19122 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_19122;
                                    __aux64__ += 0;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016939\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0) {
                                    // Field name: outerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_19123 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_19123;
                                    __aux64__ += 0;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016940\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0) {
                                    // Field name: driving_lane_status
                                    // BitString
                                    // BIT_STRING  min(1) max(13) span(13)
                                    uint8_t* _tmp_19124 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_19124 + 1;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016941\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << __aux64__;
                                    
                                    int _if__tmp_19124 = __aux64__;
                                    for(int v = 0; v < _if__tmp_19124; v++) {
                                        uint8_t __c__;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[v] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 13) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (__aux64__) << " exceeds max allowable (13); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_8473) { // from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0]. 
                                    uint8_t* _tmp_19125 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_241[*_tmp_19125];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016942\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << static_cast<unsigned int>(*_tmp_19125);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_19125; i++)
                                        _array_241[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_19125; i++) {
                                        uint16_t* _tmp_19126 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_19126; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                }
                else if(_choice_426 == 4)  // CHOICE SpecialVehicleContainer  fieldName(rescue_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::RescueContainer _tmp_19127;
                    ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.push_back(_tmp_19127);
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_19128 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_19128 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016943\033[0m| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_19128 = __aux64__;
                        for(int w = 0; w < _if__tmp_19128; w++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[w] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                }
                else if(_choice_426 == 5)  // CHOICE SpecialVehicleContainer  fieldName(emergency_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::EmergencyContainer _tmp_19129;
                    ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.push_back(_tmp_19129);
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::CauseCode _tmp_19130;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.push_back(_tmp_19130);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016944\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::EmergencyPriority _tmp_19131;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.push_back(_tmp_19131);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016945\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_19132 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_19132 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016946\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_19132 = __aux64__;
                        for(int x = 0; x < _if__tmp_19132; x++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[x] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0) {
                            // Field name: incident_indication
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_8476 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016947\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << int(*_ext_flag_8476);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_19133 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_19133;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016948\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: sub_cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_19134 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_19134;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016949\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                if(*_ext_flag_8476) { // from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_19135 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_242[*_tmp_19135];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016950\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_19135);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_19135; i++)
                                        _array_242[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_19135; i++) {
                                        uint16_t* _tmp_19136 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_19136; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0) {
                            // Field name: emergency_priority
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            uint8_t* _tmp_19137 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_19137 + 2;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016951\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << __aux64__;
                            
                            int _if__tmp_19137 = __aux64__;
                            for(int y = 0; y < _if__tmp_19137; y++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[y] = (*__b__ == 1);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                return false;
                            }
                        }
                }
                else if(_choice_426 == 6)  // CHOICE SpecialVehicleContainer  fieldName(safety_car_container)
                {
                    cam_v2_cam_pdu_descriptions_msgs::SafetyCarContainer _tmp_19138;
                    ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.push_back(_tmp_19138);
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::CauseCode _tmp_19139;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.push_back(_tmp_19139);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016952\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::TrafficRule _tmp_19140;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.push_back(_tmp_19140);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016953\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::SpeedLimit _tmp_19141;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.push_back(_tmp_19141);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016954\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_19142 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_19142 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016955\033[0m| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_19142 = __aux64__;
                        for(int z = 0; z < _if__tmp_19142; z++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[z] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0) {
                            // Field name: incident_indication
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_8477 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016956\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << int(*_ext_flag_8477);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_19143 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_19143;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016957\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: sub_cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_19144 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_19144;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016958\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                if(*_ext_flag_8477) { // from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_19145 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_243[*_tmp_19145];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016959\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_19145);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_19145; i++)
                                        _array_243[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_19145; i++) {
                                        uint16_t* _tmp_19146 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_19146; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0) {
                            // Field name: traffic_rule
                            // Enumerated
                            // INT32  min(0) max(3) span(4) datatype(Int32)
                            uint8_t* _ext_flag_8478 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016960\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].: " << int(*_ext_flag_8478);
                            }
                            
                            uint8_t* _tmp_19147 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_19147;
                            __aux64__ += 0;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016961\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0) {
                            // Field name: speed_limit
                            // Integer
                            // UINT8  min(1) max(255) span(255) datatype(UInt8)
                            uint8_t* _tmp_19148 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_19148;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016962\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                }
                else
                {
                    uint16_t* _tmp_19149 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_19149);            // Ignoring opentype data
                }
            }
            if(*_ext_flag_8428) { // from ros->cam.cam_parameters. 
                uint8_t* _tmp_19150 = (uint8_t*) buffer++;  // number of extensions
                bool _array_244[*_tmp_19150];
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m016963\033[0m| Reading number of exts from ros->cam.cam_parameters.: " << static_cast<unsigned int>(*_tmp_19150);
                
                // Extensions bytemap
                for(int i = 0; i < *_tmp_19150; i++)
                    _array_244[i] = (*buffer++) != 0;
                
                // Discarding unknown OpenType containers
                for(int i = 0; i < *_tmp_19150; i++) {
                    uint16_t* _tmp_19151 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                    if(debug) {
                    }
                
                    for(int i = 0; i < *_tmp_19151; i++)
                        buffer++;
                }
                
            }
	
	        return true;
        }
    }
}