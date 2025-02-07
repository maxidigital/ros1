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
 * Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(302637) e2v(1) version(3)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <mad_e2v_madurban_wer_encoder.h>

namespace wind
{
    namespace encoder_mad_e2v_madurban
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const mad_e2v_madurban_msgs::EPUtoVehicle::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<mad_e2v_madurban_msgs::msg::EPUtoVehicle>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const mad_e2v_madurban_msgs::msg::EPUtoVehicle* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // EPUtoVehicle  SEQUENCE
        //  header       ItsPduHeader            
        //  epuToVehicle EPUtoVehiclePayload     
    // Optional fields bytemap
    
    // Field:  type(ItsPduHeader) name(hheader) extGroup(0)
        // ItsPduHeader  SEQUENCE
            //  protocolVersion OrdinalNumber1B     
            //  messageId       MessageId           
            //  stationId       StationId           
        // Optional fields bytemap
        
        // Field:  type(OrdinalNumber1B) name(protocol_version) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m014852\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_16511 = (uint8_t*) buffer++;
        *_tmp_16511 = ros->hheader.protocol_version.value; 
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
        
        // Field:  type(MessageId) name(message_id) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m014853\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_16512 = (uint8_t*) buffer++;
        *_tmp_16512 = ros->hheader.message_id.value; 
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
        
        // Field:  type(StationId) name(station_id) extGroup(0)
        // Integer
        
        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
        if(debug) {
            logger->debug() << "|\033[38;5;94m014854\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_16513 = (uint32_t*) buffer; buffer += 4;
        *_tmp_16513 = ros->hheader.station_id.value; 
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
    
    // Field:  type(EPUtoVehiclePayload) name(epu_to_vehicle) extGroup(0)
        // EPUtoVehiclePayload  SEQUENCE
            //  managementContainer       ManagementContainer           
            //  epuHighFrequencyContainer EPUHighFrequencyContainer     
            //  epuLowFrequencyContainer  EPULowFrequencyContainer    OPTIONAL  
        // Optional fields bytemap
        char* _tmp_16514 = (char*) buffer++;
        *_tmp_16514 = (ros->epu_to_vehicle.epu_low_frequency_container.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m014855\033[0m| Optional field epu_low_frequency_container = " << *_tmp_16514;
        
        // Field:  type(ManagementContainer) name(management_container) extGroup(0)
            // ManagementContainer  SEQUENCE
                //  referenceTime     GenerationDeltaTime     
                //  referencePosition ReferencePosition       
                //  ...
            uint8_t* _ext_flag_7146 = (uint8_t*) buffer++;  // Write extension flag for ManagementContainer
            *_ext_flag_7146 = 0;  
            
            // Optional fields bytemap
            
            // Field:  type(GenerationDeltaTime) name(reference_time) extGroup(0)
            // Integer
            
            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
            if(debug) {
                logger->debug() << "|\033[38;5;94m014856\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_time.value) << 
                             " epu_to_vehicle.management_container.reference_time.value: " << ros->epu_to_vehicle.management_container.reference_time.value;
            }
            
            uint16_t* _tmp_16515 = (uint16_t*) buffer; buffer += 2;
            *_tmp_16515 = ros->epu_to_vehicle.management_container.reference_time.value; 
            __aux64__ = ros->epu_to_vehicle.management_container.reference_time.value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_time.value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_time.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
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
                    logger->debug() << "|\033[38;5;94m014857\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.latitude.value) << 
                                 " epu_to_vehicle.management_container.reference_position.latitude.value: " << ros->epu_to_vehicle.management_container.reference_position.latitude.value;
                }
                
                double _tmp_16517 = ros->epu_to_vehicle.management_container.reference_position.latitude.value;
                _tmp_16517 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_16517);
                _tmp_16517 -= -900000000;
                uint32_t* _tmp_16516 = (uint32_t*) buffer; buffer += 4;
                *_tmp_16516 = static_cast<uint32_t>(_tmp_16517);
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                    return -1;
                }
                
