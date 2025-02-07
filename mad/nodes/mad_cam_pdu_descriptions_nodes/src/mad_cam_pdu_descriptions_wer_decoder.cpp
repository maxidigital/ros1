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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0
 * 
 * Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(302637) cam(2) version(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <mad_cam_pdu_descriptions_wer_decoder.h>


/**
 *
 */
namespace wind
{
    namespace decoder_mad_cam_pdu_descriptions
    {        
        
        #if WIND_ROS_VERSION == 1
          bool WerDecoder::decode(mad_cam_pdu_descriptions_msgs::MADCAM* ros, const uint8_t *buffer)
        #else
          bool WerDecoder::decode(mad_cam_pdu_descriptions_msgs::msg::MADCAM* ros, const uint8_t *buffer)
        #endif
        {
            const uint8_t *start = buffer;
            int64_t __aux64__;
	
    // MADCAM  SEQUENCE
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
        uint8_t* _tmp_17500 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_17500;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m015613\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
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
        uint8_t* _tmp_17501 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_17501;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m015614\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
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
        uint32_t* _tmp_17502 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_17502;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m015615\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
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
        uint16_t* _tmp_17503 = (uint16_t*) buffer; buffer += 2;
        __aux64__ = *_tmp_17503;
        ros->cam.generation_delta_time.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m015616\033[0m| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
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
            uint8_t* _ext_flag_7664 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m015617\033[0m| Reading ext flag from ros->cam.cam_parameters.: " << int(*_ext_flag_7664);
            }
            
            if(*(buffer++)) { 
                mad_cam_pdu_descriptions_msgs::LowFrequencyContainer _tmp_17504;
                ros->cam.cam_parameters.low_frequency_container.push_back(_tmp_17504);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m015618\033[0m| ros->cam.cam_parameters.low_frequency_container " << tools::green("present");
            }
            if(*(buffer++)) { 
                mad_cam_pdu_descriptions_msgs::SpecialVehicleContainer _tmp_17505;
                ros->cam.cam_parameters.special_vehicle_container.push_back(_tmp_17505);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m015619\033[0m| ros->cam.cam_parameters.special_vehicle_container " << tools::green("present");
            }
            
            // Field name: basic_container
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_7665 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.basic_container.
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m015620\033[0m| Reading ext flag from ros->cam.cam_parameters.basic_container.: " << int(*_ext_flag_7665);
                }
                
                
                // Field name: station_type
                // Integer
                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                uint8_t* _tmp_17506 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_17506;
                ros->cam.cam_parameters.basic_container.station_type.value = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m015621\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
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
                    uint32_t* _tmp_17507 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value = *_tmp_17507;
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
                        logger->debug() << "|\033[38;5;94m015622\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << " cam.cam_parameters.basic_container.reference_position.latitude: " <<
                                     ros->cam.cam_parameters.basic_container.reference_position.latitude.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: longitude
                    // Real
                    // Double
                    // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                    uint32_t* _tmp_17508 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value = *_tmp_17508;
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
                        logger->debug() << "|\033[38;5;94m015623\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << " cam.cam_parameters.basic_container.reference_position.longitude: " <<
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
                        uint16_t* _tmp_17509 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value = *_tmp_17509;
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
                            logger->debug() << "|\033[38;5;94m015624\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_minor_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_17510 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value = *_tmp_17510;
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
                            logger->debug() << "|\033[38;5;94m015625\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_major_orientation
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_17511 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value = *_tmp_17511;
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
                            logger->debug() << "|\033[38;5;94m015626\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation: " <<
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
                        uint32_t* _tmp_17512 = (uint32_t*) buffer; buffer += 4;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value = *_tmp_17512;
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
                            logger->debug() << "|\033[38;5;94m015627\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: altitude_confidence
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_17513 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17513;
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
                            logger->debug() << "|\033[38;5;94m015628\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                if(*_ext_flag_7665) { // from ros->cam.cam_parameters.basic_container. 
                    uint8_t* _tmp_17514 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_213[*_tmp_17514];
                    
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015629\033[0m| Reading number of exts from ros->cam.cam_parameters.basic_container.: " << static_cast<unsigned int>(*_tmp_17514);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_17514; i++)
                        _array_213[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_17514; i++) {
                        uint16_t* _tmp_17515 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_17515; i++)
                            buffer++;
                    }
                    
                }
            
            // Field name: high_frequency_container
            // Choice
            uint8_t* _ext_flag_7673 = (uint8_t*)buffer++; // ext flag
            
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency   
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency   
               // #2  madVehicleContainerHighFrequency   MADVehicleContainerHighFrequency   (ext field)
            uint8_t _choice_404 = *(buffer++);
            
            if(*_ext_flag_7673)
                _choice_404 += 1 + 1; // Ext addition
            
            if(_choice_404 == 0) {
                mad_cam_pdu_descriptions_msgs::BasicVehicleContainerHighFrequency _tmp_17516;
                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.push_back(_tmp_17516);
            
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
                        its_container_v2_its_container_msgs::AccelerationControl _tmp_17517;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.push_back(_tmp_17517);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015630\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::LanePosition _tmp_17518;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.push_back(_tmp_17518);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015631\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::SteeringWheelAngle _tmp_17519;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.push_back(_tmp_17519);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015632\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::LateralAcceleration _tmp_17520;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.push_back(_tmp_17520);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015633\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::VerticalAcceleration _tmp_17521;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.push_back(_tmp_17521);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015634\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::PerformanceClass _tmp_17522;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.push_back(_tmp_17522);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015635\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::CenDsrcTollingZone _tmp_17523;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.push_back(_tmp_17523);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015636\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone " << tools::green("present");
                    }
                    
                    // Field name: heading
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        
                        // Field name: heading_value
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_17524 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value = *_tmp_17524;
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
                            logger->debug() << "|\033[38;5;94m015637\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: heading_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_17525 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value = *_tmp_17525;
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
                            logger->debug() << "|\033[38;5;94m015638\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence: " <<
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
                        uint16_t* _tmp_17526 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value = *_tmp_17526;
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
                            logger->debug() << "|\033[38;5;94m015639\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: speed_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                        uint8_t* _tmp_17527 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value = *_tmp_17527;
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
                            logger->debug() << "|\033[38;5;94m015640\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: drive_direction
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _tmp_17528 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_17528;
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
                        logger->debug() << "|\033[38;5;94m015641\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
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
                        uint16_t* _tmp_17529 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value = *_tmp_17529;
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
                            logger->debug() << "|\033[38;5;94m015642\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: vehicle_length_confidence_indication
                        // Enumerated
                        // INT32  min(0) max(4) span(5) datatype(Int32)
                        uint8_t* _tmp_17530 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17530;
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
                            logger->debug() << "|\033[38;5;94m015643\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                    
                    // Field name: vehicle_width
                    // Real
                    // Float
                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                    uint8_t* _tmp_17531 = (uint8_t*) buffer++;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value = *_tmp_17531;
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
                        logger->debug() << "|\033[38;5;94m015644\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width: " <<
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
                        uint16_t* _tmp_17532 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value = *_tmp_17532;
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
                            logger->debug() << "|\033[38;5;94m015645\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longitudinal_acceleration_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_17533 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value = *_tmp_17533;
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
                            logger->debug() << "|\033[38;5;94m015646\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: curvature
                        // Curvature  SEQUENCE
                            //  curvatureValue      CurvatureValue          
                            //  curvatureConfidence CurvatureConfidence     
                        
                        // Field name: curvature_value
                        // Integer
                        // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                        uint16_t* _tmp_17534 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_17534;
                        __aux64__ += -1023;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015647\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
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
                        uint8_t* _tmp_17535 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17535;
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
                            logger->debug() << "|\033[38;5;94m015648\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                    
                    // Field name: curvature_calculation_mode
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _ext_flag_7685 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m015649\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.: " << int(*_ext_flag_7685);
                    }
                    
                    uint8_t* _tmp_17536 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_17536;
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
                        logger->debug() << "|\033[38;5;94m015650\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
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
                        uint16_t* _tmp_17537 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value = *_tmp_17537;
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
                            logger->debug() << "|\033[38;5;94m015651\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: yaw_rate_confidence
                        // Enumerated
                        // INT32  min(0) max(8) span(9) datatype(Int32)
                        uint8_t* _tmp_17538 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17538;
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
                            logger->debug() << "|\033[38;5;94m015652\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0) {
                        // Field name: acceleration_control
                        // BitString
                        // BIT_STRING  min(7) max(7) span(1)
                        uint8_t* _tmp_17539 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_17539 + 7;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015653\033[0m| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << __aux64__;
                        
                        int _if__tmp_17539 = __aux64__;
                        for(int x = 0; x < _if__tmp_17539; x++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[x] = (*__b__ == 1);
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
                        uint8_t* _tmp_17540 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17540;
                        __aux64__ += -1;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015654\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
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
                            uint16_t* _tmp_17541 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_17541;
                            __aux64__ += -511;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015655\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
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
                            uint8_t* _tmp_17542 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_17542;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015656\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
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
                            uint16_t* _tmp_17543 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value = *_tmp_17543;
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
                                logger->debug() << "|\033[38;5;94m015657\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: lateral_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_17544 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value = *_tmp_17544;
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
                                logger->debug() << "|\033[38;5;94m015658\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence: " <<
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
                            uint16_t* _tmp_17545 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value = *_tmp_17545;
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
                                logger->debug() << "|\033[38;5;94m015659\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vertical_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_17546 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value = *_tmp_17546;
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
                                logger->debug() << "|\033[38;5;94m015660\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0) {
                        // Field name: performance_class
                        // Integer
                        // UINT8  min(0) max(7) span(8) datatype(UInt8)
                        uint8_t* _tmp_17547 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17547;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015661\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
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
                            uint8_t* _ext_flag_7692 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015662\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << int(*_ext_flag_7692);
                            }
                            
                            if(*(buffer++)) { 
                                its_container_v2_its_container_msgs::CenDsrcTollingZoneID _tmp_17548;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.push_back(_tmp_17548);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015663\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id " << tools::green("present");
                            }
                            
                            // Field name: protected_zone_latitude
                            // Real
                            // Double
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_17549 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value = *_tmp_17549;
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
                                logger->debug() << "|\033[38;5;94m015664\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: protected_zone_longitude
                            // Real
                            // Double
                            // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_17550 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value = *_tmp_17550;
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
                                logger->debug() << "|\033[38;5;94m015665\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value << " (" << __aux64__ << ")";
                            }
                            
                            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                // Field name: cen_dsrc_tolling_zone_id
                                // Integer
                                // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                uint32_t* _tmp_17551 = (uint32_t*) buffer; buffer += 4;
                                __aux64__ = *_tmp_17551;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015666\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
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
                            if(*_ext_flag_7692) { // from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0]. 
                                uint8_t* _tmp_17552 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_214[*_tmp_17552];
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015667\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << static_cast<unsigned int>(*_tmp_17552);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_17552; i++)
                                    _array_214[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_17552; i++) {
                                    uint16_t* _tmp_17553 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_17553; i++)
                                        buffer++;
                                }
                                
                            }
                    }
            }
            else if(_choice_404 == 1)  // CHOICE HighFrequencyContainer  fieldName(rsu_container_high_frequency)
            {
                mad_cam_pdu_descriptions_msgs::RSUContainerHighFrequency _tmp_17554;
                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.push_back(_tmp_17554);
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_7695 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m015668\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << int(*_ext_flag_7695);
                    }
                    
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::ProtectedCommunicationZonesRSU _tmp_17555;
                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.push_back(_tmp_17555);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015669\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu " << tools::green("present");
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0) {
                        // Field name: protected_communication_zones_rsu
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16)
                        int16_t* _tmp_17556 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_17556;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_17556 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015670\033[0m| SequenceOf ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0]. size: " << int(*_tmp_17556);
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
                        
                        
                        for(int y = 0; y < _if__tmp_17556; y++) {
                            its_container_v2_its_container_msgs::ProtectedCommunicationZone seqof_y;  // SEQUENCE
                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.push_back(seqof_y);
                        
                                // ProtectedCommunicationZone  SEQUENCE
                                    //  protectedZoneType      ProtectedZoneType       
                                    //  expiryTime             TimestampIts          OPTIONAL  
                                    //  protectedZoneLatitude  Latitude                
                                    //  protectedZoneLongitude Longitude               
                                    //  protectedZoneRadius    ProtectedZoneRadius   OPTIONAL  
                                    //  protectedZoneID        ProtectedZoneID       OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_7696 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015671\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].: " << int(*_ext_flag_7696);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::TimestampIts _tmp_17557;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].expiry_time.push_back(_tmp_17557);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015672\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].expiry_time " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::ProtectedZoneRadius _tmp_17558;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius.push_back(_tmp_17558);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015673\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::ProtectedZoneID _tmp_17559;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_id.push_back(_tmp_17559);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015674\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_id " << tools::green("present");
                                }
                                
                                // Field name: protected_zone_type
                                // Enumerated
                                // INT32  min(0) max(1) span(2) datatype(Int32)
                                uint8_t* _ext_flag_7697 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_type.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015675\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_type.: " << int(*_ext_flag_7697);
                                }
                                
                                uint8_t* _tmp_17560 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_17560;
                                __aux64__ += 0;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_type.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_type.value' " << (__aux64__) << " exceeds max allowable (1); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015676\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_type.value);
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].expiry_time.size() != 0) {
                                    // Field name: expiry_time
                                    // Integer
                                    // INT64  min(0) max(4398046511103) span(4398046511104) datatype(Int64)
                                    uint64_t* _tmp_17561 = (uint64_t*)buffer; buffer += 8;
                                    __aux64__ = *_tmp_17561;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].expiry_time[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015677\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].expiry_time[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].expiry_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].expiry_time[0].value' " << (__aux64__) << " exceeds max allowable (4398046511103); message dropped.";
                                        return false;
                                    }
                                }
                                
                                // Field name: protected_zone_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_17562 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_latitude.value = *_tmp_17562;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_latitude.value += -900000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_latitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_latitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015678\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_latitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: protected_zone_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_17563 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_longitude.value = *_tmp_17563;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_longitude.value += -1800000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_longitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_longitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015679\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_longitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius.size() != 0) {
                                    // Field name: protected_zone_radius
                                    // Integer
                                    // UINT8  min(1) max(255) span(255) datatype(UInt8)
                                    uint8_t* _ext_flag_7700 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015680\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].: " << int(*_ext_flag_7700);
                                    }
                                    
                                    if(*_ext_flag_7700) {
                                        uint8_t* _tmp_17565 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_17565) {
                                            uint64_t* _tmp_17566 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = *_tmp_17566;
                                            __aux64__ += INT64_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].value = __aux64__;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_17566 = (uint32_t*) buffer; buffer += 4;
                                            __aux64__ = *_tmp_17566;
                                            __aux64__ += INT32_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].value = __aux64__;
                                        }
                                    }
                                    else
                                    {
                                        uint8_t* _tmp_17564 = (uint8_t*) buffer++;
                                        __aux64__ = *_tmp_17564;
                                        __aux64__ += 1;
                                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].value = __aux64__;
                                    
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015681\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].value) << 
                                                         " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].value);
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_radius[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                            return false;
                                        }
                                        
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_id.size() != 0) {
                                    // Field name: protected_zone_id
                                    // Integer
                                    // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                    uint32_t* _tmp_17567 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_17567;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015682\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_id[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].protected_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_7696) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y]. 
                                    uint8_t* _tmp_17568 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_215[*_tmp_17568];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015683\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[y].: " << static_cast<unsigned int>(*_tmp_17568);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_17568; i++)
                                        _array_215[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_17568; i++) {
                                        uint16_t* _tmp_17569 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_17569; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                    }
                    if(*_ext_flag_7695) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0]. 
                        uint8_t* _tmp_17570 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_216[*_tmp_17570];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015684\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << static_cast<unsigned int>(*_tmp_17570);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_17570; i++)
                            _array_216[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_17570; i++) {
                            uint16_t* _tmp_17571 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_17571; i++)
                                buffer++;
                        }
                        
                    }
            }
            else if(_choice_404 == 2)  // CHOICE HighFrequencyContainer  fieldName(mad_vehicle_container_high_frequency)
            {
                mad_cam_pdu_descriptions_msgs::MADVehicleContainerHighFrequency _tmp_17572;
                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency.push_back(_tmp_17572);
            
                uint16_t* _tmp_17573 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                    // MADVehicleContainerHighFrequency  SEQUENCE
                        //  basicVehicleContainerHighFrequency BasicVehicleContainerHighFrequency     
                        //  madControlModeState                MADControlModeState                    
                    
                    // Field name: basic_vehicle_container_high_frequency
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
                            its_container_v2_its_container_msgs::AccelerationControl _tmp_17574;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.push_back(_tmp_17574);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015685\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::LanePosition _tmp_17575;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.push_back(_tmp_17575);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015686\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::SteeringWheelAngle _tmp_17576;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.push_back(_tmp_17576);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015687\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::LateralAcceleration _tmp_17577;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.push_back(_tmp_17577);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015688\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::VerticalAcceleration _tmp_17578;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.push_back(_tmp_17578);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015689\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::PerformanceClass _tmp_17579;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.push_back(_tmp_17579);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015690\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::CenDsrcTollingZone _tmp_17580;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.push_back(_tmp_17580);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015691\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone " << tools::green("present");
                        }
                        
                        // Field name: heading
                            // Heading  SEQUENCE
                                //  headingValue      HeadingValue          
                                //  headingConfidence HeadingConfidence     
                            
                            // Field name: heading_value
                            // Real
                            // Float
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_17581 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value = *_tmp_17581;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015692\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: heading_confidence
                            // Real
                            // Float
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_17582 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value = *_tmp_17582;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value += 1;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015693\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: speed
                            // Speed  SEQUENCE
                                //  speedValue      SpeedValue          
                                //  speedConfidence SpeedConfidence     
                            
                            // Field name: speed_value
                            // Real
                            // Float
                            // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                            uint16_t* _tmp_17583 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value = *_tmp_17583;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value /= 100.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015694\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: speed_confidence
                            // Real
                            // Float
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                            uint8_t* _tmp_17584 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value = *_tmp_17584;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value += 1;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value /= 100.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015695\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: drive_direction
                        // Enumerated
                        // INT32  min(0) max(2) span(3) datatype(Int32)
                        uint8_t* _tmp_17585 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17585;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015696\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value);
                        }
                        
                        // Field name: vehicle_length
                            // VehicleLength  SEQUENCE
                                //  vehicleLengthValue                VehicleLengthValue                    
                                //  vehicleLengthConfidenceIndication VehicleLengthConfidenceIndication     
                            
                            // Field name: vehicle_length_value
                            // Real
                            // Float
                            // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_17586 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value = *_tmp_17586;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value += 1;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015697\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vehicle_length_confidence_indication
                            // Enumerated
                            // INT32  min(0) max(4) span(5) datatype(Int32)
                            uint8_t* _tmp_17587 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_17587;
                            __aux64__ += 0;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015698\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value);
                            }
                        
                        // Field name: vehicle_width
                        // Real
                        // Float
                        // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_17588 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value = *_tmp_17588;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 62) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value' " << (__aux64__) << " exceeds max allowable (62); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015699\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width: " <<
                                         ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longitudinal_acceleration
                            // LongitudinalAcceleration  SEQUENCE
                                //  longitudinalAccelerationValue      LongitudinalAccelerationValue     
                                //  longitudinalAccelerationConfidence AccelerationConfidence            
                            
                            // Field name: longitudinal_acceleration_value
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_17589 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value = *_tmp_17589;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value += -160;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015700\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: longitudinal_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_17590 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value = *_tmp_17590;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015701\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: curvature
                            // Curvature  SEQUENCE
                                //  curvatureValue      CurvatureValue          
                                //  curvatureConfidence CurvatureConfidence     
                            
                            // Field name: curvature_value
                            // Integer
                            // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                            uint16_t* _tmp_17591 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_17591;
                            __aux64__ += -1023;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015702\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                return false;
                            }
                            
                            // Field name: curvature_confidence
                            // Enumerated
                            // INT32  min(0) max(7) span(8) datatype(Int32)
                            uint8_t* _tmp_17592 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_17592;
                            __aux64__ += 0;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015703\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value);
                            }
                        
                        // Field name: curvature_calculation_mode
                        // Enumerated
                        // INT32  min(0) max(2) span(3) datatype(Int32)
                        uint8_t* _ext_flag_7712 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015704\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.: " << int(*_ext_flag_7712);
                        }
                        
                        uint8_t* _tmp_17593 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17593;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015705\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value);
                        }
                        
                        // Field name: yaw_rate
                            // YawRate  SEQUENCE
                                //  yawRateValue      YawRateValue          
                                //  yawRateConfidence YawRateConfidence     
                            
                            // Field name: yaw_rate_value
                            // Real
                            // Float
                            // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                            uint16_t* _tmp_17594 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value = *_tmp_17594;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value += -32766;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value /= 100.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -32766) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value' " << (__aux64__) << " is less than allowable (-32766); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015706\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: yaw_rate_confidence
                            // Enumerated
                            // INT32  min(0) max(8) span(9) datatype(Int32)
                            uint8_t* _tmp_17595 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_17595;
                            __aux64__ += 0;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015707\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value);
                            }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.size() != 0) {
                            // Field name: acceleration_control
                            // BitString
                            // BIT_STRING  min(7) max(7) span(1)
                            uint8_t* _tmp_17596 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_17596 + 7;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015708\033[0m| cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value: " << __aux64__;
                            
                            int _if__tmp_17596 = __aux64__;
                            for(int z = 0; z < _if__tmp_17596; z++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values[z] = (*__b__ == 1);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (__aux64__) << " is less than allowable (7); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.size() != 0) {
                            // Field name: lane_position
                            // Integer
                            // INT8  min(-1) max(14) span(16) datatype(Int8)
                            uint8_t* _tmp_17597 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_17597;
                            __aux64__ += -1;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015709\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value' " << (__aux64__) << " is less than allowable (-1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 14) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value' " << (__aux64__) << " exceeds max allowable (14); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.size() != 0) {
                            // Field name: steering_wheel_angle
                                // SteeringWheelAngle  SEQUENCE
                                    //  steeringWheelAngleValue      SteeringWheelAngleValue          
                                    //  steeringWheelAngleConfidence SteeringWheelAngleConfidence     
                                
                                // Field name: steering_wheel_angle_value
                                // Integer
                                // INT16  min(-511) max(512) span(1024) datatype(Int16)
                                uint16_t* _tmp_17598 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_17598;
                                __aux64__ += -511;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015710\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -511) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " is less than allowable (-511); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 512) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " exceeds max allowable (512); message dropped.";
                                    return false;
                                }
                                
                                // Field name: steering_wheel_angle_confidence
                                // Integer
                                // UINT8  min(1) max(127) span(127) datatype(UInt8)
                                uint8_t* _tmp_17599 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_17599;
                                __aux64__ += 1;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015711\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                    return false;
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.size() != 0) {
                            // Field name: lateral_acceleration
                                // LateralAcceleration  SEQUENCE
                                    //  lateralAccelerationValue      LateralAccelerationValue     
                                    //  lateralAccelerationConfidence AccelerationConfidence       
                                
                                // Field name: lateral_acceleration_value
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_17600 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value = *_tmp_17600;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value += -160;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015712\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lateral_acceleration_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_17601 = (uint8_t*) buffer++;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value = *_tmp_17601;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015713\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value << " (" << __aux64__ << ")";
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.size() != 0) {
                            // Field name: vertical_acceleration
                                // VerticalAcceleration  SEQUENCE
                                    //  verticalAccelerationValue      VerticalAccelerationValue     
                                    //  verticalAccelerationConfidence AccelerationConfidence        
                                
                                // Field name: vertical_acceleration_value
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_17602 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value = *_tmp_17602;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value += -160;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015714\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: vertical_acceleration_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_17603 = (uint8_t*) buffer++;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value = *_tmp_17603;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015715\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value << " (" << __aux64__ << ")";
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.size() != 0) {
                            // Field name: performance_class
                            // Integer
                            // UINT8  min(0) max(7) span(8) datatype(UInt8)
                            uint8_t* _tmp_17604 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_17604;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015716\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.size() != 0) {
                            // Field name: cen_dsrc_tolling_zone
                                // CenDsrcTollingZone  SEQUENCE
                                    //  protectedZoneLatitude  Latitude                 
                                    //  protectedZoneLongitude Longitude                
                                    //  cenDsrcTollingZoneID   CenDsrcTollingZoneID   OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_7719 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015717\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].: " << int(*_ext_flag_7719);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::CenDsrcTollingZoneID _tmp_17605;
                                    ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.push_back(_tmp_17605);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015718\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id " << tools::green("present");
                                }
                                
                                // Field name: protected_zone_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_17606 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value = *_tmp_17606;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value += -900000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015719\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: protected_zone_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_17607 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value = *_tmp_17607;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value += -1800000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015720\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                    // Field name: cen_dsrc_tolling_zone_id
                                    // Integer
                                    // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                    uint32_t* _tmp_17608 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_17608;
                                    ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015721\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_7719) { // from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0]. 
                                    uint8_t* _tmp_17609 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_217[*_tmp_17609];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015722\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].: " << static_cast<unsigned int>(*_tmp_17609);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_17609; i++)
                                        _array_217[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_17609; i++) {
                                        uint16_t* _tmp_17610 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_17610; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                    
                    // Field name: mad_control_mode_state
                        // MADControlModeState  SEQUENCE
                            //  madControlMode       MADControlMode          
                            //  madDrivingMode       MADDrivingMode          
                            //  adviceTimeConsidered GenerationDeltaTime   OPTIONAL  
                        if(*(buffer++)) { 
                            mad_cam_pdu_descriptions_msgs::GenerationDeltaTime _tmp_17611;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.push_back(_tmp_17611);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015723\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered " << tools::green("present");
                        }
                        
                        // Field name: mad_control_mode
                        // Enumerated
                        // INT32  min(0) max(7) span(8) datatype(Int32)
                        uint8_t* _ext_flag_7722 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015724\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.: " << int(*_ext_flag_7722);
                        }
                        
                        uint8_t* _tmp_17612 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17612;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015725\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value);
                        }
                        
                        // Field name: mad_driving_mode
                        // Enumerated
                        // INT32  min(0) max(3) span(4) datatype(Int32)
                        uint8_t* _tmp_17613 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17613;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015726\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value);
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.size() != 0) {
                            // Field name: advice_time_considered
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_17614 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_17614;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015727\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
            }
            else
            {
                uint16_t* _tmp_17615 = (uint16_t*)buffer;  // OpenType length
                buffer += 2 + int(*_tmp_17615);            // Ignoring opentype data
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() != 0) {
                // Field name: low_frequency_container
                // Choice
                uint8_t* _ext_flag_7724 = (uint8_t*)buffer++; // ext flag
                
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency   
                   // #1  madVehicleContainerLowFrequency   MADVehicleContainerLowFrequency   (ext field)
                uint8_t _choice_405 = *(buffer++);
                
                if(*_ext_flag_7724)
                    _choice_405 += 0 + 1; // Ext addition
                
                if(_choice_405 == 0) {
                    mad_cam_pdu_descriptions_msgs::BasicVehicleContainerLowFrequency _tmp_17616;
                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.push_back(_tmp_17616);
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        
                        // Field name: vehicle_role
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_17617 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17617;
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
                            logger->debug() << "|\033[38;5;94m015728\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        // Field name: exterior_lights
                        // BitString
                        // BIT_STRING  min(8) max(8) span(1)
                        uint8_t* _tmp_17618 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_17618 + 8;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015729\033[0m| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << __aux64__;
                        
                        int _if__tmp_17618 = __aux64__;
                        for(int a = 0; a < _if__tmp_17618; a++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values[a] = (*__b__ == 1);
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
                        int16_t* _tmp_17619 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_17619;
                        
                        int _if__tmp_17619 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015730\033[0m| SequenceOf ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history. size: " << int(*_tmp_17619);
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
                        
                        
                        for(int b = 0; b < _if__tmp_17619; b++) {
                            its_container_v2_its_container_msgs::PathPoint seqof_b;  // SEQUENCE
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements.push_back(seqof_b);
                        
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::PathDeltaTime _tmp_17620;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time.push_back(_tmp_17620);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015731\033[0m| ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time " << tools::green("present");
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
                                    uint32_t* _tmp_17621 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_latitude.value = *_tmp_17621;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_latitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_latitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_latitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015732\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_latitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_latitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_latitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_longitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_17622 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_longitude.value = *_tmp_17622;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_longitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_longitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_longitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015733\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_longitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_longitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_longitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_altitude
                                    // Real
                                    // Float
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_17623 = (uint16_t*) buffer; buffer += 2;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_altitude.value = *_tmp_17623;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_altitude.value += -12700;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_altitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_altitude.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015734\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_altitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_altitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_position.delta_altitude.value << " (" << __aux64__ << ")";
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time.size() != 0) {
                                    // Field name: path_delta_time
                                    // Real
                                    // Float
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    uint8_t* _ext_flag_7729 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015735\033[0m| Reading ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].: " << int(*_ext_flag_7729);
                                    }
                                    
                                    if(*_ext_flag_7729) {
                                        uint8_t* _tmp_17625 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_17625) {
                                            uint64_t* _tmp_17626 = (uint64_t*)buffer; buffer += 8;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value = *_tmp_17626;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value += INT64_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value /= 100.0;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_17626 = (uint32_t*) buffer; buffer += 4;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value = *_tmp_17626;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value += INT32_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value /= 100.0;
                                        }
                                    }
                                    else
                                    {
                                        uint16_t* _tmp_17624 = (uint16_t*) buffer; buffer += 2;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value = *_tmp_17624;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value += 1;
                                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value /= 100.0;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015736\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0]: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[b].path_delta_time[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                }
                else if(_choice_405 == 1)  // CHOICE LowFrequencyContainer  fieldName(mad_vehicle_container_low_frequency)
                {
                    mad_cam_pdu_descriptions_msgs::MADVehicleContainerLowFrequency _tmp_17627;
                    ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency.push_back(_tmp_17627);
                
                    uint16_t* _tmp_17628 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                        // MADVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleDimensions   VehicleDimensions     
                            //  vehicleCapabilities MADCapabilities       
                            //  localDestination    LocalDestination      
                        
                        // Field name: vehicle_dimensions
                            // VehicleDimensions  SEQUENCE
                                //  posCentMass PosCentMass          
                                //  posFrontAx  PosFrontAx           
                                //  wheelBase   WheelBaseVehicle     
                                //  vehicleMass VehicleMass          
                            
                            // Field name: pos_cent_mass
                            // Real
                            // Float
                            // FLOAT  min(1) max(63) span(63) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_17629 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value = *_tmp_17629;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value += 1;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 63) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value' " << (__aux64__) << " exceeds max allowable (63); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015737\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: pos_front_ax
                            // Real
                            // Float
                            // FLOAT  min(1) max(20) span(20) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_17630 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value = *_tmp_17630;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value += 1;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 20) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value' " << (__aux64__) << " exceeds max allowable (20); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015738\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: wheel_base
                            // Real
                            // Float
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_17631 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value = *_tmp_17631;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value += 1;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015739\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vehicle_mass
                            // Real
                            // Float
                            // FLOAT  min(1) max(1024) span(1024) scaleDivisor(1.0E-5) dataType(Float)
                            uint16_t* _tmp_17632 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value = *_tmp_17632;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value += 1;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value /= 1.0E-5;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1024) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value' " << (__aux64__) << " exceeds max allowable (1024); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015740\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: vehicle_capabilities
                            // MADCapabilities  SEQUENCE
                                //  curvatureValueMin    CurvatureValue        
                                //  curvatureValueMax    CurvatureValue        
                                //  accelerationValueMin AccelerationValue     
                                //  accelerationValueMax AccelerationValue     
                                //  possibleLevelOfInput LevelsOfControl       
                            
                            // Field name: curvature_value_min
                            // Integer
                            // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                            uint16_t* _tmp_17633 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_17633;
                            __aux64__ += -1023;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015741\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                return false;
                            }
                            
                            // Field name: curvature_value_max
                            // Integer
                            // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                            uint16_t* _tmp_17634 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_17634;
                            __aux64__ += -1023;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015742\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                return false;
                            }
                            
                            // Field name: acceleration_value_min
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_17635 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value = *_tmp_17635;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value += -160;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015743\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: acceleration_value_max
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_17636 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value = *_tmp_17636;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value += -160;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015744\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: possible_level_of_input
                            // BitString
                            // BIT_STRING  min(3) max(3) span(1)
                            uint8_t* _ext_flag_7736 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015745\033[0m| Reading ext flag from ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.: " << int(*_ext_flag_7736);
                            }
                            
                            uint8_t* _tmp_17637 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_17637 + 3;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015746\033[0m| cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value: " << __aux64__;
                            
                            int _if__tmp_17637 = __aux64__;
                            for(int c = 0; c < _if__tmp_17637; c++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values[c] = (*__b__ == 1);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 3) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (__aux64__) << " is less than allowable (3); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                return false;
                            }
                        
                        // Field name: local_destination
                            // LocalDestination  SEQUENCE
                                //  deltaReferencePosition DeltaReferencePosition     
                                //  speedValue             SpeedValue               OPTIONAL  
                                //  headingValue           HeadingValue             OPTIONAL  
                            if(*(buffer++)) { 
                                mad_cam_pdu_descriptions_msgs::SpeedValue _tmp_17638;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.push_back(_tmp_17638);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015747\033[0m| ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                mad_cam_pdu_descriptions_msgs::HeadingValue _tmp_17639;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.push_back(_tmp_17639);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015748\033[0m| ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value " << tools::green("present");
                            }
                            
                            // Field name: delta_reference_position
                                // DeltaReferencePosition  SEQUENCE
                                    //  deltaLatitude  DeltaLatitude      
                                    //  deltaLongitude DeltaLongitude     
                                    //  deltaAltitude  DeltaAltitude      
                                
                                // Field name: delta_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_17640 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value = *_tmp_17640;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value += -131071;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015749\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: delta_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_17641 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value = *_tmp_17641;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value += -131071;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015750\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: delta_altitude
                                // Real
                                // Float
                                // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_17642 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value = *_tmp_17642;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value += -12700;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015751\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value << " (" << __aux64__ << ")";
                                }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.size() != 0) {
                                // Field name: speed_value
                                // Real
                                // Float
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_17643 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value = *_tmp_17643;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015752\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0]: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value << " (" << __aux64__ << ")";
                                }
                            }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.size() != 0) {
                                // Field name: heading_value
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_17644 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value = *_tmp_17644;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015753\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0]: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value << " (" << __aux64__ << ")";
                                }
                            }
                }
                else
                {
                    uint16_t* _tmp_17645 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_17645);            // Ignoring opentype data
                }
            }
            
            if(ros->cam.cam_parameters.special_vehicle_container.size() != 0) {
                // Field name: special_vehicle_container
                // Choice
                uint8_t* _ext_flag_7742 = (uint8_t*)buffer++; // ext flag
                
                   // #0  publicTransportContainer   PublicTransportContainer   
                   // #1  specialTransportContainer   SpecialTransportContainer   
                   // #2  dangerousGoodsContainer   DangerousGoodsContainer   
                   // #3  roadWorksContainerBasic   RoadWorksContainerBasic   
                   // #4  rescueContainer   RescueContainer   
                   // #5  emergencyContainer   EmergencyContainer   
                   // #6  safetyCarContainer   SafetyCarContainer   
                uint8_t _choice_406 = *(buffer++);
                
                if(*_ext_flag_7742)
                    _choice_406 += 6 + 1; // Ext addition
                
                if(_choice_406 == 0) {
                    mad_cam_pdu_descriptions_msgs::PublicTransportContainer _tmp_17646;
                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.push_back(_tmp_17646);
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::PtActivation _tmp_17647;
                            ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.push_back(_tmp_17647);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015754\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation " << tools::green("present");
                        }
                        
                        // Field name: embarkation_status
                        // Value
                        // Boolean
                        uint8_t* _tmp_17648 = (uint8_t*)buffer;
                        buffer++;
                        ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value = (*_tmp_17648 == 1);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015755\033[0m| \033[37;1mbool  \033[0m ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.: " << (*_tmp_17648);
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0) {
                            // Field name: pt_activation
                                // PtActivation  SEQUENCE
                                    //  ptActivationType PtActivationType     
                                    //  ptActivationData PtActivationData     
                                
                                // Field name: pt_activation_type
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_17649 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_17649;
                                ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015756\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
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
                                uint8_t* _tmp_17650 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = *_tmp_17650 + 1;
                                
                                int _if__tmp_17650 = __aux64__;
                                for(int d = 0; d < _if__tmp_17650; d++) {
                                    int8_t* __n__ = (int8_t*)buffer++;
                                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.push_back(*__n__);
                                }
                        }
                }
                else if(_choice_406 == 1)  // CHOICE SpecialVehicleContainer  fieldName(special_transport_container)
                {
                    mad_cam_pdu_descriptions_msgs::SpecialTransportContainer _tmp_17651;
                    ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.push_back(_tmp_17651);
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        
                        // Field name: special_transport_type
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        uint8_t* _tmp_17652 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_17652 + 4;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015757\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << __aux64__;
                        
                        int _if__tmp_17652 = __aux64__;
                        for(int e = 0; e < _if__tmp_17652; e++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values[e] = (*__b__ == 1);
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
                        uint8_t* _tmp_17653 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_17653 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015758\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_17653 = __aux64__;
                        for(int f = 0; f < _if__tmp_17653; f++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[f] = (*__b__ == 1);
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
                else if(_choice_406 == 2)  // CHOICE SpecialVehicleContainer  fieldName(dangerous_goods_container)
                {
                    mad_cam_pdu_descriptions_msgs::DangerousGoodsContainer _tmp_17654;
                    ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.push_back(_tmp_17654);
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        
                        // Field name: dangerous_goods_basic
                        // Enumerated
                        // INT32  min(0) max(19) span(20) datatype(Int32)
                        uint8_t* _tmp_17655 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_17655;
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
                            logger->debug() << "|\033[38;5;94m015759\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                }
                else if(_choice_406 == 3)  // CHOICE SpecialVehicleContainer  fieldName(road_works_container_basic)
                {
                    mad_cam_pdu_descriptions_msgs::RoadWorksContainerBasic _tmp_17656;
                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic.push_back(_tmp_17656);
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::RoadworksSubCauseCode _tmp_17657;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.push_back(_tmp_17657);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015760\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::ClosedLanes _tmp_17658;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.push_back(_tmp_17658);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015761\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes " << tools::green("present");
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0) {
                            // Field name: roadworks_sub_cause_code
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_17659 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_17659;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015762\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
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
                        uint8_t* _tmp_17660 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_17660 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015763\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_17660 = __aux64__;
                        for(int g = 0; g < _if__tmp_17660; g++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[g] = (*__b__ == 1);
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
                                uint8_t* _ext_flag_7744 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015764\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << int(*_ext_flag_7744);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::HardShoulderStatus _tmp_17661;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.push_back(_tmp_17661);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015765\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::HardShoulderStatus _tmp_17662;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.push_back(_tmp_17662);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015766\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::DrivingLaneStatus _tmp_17663;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.push_back(_tmp_17663);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015767\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status " << tools::green("present");
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0) {
                                    // Field name: innerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_17664 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_17664;
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
                                        logger->debug() << "|\033[38;5;94m015768\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0) {
                                    // Field name: outerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_17665 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_17665;
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
                                        logger->debug() << "|\033[38;5;94m015769\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0) {
                                    // Field name: driving_lane_status
                                    // BitString
                                    // BIT_STRING  min(1) max(13) span(13)
                                    uint8_t* _tmp_17666 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_17666 + 1;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015770\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << __aux64__;
                                    
                                    int _if__tmp_17666 = __aux64__;
                                    for(int h = 0; h < _if__tmp_17666; h++) {
                                        uint8_t __c__;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[h] = (*__b__ == 1);
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
                                if(*_ext_flag_7744) { // from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0]. 
                                    uint8_t* _tmp_17667 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_218[*_tmp_17667];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015771\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << static_cast<unsigned int>(*_tmp_17667);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_17667; i++)
                                        _array_218[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_17667; i++) {
                                        uint16_t* _tmp_17668 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_17668; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                }
                else if(_choice_406 == 4)  // CHOICE SpecialVehicleContainer  fieldName(rescue_container)
                {
                    mad_cam_pdu_descriptions_msgs::RescueContainer _tmp_17669;
                    ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.push_back(_tmp_17669);
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_17670 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_17670 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015772\033[0m| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_17670 = __aux64__;
                        for(int i = 0; i < _if__tmp_17670; i++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[i] = (*__b__ == 1);
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
                else if(_choice_406 == 5)  // CHOICE SpecialVehicleContainer  fieldName(emergency_container)
                {
                    mad_cam_pdu_descriptions_msgs::EmergencyContainer _tmp_17671;
                    ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.push_back(_tmp_17671);
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::CauseCode _tmp_17672;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.push_back(_tmp_17672);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015773\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::EmergencyPriority _tmp_17673;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.push_back(_tmp_17673);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015774\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_17674 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_17674 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015775\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_17674 = __aux64__;
                        for(int j = 0; j < _if__tmp_17674; j++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[j] = (*__b__ == 1);
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
                                uint8_t* _ext_flag_7747 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015776\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << int(*_ext_flag_7747);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_17675 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_17675;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015777\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
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
                                uint8_t* _tmp_17676 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_17676;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015778\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
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
                                if(*_ext_flag_7747) { // from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_17677 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_219[*_tmp_17677];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015779\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_17677);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_17677; i++)
                                        _array_219[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_17677; i++) {
                                        uint16_t* _tmp_17678 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_17678; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0) {
                            // Field name: emergency_priority
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            uint8_t* _tmp_17679 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_17679 + 2;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015780\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << __aux64__;
                            
                            int _if__tmp_17679 = __aux64__;
                            for(int k = 0; k < _if__tmp_17679; k++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[k] = (*__b__ == 1);
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
                else if(_choice_406 == 6)  // CHOICE SpecialVehicleContainer  fieldName(safety_car_container)
                {
                    mad_cam_pdu_descriptions_msgs::SafetyCarContainer _tmp_17680;
                    ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.push_back(_tmp_17680);
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::CauseCode _tmp_17681;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.push_back(_tmp_17681);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015781\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::TrafficRule _tmp_17682;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.push_back(_tmp_17682);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015782\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::SpeedLimit _tmp_17683;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.push_back(_tmp_17683);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015783\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_17684 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_17684 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015784\033[0m| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_17684 = __aux64__;
                        for(int l = 0; l < _if__tmp_17684; l++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[l] = (*__b__ == 1);
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
                                uint8_t* _ext_flag_7748 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015785\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << int(*_ext_flag_7748);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_17685 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_17685;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015786\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
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
                                uint8_t* _tmp_17686 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_17686;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015787\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
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
                                if(*_ext_flag_7748) { // from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_17687 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_220[*_tmp_17687];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015788\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_17687);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_17687; i++)
                                        _array_220[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_17687; i++) {
                                        uint16_t* _tmp_17688 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_17688; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0) {
                            // Field name: traffic_rule
                            // Enumerated
                            // INT32  min(0) max(3) span(4) datatype(Int32)
                            uint8_t* _ext_flag_7749 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015789\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].: " << int(*_ext_flag_7749);
                            }
                            
                            uint8_t* _tmp_17689 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_17689;
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
                                logger->debug() << "|\033[38;5;94m015790\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0) {
                            // Field name: speed_limit
                            // Integer
                            // UINT8  min(1) max(255) span(255) datatype(UInt8)
                            uint8_t* _tmp_17690 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_17690;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015791\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
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
                    uint16_t* _tmp_17691 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_17691);            // Ignoring opentype data
                }
            }
            if(*_ext_flag_7664) { // from ros->cam.cam_parameters. 
                uint8_t* _tmp_17692 = (uint8_t*) buffer++;  // number of extensions
                bool _array_221[*_tmp_17692];
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m015792\033[0m| Reading number of exts from ros->cam.cam_parameters.: " << static_cast<unsigned int>(*_tmp_17692);
                
                // Extensions bytemap
                for(int i = 0; i < *_tmp_17692; i++)
                    _array_221[i] = (*buffer++) != 0;
                
                // Discarding unknown OpenType containers
                for(int i = 0; i < *_tmp_17692; i++) {
                    uint16_t* _tmp_17693 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                    if(debug) {
                    }
                
                    for(int i = 0; i < *_tmp_17693; i++)
                        buffer++;
                }
                
            }
	
	        return true;
        }
    }
}