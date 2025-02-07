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
#include <mad_cam_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_mad_cam_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const mad_cam_pdu_descriptions_msgs::MADCAM::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<mad_cam_pdu_descriptions_msgs::msg::MADCAM>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const mad_cam_pdu_descriptions_msgs::msg::MADCAM* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // MADCAM  SEQUENCE
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
            logger->debug() << "|\033[38;5;94m015446\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_17272 = (uint8_t*) buffer++;
        *_tmp_17272 = ros->hheader.protocol_version.value; 
        __aux64__ = ros->hheader.protocol_version.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.protocol_version.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'hheader.protocol_version.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(ItsPduHeader_messageID) name(message_id) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m015447\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_17273 = (uint8_t*) buffer++;
        *_tmp_17273 = ros->hheader.message_id.value; 
        __aux64__ = ros->hheader.message_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.message_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'hheader.message_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(StationID) name(station_id) extGroup(0)
        // Integer
        
        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
        if(debug) {
            logger->debug() << "|\033[38;5;94m015448\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_17274 = (uint32_t*) buffer; buffer += 4;
        *_tmp_17274 = ros->hheader.station_id.value; 
        __aux64__ = ros->hheader.station_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'hheader.station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->warning() << "Error: Value in 'hheader.station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
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
            logger->debug() << "|\033[38;5;94m015449\033[0m| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
                         " cam.generation_delta_time.value: " << ros->cam.generation_delta_time.value;
        }
        
        uint16_t* _tmp_17275 = (uint16_t*) buffer; buffer += 2;
        *_tmp_17275 = ros->cam.generation_delta_time.value; 
        __aux64__ = ros->cam.generation_delta_time.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'cam.generation_delta_time.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->warning() << "Error: Value in 'cam.generation_delta_time.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
            return -1;
        }
        
        // Field:  type(CamParameters) name(cam_parameters) extGroup(0)
            // CamParameters  SEQUENCE
                //  basicContainer          BasicContainer              
                //  highFrequencyContainer  HighFrequencyContainer      
                //  lowFrequencyContainer   LowFrequencyContainer     OPTIONAL  
                //  specialVehicleContainer SpecialVehicleContainer   OPTIONAL  
                //  ...
            uint8_t* _ext_flag_7553 = (uint8_t*) buffer++;  // Write extension flag for CamParameters
            *_ext_flag_7553 = 0;  
            
            // Optional fields bytemap
            char* _tmp_17276 = (char*) buffer++;
            *_tmp_17276 = (ros->cam.cam_parameters.low_frequency_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m015450\033[0m| Optional field low_frequency_container = " << *_tmp_17276;
            char* _tmp_17277 = (char*) buffer++;
            *_tmp_17277 = (ros->cam.cam_parameters.special_vehicle_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m015451\033[0m| Optional field special_vehicle_container = " << *_tmp_17277;
            
            // Field:  type(BasicContainer) name(basic_container) extGroup(0)
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_7554 = (uint8_t*) buffer++;  // Write extension flag for BasicContainer
                *_ext_flag_7554 = 0;  
                
                // Optional fields bytemap
                
                // Field:  type(StationType) name(station_type) extGroup(0)
                // Integer
                
                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m015452\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
                                 " cam.cam_parameters.basic_container.station_type.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.station_type.value);
                }
                
                uint8_t* _tmp_17278 = (uint8_t*) buffer++;
                *_tmp_17278 = ros->cam.cam_parameters.basic_container.station_type.value; 
                __aux64__ = ros->cam.cam_parameters.basic_container.station_type.value;
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                    logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
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
                        logger->debug() << "|\033[38;5;94m015453\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.latitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    }
                    
                    double _tmp_17280 = ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    _tmp_17280 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_17280);
                    _tmp_17280 -= -900000000;
                    uint32_t* _tmp_17279 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_17279 = static_cast<uint32_t>(_tmp_17280);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(Longitude) name(longitude) extGroup(0)
                    // Real
                    
                    // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m015454\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.longitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    }
                    
                    double _tmp_17282 = ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    _tmp_17282 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_17282);
                    _tmp_17282 -= -1800000000;
                    uint32_t* _tmp_17281 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_17281 = static_cast<uint32_t>(_tmp_17282);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
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
                            logger->debug() << "|\033[38;5;94m015455\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        }
                        
                        float _tmp_17284 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        _tmp_17284 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17284);
                        uint16_t* _tmp_17283 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_17283 = static_cast<uint16_t>(_tmp_17284);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015456\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        }
                        
                        float _tmp_17286 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        _tmp_17286 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17286);
                        uint16_t* _tmp_17285 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_17285 = static_cast<uint16_t>(_tmp_17286);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015457\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        }
                        
                        float _tmp_17288 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        _tmp_17288 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17288);
                        uint16_t* _tmp_17287 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_17287 = static_cast<uint16_t>(_tmp_17288);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
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
                            logger->debug() << "|\033[38;5;94m015458\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value: " << ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        }
                        
                        float _tmp_17290 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        _tmp_17290 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17290);
                        _tmp_17290 -= -100000;
                        uint32_t* _tmp_17289 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_17289 = static_cast<uint32_t>(_tmp_17290);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -100000) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") less than (-100000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 800001) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") exceeds max allowable (800001); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015459\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                        
                        uint8_t* _tmp_17291 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17291 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value; 
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                            return -1;
                        }
                
                if(*_ext_flag_7554) {
                }
            
            // Field:  type(HighFrequencyContainer) name(high_frequency_container) extGroup(0)
            // Choice
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency
               // #2  madVehicleContainerHighFrequency   MADVehicleContainerHighFrequency
            uint8_t* _ext_flag_7563 = (uint8_t*) buffer; 
            buffer++;
            *_ext_flag_7563 = 0; 
            
            uint8_t* _choice_401 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.size() != 0) {  // CHOICE 0  fieldType(HighFrequencyContainer) 
                *_choice_401 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m015460\033[0m| Choice selection: 0";
            
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
                    char* _tmp_17293 = (char*) buffer++;
                    *_tmp_17293 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015461\033[0m| Optional field acceleration_control = " << *_tmp_17293;
                    char* _tmp_17294 = (char*) buffer++;
                    *_tmp_17294 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015462\033[0m| Optional field lane_position = " << *_tmp_17294;
                    char* _tmp_17295 = (char*) buffer++;
                    *_tmp_17295 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015463\033[0m| Optional field steering_wheel_angle = " << *_tmp_17295;
                    char* _tmp_17296 = (char*) buffer++;
                    *_tmp_17296 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015464\033[0m| Optional field lateral_acceleration = " << *_tmp_17296;
                    char* _tmp_17297 = (char*) buffer++;
                    *_tmp_17297 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015465\033[0m| Optional field vertical_acceleration = " << *_tmp_17297;
                    char* _tmp_17298 = (char*) buffer++;
                    *_tmp_17298 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015466\033[0m| Optional field performance_class = " << *_tmp_17298;
                    char* _tmp_17299 = (char*) buffer++;
                    *_tmp_17299 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015467\033[0m| Optional field cen_dsrc_tolling_zone = " << *_tmp_17299;
                    
                    // Field:  type(Heading) name(heading) extGroup(0)
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015468\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        }
                        
                        float _tmp_17301 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        _tmp_17301 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17301);
                        uint16_t* _tmp_17300 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_17300 = static_cast<uint16_t>(_tmp_17301);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(HeadingConfidence) name(heading_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015469\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value);
                        }
                        
                        float _tmp_17303 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value;
                        _tmp_17303 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17303);
                        _tmp_17303 -= 1;
                        uint8_t* _tmp_17302 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_17302 = static_cast<uint8_t>(_tmp_17303);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
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
                            logger->debug() << "|\033[38;5;94m015470\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        }
                        
                        float _tmp_17305 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        _tmp_17305 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17305);
                        uint16_t* _tmp_17304 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_17304 = static_cast<uint16_t>(_tmp_17305);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SpeedConfidence) name(speed_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015471\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value);
                        }
                        
                        float _tmp_17307 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value;
                        _tmp_17307 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17307);
                        _tmp_17307 -= 1;
                        uint8_t* _tmp_17306 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_17306 = static_cast<uint8_t>(_tmp_17307);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(DriveDirection) name(drive_direction) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(2) span(3) dataType(Int32)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m015472\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value);
                    }
                    
                    uint8_t* _tmp_17308 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_17308 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value; 
                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
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
                            logger->debug() << "|\033[38;5;94m015473\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        }
                        
                        float _tmp_17310 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        _tmp_17310 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17310);
                        _tmp_17310 -= 1;
                        uint16_t* _tmp_17309 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_17309 = static_cast<uint16_t>(_tmp_17310);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(VehicleLengthConfidenceIndication) name(vehicle_length_confidence_indication) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(4) span(5) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015474\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                        
                        uint8_t* _tmp_17311 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17311 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") exceeds max allowable (4); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(VehicleWidth) name(vehicle_width) extGroup(0)
                    // Real
                    
                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m015475\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value);
                    }
                    
                    float _tmp_17313 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value;
                    _tmp_17313 *= 10.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_17313);
                    _tmp_17313 -= 1;
                    uint8_t* _tmp_17312 = (uint8_t*) buffer; buffer += 1;
                    *_tmp_17312 = static_cast<uint8_t>(_tmp_17313);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' (" << __aux64__ << ") less than (1); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 62) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
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
                            logger->debug() << "|\033[38;5;94m015476\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        }
                        
                        float _tmp_17315 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        _tmp_17315 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17315);
                        _tmp_17315 -= -160;
                        uint16_t* _tmp_17314 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_17314 = static_cast<uint16_t>(_tmp_17315);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(AccelerationConfidence) name(longitudinal_acceleration_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015477\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value);
                        }
                        
                        float _tmp_17317 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                        _tmp_17317 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17317);
                        uint8_t* _tmp_17316 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_17316 = static_cast<uint8_t>(_tmp_17317);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 102) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
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
                            logger->debug() << "|\033[38;5;94m015478\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        }
                        
                        uint16_t* _tmp_17318 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value - -1023;
                        *_tmp_17318 = __aux64__;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(CurvatureConfidence) name(curvature_confidence) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(7) span(8) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015479\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                        
                        uint8_t* _tmp_17319 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17319 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(CurvatureCalculationMode) name(curvature_calculation_mode) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(2) span(3) dataType(Int32)
                    uint8_t* _ext_flag_7576 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m015480\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value);
                    }
                    
                    uint8_t* _tmp_17320 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_17320 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value; 
                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
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
                            logger->debug() << "|\033[38;5;94m015481\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        }
                        
                        float _tmp_17322 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        _tmp_17322 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17322);
                        _tmp_17322 -= -32766;
                        uint16_t* _tmp_17321 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_17321 = static_cast<uint16_t>(_tmp_17322);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -32766) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") less than (-32766); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(YawRateConfidence) name(yaw_rate_confidence) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(8) span(9) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015482\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                        
                        uint8_t* _tmp_17323 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17323 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 8) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") exceeds max allowable (8); message dropped.";
                            return -1;
                        }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0) {
                        // Field:  type(AccelerationControl) name(acceleration_control) extGroup(0)
                        // BitString
                        // BIT_STRING  min(7) max(7) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015483\033[0m| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size());
                        
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() < 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " is less than allowable (7); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_17324 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size();
                        if(__aux64__ > 7) __aux64__ = 7;
                        *_tmp_17324 = __aux64__ - 7;
                        buffer += 1;
                        
                        int __ifi = __aux64__;
                        for(int i = 0; i < __ifi; i++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[i]? 1: 0);
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0) {
                        // Field:  type(LanePosition) name(lane_position) extGroup(0)
                        // Integer
                        
                        // INT8  min(-1) max(14) span(16) dataType(Int8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015484\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value);
                        }
                        
                        uint8_t* _tmp_17325 = (uint8_t*) buffer++;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value - -1;
                        *_tmp_17325 = __aux64__;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' (" << __aux64__ << ") less than (-1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 14) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' (" << __aux64__ << ") exceeds max allowable (14); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() != 0) {
                        // Field:  type(SteeringWheelAngle) name(steering_wheel_angle) extGroup(0)
                            // SteeringWheelAngle  SEQUENCE
                                //  steeringWheelAngleValue      SteeringWheelAngleValue          
                                //  steeringWheelAngleConfidence SteeringWheelAngleConfidence     
                            // Optional fields bytemap
                            
                            // Field:  type(SteeringWheelAngleValue) name(steering_wheel_angle_value) extGroup(0)
                            // Integer
                            
                            // INT16  min(-511) max(512) span(1024) dataType(Int16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015485\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            }
                            
                            uint16_t* _tmp_17326 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value - -511;
                            *_tmp_17326 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -511) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") less than (-511); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 512) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") exceeds max allowable (512); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(SteeringWheelAngleConfidence) name(steering_wheel_angle_confidence) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(127) span(127) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015486\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                            }
                            
                            uint8_t* _tmp_17327 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value - 1;
                            *_tmp_17327 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() != 0) {
                        // Field:  type(LateralAcceleration) name(lateral_acceleration) extGroup(0)
                            // LateralAcceleration  SEQUENCE
                                //  lateralAccelerationValue      LateralAccelerationValue     
                                //  lateralAccelerationConfidence AccelerationConfidence       
                            // Optional fields bytemap
                            
                            // Field:  type(LateralAccelerationValue) name(lateral_acceleration_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015487\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            }
                            
                            float _tmp_17329 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            _tmp_17329 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17329);
                            _tmp_17329 -= -160;
                            uint16_t* _tmp_17328 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17328 = static_cast<uint16_t>(_tmp_17329);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationConfidence) name(lateral_acceleration_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015488\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value);
                            }
                            
                            float _tmp_17331 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value;
                            _tmp_17331 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17331);
                            uint8_t* _tmp_17330 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_17330 = static_cast<uint8_t>(_tmp_17331);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() != 0) {
                        // Field:  type(VerticalAcceleration) name(vertical_acceleration) extGroup(0)
                            // VerticalAcceleration  SEQUENCE
                                //  verticalAccelerationValue      VerticalAccelerationValue     
                                //  verticalAccelerationConfidence AccelerationConfidence        
                            // Optional fields bytemap
                            
                            // Field:  type(VerticalAccelerationValue) name(vertical_acceleration_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015489\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            }
                            
                            float _tmp_17333 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            _tmp_17333 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17333);
                            _tmp_17333 -= -160;
                            uint16_t* _tmp_17332 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17332 = static_cast<uint16_t>(_tmp_17333);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationConfidence) name(vertical_acceleration_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015490\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value);
                            }
                            
                            float _tmp_17335 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value;
                            _tmp_17335 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17335);
                            uint8_t* _tmp_17334 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_17334 = static_cast<uint8_t>(_tmp_17335);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0) {
                        // Field:  type(PerformanceClass) name(performance_class) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(7) span(8) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015491\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value);
                        }
                        
                        uint8_t* _tmp_17336 = (uint8_t*) buffer++;
                        *_tmp_17336 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() != 0) {
                        // Field:  type(CenDsrcTollingZone) name(cen_dsrc_tolling_zone) extGroup(0)
                            // CenDsrcTollingZone  SEQUENCE
                                //  protectedZoneLatitude  Latitude                 
                                //  protectedZoneLongitude Longitude                
                                //  cenDsrcTollingZoneID   CenDsrcTollingZoneID   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_7587 = (uint8_t*) buffer++;  // Write extension flag for CenDsrcTollingZone
                            *_ext_flag_7587 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_17337 = (char*) buffer++;
                            *_tmp_17337 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015492\033[0m| Optional field cen_dsrc_tolling_zone_id = " << *_tmp_17337;
                            
                            // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                            // Real
                            
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015493\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            }
                            
                            double _tmp_17339 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            _tmp_17339 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_17339);
                            _tmp_17339 -= -900000000;
                            uint32_t* _tmp_17338 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_17338 = static_cast<uint32_t>(_tmp_17339);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                            // Real
                            
                            // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015494\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            }
                            
                            double _tmp_17341 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            _tmp_17341 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_17341);
                            _tmp_17341 -= -1800000000;
                            uint32_t* _tmp_17340 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_17340 = static_cast<uint32_t>(_tmp_17341);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                return -1;
                            }
                            
                            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                // Field:  type(CenDsrcTollingZoneID) name(cen_dsrc_tolling_zone_id) extGroup(0)
                                // Integer
                                
                                // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015495\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                 " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                }
                                
                                uint32_t* _tmp_17342 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_17342 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value; 
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(*_ext_flag_7587) {
                            }
                    }
            
            }
            else if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.size() != 0)  // CHOICE 1  fieldType(HighFrequencyContainer) 
            {
                *_choice_401 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m015496\033[0m| Choice selection: 1";
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_7591 = (uint8_t*) buffer++;  // Write extension flag for RSUContainerHighFrequency
                    *_ext_flag_7591 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_17344 = (char*) buffer++;
                    *_tmp_17344 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015497\033[0m| Optional field protected_communication_zones_rsu = " << *_tmp_17344;
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0) {
                        // Field:  type(ProtectedCommunicationZonesRSU) name(protected_communication_zones_rsu) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        uint16_t* _tmp_17345 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_17345 = __aux64__ - 1;
                        
                        int __ifj = __aux64__;
                        for(int j = 0; j < __ifj; j++) { 
                            
                                // ProtectedCommunicationZone  SEQUENCE
                                    //  protectedZoneType      ProtectedZoneType       
                                    //  expiryTime             TimestampIts          OPTIONAL  
                                    //  protectedZoneLatitude  Latitude                
                                    //  protectedZoneLongitude Longitude               
                                    //  protectedZoneRadius    ProtectedZoneRadius   OPTIONAL  
                                    //  protectedZoneID        ProtectedZoneID       OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_7592 = (uint8_t*) buffer++;  // Write extension flag for ProtectedCommunicationZone
                                *_ext_flag_7592 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_17346 = (char*) buffer++;
                                *_tmp_17346 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].expiry_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015499\033[0m| Optional field expiry_time = " << *_tmp_17346;
                                char* _tmp_17347 = (char*) buffer++;
                                *_tmp_17347 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015500\033[0m| Optional field protected_zone_radius = " << *_tmp_17347;
                                char* _tmp_17348 = (char*) buffer++;
                                *_tmp_17348 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_id.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015501\033[0m| Optional field protected_zone_id = " << *_tmp_17348;
                                
                                // Field:  type(ProtectedZoneType) name(protected_zone_type) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(1) span(2) dataType(Int32)
                                uint8_t* _ext_flag_7593 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_type.
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015502\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_type.value);
                                }
                                
                                uint8_t* _tmp_17349 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_17349 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_type.value; 
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_type.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_type.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].expiry_time.size() != 0) {
                                    // Field:  type(TimestampIts) name(expiry_time) extGroup(0)
                                    // Integer
                                    
                                    // INT64  min(0) max(4398046511103) span(4398046511104) dataType(Int64)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015503\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].expiry_time[0].value;
                                    }
                                    
                                    uint64_t* _tmp_17350 = (uint64_t*)buffer; buffer += 8;
                                    *_tmp_17350 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].expiry_time[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].expiry_time[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].expiry_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].expiry_time[0].value' (" << __aux64__ << ") exceeds max allowable (4398046511103); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015504\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_latitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_latitude.value;
                                }
                                
                                double _tmp_17352 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_latitude.value;
                                _tmp_17352 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_17352);
                                _tmp_17352 -= -900000000;
                                uint32_t* _tmp_17351 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_17351 = static_cast<uint32_t>(_tmp_17352);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015505\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_longitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_longitude.value;
                                }
                                
                                double _tmp_17354 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_longitude.value;
                                _tmp_17354 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_17354);
                                _tmp_17354 -= -1800000000;
                                uint32_t* _tmp_17353 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_17353 = static_cast<uint32_t>(_tmp_17354);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius.size() != 0) {
                                    // Field:  type(ProtectedZoneRadius) name(protected_zone_radius) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(1) max(255) span(255) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015506\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value);
                                    }
                                    
                                    uint8_t* _ext_flag_7597 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].
                                    *_ext_flag_7597 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value >= 1 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value <= 255) ? 0 : 1;
                                    
                                    if(*_ext_flag_7597) {
                                        uint8_t* _tmp_17356 = (uint8_t*) buffer++; 
                                        if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value >= 0 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value <= INT32_MAX) {
                                            *_tmp_17356 = 0;
                                        
                                            uint32_t* _tmp_17355 = (uint32_t*)buffer; buffer += 4;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value;
                                            __aux64__ -= INT32_MIN;
                                            *_tmp_17355 = __aux64__;
                                        } 
                                        else
                                        {
                                            *_tmp_17356 = 1;
                                        
                                            uint64_t* _tmp_17355 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value;
                                            __aux64__ -= INT64_MIN;
                                            *_tmp_17355 = __aux64__;
                                        }
                                    } else {
                                        uint8_t* _tmp_17355 = (uint8_t*) buffer++;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value - 1;
                                        *_tmp_17355 = __aux64__;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_radius[0].value;
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_id.size() != 0) {
                                    // Field:  type(ProtectedZoneID) name(protected_zone_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015507\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_17357 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_17357 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_id[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_id[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[j].protected_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(*_ext_flag_7592) {
                                }
                        }
                    }
                    
                    if(*_ext_flag_7591) {
                    }
            
            }
            else if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency.size() != 0)  // CHOICE 2  fieldType(HighFrequencyContainer) 
            {
                *_choice_401   = 2 - 2;  // Setting choice selection
                *_ext_flag_7563 = 1;      // setting ext flag
            
                uint16_t* _tmp_17360_openType = (uint16_t*) buffer;  // OpenType length variable 
                buffer += 2;
                const uint8_t *_tmp_17361_start = buffer; // Starting point
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m015508\033[0m| Choice selection: 2";
            
                    // MADVehicleContainerHighFrequency  SEQUENCE
                        //  basicVehicleContainerHighFrequency BasicVehicleContainerHighFrequency     
                        //  madControlModeState                MADControlModeState                    
                    // Optional fields bytemap
                    
                    // Field:  type(BasicVehicleContainerHighFrequency) name(basic_vehicle_container_high_frequency) extGroup(0)
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
                        char* _tmp_17362 = (char*) buffer++;
                        *_tmp_17362 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015509\033[0m| Optional field acceleration_control = " << *_tmp_17362;
                        char* _tmp_17363 = (char*) buffer++;
                        *_tmp_17363 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015510\033[0m| Optional field lane_position = " << *_tmp_17363;
                        char* _tmp_17364 = (char*) buffer++;
                        *_tmp_17364 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015511\033[0m| Optional field steering_wheel_angle = " << *_tmp_17364;
                        char* _tmp_17365 = (char*) buffer++;
                        *_tmp_17365 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015512\033[0m| Optional field lateral_acceleration = " << *_tmp_17365;
                        char* _tmp_17366 = (char*) buffer++;
                        *_tmp_17366 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015513\033[0m| Optional field vertical_acceleration = " << *_tmp_17366;
                        char* _tmp_17367 = (char*) buffer++;
                        *_tmp_17367 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015514\033[0m| Optional field performance_class = " << *_tmp_17367;
                        char* _tmp_17368 = (char*) buffer++;
                        *_tmp_17368 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015515\033[0m| Optional field cen_dsrc_tolling_zone = " << *_tmp_17368;
                        
                        // Field:  type(Heading) name(heading) extGroup(0)
                            // Heading  SEQUENCE
                                //  headingValue      HeadingValue          
                                //  headingConfidence HeadingConfidence     
                            // Optional fields bytemap
                            
                            // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015516\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value;
                            }
                            
                            float _tmp_17370 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value;
                            _tmp_17370 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17370);
                            uint16_t* _tmp_17369 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17369 = static_cast<uint16_t>(_tmp_17370);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(HeadingConfidence) name(heading_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015517\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value);
                            }
                            
                            float _tmp_17372 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value;
                            _tmp_17372 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17372);
                            _tmp_17372 -= 1;
                            uint8_t* _tmp_17371 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_17371 = static_cast<uint8_t>(_tmp_17372);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
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
                                logger->debug() << "|\033[38;5;94m015518\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value;
                            }
                            
                            float _tmp_17374 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value;
                            _tmp_17374 *= 100.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17374);
                            uint16_t* _tmp_17373 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17373 = static_cast<uint16_t>(_tmp_17374);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(SpeedConfidence) name(speed_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015519\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value);
                            }
                            
                            float _tmp_17376 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value;
                            _tmp_17376 *= 100.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17376);
                            _tmp_17376 -= 1;
                            uint8_t* _tmp_17375 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_17375 = static_cast<uint8_t>(_tmp_17376);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(DriveDirection) name(drive_direction) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(2) span(3) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015520\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value);
                        }
                        
                        uint8_t* _tmp_17377 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17377 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
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
                                logger->debug() << "|\033[38;5;94m015521\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value;
                            }
                            
                            float _tmp_17379 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value;
                            _tmp_17379 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17379);
                            _tmp_17379 -= 1;
                            uint16_t* _tmp_17378 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17378 = static_cast<uint16_t>(_tmp_17379);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(VehicleLengthConfidenceIndication) name(vehicle_length_confidence_indication) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(4) span(5) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015522\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value);
                            }
                            
                            uint8_t* _tmp_17380 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_17380 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") exceeds max allowable (4); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(VehicleWidth) name(vehicle_width) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015523\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value);
                        }
                        
                        float _tmp_17382 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value;
                        _tmp_17382 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17382);
                        _tmp_17382 -= 1;
                        uint8_t* _tmp_17381 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_17381 = static_cast<uint8_t>(_tmp_17382);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 62) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
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
                                logger->debug() << "|\033[38;5;94m015524\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value;
                            }
                            
                            float _tmp_17384 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value;
                            _tmp_17384 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17384);
                            _tmp_17384 -= -160;
                            uint16_t* _tmp_17383 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17383 = static_cast<uint16_t>(_tmp_17384);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationConfidence) name(longitudinal_acceleration_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015525\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value);
                            }
                            
                            float _tmp_17386 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                            _tmp_17386 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17386);
                            uint8_t* _tmp_17385 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_17385 = static_cast<uint8_t>(_tmp_17386);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
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
                                logger->debug() << "|\033[38;5;94m015526\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value;
                            }
                            
                            uint16_t* _tmp_17387 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value - -1023;
                            *_tmp_17387 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(CurvatureConfidence) name(curvature_confidence) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(7) span(8) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015527\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value);
                            }
                            
                            uint8_t* _tmp_17388 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_17388 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(CurvatureCalculationMode) name(curvature_calculation_mode) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(2) span(3) dataType(Int32)
                        uint8_t* _ext_flag_7611 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015528\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value);
                        }
                        
                        uint8_t* _tmp_17389 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17389 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
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
                                logger->debug() << "|\033[38;5;94m015529\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value;
                            }
                            
                            float _tmp_17391 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value;
                            _tmp_17391 *= 100.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17391);
                            _tmp_17391 -= -32766;
                            uint16_t* _tmp_17390 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17390 = static_cast<uint16_t>(_tmp_17391);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -32766) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") less than (-32766); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(YawRateConfidence) name(yaw_rate_confidence) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(8) span(9) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015530\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value);
                            }
                            
                            uint8_t* _tmp_17392 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_17392 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") exceeds max allowable (8); message dropped.";
                                return -1;
                            }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.size() != 0) {
                            // Field:  type(AccelerationControl) name(acceleration_control) extGroup(0)
                            // BitString
                            // BIT_STRING  min(7) max(7) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015531\033[0m| cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size());
                            
                            if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size() < 7) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size()) << " is less than allowable (7); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size() > 7) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size()) << " exceeds max allowable (7); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_17393 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size();
                            if(__aux64__ > 7) __aux64__ = 7;
                            *_tmp_17393 = __aux64__ - 7;
                            buffer += 1;
                            
                            int __ifk = __aux64__;
                            for(int k = 0; k < __ifk; k++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values[k]? 1: 0);
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.size() != 0) {
                            // Field:  type(LanePosition) name(lane_position) extGroup(0)
                            // Integer
                            
                            // INT8  min(-1) max(14) span(16) dataType(Int8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015532\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value);
                            }
                            
                            uint8_t* _tmp_17394 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value - -1;
                            *_tmp_17394 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value' (" << __aux64__ << ") less than (-1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 14) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value' (" << __aux64__ << ") exceeds max allowable (14); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.size() != 0) {
                            // Field:  type(SteeringWheelAngle) name(steering_wheel_angle) extGroup(0)
                                // SteeringWheelAngle  SEQUENCE
                                    //  steeringWheelAngleValue      SteeringWheelAngleValue          
                                    //  steeringWheelAngleConfidence SteeringWheelAngleConfidence     
                                // Optional fields bytemap
                                
                                // Field:  type(SteeringWheelAngleValue) name(steering_wheel_angle_value) extGroup(0)
                                // Integer
                                
                                // INT16  min(-511) max(512) span(1024) dataType(Int16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015533\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value;
                                }
                                
                                uint16_t* _tmp_17395 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value - -511;
                                *_tmp_17395 = __aux64__;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -511) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") less than (-511); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 512) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") exceeds max allowable (512); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SteeringWheelAngleConfidence) name(steering_wheel_angle_confidence) extGroup(0)
                                // Integer
                                
                                // UINT8  min(1) max(127) span(127) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015534\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                                }
                                
                                uint8_t* _tmp_17396 = (uint8_t*) buffer++;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value - 1;
                                *_tmp_17396 = __aux64__;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                    return -1;
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.size() != 0) {
                            // Field:  type(LateralAcceleration) name(lateral_acceleration) extGroup(0)
                                // LateralAcceleration  SEQUENCE
                                    //  lateralAccelerationValue      LateralAccelerationValue     
                                    //  lateralAccelerationConfidence AccelerationConfidence       
                                // Optional fields bytemap
                                
                                // Field:  type(LateralAccelerationValue) name(lateral_acceleration_value) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015535\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value;
                                }
                                
                                float _tmp_17398 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value;
                                _tmp_17398 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17398);
                                _tmp_17398 -= -160;
                                uint16_t* _tmp_17397 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17397 = static_cast<uint16_t>(_tmp_17398);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(AccelerationConfidence) name(lateral_acceleration_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015536\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value);
                                }
                                
                                float _tmp_17400 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value;
                                _tmp_17400 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17400);
                                uint8_t* _tmp_17399 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_17399 = static_cast<uint8_t>(_tmp_17400);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                    return -1;
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.size() != 0) {
                            // Field:  type(VerticalAcceleration) name(vertical_acceleration) extGroup(0)
                                // VerticalAcceleration  SEQUENCE
                                    //  verticalAccelerationValue      VerticalAccelerationValue     
                                    //  verticalAccelerationConfidence AccelerationConfidence        
                                // Optional fields bytemap
                                
                                // Field:  type(VerticalAccelerationValue) name(vertical_acceleration_value) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015537\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value;
                                }
                                
                                float _tmp_17402 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value;
                                _tmp_17402 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17402);
                                _tmp_17402 -= -160;
                                uint16_t* _tmp_17401 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17401 = static_cast<uint16_t>(_tmp_17402);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(AccelerationConfidence) name(vertical_acceleration_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015538\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value);
                                }
                                
                                float _tmp_17404 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value;
                                _tmp_17404 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17404);
                                uint8_t* _tmp_17403 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_17403 = static_cast<uint8_t>(_tmp_17404);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                    return -1;
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.size() != 0) {
                            // Field:  type(PerformanceClass) name(performance_class) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(7) span(8) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015539\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value);
                            }
                            
                            uint8_t* _tmp_17405 = (uint8_t*) buffer++;
                            *_tmp_17405 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.size() != 0) {
                            // Field:  type(CenDsrcTollingZone) name(cen_dsrc_tolling_zone) extGroup(0)
                                // CenDsrcTollingZone  SEQUENCE
                                    //  protectedZoneLatitude  Latitude                 
                                    //  protectedZoneLongitude Longitude                
                                    //  cenDsrcTollingZoneID   CenDsrcTollingZoneID   OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_7622 = (uint8_t*) buffer++;  // Write extension flag for CenDsrcTollingZone
                                *_ext_flag_7622 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_17406 = (char*) buffer++;
                                *_tmp_17406 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015540\033[0m| Optional field cen_dsrc_tolling_zone_id = " << *_tmp_17406;
                                
                                // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015541\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                                }
                                
                                double _tmp_17408 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                                _tmp_17408 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_17408);
                                _tmp_17408 -= -900000000;
                                uint32_t* _tmp_17407 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_17407 = static_cast<uint32_t>(_tmp_17408);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015542\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                                }
                                
                                double _tmp_17410 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                                _tmp_17410 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_17410);
                                _tmp_17410 -= -1800000000;
                                uint32_t* _tmp_17409 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_17409 = static_cast<uint32_t>(_tmp_17410);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                    // Field:  type(CenDsrcTollingZoneID) name(cen_dsrc_tolling_zone_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015543\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_17411 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_17411 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(*_ext_flag_7622) {
                                }
                        }
                    
                    // Field:  type(MADControlModeState) name(mad_control_mode_state) extGroup(0)
                        // MADControlModeState  SEQUENCE
                            //  madControlMode       MADControlMode          
                            //  madDrivingMode       MADDrivingMode          
                            //  adviceTimeConsidered GenerationDeltaTime   OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_17413 = (char*) buffer++;
                        *_tmp_17413 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015544\033[0m| Optional field advice_time_considered = " << *_tmp_17413;
                        
                        // Field:  type(MADControlMode) name(mad_control_mode) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(7) span(8) dataType(Int32)
                        uint8_t* _ext_flag_7626 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015545\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value);
                        }
                        
                        uint8_t* _tmp_17414 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17414 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MADDrivingMode) name(mad_driving_mode) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(3) span(4) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015546\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value);
                        }
                        
                        uint8_t* _tmp_17415 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17415 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                            return -1;
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.size() != 0) {
                            // Field:  type(GenerationDeltaTime) name(advice_time_considered) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015547\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value;
                            }
                            
                            uint16_t* _tmp_17416 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17416 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
            
                *_tmp_17360_openType = buffer - _tmp_17361_start;  // OpenType length  
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_401) << ") selected in CHOICE HighFrequencyContainer in 'cam.cam_parameters.high_frequency_container'; message dropped.";
                return -1;
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() != 0) {
                // Field:  type(LowFrequencyContainer) name(low_frequency_container) extGroup(0)
                // Choice
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency
                   // #1  madVehicleContainerLowFrequency   MADVehicleContainerLowFrequency
                uint8_t* _ext_flag_7629 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_7629 = 0; 
                
                uint8_t* _choice_402 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.size() != 0) {  // CHOICE 0  fieldType(LowFrequencyContainer) 
                    *_choice_402 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015548\033[0m| Choice selection: 0";
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        // Optional fields bytemap
                        
                        // Field:  type(VehicleRole) name(vehicle_role) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015549\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        uint8_t* _tmp_17417 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17417 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value; 
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(ExteriorLights) name(exterior_lights) extGroup(0)
                        // BitString
                        // BIT_STRING  min(8) max(8) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015550\033[0m| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size());
                        
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() < 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " is less than allowable (8); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() > 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " exceeds max allowable (8); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_17418 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size();
                        if(__aux64__ > 8) __aux64__ = 8;
                        *_tmp_17418 = __aux64__ - 8;
                        buffer += 1;
                        
                        int __ifl = __aux64__;
                        for(int l = 0; l < __ifl; l++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values[l]? 1: 0);
                        }
                        
                        // Field:  type(PathHistory) name(path_history) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(40) span(41) ext(false)
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements.size();
                        if(__aux64__ > 40) __aux64__ = 40;
                        uint16_t* _tmp_17419 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_17419 = __aux64__;
                        
                        int __ifm = __aux64__;
                        for(int m = 0; m < __ifm; m++) { 
                            
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_17420 = (char*) buffer++;
                                *_tmp_17420 = (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015552\033[0m| Optional field path_delta_time = " << *_tmp_17420;
                                
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
                                        logger->debug() << "|\033[38;5;94m015553\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_latitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_latitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_latitude.value;
                                    }
                                    
                                    double _tmp_17422 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_latitude.value;
                                    _tmp_17422 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17422);
                                    _tmp_17422 -= -131071;
                                    uint32_t* _tmp_17421 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_17421 = static_cast<uint32_t>(_tmp_17422);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015554\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_longitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_longitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_longitude.value;
                                    }
                                    
                                    double _tmp_17424 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_longitude.value;
                                    _tmp_17424 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17424);
                                    _tmp_17424 -= -131071;
                                    uint32_t* _tmp_17423 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_17423 = static_cast<uint32_t>(_tmp_17424);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015555\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_altitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_altitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_altitude.value;
                                    }
                                    
                                    float _tmp_17426 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_altitude.value;
                                    _tmp_17426 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17426);
                                    _tmp_17426 -= -12700;
                                    uint16_t* _tmp_17425 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17425 = static_cast<uint16_t>(_tmp_17426);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                        return -1;
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time.size() != 0) {
                                    // Field:  type(PathDeltaTime) name(path_delta_time) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015556\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time[0].value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time[0].value;
                                    }
                                    
                                    uint8_t* _ext_flag_7634 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time[0].
                                    float _tmp_17427 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time[0].value;
                                    _tmp_17427 *= 100.0;
                                    __aux64__ = static_cast<int64_t>(_tmp_17427);
                                    *_ext_flag_7634 = (__aux64__ >= 1 && __aux64__ <= 65535) ? 0 : 1;
                                    
                                    if(*_ext_flag_7634) {
                                        uint8_t* _tmp_17428 = (uint8_t*) buffer++; 
                                    
                                        if(__aux64__ >= INT32_MIN && __aux64__ <= INT32_MAX) {
                                            *_tmp_17428 = 0;
                                    
                                            float _tmp_17430 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time[0].value;
                                            _tmp_17430 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17430);
                                            _tmp_17430 -= INT32_MIN;
                                            uint32_t* _tmp_17429 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_17429 = static_cast<uint32_t>(_tmp_17430);
                                        }
                                        else
                                        {
                                            *_tmp_17428 = 1;
                                    
                                            float _tmp_17432 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time[0].value;
                                            _tmp_17432 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17432);
                                            _tmp_17432 -= INT64_MIN;
                                            uint32_t* _tmp_17431 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_17431 = static_cast<uint32_t>(_tmp_17432);
                                        }
                                    }
                                    else
                                    {
                                        float _tmp_17434 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[m].path_delta_time[0].value;
                                        _tmp_17434 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17434);
                                        _tmp_17434 -= 1;
                                        uint16_t* _tmp_17433 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17433 = static_cast<uint16_t>(_tmp_17434);
                                    }
                                }
                                
                        }
                
                }
                else if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency.size() != 0)  // CHOICE 1  fieldType(LowFrequencyContainer) 
                {
                    *_choice_402   = 1 - 1;  // Setting choice selection
                    *_ext_flag_7629 = 1;      // setting ext flag
                
                    uint16_t* _tmp_17435_openType = (uint16_t*) buffer;  // OpenType length variable 
                    buffer += 2;
                    const uint8_t *_tmp_17436_start = buffer; // Starting point
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015557\033[0m| Choice selection: 1";
                
                        // MADVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleDimensions   VehicleDimensions     
                            //  vehicleCapabilities MADCapabilities       
                            //  localDestination    LocalDestination      
                        // Optional fields bytemap
                        
                        // Field:  type(VehicleDimensions) name(vehicle_dimensions) extGroup(0)
                            // VehicleDimensions  SEQUENCE
                                //  posCentMass PosCentMass          
                                //  posFrontAx  PosFrontAx           
                                //  wheelBase   WheelBaseVehicle     
                                //  vehicleMass VehicleMass          
                            // Optional fields bytemap
                            
                            // Field:  type(PosCentMass) name(pos_cent_mass) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(63) span(63) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015558\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value);
                            }
                            
                            float _tmp_17438 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value;
                            _tmp_17438 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17438);
                            _tmp_17438 -= 1;
                            uint8_t* _tmp_17437 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_17437 = static_cast<uint8_t>(_tmp_17438);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 63) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value' (" << __aux64__ << ") exceeds max allowable (63); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(PosFrontAx) name(pos_front_ax) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(20) span(20) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015559\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value);
                            }
                            
                            float _tmp_17440 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value;
                            _tmp_17440 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17440);
                            _tmp_17440 -= 1;
                            uint8_t* _tmp_17439 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_17439 = static_cast<uint8_t>(_tmp_17440);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 20) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value' (" << __aux64__ << ") exceeds max allowable (20); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(WheelBaseVehicle) name(wheel_base) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015560\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value);
                            }
                            
                            float _tmp_17442 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value;
                            _tmp_17442 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17442);
                            _tmp_17442 -= 1;
                            uint8_t* _tmp_17441 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_17441 = static_cast<uint8_t>(_tmp_17442);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(VehicleMass) name(vehicle_mass) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(1024) span(1024) scaleDivisor(1.0E-5) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015561\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value;
                            }
                            
                            float _tmp_17444 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value;
                            _tmp_17444 *= 1.0E-5;
                            __aux64__ = static_cast<uint64_t>(_tmp_17444);
                            _tmp_17444 -= 1;
                            uint16_t* _tmp_17443 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17443 = static_cast<uint16_t>(_tmp_17444);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1024) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value' (" << __aux64__ << ") exceeds max allowable (1024); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(MADCapabilities) name(vehicle_capabilities) extGroup(0)
                            // MADCapabilities  SEQUENCE
                                //  curvatureValueMin    CurvatureValue        
                                //  curvatureValueMax    CurvatureValue        
                                //  accelerationValueMin AccelerationValue     
                                //  accelerationValueMax AccelerationValue     
                                //  possibleLevelOfInput LevelsOfControl       
                            // Optional fields bytemap
                            
                            // Field:  type(CurvatureValue) name(curvature_value_min) extGroup(0)
                            // Integer
                            
                            // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015562\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value;
                            }
                            
                            uint16_t* _tmp_17445 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value - -1023;
                            *_tmp_17445 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(CurvatureValue) name(curvature_value_max) extGroup(0)
                            // Integer
                            
                            // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015563\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value;
                            }
                            
                            uint16_t* _tmp_17446 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value - -1023;
                            *_tmp_17446 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationValue) name(acceleration_value_min) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015564\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value;
                            }
                            
                            float _tmp_17448 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value;
                            _tmp_17448 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17448);
                            _tmp_17448 -= -160;
                            uint16_t* _tmp_17447 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17447 = static_cast<uint16_t>(_tmp_17448);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationValue) name(acceleration_value_max) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015565\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value;
                            }
                            
                            float _tmp_17450 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value;
                            _tmp_17450 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_17450);
                            _tmp_17450 -= -160;
                            uint16_t* _tmp_17449 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_17449 = static_cast<uint16_t>(_tmp_17450);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(LevelsOfControl) name(possible_level_of_input) extGroup(0)
                            // BitString
                            // BIT_STRING  min(3) max(3) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015566\033[0m| cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size());
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size() < 3) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size()) << " is less than allowable (3); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size() > 3) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size()) << " exceeds max allowable (3); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _ext_flag_7643 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.
                            *_ext_flag_7643 = 0; 
                            
                            uint8_t* _tmp_17451 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size();
                            if(__aux64__ > 3) __aux64__ = 3;
                            *_tmp_17451 = __aux64__ - 3;
                            buffer += 1;
                            
                            int __ifn = __aux64__;
                            for(int n = 0; n < __ifn; n++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values[n]? 1: 0);
                            }
                        
                        // Field:  type(LocalDestination) name(local_destination) extGroup(0)
                            // LocalDestination  SEQUENCE
                                //  deltaReferencePosition DeltaReferencePosition     
                                //  speedValue             SpeedValue               OPTIONAL  
                                //  headingValue           HeadingValue             OPTIONAL  
                            // Optional fields bytemap
                            char* _tmp_17452 = (char*) buffer++;
                            *_tmp_17452 = (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015567\033[0m| Optional field speed_value = " << *_tmp_17452;
                            char* _tmp_17453 = (char*) buffer++;
                            *_tmp_17453 = (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015568\033[0m| Optional field heading_value = " << *_tmp_17453;
                            
                            // Field:  type(DeltaReferencePosition) name(delta_reference_position) extGroup(0)
                                // DeltaReferencePosition  SEQUENCE
                                    //  deltaLatitude  DeltaLatitude      
                                    //  deltaLongitude DeltaLongitude     
                                    //  deltaAltitude  DeltaAltitude      
                                // Optional fields bytemap
                                
                                // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015569\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value;
                                }
                                
                                double _tmp_17455 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value;
                                _tmp_17455 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_17455);
                                _tmp_17455 -= -131071;
                                uint32_t* _tmp_17454 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_17454 = static_cast<uint32_t>(_tmp_17455);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015570\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value;
                                }
                                
                                double _tmp_17457 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value;
                                _tmp_17457 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_17457);
                                _tmp_17457 -= -131071;
                                uint32_t* _tmp_17456 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_17456 = static_cast<uint32_t>(_tmp_17457);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015571\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value;
                                }
                                
                                float _tmp_17459 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value;
                                _tmp_17459 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17459);
                                _tmp_17459 -= -12700;
                                uint16_t* _tmp_17458 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17458 = static_cast<uint16_t>(_tmp_17459);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                    return -1;
                                }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.size() != 0) {
                                // Field:  type(SpeedValue) name(speed_value) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015572\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value;
                                }
                                
                                float _tmp_17461 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value;
                                _tmp_17461 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17461);
                                uint16_t* _tmp_17460 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17460 = static_cast<uint16_t>(_tmp_17461);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.size() != 0) {
                                // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015573\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value;
                                }
                                
                                float _tmp_17463 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value;
                                _tmp_17463 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17463);
                                uint16_t* _tmp_17462 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17462 = static_cast<uint16_t>(_tmp_17463);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                            }
                
                    *_tmp_17435_openType = buffer - _tmp_17436_start;  // OpenType length  
                }
                else
                {
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_402) << ") selected in CHOICE LowFrequencyContainer in 'cam.cam_parameters.low_frequency_container[0]'; message dropped.";
                    return -1;
                }
            }
            
            if(ros->cam.cam_parameters.special_vehicle_container.size() != 0) {
                // Field:  type(SpecialVehicleContainer) name(special_vehicle_container) extGroup(0)
                // Choice
                   // #0  publicTransportContainer   PublicTransportContainer
                   // #1  specialTransportContainer   SpecialTransportContainer
                   // #2  dangerousGoodsContainer   DangerousGoodsContainer
                   // #3  roadWorksContainerBasic   RoadWorksContainerBasic
                   // #4  rescueContainer   RescueContainer
                   // #5  emergencyContainer   EmergencyContainer
                   // #6  safetyCarContainer   SafetyCarContainer
                uint8_t* _ext_flag_7649 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_7649 = 0; 
                
                uint8_t* _choice_403 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.size() != 0) {  // CHOICE 0  fieldType(SpecialVehicleContainer) 
                    *_choice_403 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015574\033[0m| Choice selection: 0";
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_17464 = (char*) buffer++;
                        *_tmp_17464 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015575\033[0m| Optional field pt_activation = " << *_tmp_17464;
                        
                        // Field:  type(EmbarkationStatus) name(embarkation_status) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_17465 = (uint8_t*)buffer++;
                        *_tmp_17465 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015576\033[0m| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status: " << (*_tmp_17465);
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0) {
                            // Field:  type(PtActivation) name(pt_activation) extGroup(0)
                                // PtActivation  SEQUENCE
                                    //  ptActivationType PtActivationType     
                                    //  ptActivationData PtActivationData     
                                // Optional fields bytemap
                                
                                // Field:  type(PtActivationType) name(pt_activation_type) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015577\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value);
                                }
                                
                                uint8_t* _tmp_17466 = (uint8_t*) buffer++;
                                *_tmp_17466 = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(PtActivationData) name(pt_activation_data) extGroup(0)
                                // OctetString
                                // OCTET_STRING  min(1) max(20) span(20)
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015578\033[0m| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size(): cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data" << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size());
                                
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
                                uint8_t* _tmp_17467 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size();
                                if(__aux64__ > 20) __aux64__ = 20;
                                *_tmp_17467 = __aux64__ - 1;
                                
                                int __ifo = __aux64__;
                                for(int o = 0; o < __ifo; o++) {
                                    int8_t* __m__ = (int8_t*)buffer++;
                                    *__m__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values[o];
                                }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.size() != 0)  // CHOICE 1  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_403 = 1;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015579\033[0m| Choice selection: 1";
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        // Optional fields bytemap
                        
                        // Field:  type(SpecialTransportType) name(special_transport_type) extGroup(0)
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015580\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() < 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " is less than allowable (4); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() > 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " exceeds max allowable (4); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_17468 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size();
                        if(__aux64__ > 4) __aux64__ = 4;
                        *_tmp_17468 = __aux64__ - 4;
                        buffer += 1;
                        
                        int __ifp = __aux64__;
                        for(int p = 0; p < __ifp; p++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values[p]? 1: 0);
                        }
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015581\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_17469 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_17469 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifq = __aux64__;
                        for(int q = 0; q < __ifq; q++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[q]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.size() != 0)  // CHOICE 2  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_403 = 2;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015582\033[0m| Choice selection: 2";
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        // Optional fields bytemap
                        
                        // Field:  type(DangerousGoodsBasic) name(dangerous_goods_basic) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(19) span(20) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015583\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                        
                        uint8_t* _tmp_17470 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_17470 = ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value; 
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 19) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' (" << __aux64__ << ") exceeds max allowable (19); message dropped.";
                            return -1;
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic.size() != 0)  // CHOICE 3  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_403 = 3;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015584\033[0m| Choice selection: 3";
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_17471 = (char*) buffer++;
                        *_tmp_17471 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015585\033[0m| Optional field roadworks_sub_cause_code = " << *_tmp_17471;
                        char* _tmp_17472 = (char*) buffer++;
                        *_tmp_17472 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015586\033[0m| Optional field closed_lanes = " << *_tmp_17472;
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0) {
                            // Field:  type(RoadworksSubCauseCode) name(roadworks_sub_cause_code) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015587\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value);
                            }
                            
                            uint8_t* _tmp_17473 = (uint8_t*) buffer++;
                            *_tmp_17473 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value; 
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015588\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_17474 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_17474 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifr = __aux64__;
                        for(int r = 0; r < __ifr; r++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[r]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0) {
                            // Field:  type(ClosedLanes) name(closed_lanes) extGroup(0)
                                // ClosedLanes  SEQUENCE
                                    //  innerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  outerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  drivingLaneStatus       DrivingLaneStatus    OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_7653 = (uint8_t*) buffer++;  // Write extension flag for ClosedLanes
                                *_ext_flag_7653 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_17475 = (char*) buffer++;
                                *_tmp_17475 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015589\033[0m| Optional field innerhard_shoulder_status = " << *_tmp_17475;
                                char* _tmp_17476 = (char*) buffer++;
                                *_tmp_17476 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015590\033[0m| Optional field outerhard_shoulder_status = " << *_tmp_17476;
                                char* _tmp_17477 = (char*) buffer++;
                                *_tmp_17477 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015591\033[0m| Optional field driving_lane_status = " << *_tmp_17477;
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0) {
                                    // Field:  type(HardShoulderStatus) name(innerhard_shoulder_status) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015592\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_17478 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_17478 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0) {
                                    // Field:  type(HardShoulderStatus) name(outerhard_shoulder_status) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015593\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_17479 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_17479 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0) {
                                    // Field:  type(DrivingLaneStatus) name(driving_lane_status) extGroup(0)
                                    // BitString
                                    // BIT_STRING  min(1) max(13) span(13)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m015594\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size());
                                    
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() < 1) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " is less than allowable (1); message dropped.";
                                        return -1;
                                    }
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() > 13) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " exceeds max allowable (13); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_17480 = (uint8_t*)buffer;
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size();
                                    if(__aux64__ > 13) __aux64__ = 13;
                                    *_tmp_17480 = __aux64__ - 1;
                                    buffer += 1;
                                    
                                    int __ifs = __aux64__;
                                    for(int s = 0; s < __ifs; s++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[s]? 1: 0);
                                    }
                                }
                                
                                if(*_ext_flag_7653) {
                                }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.size() != 0)  // CHOICE 4  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_403 = 4;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015595\033[0m| Choice selection: 4";
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        // Optional fields bytemap
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015596\033[0m| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_17482 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_17482 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ift = __aux64__;
                        for(int t = 0; t < __ift; t++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[t]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.size() != 0)  // CHOICE 5  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_403 = 5;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015597\033[0m| Choice selection: 5";
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_17483 = (char*) buffer++;
                        *_tmp_17483 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015598\033[0m| Optional field incident_indication = " << *_tmp_17483;
                        char* _tmp_17484 = (char*) buffer++;
                        *_tmp_17484 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015599\033[0m| Optional field emergency_priority = " << *_tmp_17484;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015600\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_17485 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_17485 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifu = __aux64__;
                        for(int u = 0; u < __ifu; u++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[u]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_7656 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_7656 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015601\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_17486 = (uint8_t*) buffer++;
                                *_tmp_17486 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SubCauseCodeType) name(sub_cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015602\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_17487 = (uint8_t*) buffer++;
                                *_tmp_17487 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(*_ext_flag_7656) {
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0) {
                            // Field:  type(EmergencyPriority) name(emergency_priority) extGroup(0)
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015603\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size());
                            
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() < 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " is less than allowable (2); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() > 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " exceeds max allowable (2); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_17489 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size();
                            if(__aux64__ > 2) __aux64__ = 2;
                            *_tmp_17489 = __aux64__ - 2;
                            buffer += 1;
                            
                            int __ifv = __aux64__;
                            for(int v = 0; v < __ifv; v++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[v]? 1: 0);
                            }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.size() != 0)  // CHOICE 6  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_403 = 6;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m015604\033[0m| Choice selection: 6";
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_17490 = (char*) buffer++;
                        *_tmp_17490 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015605\033[0m| Optional field incident_indication = " << *_tmp_17490;
                        char* _tmp_17491 = (char*) buffer++;
                        *_tmp_17491 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015606\033[0m| Optional field traffic_rule = " << *_tmp_17491;
                        char* _tmp_17492 = (char*) buffer++;
                        *_tmp_17492 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015607\033[0m| Optional field speed_limit = " << *_tmp_17492;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015608\033[0m| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_17493 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_17493 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifw = __aux64__;
                        for(int w = 0; w < __ifw; w++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[w]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_7659 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_7659 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015609\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_17494 = (uint8_t*) buffer++;
                                *_tmp_17494 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SubCauseCodeType) name(sub_cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015610\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_17495 = (uint8_t*) buffer++;
                                *_tmp_17495 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(*_ext_flag_7659) {
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0) {
                            // Field:  type(TrafficRule) name(traffic_rule) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(3) span(4) dataType(Int32)
                            uint8_t* _ext_flag_7662 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015611\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                            
                            uint8_t* _tmp_17497 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_17497 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value; 
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0) {
                            // Field:  type(SpeedLimit) name(speed_limit) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(255) span(255) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015612\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value);
                            }
                            
                            uint8_t* _tmp_17498 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value - 1;
                            *_tmp_17498 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                
                }
                else
                {
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_403) << ") selected in CHOICE SpecialVehicleContainer in 'cam.cam_parameters.special_vehicle_container[0]'; message dropped.";
                    return -1;
                }
            }
            
            if(*_ext_flag_7553) {
            }
    
	
            return buffer - start;
        }
    } 
}