                // Field:  type(Longitude) name(longitude) extGroup(0)
                // Real
                
                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m014858\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.longitude.value) << 
                                 " epu_to_vehicle.management_container.reference_position.longitude.value: " << ros->epu_to_vehicle.management_container.reference_position.longitude.value;
                }
                
                double _tmp_16519 = ros->epu_to_vehicle.management_container.reference_position.longitude.value;
                _tmp_16519 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_16519);
                _tmp_16519 -= -1800000000;
                uint32_t* _tmp_16518 = (uint32_t*) buffer; buffer += 4;
                *_tmp_16518 = static_cast<uint32_t>(_tmp_16519);
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
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
                        logger->debug() << "|\033[38;5;94m014859\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    }
                    
                    float _tmp_16521 = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    _tmp_16521 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_16521);
                    uint16_t* _tmp_16520 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_16520 = static_cast<uint16_t>(_tmp_16521);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                    // Real
                    
                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m014860\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    }
                    
                    float _tmp_16523 = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    _tmp_16523 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_16523);
                    uint16_t* _tmp_16522 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_16522 = static_cast<uint16_t>(_tmp_16523);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                    // Real
                    
                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m014861\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                     " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    }
                    
                    float _tmp_16525 = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    _tmp_16525 *= 10.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_16525);
                    uint16_t* _tmp_16524 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_16524 = static_cast<uint16_t>(_tmp_16525);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
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
                        logger->debug() << "|\033[38;5;94m014862\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value) << 
                                     " epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value: " << ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value;
                    }
                    
                    float _tmp_16527 = ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value;
                    _tmp_16527 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_16527);
                    _tmp_16527 -= -100000;
                    uint32_t* _tmp_16526 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_16526 = static_cast<uint32_t>(_tmp_16527);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -100000) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") less than (-100000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 800001) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") exceeds max allowable (800001); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(15) span(16) dataType(Int32)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m014863\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value);
                    }
                    
                    uint8_t* _tmp_16528 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_16528 = ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value; 
                    __aux64__ = ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 15) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                        return -1;
                    }
            
            if(*_ext_flag_7146) {
            }
        
        // Field:  type(EPUHighFrequencyContainer) name(epu_high_frequency_container) extGroup(0)
            // EPUHighFrequencyContainer  SEQUENCE
                //  behaviours Behaviours      OPTIONAL  
                //  safety     SafetyAdvices   OPTIONAL  
            // Optional fields bytemap
            char* _tmp_16530 = (char*) buffer++;
            *_tmp_16530 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m014864\033[0m| Optional field behaviours = " << *_tmp_16530;
            char* _tmp_16531 = (char*) buffer++;
            *_tmp_16531 = (ros->epu_to_vehicle.epu_high_frequency_container.safety.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m014865\033[0m| Optional field safety = " << *_tmp_16531;
            
            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours.size() != 0) {
                // Field:  type(Behaviours) name(behaviours) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(10) span(10) ext(true)
                uint8_t* _ext_flag_7155 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].
                *_ext_flag_7155 = 0; 
                
                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements.size();
                if(__aux64__ > 10) __aux64__ = 10;
                uint16_t* _tmp_16532 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_16532 = __aux64__ - 1;
                
                int __ify = __aux64__;
                for(int y = 0; y < __ify; y++) { 
                    
                        // BehaviourContainer  SEQUENCE
                            //  subjectStationID     StationId          
                            //  movementAdvice       MovementAdvice     
                            //  exteriorLightsAdvice ExteriorLights   OPTIONAL  
                            //  hornAdvice           HornAdvice       OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_7156 = (uint8_t*) buffer++;  // Write extension flag for BehaviourContainer
                        *_ext_flag_7156 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_16533 = (char*) buffer++;
                        *_tmp_16533 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m014867\033[0m| Optional field exterior_lights_advice = " << *_tmp_16533;
                        char* _tmp_16534 = (char*) buffer++;
                        *_tmp_16534 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].horn_advice.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m014868\033[0m| Optional field horn_advice = " << *_tmp_16534;
                        
                        // Field:  type(StationId) name(subject_station_id) extGroup(0)
                        // Integer
                        
                        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m014869\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].subject_station_id.value;
                        }
                        
                        uint32_t* _tmp_16535 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_16535 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].subject_station_id.value; 
                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].subject_station_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].subject_station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].subject_station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MovementAdvice) name(movement_advice) extGroup(0)
                            // MovementAdvice  SEQUENCE
                                //  maneuverAdvice   ManeuverAdvice     OPTIONAL  
                                //  trajectoryAdvice TrajectoryAdvice   OPTIONAL  
                                //  controlAdvice    ControlAdvice      OPTIONAL  
                            // Optional fields bytemap
                            char* _tmp_16536 = (char*) buffer++;
                            *_tmp_16536 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m014870\033[0m| Optional field maneuver_advice = " << *_tmp_16536;
                            char* _tmp_16537 = (char*) buffer++;
                            *_tmp_16537 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m014871\033[0m| Optional field trajectory_advice = " << *_tmp_16537;
                            char* _tmp_16538 = (char*) buffer++;
                            *_tmp_16538 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m014872\033[0m| Optional field control_advice = " << *_tmp_16538;
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice.size() != 0) {
                                // Field:  type(ManeuverAdvice) name(maneuver_advice) extGroup(0)
                                    // ManeuverAdvice  SEQUENCE
                                        //  nominalManeuver ManeuverAdviceNominal     
                                        //  mrmManeuver     ManeuverAdviceMRM         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ManeuverAdviceNominal) name(nominal_maneuver) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(12) span(13) dataType(Int32)
                                    uint8_t* _ext_flag_7158 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].nominal_maneuver.
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014873\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].nominal_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].nominal_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].nominal_maneuver.value);
                                    }
                                    
                                    uint8_t* _tmp_16539 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_16539 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].nominal_maneuver.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].nominal_maneuver.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].nominal_maneuver.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].nominal_maneuver.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ManeuverAdviceMRM) name(mrm_maneuver) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(6) span(7) dataType(Int32)
                                    uint8_t* _ext_flag_7159 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].mrm_maneuver.
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014874\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].mrm_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].mrm_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].mrm_maneuver.value);
                                    }
                                    
                                    uint8_t* _tmp_16540 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_16540 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].mrm_maneuver.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].mrm_maneuver.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].mrm_maneuver.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 6) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.maneuver_advice[0].mrm_maneuver.value' (" << __aux64__ << ") exceeds max allowable (6); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice.size() != 0) {
                                // Field:  type(TrajectoryAdvice) name(trajectory_advice) extGroup(0)
                                    // TrajectoryAdvice  SEQUENCE
                                        //  nominalTrajectory PathPredicted     
                                        //  mrmTrajectory     PathPredicted     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(PathPredicted) name(nominal_trajectory) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_7160 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.
                                    *_ext_flag_7160 = 0; 
                                    
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_16541 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_16541 = __aux64__ - 1;
                                    
                                    int __ifz = __aux64__;
                                    for(int z = 0; z < __ifz; z++) { 
                                        
                                            // PathPointPredicted  SEQUENCE
                                                //  deltaLatitude                DeltaLatitude            
                                                //  deltaLongitude               DeltaLongitude           
                                                //  horizontalPositionConfidence PosConfidenceEllipse   OPTIONAL  
                                                //  deltaAltitude                DeltaAltitude            
                                                //  altitudeConfidence           AltitudeConfidence       
                                                //  pathDeltaTime                PathDeltaTimeChoice    OPTIONAL  
                                                //  symmetricAreaOffset          StandardLength9b       OPTIONAL  
                                                //  asymmetricAreaOffset         StandardLength9b       OPTIONAL  
                                                //  headingValue                 HeadingValue           OPTIONAL  Extension group #1
                                                //  absSpeed                     SpeedValue             OPTIONAL  Extension group #1
                                                //  longitudinalAcceleration     AccelerationValue      OPTIONAL  Extension group #1
                                            uint8_t* _ext_flag_7161 = (uint8_t*) buffer++;  // Write extension flag for PathPointPredicted
                                            *_ext_flag_7161 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration.size() != 0) ? 1 : 0; 
                                            
                                            // Optional fields bytemap
                                            char* _tmp_16542 = (char*) buffer++;
                                            *_tmp_16542 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m014876\033[0m| Optional field horizontal_position_confidence = " << *_tmp_16542;
                                            char* _tmp_16543 = (char*) buffer++;
                                            *_tmp_16543 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m014877\033[0m| Optional field path_delta_time = " << *_tmp_16543;
                                            char* _tmp_16544 = (char*) buffer++;
                                            *_tmp_16544 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].symmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m014878\033[0m| Optional field symmetric_area_offset = " << *_tmp_16544;
                                            char* _tmp_16545 = (char*) buffer++;
                                            *_tmp_16545 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].asymmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m014879\033[0m| Optional field asymmetric_area_offset = " << *_tmp_16545;
                                            
                                            // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014880\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_latitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_latitude.value;
                                            }
                                            
                                            double _tmp_16547 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_latitude.value;
                                            _tmp_16547 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16547);
                                            _tmp_16547 -= -131071;
                                            uint32_t* _tmp_16546 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_16546 = static_cast<uint32_t>(_tmp_16547);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014881\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_longitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_longitude.value;
                                            }
                                            
                                            double _tmp_16549 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_longitude.value;
                                            _tmp_16549 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16549);
                                            _tmp_16549 -= -131071;
                                            uint32_t* _tmp_16548 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_16548 = static_cast<uint32_t>(_tmp_16549);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence.size() != 0) {
                                                // Field:  type(PosConfidenceEllipse) name(horizontal_position_confidence) extGroup(0)
                                                    // PosConfidenceEllipse  SEQUENCE
                                                        //  semiMajorConfidence  SemiAxisLength     
                                                        //  semiMinorConfidence  SemiAxisLength     
                                                        //  semiMajorOrientation HeadingValue       
                                                    // Optional fields bytemap
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_major_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014882\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    }
                                                    
                                                    float _tmp_16551 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    _tmp_16551 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16551);
                                                    uint16_t* _tmp_16550 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16550 = static_cast<uint16_t>(_tmp_16551);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014883\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_minor_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_minor_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    }
                                                    
                                                    float _tmp_16553 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    _tmp_16553 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16553);
                                                    uint16_t* _tmp_16552 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16552 = static_cast<uint16_t>(_tmp_16553);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014884\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_orientation.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_orientation.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    }
                                                    
                                                    float _tmp_16555 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    _tmp_16555 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16555);
                                                    uint16_t* _tmp_16554 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16554 = static_cast<uint16_t>(_tmp_16555);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                            }
                                            
                                            // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014885\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_altitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_altitude.value;
                                            }
                                            
                                            float _tmp_16557 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_altitude.value;
                                            _tmp_16557 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16557);
                                            _tmp_16557 -= -12700;
                                            uint16_t* _tmp_16556 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16556 = static_cast<uint16_t>(_tmp_16557);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014886\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].altitude_confidence.value);
                                            }
                                            
                                            uint8_t* _tmp_16558 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_16558 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].altitude_confidence.value; 
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].altitude_confidence.value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time.size() != 0) {
                                                // Field:  type(PathDeltaTimeChoice) name(path_delta_time) extGroup(0)
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds
                                                uint8_t* _choice_393 = (uint8_t*) buffer;
                                                buffer++;
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_high_precision.size() != 0) {  // CHOICE 0  fieldType(PathDeltaTimeChoice) 
                                                    *_choice_393 = 0;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m014887\033[0m| Choice selection: 0";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014888\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_high_precision[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_high_precision[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_high_precision[0].value);
                                                    }
                                                    
                                                    float _tmp_16560 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_high_precision[0].value;
                                                    _tmp_16560 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16560);
                                                    uint8_t* _tmp_16559 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_16559 = static_cast<uint8_t>(_tmp_16560);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_big_range.size() != 0)  // CHOICE 1  fieldType(PathDeltaTimeChoice) 
                                                {
                                                    *_choice_393 = 1;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m014889\033[0m| Choice selection: 1";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014890\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_big_range[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_big_range[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_big_range[0].value);
                                                    }
                                                    
                                                    float _tmp_16562 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_big_range[0].value;
                                                    _tmp_16562 *= 0.1;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16562);
                                                    uint8_t* _tmp_16561 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_16561 = static_cast<uint8_t>(_tmp_16562);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_393) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].path_delta_time[0]'; message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].symmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(symmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m014891\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].symmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].symmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].symmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_16564 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].symmetric_area_offset[0].value;
                                                _tmp_16564 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_16564);
                                                uint16_t* _tmp_16563 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_16563 = static_cast<uint16_t>(_tmp_16564);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].symmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].symmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].asymmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(asymmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m014892\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].asymmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].asymmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].asymmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_16566 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].asymmetric_area_offset[0].value;
                                                _tmp_16566 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_16566);
                                                uint16_t* _tmp_16565 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_16565 = static_cast<uint16_t>(_tmp_16566);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].asymmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].asymmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(*_ext_flag_7161) {
                                                // Write number of extensions 
                                                uint8_t* _tmp_16567 = (uint8_t*) buffer++;
                                                *_tmp_16567 = 1;
                                                
                                                // Write Bytemap
                                                // extension group #1)
                                                uint8_t* _tmp_16568 = (uint8_t*) buffer++;
                                                *_tmp_16568 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration.size() != 0) ? 1 : 0;
                                                
                                                // OpenType length variable 
                                                uint16_t* _tmp_16569_openType = (uint16_t*) buffer;
                                                buffer += 2;
                                                const uint8_t *_tmp_16570_start = buffer; // Starting point
                                                
                                                // Optional fields bytemap
                                                uint8_t* _tmp_16571 = (uint8_t*)buffer++;
                                                *_tmp_16571 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_16572 = (uint8_t*)buffer++;
                                                *_tmp_16572 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_16573 = (uint8_t*)buffer++;
                                                *_tmp_16573 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration.size() != 0 ? 1: 0);
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value.size() != 0) {
                                                    // Field:  type(HeadingValue) name(heading_value) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014893\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value[0].value;
                                                    }
                                                    
                                                    float _tmp_16575 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value[0].value;
                                                    _tmp_16575 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16575);
                                                    uint16_t* _tmp_16574 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16574 = static_cast<uint16_t>(_tmp_16575);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].heading_value[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed.size() != 0) {
                                                    // Field:  type(SpeedValue) name(abs_speed) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014894\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed[0].value;
                                                    }
                                                    
                                                    float _tmp_16577 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed[0].value;
                                                    _tmp_16577 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16577);
                                                    uint16_t* _tmp_16576 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16576 = static_cast<uint16_t>(_tmp_16577);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].abs_speed[0].value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration.size() != 0) {
                                                    // Field:  type(AccelerationValue) name(longitudinal_acceleration) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014895\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration[0].value;
                                                    }
                                                    
                                                    float _tmp_16579 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration[0].value;
                                                    _tmp_16579 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16579);
                                                    _tmp_16579 -= -160;
                                                    uint16_t* _tmp_16578 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16578 = static_cast<uint16_t>(_tmp_16579);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration[0].value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].nominal_trajectory.elements[z].longitudinal_acceleration[0].value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                *_tmp_16569_openType = buffer - _tmp_16570_start;  // OpenType length
                                            }
                                    }
                                    
                                    // Field:  type(PathPredicted) name(mrm_trajectory) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_7177 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.
                                    *_ext_flag_7177 = 0; 
                                    
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_16580 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_16580 = __aux64__ - 1;
                                    
                                    int __ifa = __aux64__;
                                    for(int a = 0; a < __ifa; a++) { 
                                        
                                            // PathPointPredicted  SEQUENCE
                                                //  deltaLatitude                DeltaLatitude            
                                                //  deltaLongitude               DeltaLongitude           
                                                //  horizontalPositionConfidence PosConfidenceEllipse   OPTIONAL  
                                                //  deltaAltitude                DeltaAltitude            
                                                //  altitudeConfidence           AltitudeConfidence       
                                                //  pathDeltaTime                PathDeltaTimeChoice    OPTIONAL  
                                                //  symmetricAreaOffset          StandardLength9b       OPTIONAL  
                                                //  asymmetricAreaOffset         StandardLength9b       OPTIONAL  
                                                //  headingValue                 HeadingValue           OPTIONAL  Extension group #1
                                                //  absSpeed                     SpeedValue             OPTIONAL  Extension group #1
                                                //  longitudinalAcceleration     AccelerationValue      OPTIONAL  Extension group #1
                                            uint8_t* _ext_flag_7178 = (uint8_t*) buffer++;  // Write extension flag for PathPointPredicted
                                            *_ext_flag_7178 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration.size() != 0) ? 1 : 0; 
                                            
                                            // Optional fields bytemap
                                            char* _tmp_16581 = (char*) buffer++;
                                            *_tmp_16581 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m014897\033[0m| Optional field horizontal_position_confidence = " << *_tmp_16581;
                                            char* _tmp_16582 = (char*) buffer++;
                                            *_tmp_16582 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m014898\033[0m| Optional field path_delta_time = " << *_tmp_16582;
                                            char* _tmp_16583 = (char*) buffer++;
                                            *_tmp_16583 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].symmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m014899\033[0m| Optional field symmetric_area_offset = " << *_tmp_16583;
                                            char* _tmp_16584 = (char*) buffer++;
                                            *_tmp_16584 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].asymmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m014900\033[0m| Optional field asymmetric_area_offset = " << *_tmp_16584;
                                            
                                            // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014901\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_latitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_latitude.value;
                                            }
                                            
                                            double _tmp_16586 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_latitude.value;
                                            _tmp_16586 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16586);
                                            _tmp_16586 -= -131071;
                                            uint32_t* _tmp_16585 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_16585 = static_cast<uint32_t>(_tmp_16586);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014902\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_longitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_longitude.value;
                                            }
                                            
                                            double _tmp_16588 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_longitude.value;
                                            _tmp_16588 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16588);
                                            _tmp_16588 -= -131071;
                                            uint32_t* _tmp_16587 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_16587 = static_cast<uint32_t>(_tmp_16588);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence.size() != 0) {
                                                // Field:  type(PosConfidenceEllipse) name(horizontal_position_confidence) extGroup(0)
                                                    // PosConfidenceEllipse  SEQUENCE
                                                        //  semiMajorConfidence  SemiAxisLength     
                                                        //  semiMinorConfidence  SemiAxisLength     
                                                        //  semiMajorOrientation HeadingValue       
                                                    // Optional fields bytemap
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_major_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014903\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    }
                                                    
                                                    float _tmp_16590 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    _tmp_16590 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16590);
                                                    uint16_t* _tmp_16589 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16589 = static_cast<uint16_t>(_tmp_16590);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014904\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_minor_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_minor_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    }
                                                    
                                                    float _tmp_16592 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    _tmp_16592 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16592);
                                                    uint16_t* _tmp_16591 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16591 = static_cast<uint16_t>(_tmp_16592);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014905\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_orientation.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_orientation.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    }
                                                    
                                                    float _tmp_16594 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    _tmp_16594 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16594);
                                                    uint16_t* _tmp_16593 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16593 = static_cast<uint16_t>(_tmp_16594);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                            }
                                            
                                            // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014906\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_altitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_altitude.value;
                                            }
                                            
                                            float _tmp_16596 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_altitude.value;
                                            _tmp_16596 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16596);
                                            _tmp_16596 -= -12700;
                                            uint16_t* _tmp_16595 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16595 = static_cast<uint16_t>(_tmp_16596);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014907\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].altitude_confidence.value);
                                            }
                                            
                                            uint8_t* _tmp_16597 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_16597 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].altitude_confidence.value; 
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].altitude_confidence.value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time.size() != 0) {
                                                // Field:  type(PathDeltaTimeChoice) name(path_delta_time) extGroup(0)
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds
                                                uint8_t* _choice_394 = (uint8_t*) buffer;
                                                buffer++;
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_high_precision.size() != 0) {  // CHOICE 0  fieldType(PathDeltaTimeChoice) 
                                                    *_choice_394 = 0;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m014908\033[0m| Choice selection: 0";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014909\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_high_precision[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_high_precision[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_high_precision[0].value);
                                                    }
                                                    
                                                    float _tmp_16599 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_high_precision[0].value;
                                                    _tmp_16599 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16599);
                                                    uint8_t* _tmp_16598 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_16598 = static_cast<uint8_t>(_tmp_16599);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_big_range.size() != 0)  // CHOICE 1  fieldType(PathDeltaTimeChoice) 
                                                {
                                                    *_choice_394 = 1;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m014910\033[0m| Choice selection: 1";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014911\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_big_range[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_big_range[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_big_range[0].value);
                                                    }
                                                    
                                                    float _tmp_16601 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_big_range[0].value;
                                                    _tmp_16601 *= 0.1;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16601);
                                                    uint8_t* _tmp_16600 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_16600 = static_cast<uint8_t>(_tmp_16601);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_394) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].path_delta_time[0]'; message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].symmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(symmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m014912\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].symmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].symmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].symmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_16603 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].symmetric_area_offset[0].value;
                                                _tmp_16603 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_16603);
                                                uint16_t* _tmp_16602 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_16602 = static_cast<uint16_t>(_tmp_16603);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].symmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].symmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].asymmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(asymmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m014913\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].asymmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].asymmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].asymmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_16605 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].asymmetric_area_offset[0].value;
                                                _tmp_16605 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_16605);
                                                uint16_t* _tmp_16604 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_16604 = static_cast<uint16_t>(_tmp_16605);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].asymmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].asymmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(*_ext_flag_7178) {
                                                // Write number of extensions 
                                                uint8_t* _tmp_16606 = (uint8_t*) buffer++;
                                                *_tmp_16606 = 1;
                                                
                                                // Write Bytemap
                                                // extension group #1)
                                                uint8_t* _tmp_16607 = (uint8_t*) buffer++;
                                                *_tmp_16607 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration.size() != 0) ? 1 : 0;
                                                
                                                // OpenType length variable 
                                                uint16_t* _tmp_16608_openType = (uint16_t*) buffer;
                                                buffer += 2;
                                                const uint8_t *_tmp_16609_start = buffer; // Starting point
                                                
                                                // Optional fields bytemap
                                                uint8_t* _tmp_16610 = (uint8_t*)buffer++;
                                                *_tmp_16610 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_16611 = (uint8_t*)buffer++;
                                                *_tmp_16611 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_16612 = (uint8_t*)buffer++;
                                                *_tmp_16612 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration.size() != 0 ? 1: 0);
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value.size() != 0) {
                                                    // Field:  type(HeadingValue) name(heading_value) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014914\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value[0].value;
                                                    }
                                                    
                                                    float _tmp_16614 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value[0].value;
                                                    _tmp_16614 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16614);
                                                    uint16_t* _tmp_16613 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16613 = static_cast<uint16_t>(_tmp_16614);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].heading_value[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed.size() != 0) {
                                                    // Field:  type(SpeedValue) name(abs_speed) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014915\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed[0].value;
                                                    }
                                                    
                                                    float _tmp_16616 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed[0].value;
                                                    _tmp_16616 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16616);
                                                    uint16_t* _tmp_16615 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16615 = static_cast<uint16_t>(_tmp_16616);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].abs_speed[0].value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration.size() != 0) {
                                                    // Field:  type(AccelerationValue) name(longitudinal_acceleration) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m014916\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration[0].value;
                                                    }
                                                    
                                                    float _tmp_16618 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration[0].value;
                                                    _tmp_16618 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_16618);
                                                    _tmp_16618 -= -160;
                                                    uint16_t* _tmp_16617 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_16617 = static_cast<uint16_t>(_tmp_16618);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration[0].value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.trajectory_advice[0].mrm_trajectory.elements[a].longitudinal_acceleration[0].value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                *_tmp_16608_openType = buffer - _tmp_16609_start;  // OpenType length
                                            }
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice.size() != 0) {
                                // Field:  type(ControlAdvice) name(control_advice) extGroup(0)
                                    // ControlAdvice  SEQUENCE
                                        //  driveDirection DriveDirection         
                                        //  acceleration   AccelerationValue      
                                        //  steeringAngle  SteeringAngleValue     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(DriveDirection) name(drive_direction) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014917\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].drive_direction.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].drive_direction.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].drive_direction.value);
                                    }
                                    
                                    uint8_t* _tmp_16619 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_16619 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].drive_direction.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].drive_direction.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].drive_direction.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].drive_direction.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AccelerationValue) name(acceleration) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014918\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].acceleration.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].acceleration.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].acceleration.value;
                                    }
                                    
                                    float _tmp_16621 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].acceleration.value;
                                    _tmp_16621 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16621);
                                    _tmp_16621 -= -160;
                                    uint16_t* _tmp_16620 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16620 = static_cast<uint16_t>(_tmp_16621);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].acceleration.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].acceleration.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(SteeringAngleValue) name(steering_angle) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-160) max(160) span(321) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014919\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].steering_angle.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].steering_angle.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].steering_angle.value;
                                    }
                                    
                                    uint16_t* _tmp_16622 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].steering_angle.value - -160;
                                    *_tmp_16622 = __aux64__;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].steering_angle.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].steering_angle.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].movement_advice.control_advice[0].steering_angle.value' (" << __aux64__ << ") exceeds max allowable (160); message dropped.";
                                        return -1;
                                    }
                            }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice.size() != 0) {
                            // Field:  type(ExteriorLights) name(exterior_lights_advice) extGroup(0)
                            // BitString
                            // BIT_STRING  min(8) max(8) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m014920\033[0m| epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].values.size());
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].values.size() < 8) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].value' " << (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].values.size()) << " is less than allowable (8); message dropped.";
                                return -1;
                            }
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].values.size() > 8) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].value' " << (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].values.size()) << " exceeds max allowable (8); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_16623 = (uint8_t*)buffer;
                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].values.size();
                            if(__aux64__ > 8) __aux64__ = 8;
                            *_tmp_16623 = __aux64__ - 8;
                            buffer += 1;
                            
                            int __ifb = __aux64__;
                            for(int b = 0; b < __ifb; b++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].exterior_lights_advice[0].values[b]? 1: 0);
                            }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].horn_advice.size() != 0) {
                            // Field:  type(HornAdvice) name(horn_advice) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(3) span(4) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m014921\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].horn_advice[0].value) << 
                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].horn_advice[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].horn_advice[0].value);
                            }
                            
                            uint8_t* _tmp_16624 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_16624 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].horn_advice[0].value; 
                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].horn_advice[0].value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].horn_advice[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[y].horn_advice[0].value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(*_ext_flag_7156) {
                        }
                }
            }
            
            if(ros->epu_to_vehicle.epu_high_frequency_container.safety.size() != 0) {
                // Field:  type(SafetyAdvices) name(safety) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(10) span(10) ext(true)
                uint8_t* _ext_flag_7198 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.safety[0].
                *_ext_flag_7198 = 0; 
                
                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements.size();
                if(__aux64__ > 10) __aux64__ = 10;
                uint16_t* _tmp_16626 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_16626 = __aux64__ - 1;
                
                int __ifc = __aux64__;
                for(int c = 0; c < __ifc; c++) { 
                    
                        // SafetyContainer  SEQUENCE
                            //  subjectStationID StationId           
                            //  objectData       RssObjectData     OPTIONAL  
                            //  rssDynamics      RssDynamics       OPTIONAL  
                            //  rssResults       RssCheckResults     
                        // Optional fields bytemap
                        char* _tmp_16627 = (char*) buffer++;
                        *_tmp_16627 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m014923\033[0m| Optional field object_data = " << *_tmp_16627;
                        char* _tmp_16628 = (char*) buffer++;
                        *_tmp_16628 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m014924\033[0m| Optional field rss_dynamics = " << *_tmp_16628;
                        
                        // Field:  type(StationId) name(subject_station_id) extGroup(0)
                        // Integer
                        
                        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m014925\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].subject_station_id.value;
                        }
                        
                        uint32_t* _tmp_16629 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_16629 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].subject_station_id.value; 
                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].subject_station_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].subject_station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].subject_station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
                            return -1;
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data.size() != 0) {
                            // Field:  type(RssObjectData) name(object_data) extGroup(0)
                                // RssObjectData  SEQUENCE
                                    //  id                          Identifier2B               
                                    //  type                        StationType                
                                    //  deltaPosition               DeltaReferencePosition     
                                    //  heading                     HeadingValue               
                                    //  semiMajorPositionConfidence SemiAxisLength             
                                    //  semiMinorPositionConfidence SemiAxisLength             
                                    //  dimensionLength             VehicleLengthValue         
                                    //  dimensionWidth              VehicleWidth               
                                    //  dimensionHeight             VehicleWidth               
                                    //  speedRange                  VelocityComponentRange     
                                    //  yawRate                     YawRateValue               
                                    //  steeringAngle               SteeringAngleValue       OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16630 = (char*) buffer++;
                                *_tmp_16630 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].steering_angle.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m014926\033[0m| Optional field steering_angle = " << *_tmp_16630;
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014927\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].id.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].id.value;
                                }
                                
                                uint16_t* _tmp_16631 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16631 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].id.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StationType) name(type) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014928\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].type.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].type.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].type.value);
                                }
                                
                                uint8_t* _tmp_16632 = (uint8_t*) buffer++;
                                *_tmp_16632 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].type.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].type.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].type.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(DeltaReferencePosition) name(delta_position) extGroup(0)
                                    // DeltaReferencePosition  SEQUENCE
                                        //  deltaLatitude  DeltaLatitude      
                                        //  deltaLongitude DeltaLongitude     
                                        //  deltaAltitude  DeltaAltitude      
                                    // Optional fields bytemap
                                    
                                    // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014929\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_latitude.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_latitude.value;
                                    }
                                    
                                    double _tmp_16634 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_latitude.value;
                                    _tmp_16634 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16634);
                                    _tmp_16634 -= -131071;
                                    uint32_t* _tmp_16633 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_16633 = static_cast<uint32_t>(_tmp_16634);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014930\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_longitude.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_longitude.value;
                                    }
                                    
                                    double _tmp_16636 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_longitude.value;
                                    _tmp_16636 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16636);
                                    _tmp_16636 -= -131071;
                                    uint32_t* _tmp_16635 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_16635 = static_cast<uint32_t>(_tmp_16636);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014931\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_altitude.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_altitude.value;
                                    }
                                    
                                    float _tmp_16638 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_altitude.value;
                                    _tmp_16638 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16638);
                                    _tmp_16638 -= -12700;
                                    uint16_t* _tmp_16637 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16637 = static_cast<uint16_t>(_tmp_16638);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].delta_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                        return -1;
                                    }
                                
                                // Field:  type(HeadingValue) name(heading) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014932\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].heading.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].heading.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].heading.value;
                                }
                                
                                float _tmp_16640 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].heading.value;
                                _tmp_16640 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16640);
                                uint16_t* _tmp_16639 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16639 = static_cast<uint16_t>(_tmp_16640);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].heading.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].heading.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SemiAxisLength) name(semi_major_position_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014933\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_major_position_confidence.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_major_position_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_major_position_confidence.value;
                                }
                                
                                float _tmp_16642 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_major_position_confidence.value;
                                _tmp_16642 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16642);
                                uint16_t* _tmp_16641 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16641 = static_cast<uint16_t>(_tmp_16642);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_major_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_major_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SemiAxisLength) name(semi_minor_position_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014934\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_minor_position_confidence.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_minor_position_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_minor_position_confidence.value;
                                }
                                
                                float _tmp_16644 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_minor_position_confidence.value;
                                _tmp_16644 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16644);
                                uint16_t* _tmp_16643 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16643 = static_cast<uint16_t>(_tmp_16644);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_minor_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].semi_minor_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VehicleLengthValue) name(dimension_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014935\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_length.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_length.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_length.value;
                                }
                                
                                float _tmp_16646 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_length.value;
                                _tmp_16646 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16646);
                                _tmp_16646 -= 1;
                                uint16_t* _tmp_16645 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16645 = static_cast<uint16_t>(_tmp_16646);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_length.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_length.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VehicleWidth) name(dimension_width) extGroup(0)
                                // Real
                                
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014936\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_width.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_width.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_width.value);
                                }
                                
                                float _tmp_16648 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_width.value;
                                _tmp_16648 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16648);
                                _tmp_16648 -= 1;
                                uint8_t* _tmp_16647 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_16647 = static_cast<uint8_t>(_tmp_16648);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_width.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_width.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VehicleWidth) name(dimension_height) extGroup(0)
                                // Real
                                
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014937\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_height.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_height.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_height.value);
                                }
                                
                                float _tmp_16650 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_height.value;
                                _tmp_16650 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16650);
                                _tmp_16650 -= 1;
                                uint8_t* _tmp_16649 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_16649 = static_cast<uint8_t>(_tmp_16650);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_height.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].dimension_height.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VelocityComponentRange) name(speed_range) extGroup(0)
                                    // VelocityComponentRange  SEQUENCE
                                        //  minimum    VelocityComponentValue     
                                        //  maximum    VelocityComponentValue     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(VelocityComponentValue) name(minimum) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014938\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.minimum.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.minimum.value;
                                    }
                                    
                                    float _tmp_16652 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.minimum.value;
                                    _tmp_16652 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16652);
                                    _tmp_16652 -= -16383;
                                    uint16_t* _tmp_16651 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16651 = static_cast<uint16_t>(_tmp_16652);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.minimum.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(VelocityComponentValue) name(maximum) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014939\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.maximum.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.maximum.value;
                                    }
                                    
                                    float _tmp_16654 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.maximum.value;
                                    _tmp_16654 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16654);
                                    _tmp_16654 -= -16383;
                                    uint16_t* _tmp_16653 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16653 = static_cast<uint16_t>(_tmp_16654);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.maximum.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].speed_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                        return -1;
                                    }
                                
                                // Field:  type(YawRateValue) name(yaw_rate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014940\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].yaw_rate.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].yaw_rate.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].yaw_rate.value;
                                }
                                
                                float _tmp_16656 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].yaw_rate.value;
                                _tmp_16656 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16656);
                                _tmp_16656 -= -32766;
                                uint16_t* _tmp_16655 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16655 = static_cast<uint16_t>(_tmp_16656);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -32766) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].yaw_rate.value' (" << __aux64__ << ") less than (-32766); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].yaw_rate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].steering_angle.size() != 0) {
                                    // Field:  type(SteeringAngleValue) name(steering_angle) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-160) max(160) span(321) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014941\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].steering_angle[0].value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].steering_angle[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].steering_angle[0].value;
                                    }
                                    
                                    uint16_t* _tmp_16657 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].steering_angle[0].value - -160;
                                    *_tmp_16657 = __aux64__;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].steering_angle[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].steering_angle[0].value' (" << __aux64__ << ") less than (-160); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].object_data[0].steering_angle[0].value' (" << __aux64__ << ") exceeds max allowable (160); message dropped.";
                                        return -1;
                                    }
                                }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics.size() != 0) {
                            // Field:  type(RssDynamics) name(rss_dynamics) extGroup(0)
                                // RssDynamics  SEQUENCE
                                    //  lonAccelMax                         LongitudinalAccelerationValue     
                                    //  lonBrakeMax                         LongitudinalAccelerationValue     
                                    //  lonBrakeMin                         LongitudinalAccelerationValue     
                                    //  lonBrakeMinCorrect                  LongitudinalAccelerationValue     
                                    //  latAccelMax                         LateralAccelerationValue          
                                    //  latBrakeMin                         LateralAccelerationValue          
                                    //  lateralFluctuationMargin            LateralFluctuationMargin          
                                    //  responseTime                        DeltaTimeTenthOfSecond            
                                    //  maxSpeedOnAcceleration              SpeedValue                        
                                    //  minLongitudinalSafetyDistance       StandardLength1B                  
                                    //  unstructuredPedestrianTurningRadius StandardLength1B                  
                                    //  unstructuredVehicleMinRadius        StandardLength1B                  
                                    //  unstructuredVehicleYawRateChange    YawAccelerationValue              
                                    //  unstructuredDriveAwayMaxAngle       HeadingValue                      
                                // Optional fields bytemap
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_accel_max) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014942\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_accel_max.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_accel_max.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_accel_max.value;
                                }
                                
                                float _tmp_16659 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_accel_max.value;
                                _tmp_16659 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16659);
                                _tmp_16659 -= -160;
                                uint16_t* _tmp_16658 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16658 = static_cast<uint16_t>(_tmp_16659);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_accel_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_accel_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_brake_max) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014943\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_max.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_max.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_max.value;
                                }
                                
                                float _tmp_16661 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_max.value;
                                _tmp_16661 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16661);
                                _tmp_16661 -= -160;
                                uint16_t* _tmp_16660 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16660 = static_cast<uint16_t>(_tmp_16661);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_brake_min) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014944\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min.value;
                                }
                                
                                float _tmp_16663 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min.value;
                                _tmp_16663 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16663);
                                _tmp_16663 -= -160;
                                uint16_t* _tmp_16662 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16662 = static_cast<uint16_t>(_tmp_16663);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_brake_min_correct) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014945\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min_correct.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min_correct.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min_correct.value;
                                }
                                
                                float _tmp_16665 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min_correct.value;
                                _tmp_16665 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16665);
                                _tmp_16665 -= -160;
                                uint16_t* _tmp_16664 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16664 = static_cast<uint16_t>(_tmp_16665);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min_correct.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lon_brake_min_correct.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LateralAccelerationValue) name(lat_accel_max) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014946\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_accel_max.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_accel_max.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_accel_max.value;
                                }
                                
                                float _tmp_16667 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_accel_max.value;
                                _tmp_16667 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16667);
                                _tmp_16667 -= -160;
                                uint16_t* _tmp_16666 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16666 = static_cast<uint16_t>(_tmp_16667);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_accel_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_accel_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LateralAccelerationValue) name(lat_brake_min) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014947\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_brake_min.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_brake_min.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_brake_min.value;
                                }
                                
                                float _tmp_16669 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_brake_min.value;
                                _tmp_16669 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16669);
                                _tmp_16669 -= -160;
                                uint16_t* _tmp_16668 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16668 = static_cast<uint16_t>(_tmp_16669);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_brake_min.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lat_brake_min.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LateralFluctuationMargin) name(lateral_fluctuation_margin) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014948\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lateral_fluctuation_margin.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lateral_fluctuation_margin.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lateral_fluctuation_margin.value);
                                }
                                
                                uint8_t* _tmp_16670 = (uint8_t*) buffer++;
                                *_tmp_16670 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lateral_fluctuation_margin.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lateral_fluctuation_margin.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lateral_fluctuation_margin.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].lateral_fluctuation_margin.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(DeltaTimeTenthOfSecond) name(response_time) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014949\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].response_time.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].response_time.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].response_time.value);
                                }
                                
                                float _tmp_16672 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].response_time.value;
                                _tmp_16672 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16672);
                                uint8_t* _tmp_16671 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_16671 = static_cast<uint8_t>(_tmp_16672);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].response_time.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].response_time.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SpeedValue) name(max_speed_on_acceleration) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014950\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].max_speed_on_acceleration.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].max_speed_on_acceleration.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].max_speed_on_acceleration.value;
                                }
                                
                                float _tmp_16674 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].max_speed_on_acceleration.value;
                                _tmp_16674 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16674);
                                uint16_t* _tmp_16673 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16673 = static_cast<uint16_t>(_tmp_16674);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].max_speed_on_acceleration.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].max_speed_on_acceleration.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(min_longitudinal_safety_distance) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014951\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].min_longitudinal_safety_distance.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].min_longitudinal_safety_distance.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].min_longitudinal_safety_distance.value);
                                }
                                
                                float _tmp_16676 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].min_longitudinal_safety_distance.value;
                                _tmp_16676 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16676);
                                uint8_t* _tmp_16675 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_16675 = static_cast<uint8_t>(_tmp_16676);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].min_longitudinal_safety_distance.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].min_longitudinal_safety_distance.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(unstructured_pedestrian_turning_radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014952\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_pedestrian_turning_radius.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_pedestrian_turning_radius.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_pedestrian_turning_radius.value);
                                }
                                
                                float _tmp_16678 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_pedestrian_turning_radius.value;
                                _tmp_16678 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16678);
                                uint8_t* _tmp_16677 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_16677 = static_cast<uint8_t>(_tmp_16678);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(unstructured_vehicle_min_radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014953\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_min_radius.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_min_radius.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_min_radius.value);
                                }
                                
                                float _tmp_16680 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_min_radius.value;
                                _tmp_16680 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16680);
                                uint8_t* _tmp_16679 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_16679 = static_cast<uint8_t>(_tmp_16680);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_min_radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_min_radius.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(YawAccelerationValue) name(unstructured_vehicle_yaw_rate_change) extGroup(0)
                                // Integer
                                
                                // INT16  min(-2040) max(2041) span(4082) dataType(Int16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014954\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value;
                                }
                                
                                uint16_t* _tmp_16681 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value - -2040;
                                *_tmp_16681 = __aux64__;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -2040) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' (" << __aux64__ << ") less than (-2040); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 2041) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' (" << __aux64__ << ") exceeds max allowable (2041); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(HeadingValue) name(unstructured_drive_away_max_angle) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014955\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_drive_away_max_angle.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_drive_away_max_angle.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_drive_away_max_angle.value;
                                }
                                
                                float _tmp_16683 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_drive_away_max_angle.value;
                                _tmp_16683 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16683);
                                uint16_t* _tmp_16682 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16682 = static_cast<uint16_t>(_tmp_16683);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_drive_away_max_angle.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_dynamics[0].unstructured_drive_away_max_angle.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                        }
                        
                        // Field:  type(RssCheckResults) name(rss_results) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(4) span(5) ext(false)
                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements.size();
                        if(__aux64__ > 4) __aux64__ = 4;
                        uint16_t* _tmp_16684 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_16684 = __aux64__;
                        
                        int __ifd = __aux64__;
                        for(int d = 0; d < __ifd; d++) { 
                            
                                // RssCheckResult  SEQUENCE
                                    //  v2xLatency        DeltaTimeTenthOfSecond     
                                    //  properResponse    RssProperResponse          
                                    //  rssRoute          RssRoute                 OPTIONAL  
                                    //  vehicleRouteState RssVehicleRouteState     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16685 = (char*) buffer++;
                                *_tmp_16685 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m014957\033[0m| Optional field rss_route = " << *_tmp_16685;
                                char* _tmp_16686 = (char*) buffer++;
                                *_tmp_16686 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m014958\033[0m| Optional field vehicle_route_state = " << *_tmp_16686;
                                
                                // Field:  type(DeltaTimeTenthOfSecond) name(v2x_latency) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014959\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].v2x_latency.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].v2x_latency.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].v2x_latency.value);
                                }
                                
                                float _tmp_16688 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].v2x_latency.value;
                                _tmp_16688 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16688);
                                uint8_t* _tmp_16687 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_16687 = static_cast<uint8_t>(_tmp_16688);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].v2x_latency.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].v2x_latency.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(RssProperResponse) name(proper_response) extGroup(0)
                                    // RssProperResponse  SEQUENCE
                                        //  responseFlags                     RssProperResponseFlags                   
                                        //  longitudinalResponse              RssLongitudinalResponse                  
                                        //  lateralResponseRight              RssLateralResponse                       
                                        //  lateralResponseLeft               RssLateralResponse                       
                                        //  unstructuredConstellationResponse RssUnstructuredConstellationResponse     
                                        //  headingRanges                     CartesianAngleRanges                     
                                        //  dangerousObjects                  ObjectIdentifierList                     
                                        //  longitudinalRange                 LongitudinalAccelerationRange            
                                        //  lateralRightRange                 LateralAccelerationRange                 
                                        //  lateralLeftRange                  LateralAccelerationRange                 
                                    // Optional fields bytemap
                                    
                                    // Field:  type(RssProperResponseFlags) name(response_flags) extGroup(0)
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m014960\033[0m| epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.values.size());
                                    
                                    if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.values.size() < 8) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.value' " << (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.values.size()) << " is less than allowable (8); message dropped.";
                                        return -1;
                                    }
                                    if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.values.size() > 8) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.value' " << (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.values.size()) << " exceeds max allowable (8); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _ext_flag_7230 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.
                                    *_ext_flag_7230 = 0; 
                                    
                                    uint8_t* _tmp_16689 = (uint8_t*)buffer;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.values.size();
                                    if(__aux64__ > 8) __aux64__ = 8;
                                    *_tmp_16689 = __aux64__ - 8;
                                    buffer += 1;
                                    
                                    int __ife = __aux64__;
                                    for(int e = 0; e < __ife; e++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.response_flags.values[e]? 1: 0);
                                    }
                                    
                                    // Field:  type(RssLongitudinalResponse) name(longitudinal_response) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014961\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_response.value);
                                    }
                                    
                                    uint8_t* _tmp_16690 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_16690 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_response.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_response.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_response.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_response.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(RssLateralResponse) name(lateral_response_right) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014962\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_right.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_right.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_right.value);
                                    }
                                    
                                    uint8_t* _tmp_16691 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_16691 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_right.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_right.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_right.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_right.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(RssLateralResponse) name(lateral_response_left) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014963\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_left.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_left.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_left.value);
                                    }
                                    
                                    uint8_t* _tmp_16692 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_16692 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_left.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_left.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_left.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_response_left.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(RssUnstructuredConstellationResponse) name(unstructured_constellation_response) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(3) span(4) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m014964\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.unstructured_constellation_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.unstructured_constellation_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.unstructured_constellation_response.value);
                                    }
                                    
                                    uint8_t* _tmp_16693 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_16693 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.unstructured_constellation_response.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.unstructured_constellation_response.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.unstructured_constellation_response.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.unstructured_constellation_response.value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianAngleRanges) name(heading_ranges) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5) ext(false)
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    uint16_t* _tmp_16694 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_16694 = __aux64__;
                                    
                                    int __iff = __aux64__;
                                    for(int f = 0; f < __iff; f++) { 
                                        
                                            // CartesianAngleRange  SEQUENCE
                                                //  begin      CartesianAngleValue     
                                                //  end        CartesianAngleValue     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(begin) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014966\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].begin.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].begin.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].begin.value;
                                            }
                                            
                                            float _tmp_16696 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].begin.value;
                                            _tmp_16696 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16696);
                                            uint16_t* _tmp_16695 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16695 = static_cast<uint16_t>(_tmp_16696);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].begin.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].begin.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014967\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].end.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].end.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].end.value;
                                            }
                                            
                                            float _tmp_16698 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].end.value;
                                            _tmp_16698 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16698);
                                            uint16_t* _tmp_16697 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16697 = static_cast<uint16_t>(_tmp_16698);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.heading_ranges.elements[f].end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                    }
                                    
                                    // Field:  type(ObjectIdentifierList) name(dangerous_objects) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5) ext(true)
                                    uint8_t* _ext_flag_7237 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.dangerous_objects.
                                    *_ext_flag_7237 = 0; 
                                    
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.dangerous_objects.elements.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    uint16_t* _tmp_16699 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_16699 = __aux64__;
                                    
                                    int __ifg = __aux64__;
                                    for(int g = 0; g < __ifg; g++) { 
                                        
                                        // Integer
                                        
                                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014969\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.dangerous_objects.elements[g].value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.dangerous_objects.elements[g].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.dangerous_objects.elements[g].value;
                                        }
                                        
                                        uint16_t* _tmp_16700 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16700 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.dangerous_objects.elements[g].value; 
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.dangerous_objects.elements[g].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.dangerous_objects.elements[g].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.dangerous_objects.elements[g].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                            return -1;
                                        }
                                        
                                    }
                                    
                                    // Field:  type(LongitudinalAccelerationRange) name(longitudinal_range) extGroup(0)
                                        // LongitudinalAccelerationRange  SEQUENCE
                                            //  minimum    LongitudinalAccelerationValue     
                                            //  maximum    LongitudinalAccelerationValue     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(minimum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014970\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.minimum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.minimum.value;
                                        }
                                        
                                        float _tmp_16702 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.minimum.value;
                                        _tmp_16702 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16702);
                                        _tmp_16702 -= -160;
                                        uint16_t* _tmp_16701 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16701 = static_cast<uint16_t>(_tmp_16702);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.minimum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(maximum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014971\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.maximum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.maximum.value;
                                        }
                                        
                                        float _tmp_16704 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.maximum.value;
                                        _tmp_16704 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16704);
                                        _tmp_16704 -= -160;
                                        uint16_t* _tmp_16703 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16703 = static_cast<uint16_t>(_tmp_16704);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.maximum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.longitudinal_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                    
                                    // Field:  type(LateralAccelerationRange) name(lateral_right_range) extGroup(0)
                                        // LateralAccelerationRange  SEQUENCE
                                            //  minimum    LateralAccelerationValue     
                                            //  maximum    LateralAccelerationValue     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(LateralAccelerationValue) name(minimum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014972\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.minimum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.minimum.value;
                                        }
                                        
                                        float _tmp_16706 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.minimum.value;
                                        _tmp_16706 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16706);
                                        _tmp_16706 -= -160;
                                        uint16_t* _tmp_16705 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16705 = static_cast<uint16_t>(_tmp_16706);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.minimum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(maximum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014973\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.maximum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.maximum.value;
                                        }
                                        
                                        float _tmp_16708 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.maximum.value;
                                        _tmp_16708 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16708);
                                        _tmp_16708 -= -160;
                                        uint16_t* _tmp_16707 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16707 = static_cast<uint16_t>(_tmp_16708);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.maximum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_right_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                    
                                    // Field:  type(LateralAccelerationRange) name(lateral_left_range) extGroup(0)
                                        // LateralAccelerationRange  SEQUENCE
                                            //  minimum    LateralAccelerationValue     
                                            //  maximum    LateralAccelerationValue     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(LateralAccelerationValue) name(minimum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014974\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.minimum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.minimum.value;
                                        }
                                        
                                        float _tmp_16710 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.minimum.value;
                                        _tmp_16710 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16710);
                                        _tmp_16710 -= -160;
                                        uint16_t* _tmp_16709 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16709 = static_cast<uint16_t>(_tmp_16710);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.minimum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(maximum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014975\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.maximum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.maximum.value;
                                        }
                                        
                                        float _tmp_16712 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.maximum.value;
                                        _tmp_16712 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16712);
                                        _tmp_16712 -= -160;
                                        uint16_t* _tmp_16711 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16711 = static_cast<uint16_t>(_tmp_16712);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.maximum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].proper_response.lateral_left_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route.size() != 0) {
                                    // Field:  type(RssRoute) name(rss_route) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(4) span(4) ext(false)
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    uint16_t* _tmp_16713 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_16713 = __aux64__ - 1;
                                    
                                    int __ifh = __aux64__;
                                    for(int h = 0; h < __ifh; h++) { 
                                        
                                            // DeltaReferencePosition  SEQUENCE
                                                //  deltaLatitude  DeltaLatitude      
                                                //  deltaLongitude DeltaLongitude     
                                                //  deltaAltitude  DeltaAltitude      
                                            // Optional fields bytemap
                                            
                                            // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014977\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_latitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_latitude.value;
                                            }
                                            
                                            double _tmp_16715 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_latitude.value;
                                            _tmp_16715 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16715);
                                            _tmp_16715 -= -131071;
                                            uint32_t* _tmp_16714 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_16714 = static_cast<uint32_t>(_tmp_16715);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014978\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_longitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_longitude.value;
                                            }
                                            
                                            double _tmp_16717 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_longitude.value;
                                            _tmp_16717 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16717);
                                            _tmp_16717 -= -131071;
                                            uint32_t* _tmp_16716 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_16716 = static_cast<uint32_t>(_tmp_16717);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014979\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_altitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_altitude.value;
                                            }
                                            
                                            float _tmp_16719 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_altitude.value;
                                            _tmp_16719 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16719);
                                            _tmp_16719 -= -12700;
                                            uint16_t* _tmp_16718 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16718 = static_cast<uint16_t>(_tmp_16719);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].rss_route[0].elements[h].delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                                return -1;
                                            }
                                            
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state.size() != 0) {
                                    // Field:  type(RssVehicleRouteState) name(vehicle_route_state) extGroup(0)
                                        // RssVehicleRouteState  SEQUENCE
                                            //  routeHeading      HeadingValue                      
                                            //  routeRadius       RouteRadius                       
                                            //  routeHeadingDelta CartesianAngleValue               
                                            //  routeSpeedLon     VelocityComponentValue            
                                            //  routeSpeedLat     VelocityComponentValue            
                                            //  routeAccelLon     LongitudinalAccelerationValue     
                                            //  routeAccelLat     LateralAccelerationValue          
                                            //  avgRouteAccelLon  LongitudinalAccelerationValue     
                                            //  avgRouteAccelLat  LateralAccelerationValue          
                                        // Optional fields bytemap
                                        
                                        // Field:  type(HeadingValue) name(route_heading) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014980\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading.value;
                                        }
                                        
                                        float _tmp_16721 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading.value;
                                        _tmp_16721 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16721);
                                        uint16_t* _tmp_16720 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16720 = static_cast<uint16_t>(_tmp_16721);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(RouteRadius) name(route_radius) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014981\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_radius.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_radius.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_radius.value;
                                        }
                                        
                                        uint16_t* _tmp_16722 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_radius.value - -1023;
                                        *_tmp_16722 = __aux64__;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_radius.value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_radius.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_radius.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(route_heading_delta) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014982\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading_delta.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading_delta.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading_delta.value;
                                        }
                                        
                                        float _tmp_16724 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading_delta.value;
                                        _tmp_16724 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16724);
                                        uint16_t* _tmp_16723 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16723 = static_cast<uint16_t>(_tmp_16724);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading_delta.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_heading_delta.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(VelocityComponentValue) name(route_speed_lon) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014983\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lon.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lon.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lon.value;
                                        }
                                        
                                        float _tmp_16726 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lon.value;
                                        _tmp_16726 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16726);
                                        _tmp_16726 -= -16383;
                                        uint16_t* _tmp_16725 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16725 = static_cast<uint16_t>(_tmp_16726);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lon.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lon.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(VelocityComponentValue) name(route_speed_lat) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014984\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lat.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lat.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lat.value;
                                        }
                                        
                                        float _tmp_16728 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lat.value;
                                        _tmp_16728 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16728);
                                        _tmp_16728 -= -16383;
                                        uint16_t* _tmp_16727 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16727 = static_cast<uint16_t>(_tmp_16728);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lat.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_speed_lat.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(route_accel_lon) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014985\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lon.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lon.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lon.value;
                                        }
                                        
                                        float _tmp_16730 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lon.value;
                                        _tmp_16730 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16730);
                                        _tmp_16730 -= -160;
                                        uint16_t* _tmp_16729 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16729 = static_cast<uint16_t>(_tmp_16730);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lon.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lon.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(route_accel_lat) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014986\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lat.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lat.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lat.value;
                                        }
                                        
                                        float _tmp_16732 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lat.value;
                                        _tmp_16732 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16732);
                                        _tmp_16732 -= -160;
                                        uint16_t* _tmp_16731 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16731 = static_cast<uint16_t>(_tmp_16732);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lat.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].route_accel_lat.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(avg_route_accel_lon) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014987\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lon.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lon.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lon.value;
                                        }
                                        
                                        float _tmp_16734 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lon.value;
                                        _tmp_16734 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16734);
                                        _tmp_16734 -= -160;
                                        uint16_t* _tmp_16733 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16733 = static_cast<uint16_t>(_tmp_16734);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lon.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lon.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(avg_route_accel_lat) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014988\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lat.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lat.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lat.value;
                                        }
                                        
                                        float _tmp_16736 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lat.value;
                                        _tmp_16736 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16736);
                                        _tmp_16736 -= -160;
                                        uint16_t* _tmp_16735 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16735 = static_cast<uint16_t>(_tmp_16736);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lat.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[c].rss_results.elements[d].vehicle_route_state[0].avg_route_accel_lat.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                }
                                
                        }
                        
                }
            }
        
        if(ros->epu_to_vehicle.epu_low_frequency_container.size() != 0) {
            // Field:  type(EPULowFrequencyContainer) name(epu_low_frequency_container) extGroup(0)
                // EPULowFrequencyContainer  SEQUENCE
                    //  epuSectionDimensions   EPUSectionDimensions       
                    //  epuSectionCapabilities EPUSectionCapabilities   OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_7257 = (uint8_t*) buffer++;  // Write extension flag for EPULowFrequencyContainer
                *_ext_flag_7257 = 0;  
                
                // Optional fields bytemap
                char* _tmp_16737 = (char*) buffer++;
                *_tmp_16737 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m014989\033[0m| Optional field epu_section_capabilities = " << *_tmp_16737;
                
                // Field:  type(EPUSectionDimensions) name(epu_section_dimensions) extGroup(0)
                    // EPUSectionDimensions  SEQUENCE
                        //  includedShapes IncludedShapes     
                        //  excludedShapes ExcludedShapes     
                    // Optional fields bytemap
                    
                    // Field:  type(IncludedShapes) name(included_shapes) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(4) span(4) ext(true)
                    uint8_t* _ext_flag_7258 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.
                    *_ext_flag_7258 = 0; 
                    
                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements.size();
                    if(__aux64__ > 4) __aux64__ = 4;
                    uint16_t* _tmp_16738 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_16738 = __aux64__ - 1;
                    
                    int __ifi = __aux64__;
                    for(int i = 0; i < __ifi; i++) { 
                        
                        // Choice
                           // #0  rectangular   RectangularShape
                           // #1  circular   CircularShape
                           // #2  polygonal   PolygonalShape
                           // #3  elliptical   EllipticalShape
                           // #4  radial   RadialShape
                           // #5  radialShapes   RadialShapes
                        uint8_t* _ext_flag_7259 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_7259 = 0; 
                        
                        uint8_t* _choice_395 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_395 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m014991\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16739 = (char*) buffer++;
                                *_tmp_16739 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m014992\033[0m| Optional field shape_reference_point = " << *_tmp_16739;
                                char* _tmp_16740 = (char*) buffer++;
                                *_tmp_16740 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m014993\033[0m| Optional field orientation = " << *_tmp_16740;
                                char* _tmp_16741 = (char*) buffer++;
                                *_tmp_16741 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m014994\033[0m| Optional field height = " << *_tmp_16741;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16742 = (char*) buffer++;
                                        *_tmp_16742 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m014995\033[0m| Optional field z_coordinate = " << *_tmp_16742;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014996\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16744 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16744 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16744);
                                        _tmp_16744 -= -32768;
                                        uint16_t* _tmp_16743 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16743 = static_cast<uint16_t>(_tmp_16744);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m014997\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16746 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16746 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16746);
                                        _tmp_16746 -= -32768;
                                        uint16_t* _tmp_16745 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16745 = static_cast<uint16_t>(_tmp_16746);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m014998\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16748 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16748 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16748);
                                            _tmp_16748 -= -32768;
                                            uint16_t* _tmp_16747 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16747 = static_cast<uint16_t>(_tmp_16748);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m014999\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_16750 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_length.value;
                                _tmp_16750 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16750);
                                uint16_t* _tmp_16749 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16749 = static_cast<uint16_t>(_tmp_16750);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015000\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_breadth.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_breadth.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_16752 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_breadth.value;
                                _tmp_16752 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16752);
                                uint16_t* _tmp_16751 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16751 = static_cast<uint16_t>(_tmp_16752);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015001\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_16754 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].orientation[0].value;
                                    _tmp_16754 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16754);
                                    uint16_t* _tmp_16753 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16753 = static_cast<uint16_t>(_tmp_16754);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015002\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_16756 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].height[0].value;
                                    _tmp_16756 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16756);
                                    uint16_t* _tmp_16755 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16755 = static_cast<uint16_t>(_tmp_16756);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_395 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015003\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16757 = (char*) buffer++;
                                *_tmp_16757 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015004\033[0m| Optional field shape_reference_point = " << *_tmp_16757;
                                char* _tmp_16758 = (char*) buffer++;
                                *_tmp_16758 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015005\033[0m| Optional field height = " << *_tmp_16758;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16759 = (char*) buffer++;
                                        *_tmp_16759 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015006\033[0m| Optional field z_coordinate = " << *_tmp_16759;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015007\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16761 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16761 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16761);
                                        _tmp_16761 -= -32768;
                                        uint16_t* _tmp_16760 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16760 = static_cast<uint16_t>(_tmp_16761);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015008\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16763 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16763 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16763);
                                        _tmp_16763 -= -32768;
                                        uint16_t* _tmp_16762 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16762 = static_cast<uint16_t>(_tmp_16763);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015009\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16765 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16765 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16765);
                                            _tmp_16765 -= -32768;
                                            uint16_t* _tmp_16764 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16764 = static_cast<uint16_t>(_tmp_16765);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015010\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].radius.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].radius.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].radius.value;
                                }
                                
                                float _tmp_16767 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].radius.value;
                                _tmp_16767 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16767);
                                uint16_t* _tmp_16766 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16766 = static_cast<uint16_t>(_tmp_16767);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015011\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_16769 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].height[0].value;
                                    _tmp_16769 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16769);
                                    uint16_t* _tmp_16768 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16768 = static_cast<uint16_t>(_tmp_16769);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_395 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015012\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16770 = (char*) buffer++;
                                *_tmp_16770 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015013\033[0m| Optional field shape_reference_point = " << *_tmp_16770;
                                char* _tmp_16771 = (char*) buffer++;
                                *_tmp_16771 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015014\033[0m| Optional field height = " << *_tmp_16771;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16772 = (char*) buffer++;
                                        *_tmp_16772 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015015\033[0m| Optional field z_coordinate = " << *_tmp_16772;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015016\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16774 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16774 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16774);
                                        _tmp_16774 -= -32768;
                                        uint16_t* _tmp_16773 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16773 = static_cast<uint16_t>(_tmp_16774);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015017\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16776 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16776 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16776);
                                        _tmp_16776 -= -32768;
                                        uint16_t* _tmp_16775 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16775 = static_cast<uint16_t>(_tmp_16776);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015018\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16778 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16778 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16778);
                                            _tmp_16778 -= -32768;
                                            uint16_t* _tmp_16777 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16777 = static_cast<uint16_t>(_tmp_16778);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_7275 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.
                                *_ext_flag_7275 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_16779 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_16779 = __aux64__ - 1;
                                
                                int __ifj = __aux64__;
                                for(int j = 0; j < __ifj; j++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16780 = (char*) buffer++;
                                        *_tmp_16780 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015020\033[0m| Optional field z_coordinate = " << *_tmp_16780;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015021\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16782 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].x_coordinate.value;
                                        _tmp_16782 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16782);
                                        _tmp_16782 -= -32768;
                                        uint16_t* _tmp_16781 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16781 = static_cast<uint16_t>(_tmp_16782);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015022\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16784 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].y_coordinate.value;
                                        _tmp_16784 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16784);
                                        _tmp_16784 -= -32768;
                                        uint16_t* _tmp_16783 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16783 = static_cast<uint16_t>(_tmp_16784);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015023\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16786 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].z_coordinate[0].value;
                                            _tmp_16786 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16786);
                                            _tmp_16786 -= -32768;
                                            uint16_t* _tmp_16785 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16785 = static_cast<uint16_t>(_tmp_16786);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].polygon.elements[j].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015024\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_16788 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].height[0].value;
                                    _tmp_16788 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16788);
                                    uint16_t* _tmp_16787 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16787 = static_cast<uint16_t>(_tmp_16788);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_395 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015025\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16789 = (char*) buffer++;
                                *_tmp_16789 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015026\033[0m| Optional field shape_reference_point = " << *_tmp_16789;
                                char* _tmp_16790 = (char*) buffer++;
                                *_tmp_16790 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015027\033[0m| Optional field orientation = " << *_tmp_16790;
                                char* _tmp_16791 = (char*) buffer++;
                                *_tmp_16791 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015028\033[0m| Optional field height = " << *_tmp_16791;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16792 = (char*) buffer++;
                                        *_tmp_16792 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015029\033[0m| Optional field z_coordinate = " << *_tmp_16792;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015030\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16794 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16794 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16794);
                                        _tmp_16794 -= -32768;
                                        uint16_t* _tmp_16793 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16793 = static_cast<uint16_t>(_tmp_16794);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015031\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16796 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16796 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16796);
                                        _tmp_16796 -= -32768;
                                        uint16_t* _tmp_16795 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16795 = static_cast<uint16_t>(_tmp_16796);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015032\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16798 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16798 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16798);
                                            _tmp_16798 -= -32768;
                                            uint16_t* _tmp_16797 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16797 = static_cast<uint16_t>(_tmp_16798);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015033\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_major_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_major_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_16800 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_major_axis_length.value;
                                _tmp_16800 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16800);
                                uint16_t* _tmp_16799 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16799 = static_cast<uint16_t>(_tmp_16800);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015034\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_minor_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_minor_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_16802 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_minor_axis_length.value;
                                _tmp_16802 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16802);
                                uint16_t* _tmp_16801 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16801 = static_cast<uint16_t>(_tmp_16802);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015035\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_16804 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].orientation[0].value;
                                    _tmp_16804 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16804);
                                    uint16_t* _tmp_16803 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16803 = static_cast<uint16_t>(_tmp_16804);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015036\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_16806 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].height[0].value;
                                    _tmp_16806 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16806);
                                    uint16_t* _tmp_16805 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16805 = static_cast<uint16_t>(_tmp_16806);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_395 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015037\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16807 = (char*) buffer++;
                                *_tmp_16807 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015038\033[0m| Optional field shape_reference_point = " << *_tmp_16807;
                                char* _tmp_16808 = (char*) buffer++;
                                *_tmp_16808 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015039\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_16808;
                                char* _tmp_16809 = (char*) buffer++;
                                *_tmp_16809 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015040\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_16809;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16810 = (char*) buffer++;
                                        *_tmp_16810 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015041\033[0m| Optional field z_coordinate = " << *_tmp_16810;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015042\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16812 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16812 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16812);
                                        _tmp_16812 -= -32768;
                                        uint16_t* _tmp_16811 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16811 = static_cast<uint16_t>(_tmp_16812);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015043\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16814 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16814 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16814);
                                        _tmp_16814 -= -32768;
                                        uint16_t* _tmp_16813 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16813 = static_cast<uint16_t>(_tmp_16814);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015044\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16816 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16816 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16816);
                                            _tmp_16816 -= -32768;
                                            uint16_t* _tmp_16815 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16815 = static_cast<uint16_t>(_tmp_16816);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015045\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].range.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].range.value;
                                }
                                
                                float _tmp_16818 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].range.value;
                                _tmp_16818 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16818);
                                uint16_t* _tmp_16817 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16817 = static_cast<uint16_t>(_tmp_16818);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015046\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_start.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_16820 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_start.value;
                                _tmp_16820 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16820);
                                uint16_t* _tmp_16819 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16819 = static_cast<uint16_t>(_tmp_16820);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015047\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_end.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_16822 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_end.value;
                                _tmp_16822 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16822);
                                uint16_t* _tmp_16821 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16821 = static_cast<uint16_t>(_tmp_16822);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015048\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_start[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_16824 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_16824 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16824);
                                    uint16_t* _tmp_16823 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16823 = static_cast<uint16_t>(_tmp_16824);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015049\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_end[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_16826 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_16826 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16826);
                                    uint16_t* _tmp_16825 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16825 = static_cast<uint16_t>(_tmp_16826);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_395 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015050\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_16827 = (char*) buffer++;
                                *_tmp_16827 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015051\033[0m| Optional field z_coordinate = " << *_tmp_16827;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015052\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_16828 = (uint8_t*) buffer++;
                                *_tmp_16828 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015053\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].x_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_16830 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].x_coordinate.value;
                                _tmp_16830 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16830);
                                _tmp_16830 -= -3094;
                                uint16_t* _tmp_16829 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16829 = static_cast<uint16_t>(_tmp_16830);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015054\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].y_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_16832 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].y_coordinate.value;
                                _tmp_16832 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16832);
                                _tmp_16832 -= -3094;
                                uint16_t* _tmp_16831 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16831 = static_cast<uint16_t>(_tmp_16832);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015055\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].z_coordinate[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_16834 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].z_coordinate[0].value;
                                    _tmp_16834 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16834);
                                    _tmp_16834 -= -3094;
                                    uint16_t* _tmp_16833 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16833 = static_cast<uint16_t>(_tmp_16834);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_7299 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.
                                *_ext_flag_7299 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_16835 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_16835 = __aux64__ - 1;
                                
                                int __ifk = __aux64__;
                                for(int k = 0; k < __ifk; k++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16836 = (char*) buffer++;
                                        *_tmp_16836 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015057\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_16836;
                                        char* _tmp_16837 = (char*) buffer++;
                                        *_tmp_16837 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015058\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_16837;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015059\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].range.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].range.value;
                                        }
                                        
                                        float _tmp_16839 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].range.value;
                                        _tmp_16839 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16839);
                                        uint16_t* _tmp_16838 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16838 = static_cast<uint16_t>(_tmp_16839);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015060\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_start.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_16841 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_start.value;
                                        _tmp_16841 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16841);
                                        uint16_t* _tmp_16840 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16840 = static_cast<uint16_t>(_tmp_16841);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015061\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_end.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_16843 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_end.value;
                                        _tmp_16843 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16843);
                                        uint16_t* _tmp_16842 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16842 = static_cast<uint16_t>(_tmp_16843);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015062\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_start[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_16845 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_start[0].value;
                                            _tmp_16845 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16845);
                                            uint16_t* _tmp_16844 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16844 = static_cast<uint16_t>(_tmp_16845);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015063\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_end[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_16847 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_end[0].value;
                                            _tmp_16847 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16847);
                                            uint16_t* _tmp_16846 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16846 = static_cast<uint16_t>(_tmp_16847);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i].radial_shapes[0].radial_shapes_list.elements[k].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_395) << ") selected in CHOICE Shape in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[i]'; message dropped.";
                            return -1;
                        }
                    }
                    
                    // Field:  type(ExcludedShapes) name(excluded_shapes) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(0) max(4) span(5) ext(true)
                    uint8_t* _ext_flag_7305 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.
                    *_ext_flag_7305 = 0; 
                    
                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements.size();
                    if(__aux64__ > 4) __aux64__ = 4;
                    uint16_t* _tmp_16848 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_16848 = __aux64__;
                    
                    int __ifl = __aux64__;
                    for(int l = 0; l < __ifl; l++) { 
                        
                        // Choice
                           // #0  rectangular   RectangularShape
                           // #1  circular   CircularShape
                           // #2  polygonal   PolygonalShape
                           // #3  elliptical   EllipticalShape
                           // #4  radial   RadialShape
                           // #5  radialShapes   RadialShapes
                        uint8_t* _ext_flag_7306 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_7306 = 0; 
                        
                        uint8_t* _choice_396 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_396 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015065\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16849 = (char*) buffer++;
                                *_tmp_16849 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015066\033[0m| Optional field shape_reference_point = " << *_tmp_16849;
                                char* _tmp_16850 = (char*) buffer++;
                                *_tmp_16850 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015067\033[0m| Optional field orientation = " << *_tmp_16850;
                                char* _tmp_16851 = (char*) buffer++;
                                *_tmp_16851 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015068\033[0m| Optional field height = " << *_tmp_16851;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16852 = (char*) buffer++;
                                        *_tmp_16852 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015069\033[0m| Optional field z_coordinate = " << *_tmp_16852;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015070\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16854 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16854 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16854);
                                        _tmp_16854 -= -32768;
                                        uint16_t* _tmp_16853 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16853 = static_cast<uint16_t>(_tmp_16854);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015071\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16856 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16856 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16856);
                                        _tmp_16856 -= -32768;
                                        uint16_t* _tmp_16855 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16855 = static_cast<uint16_t>(_tmp_16856);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015072\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16858 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16858 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16858);
                                            _tmp_16858 -= -32768;
                                            uint16_t* _tmp_16857 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16857 = static_cast<uint16_t>(_tmp_16858);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015073\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_16860 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_length.value;
                                _tmp_16860 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16860);
                                uint16_t* _tmp_16859 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16859 = static_cast<uint16_t>(_tmp_16860);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015074\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_breadth.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_breadth.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_16862 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_breadth.value;
                                _tmp_16862 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16862);
                                uint16_t* _tmp_16861 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16861 = static_cast<uint16_t>(_tmp_16862);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015075\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_16864 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].orientation[0].value;
                                    _tmp_16864 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16864);
                                    uint16_t* _tmp_16863 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16863 = static_cast<uint16_t>(_tmp_16864);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015076\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_16866 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].height[0].value;
                                    _tmp_16866 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16866);
                                    uint16_t* _tmp_16865 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16865 = static_cast<uint16_t>(_tmp_16866);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_396 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015077\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16867 = (char*) buffer++;
                                *_tmp_16867 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015078\033[0m| Optional field shape_reference_point = " << *_tmp_16867;
                                char* _tmp_16868 = (char*) buffer++;
                                *_tmp_16868 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015079\033[0m| Optional field height = " << *_tmp_16868;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16869 = (char*) buffer++;
                                        *_tmp_16869 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015080\033[0m| Optional field z_coordinate = " << *_tmp_16869;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015081\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16871 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16871 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16871);
                                        _tmp_16871 -= -32768;
                                        uint16_t* _tmp_16870 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16870 = static_cast<uint16_t>(_tmp_16871);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015082\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16873 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16873 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16873);
                                        _tmp_16873 -= -32768;
                                        uint16_t* _tmp_16872 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16872 = static_cast<uint16_t>(_tmp_16873);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015083\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16875 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16875 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16875);
                                            _tmp_16875 -= -32768;
                                            uint16_t* _tmp_16874 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16874 = static_cast<uint16_t>(_tmp_16875);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015084\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].radius.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].radius.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].radius.value;
                                }
                                
                                float _tmp_16877 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].radius.value;
                                _tmp_16877 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16877);
                                uint16_t* _tmp_16876 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16876 = static_cast<uint16_t>(_tmp_16877);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015085\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_16879 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].height[0].value;
                                    _tmp_16879 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16879);
                                    uint16_t* _tmp_16878 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16878 = static_cast<uint16_t>(_tmp_16879);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_396 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015086\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16880 = (char*) buffer++;
                                *_tmp_16880 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015087\033[0m| Optional field shape_reference_point = " << *_tmp_16880;
                                char* _tmp_16881 = (char*) buffer++;
                                *_tmp_16881 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015088\033[0m| Optional field height = " << *_tmp_16881;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16882 = (char*) buffer++;
                                        *_tmp_16882 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015089\033[0m| Optional field z_coordinate = " << *_tmp_16882;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015090\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16884 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16884 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16884);
                                        _tmp_16884 -= -32768;
                                        uint16_t* _tmp_16883 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16883 = static_cast<uint16_t>(_tmp_16884);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015091\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16886 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16886 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16886);
                                        _tmp_16886 -= -32768;
                                        uint16_t* _tmp_16885 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16885 = static_cast<uint16_t>(_tmp_16886);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015092\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16888 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16888 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16888);
                                            _tmp_16888 -= -32768;
                                            uint16_t* _tmp_16887 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16887 = static_cast<uint16_t>(_tmp_16888);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_7322 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.
                                *_ext_flag_7322 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_16889 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_16889 = __aux64__ - 1;
                                
                                int __ifm = __aux64__;
                                for(int m = 0; m < __ifm; m++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16890 = (char*) buffer++;
                                        *_tmp_16890 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015094\033[0m| Optional field z_coordinate = " << *_tmp_16890;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015095\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16892 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].x_coordinate.value;
                                        _tmp_16892 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16892);
                                        _tmp_16892 -= -32768;
                                        uint16_t* _tmp_16891 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16891 = static_cast<uint16_t>(_tmp_16892);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015096\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16894 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].y_coordinate.value;
                                        _tmp_16894 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16894);
                                        _tmp_16894 -= -32768;
                                        uint16_t* _tmp_16893 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16893 = static_cast<uint16_t>(_tmp_16894);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015097\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16896 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].z_coordinate[0].value;
                                            _tmp_16896 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16896);
                                            _tmp_16896 -= -32768;
                                            uint16_t* _tmp_16895 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16895 = static_cast<uint16_t>(_tmp_16896);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].polygon.elements[m].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015098\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_16898 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].height[0].value;
                                    _tmp_16898 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16898);
                                    uint16_t* _tmp_16897 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16897 = static_cast<uint16_t>(_tmp_16898);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_396 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015099\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16899 = (char*) buffer++;
                                *_tmp_16899 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015100\033[0m| Optional field shape_reference_point = " << *_tmp_16899;
                                char* _tmp_16900 = (char*) buffer++;
                                *_tmp_16900 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015101\033[0m| Optional field orientation = " << *_tmp_16900;
                                char* _tmp_16901 = (char*) buffer++;
                                *_tmp_16901 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015102\033[0m| Optional field height = " << *_tmp_16901;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16902 = (char*) buffer++;
                                        *_tmp_16902 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015103\033[0m| Optional field z_coordinate = " << *_tmp_16902;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015104\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16904 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16904 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16904);
                                        _tmp_16904 -= -32768;
                                        uint16_t* _tmp_16903 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16903 = static_cast<uint16_t>(_tmp_16904);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015105\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16906 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16906 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16906);
                                        _tmp_16906 -= -32768;
                                        uint16_t* _tmp_16905 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16905 = static_cast<uint16_t>(_tmp_16906);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015106\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16908 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16908 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16908);
                                            _tmp_16908 -= -32768;
                                            uint16_t* _tmp_16907 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16907 = static_cast<uint16_t>(_tmp_16908);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015107\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_major_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_major_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_16910 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_major_axis_length.value;
                                _tmp_16910 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16910);
                                uint16_t* _tmp_16909 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16909 = static_cast<uint16_t>(_tmp_16910);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015108\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_minor_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_minor_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_16912 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_minor_axis_length.value;
                                _tmp_16912 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16912);
                                uint16_t* _tmp_16911 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16911 = static_cast<uint16_t>(_tmp_16912);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015109\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_16914 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].orientation[0].value;
                                    _tmp_16914 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16914);
                                    uint16_t* _tmp_16913 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16913 = static_cast<uint16_t>(_tmp_16914);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015110\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_16916 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].height[0].value;
                                    _tmp_16916 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16916);
                                    uint16_t* _tmp_16915 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16915 = static_cast<uint16_t>(_tmp_16916);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_396 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015111\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_16917 = (char*) buffer++;
                                *_tmp_16917 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015112\033[0m| Optional field shape_reference_point = " << *_tmp_16917;
                                char* _tmp_16918 = (char*) buffer++;
                                *_tmp_16918 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015113\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_16918;
                                char* _tmp_16919 = (char*) buffer++;
                                *_tmp_16919 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015114\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_16919;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16920 = (char*) buffer++;
                                        *_tmp_16920 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015115\033[0m| Optional field z_coordinate = " << *_tmp_16920;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015116\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_16922 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_16922 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16922);
                                        _tmp_16922 -= -32768;
                                        uint16_t* _tmp_16921 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16921 = static_cast<uint16_t>(_tmp_16922);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015117\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_16924 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_16924 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16924);
                                        _tmp_16924 -= -32768;
                                        uint16_t* _tmp_16923 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16923 = static_cast<uint16_t>(_tmp_16924);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015118\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_16926 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_16926 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16926);
                                            _tmp_16926 -= -32768;
                                            uint16_t* _tmp_16925 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16925 = static_cast<uint16_t>(_tmp_16926);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015119\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].range.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].range.value;
                                }
                                
                                float _tmp_16928 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].range.value;
                                _tmp_16928 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16928);
                                uint16_t* _tmp_16927 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16927 = static_cast<uint16_t>(_tmp_16928);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015120\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_start.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_16930 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_start.value;
                                _tmp_16930 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16930);
                                uint16_t* _tmp_16929 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16929 = static_cast<uint16_t>(_tmp_16930);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015121\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_end.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_16932 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_end.value;
                                _tmp_16932 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16932);
                                uint16_t* _tmp_16931 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16931 = static_cast<uint16_t>(_tmp_16932);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015122\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_start[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_16934 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_16934 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16934);
                                    uint16_t* _tmp_16933 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16933 = static_cast<uint16_t>(_tmp_16934);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015123\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_end[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_16936 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_16936 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16936);
                                    uint16_t* _tmp_16935 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16935 = static_cast<uint16_t>(_tmp_16936);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_396 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015124\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_16937 = (char*) buffer++;
                                *_tmp_16937 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015125\033[0m| Optional field z_coordinate = " << *_tmp_16937;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015126\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_16938 = (uint8_t*) buffer++;
                                *_tmp_16938 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015127\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].x_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_16940 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].x_coordinate.value;
                                _tmp_16940 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16940);
                                _tmp_16940 -= -3094;
                                uint16_t* _tmp_16939 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16939 = static_cast<uint16_t>(_tmp_16940);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015128\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].y_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_16942 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].y_coordinate.value;
                                _tmp_16942 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_16942);
                                _tmp_16942 -= -3094;
                                uint16_t* _tmp_16941 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_16941 = static_cast<uint16_t>(_tmp_16942);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015129\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].z_coordinate[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_16944 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].z_coordinate[0].value;
                                    _tmp_16944 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_16944);
                                    _tmp_16944 -= -3094;
                                    uint16_t* _tmp_16943 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_16943 = static_cast<uint16_t>(_tmp_16944);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_7346 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.
                                *_ext_flag_7346 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_16945 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_16945 = __aux64__ - 1;
                                
                                int __ifn = __aux64__;
                                for(int n = 0; n < __ifn; n++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_16946 = (char*) buffer++;
                                        *_tmp_16946 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015131\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_16946;
                                        char* _tmp_16947 = (char*) buffer++;
                                        *_tmp_16947 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015132\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_16947;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015133\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].range.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].range.value;
                                        }
                                        
                                        float _tmp_16949 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].range.value;
                                        _tmp_16949 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16949);
                                        uint16_t* _tmp_16948 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16948 = static_cast<uint16_t>(_tmp_16949);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015134\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_start.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_16951 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_start.value;
                                        _tmp_16951 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16951);
                                        uint16_t* _tmp_16950 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16950 = static_cast<uint16_t>(_tmp_16951);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015135\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_end.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_16953 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_end.value;
                                        _tmp_16953 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_16953);
                                        uint16_t* _tmp_16952 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_16952 = static_cast<uint16_t>(_tmp_16953);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015136\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_start[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_16955 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_start[0].value;
                                            _tmp_16955 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16955);
                                            uint16_t* _tmp_16954 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16954 = static_cast<uint16_t>(_tmp_16955);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015137\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_end[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_16957 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_end[0].value;
                                            _tmp_16957 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_16957);
                                            uint16_t* _tmp_16956 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_16956 = static_cast<uint16_t>(_tmp_16957);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l].radial_shapes[0].radial_shapes_list.elements[n].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_396) << ") selected in CHOICE Shape in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[l]'; message dropped.";
                            return -1;
                        }
                    }
                
                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.size() != 0) {
                    // Field:  type(EPUSectionCapabilities) name(epu_section_capabilities) extGroup(0)
                        // EPUSectionCapabilities  SEQUENCE
                            //  companyName EPUSectionCapabilities_companyName     
                            //  sensorTypes SensorTypes                            
                            //  ...
                        uint8_t* _ext_flag_7352 = (uint8_t*) buffer++;  // Write extension flag for EPUSectionCapabilities
                        *_ext_flag_7352 = 0;  
                        
                        // Optional fields bytemap
                        
                        // Field:  type(EPUSectionCapabilities_companyName) name(company_name) extGroup(0)
                        // Text
                        
                        // TEXT  min(1) max(24) span(24)
                        uint8_t* _tmp_16958 = (uint8_t*)buffer;
                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size();
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size() < 1) {
                            logger->warning() << "Error: Length of 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value) << " is less than allowable (1); message dropped.";
                            return -1;
                        }
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size() > 24) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value) << " exceeds max allowable (24); message dropped.";
                            return -1;
                        }
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015138\033[0m| epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size(): " << 
                                        static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size());
                        
                        if(__aux64__ > 24) __aux64__ = 24;
                        *_tmp_16958 = __aux64__ - 1;
                        buffer += 1;
                        
                        int __ifo = __aux64__;
                        for(int o = 0; o < __ifo; o++) {  // 24
                            char* __tmp__ = (char*)buffer++;
                            *__tmp__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.c_str()[o];
                        }
                        
                        // Field:  type(SensorTypes) name(sensor_types) extGroup(0)
                        // BitString
                        // BIT_STRING  min(16) max(16) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015139\033[0m| epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size());
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size() < 16) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size()) << " is less than allowable (16); message dropped.";
                            return -1;
                        }
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size() > 16) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size()) << " exceeds max allowable (16); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _ext_flag_7353 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.
                        *_ext_flag_7353 = 0; 
                        
                        uint8_t* _tmp_16959 = (uint8_t*)buffer;
                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        *_tmp_16959 = __aux64__ - 16;
                        buffer += 1;
                        
                        int __ifp = __aux64__;
                        for(int p = 0; p < __ifp; p++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values[p]? 1: 0);
                        }
                        
                        if(*_ext_flag_7352) {
                        }
                }
                
                if(*_ext_flag_7257) {
                }
        }
    
	
            return buffer - start;
        }
    } 
}