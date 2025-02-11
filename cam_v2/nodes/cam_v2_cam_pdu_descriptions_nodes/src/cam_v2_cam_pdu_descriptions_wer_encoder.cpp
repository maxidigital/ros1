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
            logger->debug() << "|\033[38;5;94m016734\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_18877 = (uint8_t*) buffer++;
        *_tmp_18877 = ros->hheader.protocol_version.value; 
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
            logger->debug() << "|\033[38;5;94m016735\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_18878 = (uint8_t*) buffer++;
        *_tmp_18878 = ros->hheader.message_id.value; 
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
            logger->debug() << "|\033[38;5;94m016736\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_18879 = (uint32_t*) buffer; buffer += 4;
        *_tmp_18879 = ros->hheader.station_id.value; 
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
            logger->debug() << "|\033[38;5;94m016737\033[0m| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
                         " cam.generation_delta_time.value: " << ros->cam.generation_delta_time.value;
        }
        
        uint16_t* _tmp_18880 = (uint16_t*) buffer; buffer += 2;
        *_tmp_18880 = ros->cam.generation_delta_time.value; 
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
            uint8_t* _ext_flag_8361 = (uint8_t*) buffer++;  // Write extension flag for CamParameters
            *_ext_flag_8361 = 0;  
            
            // Optional fields bytemap
            char* _tmp_18881 = (char*) buffer++;
            *_tmp_18881 = (ros->cam.cam_parameters.low_frequency_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m016738\033[0m| Optional field low_frequency_container = " << *_tmp_18881;
            char* _tmp_18882 = (char*) buffer++;
            *_tmp_18882 = (ros->cam.cam_parameters.special_vehicle_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m016739\033[0m| Optional field special_vehicle_container = " << *_tmp_18882;
            
            // Field:  type(BasicContainer) name(basic_container) extGroup(0)
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_8362 = (uint8_t*) buffer++;  // Write extension flag for BasicContainer
                *_ext_flag_8362 = 0;  
                
                // Optional fields bytemap
                
                // Field:  type(StationType) name(station_type) extGroup(0)
                // Integer
                
                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016740\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
                                 " cam.cam_parameters.basic_container.station_type.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.station_type.value);
                }
                
                uint8_t* _tmp_18883 = (uint8_t*) buffer++;
                *_tmp_18883 = ros->cam.cam_parameters.basic_container.station_type.value; 
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
                        logger->debug() << "|\033[38;5;94m016741\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.latitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    }
                    
                    double _tmp_18885 = ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    _tmp_18885 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_18885);
                    _tmp_18885 -= -900000000;
                    uint32_t* _tmp_18884 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_18884 = static_cast<uint32_t>(_tmp_18885);
                    
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
                        logger->debug() << "|\033[38;5;94m016742\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.longitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    }
                    
                    double _tmp_18887 = ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    _tmp_18887 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_18887);
                    _tmp_18887 -= -1800000000;
                    uint32_t* _tmp_18886 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_18886 = static_cast<uint32_t>(_tmp_18887);
                    
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
                            logger->debug() << "|\033[38;5;94m016743\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        }
                        
                        float _tmp_18889 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        _tmp_18889 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18889);
                        uint16_t* _tmp_18888 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18888 = static_cast<uint16_t>(_tmp_18889);
                        
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
                            logger->debug() << "|\033[38;5;94m016744\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        }
                        
                        float _tmp_18891 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        _tmp_18891 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18891);
                        uint16_t* _tmp_18890 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18890 = static_cast<uint16_t>(_tmp_18891);
                        
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
                            logger->debug() << "|\033[38;5;94m016745\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        }
                        
                        float _tmp_18893 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        _tmp_18893 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18893);
                        uint16_t* _tmp_18892 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18892 = static_cast<uint16_t>(_tmp_18893);
                        
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
                            logger->debug() << "|\033[38;5;94m016746\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value: " << ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        }
                        
                        float _tmp_18895 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        _tmp_18895 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18895);
                        _tmp_18895 -= -100000;
                        uint32_t* _tmp_18894 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_18894 = static_cast<uint32_t>(_tmp_18895);
                        
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
                            logger->debug() << "|\033[38;5;94m016747\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                        
                        uint8_t* _tmp_18896 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18896 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value; 
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
                
                if(*_ext_flag_8362) {
                }
            
            // Field:  type(HighFrequencyContainer) name(high_frequency_container) extGroup(0)
            // Choice
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency
            uint8_t* _ext_flag_8371 = (uint8_t*) buffer; 
            buffer++;
            *_ext_flag_8371 = 0; 
            
            uint8_t* _choice_421 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.size() != 0) {  // CHOICE 0  fieldType(HighFrequencyContainer) 
                *_choice_421 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016748\033[0m| Choice selection: 0";
            
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
                    char* _tmp_18898 = (char*) buffer++;
                    *_tmp_18898 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016749\033[0m| Optional field acceleration_control = " << *_tmp_18898;
                    char* _tmp_18899 = (char*) buffer++;
                    *_tmp_18899 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016750\033[0m| Optional field lane_position = " << *_tmp_18899;
                    char* _tmp_18900 = (char*) buffer++;
                    *_tmp_18900 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016751\033[0m| Optional field steering_wheel_angle = " << *_tmp_18900;
                    char* _tmp_18901 = (char*) buffer++;
                    *_tmp_18901 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016752\033[0m| Optional field lateral_acceleration = " << *_tmp_18901;
                    char* _tmp_18902 = (char*) buffer++;
                    *_tmp_18902 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016753\033[0m| Optional field vertical_acceleration = " << *_tmp_18902;
                    char* _tmp_18903 = (char*) buffer++;
                    *_tmp_18903 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016754\033[0m| Optional field performance_class = " << *_tmp_18903;
                    char* _tmp_18904 = (char*) buffer++;
                    *_tmp_18904 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016755\033[0m| Optional field cen_dsrc_tolling_zone = " << *_tmp_18904;
                    
                    // Field:  type(Heading) name(heading) extGroup(0)
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016756\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        }
                        
                        float _tmp_18906 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        _tmp_18906 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18906);
                        uint16_t* _tmp_18905 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18905 = static_cast<uint16_t>(_tmp_18906);
                        
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
                            logger->debug() << "|\033[38;5;94m016757\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value);
                        }
                        
                        float _tmp_18908 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value;
                        _tmp_18908 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18908);
                        _tmp_18908 -= 1;
                        uint8_t* _tmp_18907 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_18907 = static_cast<uint8_t>(_tmp_18908);
                        
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
                            logger->debug() << "|\033[38;5;94m016758\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        }
                        
                        float _tmp_18910 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        _tmp_18910 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18910);
                        uint16_t* _tmp_18909 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18909 = static_cast<uint16_t>(_tmp_18910);
                        
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
                            logger->debug() << "|\033[38;5;94m016759\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value);
                        }
                        
                        float _tmp_18912 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value;
                        _tmp_18912 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18912);
                        _tmp_18912 -= 1;
                        uint8_t* _tmp_18911 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_18911 = static_cast<uint8_t>(_tmp_18912);
                        
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
                        logger->debug() << "|\033[38;5;94m016760\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value);
                    }
                    
                    uint8_t* _tmp_18913 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_18913 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value; 
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
                            logger->debug() << "|\033[38;5;94m016761\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        }
                        
                        float _tmp_18915 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        _tmp_18915 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18915);
                        _tmp_18915 -= 1;
                        uint16_t* _tmp_18914 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18914 = static_cast<uint16_t>(_tmp_18915);
                        
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
                            logger->debug() << "|\033[38;5;94m016762\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                        
                        uint8_t* _tmp_18916 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18916 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value; 
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
                        logger->debug() << "|\033[38;5;94m016763\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value);
                    }
                    
                    float _tmp_18918 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value;
                    _tmp_18918 *= 10.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_18918);
                    _tmp_18918 -= 1;
                    uint8_t* _tmp_18917 = (uint8_t*) buffer; buffer += 1;
                    *_tmp_18917 = static_cast<uint8_t>(_tmp_18918);
                    
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
                            logger->debug() << "|\033[38;5;94m016764\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        }
                        
                        float _tmp_18920 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        _tmp_18920 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18920);
                        _tmp_18920 -= -160;
                        uint16_t* _tmp_18919 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18919 = static_cast<uint16_t>(_tmp_18920);
                        
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
                            logger->debug() << "|\033[38;5;94m016765\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value);
                        }
                        
                        float _tmp_18922 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                        _tmp_18922 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18922);
                        uint8_t* _tmp_18921 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_18921 = static_cast<uint8_t>(_tmp_18922);
                        
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
                            logger->debug() << "|\033[38;5;94m016766\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        }
                        
                        uint16_t* _tmp_18923 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value - -1023;
                        *_tmp_18923 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m016767\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                        
                        uint8_t* _tmp_18924 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18924 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value; 
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
                    uint8_t* _ext_flag_8384 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016768\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value);
                    }
                    
                    uint8_t* _tmp_18925 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_18925 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value; 
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
                            logger->debug() << "|\033[38;5;94m016769\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        }
                        
                        float _tmp_18927 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        _tmp_18927 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18927);
                        _tmp_18927 -= -32766;
                        uint16_t* _tmp_18926 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18926 = static_cast<uint16_t>(_tmp_18927);
                        
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
                            logger->debug() << "|\033[38;5;94m016770\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                        
                        uint8_t* _tmp_18928 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18928 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value; 
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
                            logger->debug() << "|\033[38;5;94m016771\033[0m| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size());
                        
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() < 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " is less than allowable (7); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18929 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size();
                        if(__aux64__ > 7) __aux64__ = 7;
                        *_tmp_18929 = __aux64__ - 7;
                        buffer += 1;
                        
                        int __ifa = __aux64__;
                        for(int a = 0; a < __ifa; a++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[a]? 1: 0);
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0) {
                        // Field:  type(LanePosition) name(lane_position) extGroup(0)
                        // Integer
                        
                        // INT8  min(-1) max(14) span(16) dataType(Int8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016772\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value);
                        }
                        
                        uint8_t* _tmp_18930 = (uint8_t*) buffer++;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value - -1;
                        *_tmp_18930 = __aux64__;
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
                                logger->debug() << "|\033[38;5;94m016773\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            }
                            
                            uint16_t* _tmp_18931 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value - -511;
                            *_tmp_18931 = __aux64__;
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
                                logger->debug() << "|\033[38;5;94m016774\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                            }
                            
                            uint8_t* _tmp_18932 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value - 1;
                            *_tmp_18932 = __aux64__;
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
                                logger->debug() << "|\033[38;5;94m016775\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            }
                            
                            float _tmp_18934 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            _tmp_18934 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18934);
                            _tmp_18934 -= -160;
                            uint16_t* _tmp_18933 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18933 = static_cast<uint16_t>(_tmp_18934);
                            
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
                                logger->debug() << "|\033[38;5;94m016776\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value);
                            }
                            
                            float _tmp_18936 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value;
                            _tmp_18936 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18936);
                            uint8_t* _tmp_18935 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18935 = static_cast<uint8_t>(_tmp_18936);
                            
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
                                logger->debug() << "|\033[38;5;94m016777\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            }
                            
                            float _tmp_18938 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            _tmp_18938 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18938);
                            _tmp_18938 -= -160;
                            uint16_t* _tmp_18937 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18937 = static_cast<uint16_t>(_tmp_18938);
                            
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
                                logger->debug() << "|\033[38;5;94m016778\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value);
                            }
                            
                            float _tmp_18940 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value;
                            _tmp_18940 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18940);
                            uint8_t* _tmp_18939 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18939 = static_cast<uint8_t>(_tmp_18940);
                            
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
                            logger->debug() << "|\033[38;5;94m016779\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value);
                        }
                        
                        uint8_t* _tmp_18941 = (uint8_t*) buffer++;
                        *_tmp_18941 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value; 
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
                            uint8_t* _ext_flag_8395 = (uint8_t*) buffer++;  // Write extension flag for CenDsrcTollingZone
                            *_ext_flag_8395 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_18942 = (char*) buffer++;
                            *_tmp_18942 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016780\033[0m| Optional field cen_dsrc_tolling_zone_id = " << *_tmp_18942;
                            
                            // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                            // Real
                            
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016781\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            }
                            
                            double _tmp_18944 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            _tmp_18944 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_18944);
                            _tmp_18944 -= -900000000;
                            uint32_t* _tmp_18943 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_18943 = static_cast<uint32_t>(_tmp_18944);
                            
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
                                logger->debug() << "|\033[38;5;94m016782\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            }
                            
                            double _tmp_18946 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            _tmp_18946 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_18946);
                            _tmp_18946 -= -1800000000;
                            uint32_t* _tmp_18945 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_18945 = static_cast<uint32_t>(_tmp_18946);
                            
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
                                    logger->debug() << "|\033[38;5;94m016783\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                 " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                }
                                
                                uint32_t* _tmp_18947 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18947 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value; 
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
                            
                            if(*_ext_flag_8395) {
                            }
                    }
            
            }
            else if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.size() != 0)  // CHOICE 1  fieldType(HighFrequencyContainer) 
            {
                *_choice_421 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016784\033[0m| Choice selection: 1";
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_8399 = (uint8_t*) buffer++;  // Write extension flag for RSUContainerHighFrequency
                    *_ext_flag_8399 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_18949 = (char*) buffer++;
                    *_tmp_18949 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016785\033[0m| Optional field protected_communication_zones_rsu = " << *_tmp_18949;
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0) {
                        // Field:  type(ProtectedCommunicationZonesRSU) name(protected_communication_zones_rsu) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        uint16_t* _tmp_18950 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_18950 = __aux64__ - 1;
                        
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
                                uint8_t* _ext_flag_8400 = (uint8_t*) buffer++;  // Write extension flag for ProtectedCommunicationZone
                                *_ext_flag_8400 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_18951 = (char*) buffer++;
                                *_tmp_18951 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016787\033[0m| Optional field expiry_time = " << *_tmp_18951;
                                char* _tmp_18952 = (char*) buffer++;
                                *_tmp_18952 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016788\033[0m| Optional field protected_zone_radius = " << *_tmp_18952;
                                char* _tmp_18953 = (char*) buffer++;
                                *_tmp_18953 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016789\033[0m| Optional field protected_zone_id = " << *_tmp_18953;
                                
                                // Field:  type(ProtectedZoneType) name(protected_zone_type) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(1) span(2) dataType(Int32)
                                uint8_t* _ext_flag_8401 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016790\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value);
                                }
                                
                                uint8_t* _tmp_18954 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_18954 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value; 
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.size() != 0) {
                                    // Field:  type(TimestampIts) name(expiry_time) extGroup(0)
                                    // Integer
                                    
                                    // INT64  min(0) max(4398046511103) span(4398046511104) dataType(Int64)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016791\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value;
                                    }
                                    
                                    uint64_t* _tmp_18955 = (uint64_t*)buffer; buffer += 8;
                                    *_tmp_18955 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' (" << __aux64__ << ") exceeds max allowable (4398046511103); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016792\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value;
                                }
                                
                                double _tmp_18957 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value;
                                _tmp_18957 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_18957);
                                _tmp_18957 -= -900000000;
                                uint32_t* _tmp_18956 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18956 = static_cast<uint32_t>(_tmp_18957);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016793\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value;
                                }
                                
                                double _tmp_18959 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value;
                                _tmp_18959 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_18959);
                                _tmp_18959 -= -1800000000;
                                uint32_t* _tmp_18958 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18958 = static_cast<uint32_t>(_tmp_18959);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.size() != 0) {
                                    // Field:  type(ProtectedZoneRadius) name(protected_zone_radius) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(1) max(255) span(255) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016794\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value);
                                    }
                                    
                                    uint8_t* _ext_flag_8405 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].
                                    *_ext_flag_8405 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value >= 1 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value <= 255) ? 0 : 1;
                                    
                                    if(*_ext_flag_8405) {
                                        uint8_t* _tmp_18961 = (uint8_t*) buffer++; 
                                        if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value >= 0 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value <= INT32_MAX) {
                                            *_tmp_18961 = 0;
                                        
                                            uint32_t* _tmp_18960 = (uint32_t*)buffer; buffer += 4;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value;
                                            __aux64__ -= INT32_MIN;
                                            *_tmp_18960 = __aux64__;
                                        } 
                                        else
                                        {
                                            *_tmp_18961 = 1;
                                        
                                            uint64_t* _tmp_18960 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value;
                                            __aux64__ -= INT64_MIN;
                                            *_tmp_18960 = __aux64__;
                                        }
                                    } else {
                                        uint8_t* _tmp_18960 = (uint8_t*) buffer++;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value - 1;
                                        *_tmp_18960 = __aux64__;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value;
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.size() != 0) {
                                    // Field:  type(ProtectedZoneID) name(protected_zone_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016795\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_18962 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_18962 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(*_ext_flag_8400) {
                                }
                        }
                    }
                    
                    if(*_ext_flag_8399) {
                    }
            
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_421) << ") selected in CHOICE HighFrequencyContainer in 'cam.cam_parameters.high_frequency_container'; message dropped.";
                return -1;
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() != 0) {
                // Field:  type(LowFrequencyContainer) name(low_frequency_container) extGroup(0)
                // Choice
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency
                uint8_t* _ext_flag_8407 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_8407 = 0; 
                
                uint8_t* _choice_422 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.size() != 0) {  // CHOICE 0  fieldType(LowFrequencyContainer) 
                    *_choice_422 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016796\033[0m| Choice selection: 0";
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        // Optional fields bytemap
                        
                        // Field:  type(VehicleRole) name(vehicle_role) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016797\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        uint8_t* _tmp_18965 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18965 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value; 
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
                            logger->debug() << "|\033[38;5;94m016798\033[0m| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size());
                        
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() < 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " is less than allowable (8); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() > 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " exceeds max allowable (8); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18966 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size();
                        if(__aux64__ > 8) __aux64__ = 8;
                        *_tmp_18966 = __aux64__ - 8;
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
                        uint16_t* _tmp_18967 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_18967 = __aux64__;
                        
                        int __ifd = __aux64__;
                        for(int d = 0; d < __ifd; d++) { 
                            
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_18968 = (char*) buffer++;
                                *_tmp_18968 = (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016800\033[0m| Optional field path_delta_time = " << *_tmp_18968;
                                
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
                                        logger->debug() << "|\033[38;5;94m016801\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value;
                                    }
                                    
                                    double _tmp_18970 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value;
                                    _tmp_18970 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18970);
                                    _tmp_18970 -= -131071;
                                    uint32_t* _tmp_18969 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_18969 = static_cast<uint32_t>(_tmp_18970);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016802\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value;
                                    }
                                    
                                    double _tmp_18972 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value;
                                    _tmp_18972 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18972);
                                    _tmp_18972 -= -131071;
                                    uint32_t* _tmp_18971 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_18971 = static_cast<uint32_t>(_tmp_18972);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016803\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value;
                                    }
                                    
                                    float _tmp_18974 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value;
                                    _tmp_18974 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18974);
                                    _tmp_18974 -= -12700;
                                    uint16_t* _tmp_18973 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18973 = static_cast<uint16_t>(_tmp_18974);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                        return -1;
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time.size() != 0) {
                                    // Field:  type(PathDeltaTime) name(path_delta_time) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016804\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                    }
                                    
                                    uint8_t* _ext_flag_8412 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].
                                    float _tmp_18975 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                    _tmp_18975 *= 100.0;
                                    __aux64__ = static_cast<int64_t>(_tmp_18975);
                                    *_ext_flag_8412 = (__aux64__ >= 1 && __aux64__ <= 65535) ? 0 : 1;
                                    
                                    if(*_ext_flag_8412) {
                                        uint8_t* _tmp_18976 = (uint8_t*) buffer++; 
                                    
                                        if(__aux64__ >= INT32_MIN && __aux64__ <= INT32_MAX) {
                                            *_tmp_18976 = 0;
                                    
                                            float _tmp_18978 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                            _tmp_18978 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18978);
                                            _tmp_18978 -= INT32_MIN;
                                            uint32_t* _tmp_18977 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_18977 = static_cast<uint32_t>(_tmp_18978);
                                        }
                                        else
                                        {
                                            *_tmp_18976 = 1;
                                    
                                            float _tmp_18980 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                            _tmp_18980 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18980);
                                            _tmp_18980 -= INT64_MIN;
                                            uint32_t* _tmp_18979 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_18979 = static_cast<uint32_t>(_tmp_18980);
                                        }
                                    }
                                    else
                                    {
                                        float _tmp_18982 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[d].path_delta_time[0].value;
                                        _tmp_18982 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18982);
                                        _tmp_18982 -= 1;
                                        uint16_t* _tmp_18981 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18981 = static_cast<uint16_t>(_tmp_18982);
                                    }
                                }
                                
                        }
                
                }
                else
                {
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_422) << ") selected in CHOICE LowFrequencyContainer in 'cam.cam_parameters.low_frequency_container[0]'; message dropped.";
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
                uint8_t* _ext_flag_8413 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_8413 = 0; 
                
                uint8_t* _choice_423 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.size() != 0) {  // CHOICE 0  fieldType(SpecialVehicleContainer) 
                    *_choice_423 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016805\033[0m| Choice selection: 0";
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_18983 = (char*) buffer++;
                        *_tmp_18983 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016806\033[0m| Optional field pt_activation = " << *_tmp_18983;
                        
                        // Field:  type(EmbarkationStatus) name(embarkation_status) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_18984 = (uint8_t*)buffer++;
                        *_tmp_18984 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016807\033[0m| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status: " << (*_tmp_18984);
                        
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
                                    logger->debug() << "|\033[38;5;94m016808\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value);
                                }
                                
                                uint8_t* _tmp_18985 = (uint8_t*) buffer++;
                                *_tmp_18985 = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value; 
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
                                    logger->debug() << "|\033[38;5;94m016809\033[0m| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size(): cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data" << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size());
                                
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
                                uint8_t* _tmp_18986 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size();
                                if(__aux64__ > 20) __aux64__ = 20;
                                *_tmp_18986 = __aux64__ - 1;
                                
                                int __ife = __aux64__;
                                for(int e = 0; e < __ife; e++) {
                                    int8_t* __m__ = (int8_t*)buffer++;
                                    *__m__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values[e];
                                }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.size() != 0)  // CHOICE 1  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_423 = 1;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016810\033[0m| Choice selection: 1";
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        // Optional fields bytemap
                        
                        // Field:  type(SpecialTransportType) name(special_transport_type) extGroup(0)
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016811\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() < 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " is less than allowable (4); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() > 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " exceeds max allowable (4); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18987 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size();
                        if(__aux64__ > 4) __aux64__ = 4;
                        *_tmp_18987 = __aux64__ - 4;
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
                            logger->debug() << "|\033[38;5;94m016812\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18988 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_18988 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifg = __aux64__;
                        for(int g = 0; g < __ifg; g++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[g]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.size() != 0)  // CHOICE 2  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_423 = 2;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016813\033[0m| Choice selection: 2";
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        // Optional fields bytemap
                        
                        // Field:  type(DangerousGoodsBasic) name(dangerous_goods_basic) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(19) span(20) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016814\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                        
                        uint8_t* _tmp_18989 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18989 = ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value; 
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
                    *_choice_423 = 3;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016815\033[0m| Choice selection: 3";
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_18990 = (char*) buffer++;
                        *_tmp_18990 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016816\033[0m| Optional field roadworks_sub_cause_code = " << *_tmp_18990;
                        char* _tmp_18991 = (char*) buffer++;
                        *_tmp_18991 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016817\033[0m| Optional field closed_lanes = " << *_tmp_18991;
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0) {
                            // Field:  type(RoadworksSubCauseCode) name(roadworks_sub_cause_code) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016818\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value);
                            }
                            
                            uint8_t* _tmp_18992 = (uint8_t*) buffer++;
                            *_tmp_18992 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value; 
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
                            logger->debug() << "|\033[38;5;94m016819\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18993 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_18993 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifh = __aux64__;
                        for(int h = 0; h < __ifh; h++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[h]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0) {
                            // Field:  type(ClosedLanes) name(closed_lanes) extGroup(0)
                                // ClosedLanes  SEQUENCE
                                    //  innerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  outerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  drivingLaneStatus       DrivingLaneStatus    OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_8417 = (uint8_t*) buffer++;  // Write extension flag for ClosedLanes
                                *_ext_flag_8417 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_18994 = (char*) buffer++;
                                *_tmp_18994 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016820\033[0m| Optional field innerhard_shoulder_status = " << *_tmp_18994;
                                char* _tmp_18995 = (char*) buffer++;
                                *_tmp_18995 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016821\033[0m| Optional field outerhard_shoulder_status = " << *_tmp_18995;
                                char* _tmp_18996 = (char*) buffer++;
                                *_tmp_18996 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016822\033[0m| Optional field driving_lane_status = " << *_tmp_18996;
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0) {
                                    // Field:  type(HardShoulderStatus) name(innerhard_shoulder_status) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016823\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_18997 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_18997 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value; 
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
                                        logger->debug() << "|\033[38;5;94m016824\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_18998 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_18998 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value; 
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
                                        logger->debug() << "|\033[38;5;94m016825\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size());
                                    
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() < 1) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " is less than allowable (1); message dropped.";
                                        return -1;
                                    }
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() > 13) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " exceeds max allowable (13); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_18999 = (uint8_t*)buffer;
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size();
                                    if(__aux64__ > 13) __aux64__ = 13;
                                    *_tmp_18999 = __aux64__ - 1;
                                    buffer += 1;
                                    
                                    int __ifi = __aux64__;
                                    for(int i = 0; i < __ifi; i++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[i]? 1: 0);
                                    }
                                }
                                
                                if(*_ext_flag_8417) {
                                }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.size() != 0)  // CHOICE 4  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_423 = 4;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016826\033[0m| Choice selection: 4";
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        // Optional fields bytemap
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016827\033[0m| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_19001 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_19001 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifj = __aux64__;
                        for(int j = 0; j < __ifj; j++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[j]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.size() != 0)  // CHOICE 5  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_423 = 5;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016828\033[0m| Choice selection: 5";
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_19002 = (char*) buffer++;
                        *_tmp_19002 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016829\033[0m| Optional field incident_indication = " << *_tmp_19002;
                        char* _tmp_19003 = (char*) buffer++;
                        *_tmp_19003 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016830\033[0m| Optional field emergency_priority = " << *_tmp_19003;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016831\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_19004 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_19004 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifk = __aux64__;
                        for(int k = 0; k < __ifk; k++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[k]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_8420 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_8420 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016832\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_19005 = (uint8_t*) buffer++;
                                *_tmp_19005 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value; 
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
                                    logger->debug() << "|\033[38;5;94m016833\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_19006 = (uint8_t*) buffer++;
                                *_tmp_19006 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value; 
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
                                
                                if(*_ext_flag_8420) {
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0) {
                            // Field:  type(EmergencyPriority) name(emergency_priority) extGroup(0)
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016834\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size());
                            
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() < 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " is less than allowable (2); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() > 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " exceeds max allowable (2); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_19008 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size();
                            if(__aux64__ > 2) __aux64__ = 2;
                            *_tmp_19008 = __aux64__ - 2;
                            buffer += 1;
                            
                            int __ifl = __aux64__;
                            for(int l = 0; l < __ifl; l++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[l]? 1: 0);
                            }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.size() != 0)  // CHOICE 6  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_423 = 6;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016835\033[0m| Choice selection: 6";
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_19009 = (char*) buffer++;
                        *_tmp_19009 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016836\033[0m| Optional field incident_indication = " << *_tmp_19009;
                        char* _tmp_19010 = (char*) buffer++;
                        *_tmp_19010 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016837\033[0m| Optional field traffic_rule = " << *_tmp_19010;
                        char* _tmp_19011 = (char*) buffer++;
                        *_tmp_19011 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016838\033[0m| Optional field speed_limit = " << *_tmp_19011;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016839\033[0m| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_19012 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_19012 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifm = __aux64__;
                        for(int m = 0; m < __ifm; m++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[m]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_8423 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_8423 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016840\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_19013 = (uint8_t*) buffer++;
                                *_tmp_19013 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value; 
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
                                    logger->debug() << "|\033[38;5;94m016841\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_19014 = (uint8_t*) buffer++;
                                *_tmp_19014 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value; 
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
                                
                                if(*_ext_flag_8423) {
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0) {
                            // Field:  type(TrafficRule) name(traffic_rule) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(3) span(4) dataType(Int32)
                            uint8_t* _ext_flag_8426 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016842\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                            
                            uint8_t* _tmp_19016 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_19016 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value; 
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
                                logger->debug() << "|\033[38;5;94m016843\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value);
                            }
                            
                            uint8_t* _tmp_19017 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value - 1;
                            *_tmp_19017 = __aux64__;
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
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_423) << ") selected in CHOICE SpecialVehicleContainer in 'cam.cam_parameters.special_vehicle_container[0]'; message dropped.";
                    return -1;
                }
            }
            
            if(*_ext_flag_8361) {
            }
    
	
            return buffer - start;
        }
    } 
}