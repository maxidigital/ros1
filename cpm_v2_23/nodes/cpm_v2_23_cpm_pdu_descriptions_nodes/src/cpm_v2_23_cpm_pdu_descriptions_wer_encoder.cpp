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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v2_23:1.0
 * 
 * Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <cpm_v2_23_cpm_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_cpm_v2_23_cpm_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const cpm_v2_23_cpm_pdu_descriptions_msgs::CollectivePerceptionMessage::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<cpm_v2_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const cpm_v2_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // CollectivePerceptionMessage  SEQUENCE
        //  its_header ItsPduHeader     
        //  payload    CpmPayload       
    // Optional fields bytemap
    
    // Field:  type(ItsPduHeader) name(its_header) extGroup(0)
        // ItsPduHeader  SEQUENCE
            //  protocolVersion OrdinalNumber1B     
            //  messageId       MessageId           
            //  stationId       StationId           
        // Optional fields bytemap
        
        // Field:  type(OrdinalNumber1B) name(protocol_version) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m007466\033[0m| " << tools::getTypeName(ros->its_header.protocol_version.value) << 
                         " its_header.protocol_version.value: " << static_cast<int>(ros->its_header.protocol_version.value);
        }
        
        uint8_t* _tmp_8295 = (uint8_t*) buffer++;
        *_tmp_8295 = ros->its_header.protocol_version.value; 
        __aux64__ = ros->its_header.protocol_version.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'its_header.protocol_version.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'its_header.protocol_version.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(MessageId) name(message_id) extGroup(0)
        // Integer
        
        // UINT8  min(0) max(255) span(256) dataType(UInt8)
        if(debug) {
            logger->debug() << "|\033[38;5;94m007467\033[0m| " << tools::getTypeName(ros->its_header.message_id.value) << 
                         " its_header.message_id.value: " << static_cast<int>(ros->its_header.message_id.value);
        }
        
        uint8_t* _tmp_8296 = (uint8_t*) buffer++;
        *_tmp_8296 = ros->its_header.message_id.value; 
        __aux64__ = ros->its_header.message_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'its_header.message_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 255) {
            logger->warning() << "Error: Value in 'its_header.message_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
            return -1;
        }
        
        // Field:  type(StationId) name(station_id) extGroup(0)
        // Integer
        
        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
        if(debug) {
            logger->debug() << "|\033[38;5;94m007468\033[0m| " << tools::getTypeName(ros->its_header.station_id.value) << 
                         " its_header.station_id.value: " << ros->its_header.station_id.value;
        }
        
        uint32_t* _tmp_8297 = (uint32_t*) buffer; buffer += 4;
        *_tmp_8297 = ros->its_header.station_id.value; 
        __aux64__ = ros->its_header.station_id.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'its_header.station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
            logger->warning() << "Error: Value in 'its_header.station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
            return -1;
        }
    
    // Field:  type(CpmPayload) name(payload) extGroup(0)
        // CpmPayload  SEQUENCE
            //  managementContainer ManagementContainer                
            //  cpmContainers       ConstraintWrappedCpmContainers     
            //  ...
        uint8_t* _ext_flag_3670 = (uint8_t*) buffer++;  // Write extension flag for CpmPayload
        *_ext_flag_3670 = 0;  
        
        // Optional fields bytemap
        
        // Field:  type(ManagementContainer) name(management_container) extGroup(0)
            // ManagementContainer  SEQUENCE
                //  referenceTime     TimestampIts                
                //  referencePosition ReferencePosition           
                //  segmentationInfo  MessageSegmentationInfo   OPTIONAL  
                //  messageRateRange  MessageRateRange          OPTIONAL  
                //  ...
            uint8_t* _ext_flag_3671 = (uint8_t*) buffer++;  // Write extension flag for ManagementContainer
            *_ext_flag_3671 = 0;  
            
            // Optional fields bytemap
            char* _tmp_8298 = (char*) buffer++;
            *_tmp_8298 = (ros->payload.management_container.segmentation_info.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m007469\033[0m| Optional field segmentation_info = " << *_tmp_8298;
            char* _tmp_8299 = (char*) buffer++;
            *_tmp_8299 = (ros->payload.management_container.message_rate_range.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m007470\033[0m| Optional field message_rate_range = " << *_tmp_8299;
            
            // Field:  type(TimestampIts) name(reference_time) extGroup(0)
            // Real
            
            // FLOAT  min(0) max(4398046511103) span(4398046511104) scaleDivisor(1000.0) dataType(Float)
            if(debug) {
                logger->debug() << "|\033[38;5;94m007471\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_time.value) << 
                             " payload.management_container.reference_time.value: " << ros->payload.management_container.reference_time.value;
            }
            
            float _tmp_8301 = ros->payload.management_container.reference_time.value;
            _tmp_8301 *= 1000.0;
            __aux64__ = static_cast<uint64_t>(_tmp_8301);
            uint64_t* _tmp_8300 = (uint64_t*) buffer; buffer += 8;
            *_tmp_8300 = static_cast<uint64_t>(_tmp_8301);
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'payload.management_container.reference_time.value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                logger->warning() << "Error: Value in 'payload.management_container.reference_time.value' (" << __aux64__ << ") exceeds max allowable (4398046511103); message dropped.";
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
                    logger->debug() << "|\033[38;5;94m007472\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.latitude.value) << 
                                 " payload.management_container.reference_position.latitude.value: " << ros->payload.management_container.reference_position.latitude.value;
                }
                
                double _tmp_8303 = ros->payload.management_container.reference_position.latitude.value;
                _tmp_8303 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_8303);
                _tmp_8303 -= -900000000;
                uint32_t* _tmp_8302 = (uint32_t*) buffer; buffer += 4;
                *_tmp_8302 = static_cast<uint32_t>(_tmp_8303);
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                    logger->warning() << "Error: Value in 'payload.management_container.reference_position.latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                    logger->warning() << "Error: Value in 'payload.management_container.reference_position.latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                    return -1;
                }
                
                // Field:  type(Longitude) name(longitude) extGroup(0)
                // Real
                
                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m007473\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.longitude.value) << 
                                 " payload.management_container.reference_position.longitude.value: " << ros->payload.management_container.reference_position.longitude.value;
                }
                
                double _tmp_8305 = ros->payload.management_container.reference_position.longitude.value;
                _tmp_8305 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_8305);
                _tmp_8305 -= -1800000000;
                uint32_t* _tmp_8304 = (uint32_t*) buffer; buffer += 4;
                *_tmp_8304 = static_cast<uint32_t>(_tmp_8305);
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                    logger->warning() << "Error: Value in 'payload.management_container.reference_position.longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                    logger->warning() << "Error: Value in 'payload.management_container.reference_position.longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
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
                        logger->debug() << "|\033[38;5;94m007474\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    }
                    
                    float _tmp_8307 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    _tmp_8307 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_8307);
                    uint16_t* _tmp_8306 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_8306 = static_cast<uint16_t>(_tmp_8307);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                    // Real
                    
                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007475\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    }
                    
                    float _tmp_8309 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    _tmp_8309 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_8309);
                    uint16_t* _tmp_8308 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_8308 = static_cast<uint16_t>(_tmp_8309);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                    // Integer
                    
                    // UINT16  min(0) max(3601) span(3602) dataType(UInt16)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007476\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                     " payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    }
                    
                    uint16_t* _tmp_8310 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_8310 = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value; 
                    __aux64__ = ros->payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
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
                        logger->debug() << "|\033[38;5;94m007477\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.altitude.altitude_value.value) << 
                                     " payload.management_container.reference_position.altitude.altitude_value.value: " << ros->payload.management_container.reference_position.altitude.altitude_value.value;
                    }
                    
                    float _tmp_8312 = ros->payload.management_container.reference_position.altitude.altitude_value.value;
                    _tmp_8312 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_8312);
                    _tmp_8312 -= -100000;
                    uint32_t* _tmp_8311 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_8311 = static_cast<uint32_t>(_tmp_8312);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -100000) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") less than (-100000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 800001) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") exceeds max allowable (800001); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(15) span(16) dataType(Int32)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007478\033[0m| " << tools::getTypeName(ros->payload.management_container.reference_position.altitude.altitude_confidence.value) << 
                                     " payload.management_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->payload.management_container.reference_position.altitude.altitude_confidence.value);
                    }
                    
                    uint8_t* _tmp_8313 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_8313 = ros->payload.management_container.reference_position.altitude.altitude_confidence.value; 
                    __aux64__ = ros->payload.management_container.reference_position.altitude.altitude_confidence.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 15) {
                        logger->warning() << "Error: Value in 'payload.management_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                        return -1;
                    }
            
            if(ros->payload.management_container.segmentation_info.size() != 0) {
                // Field:  type(MessageSegmentationInfo) name(segmentation_info) extGroup(0)
                    // MessageSegmentationInfo  SEQUENCE
                        //  totalMsgNo CardinalNumber3b     
                        //  thisMsgNo  OrdinalNumber3b      
                    // Optional fields bytemap
                    
                    // Field:  type(CardinalNumber3b) name(total_msg_no) extGroup(0)
                    // Integer
                    
                    // UINT8  min(1) max(8) span(8) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007479\033[0m| " << tools::getTypeName(ros->payload.management_container.segmentation_info[0].total_msg_no.value) << 
                                     " payload.management_container.segmentation_info[0].total_msg_no.value: " << static_cast<int>(ros->payload.management_container.segmentation_info[0].total_msg_no.value);
                    }
                    
                    uint8_t* _tmp_8314 = (uint8_t*) buffer++;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].total_msg_no.value - 1;
                    *_tmp_8314 = __aux64__;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].total_msg_no.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'payload.management_container.segmentation_info[0].total_msg_no.value' (" << __aux64__ << ") less than (1); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 8) {
                        logger->warning() << "Error: Value in 'payload.management_container.segmentation_info[0].total_msg_no.value' (" << __aux64__ << ") exceeds max allowable (8); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(OrdinalNumber3b) name(this_msg_no) extGroup(0)
                    // Integer
                    
                    // UINT8  min(1) max(8) span(8) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007480\033[0m| " << tools::getTypeName(ros->payload.management_container.segmentation_info[0].this_msg_no.value) << 
                                     " payload.management_container.segmentation_info[0].this_msg_no.value: " << static_cast<int>(ros->payload.management_container.segmentation_info[0].this_msg_no.value);
                    }
                    
                    uint8_t* _tmp_8315 = (uint8_t*) buffer++;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].this_msg_no.value - 1;
                    *_tmp_8315 = __aux64__;
                    __aux64__ = ros->payload.management_container.segmentation_info[0].this_msg_no.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'payload.management_container.segmentation_info[0].this_msg_no.value' (" << __aux64__ << ") less than (1); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 8) {
                        logger->warning() << "Error: Value in 'payload.management_container.segmentation_info[0].this_msg_no.value' (" << __aux64__ << ") exceeds max allowable (8); message dropped.";
                        return -1;
                    }
            }
            
            if(ros->payload.management_container.message_rate_range.size() != 0) {
                // Field:  type(MessageRateRange) name(message_rate_range) extGroup(0)
                    // MessageRateRange  SEQUENCE
                        //  messageRateMin MessageRateHz     
                        //  messageRateMax MessageRateHz     
                    // Optional fields bytemap
                    
                    // Field:  type(MessageRateHz) name(message_rate_min) extGroup(0)
                        // MessageRateHz  SEQUENCE
                            //  mantissa   MessageRateHz_mantissa     
                            //  exponent   MessageRateHz_exponent     
                        // Optional fields bytemap
                        
                        // Field:  type(MessageRateHz_mantissa) name(mantissa) extGroup(0)
                        // Integer
                        
                        // UINT8  min(1) max(100) span(100) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007481\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_min.mantissa.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value);
                        }
                        
                        uint8_t* _tmp_8316 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value - 1;
                        *_tmp_8316 = __aux64__;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.mantissa.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_min.mantissa.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 100) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_min.mantissa.value' (" << __aux64__ << ") exceeds max allowable (100); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MessageRateHz_exponent) name(exponent) extGroup(0)
                        // Integer
                        
                        // INT8  min(-5) max(2) span(8) dataType(Int8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007482\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_min.exponent.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value);
                        }
                        
                        uint8_t* _tmp_8317 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value - -5;
                        *_tmp_8317 = __aux64__;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_min.exponent.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -5) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_min.exponent.value' (" << __aux64__ << ") less than (-5); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_min.exponent.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(MessageRateHz) name(message_rate_max) extGroup(0)
                        // MessageRateHz  SEQUENCE
                            //  mantissa   MessageRateHz_mantissa     
                            //  exponent   MessageRateHz_exponent     
                        // Optional fields bytemap
                        
                        // Field:  type(MessageRateHz_mantissa) name(mantissa) extGroup(0)
                        // Integer
                        
                        // UINT8  min(1) max(100) span(100) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007483\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_max.mantissa.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value);
                        }
                        
                        uint8_t* _tmp_8318 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value - 1;
                        *_tmp_8318 = __aux64__;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.mantissa.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_max.mantissa.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 100) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_max.mantissa.value' (" << __aux64__ << ") exceeds max allowable (100); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MessageRateHz_exponent) name(exponent) extGroup(0)
                        // Integer
                        
                        // INT8  min(-5) max(2) span(8) dataType(Int8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007484\033[0m| " << tools::getTypeName(ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value) << 
                                         " payload.management_container.message_rate_range[0].message_rate_max.exponent.value: " << static_cast<int>(ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value);
                        }
                        
                        uint8_t* _tmp_8319 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value - -5;
                        *_tmp_8319 = __aux64__;
                        __aux64__ = ros->payload.management_container.message_rate_range[0].message_rate_max.exponent.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -5) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_max.exponent.value' (" << __aux64__ << ") less than (-5); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'payload.management_container.message_rate_range[0].message_rate_max.exponent.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                            return -1;
                        }
            }
            
            if(*_ext_flag_3671) {
            }
        
        // Field:  type(ConstraintWrappedCpmContainers) name(cpm_containers) extGroup(0)
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
        __aux64__ = ros->payload.cpm_containers.elements.size();
        if(__aux64__ > 8) __aux64__ = 8;
        uint16_t* _tmp_8321 = (uint16_t*)buffer;
        buffer += 2;
        *_tmp_8321 = __aux64__ - 1;
        
        int __ifk = __aux64__;
        for(int k = 0; k < __ifk; k++) { 
            
            // Choice
               // #0  originatingVehicleContainer   OriginatingVehicleContainer
               // #1  originatingRsuContainer   OriginatingRsuContainer
               // #2  sensorInformationContainer   SensorInformationContainer
               // #3  perceptionRegionContainer   PerceptionRegionContainer
               // #4  perceivedObjectContainer   PerceivedObjectContainer
            uint8_t* _choice_277 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->payload.cpm_containers.elements[k].originating_vehicle_container.size() != 0) {  // CHOICE 0  fieldType(WrappedCpmContainer) 
                *_choice_277 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m007486\033[0m| Choice selection: 0";
            
                    // OriginatingVehicleContainer  SEQUENCE
                        //  orientationAngle Wgs84Angle         
                        //  pitchAngle       CartesianAngle   OPTIONAL  
                        //  rollAngle        CartesianAngle   OPTIONAL  
                        //  trailerDataSet   TrailerDataSet   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_3687 = (uint8_t*) buffer++;  // Write extension flag for OriginatingVehicleContainer
                    *_ext_flag_3687 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_8322 = (char*) buffer++;
                    *_tmp_8322 = (ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007487\033[0m| Optional field pitch_angle = " << *_tmp_8322;
                    char* _tmp_8323 = (char*) buffer++;
                    *_tmp_8323 = (ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007488\033[0m| Optional field roll_angle = " << *_tmp_8323;
                    char* _tmp_8324 = (char*) buffer++;
                    *_tmp_8324 = (ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007489\033[0m| Optional field trailer_data_set = " << *_tmp_8324;
                    
                    // Field:  type(Wgs84Angle) name(orientation_angle) extGroup(0)
                        // Wgs84Angle  SEQUENCE
                            //  value      Wgs84AngleValue          
                            //  confidence Wgs84AngleConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(Wgs84AngleValue) name(value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007490\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.value.value) << 
                                         " payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.value.value: " << ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.value.value;
                        }
                        
                        float _tmp_8326 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.value.value;
                        _tmp_8326 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_8326);
                        uint16_t* _tmp_8325 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_8325 = static_cast<uint16_t>(_tmp_8326);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Wgs84AngleConfidence) name(confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007491\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.confidence.value) << 
                                         " payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.confidence.value);
                        }
                        
                        float _tmp_8328 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.confidence.value;
                        _tmp_8328 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_8328);
                        _tmp_8328 -= 1;
                        uint8_t* _tmp_8327 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_8327 = static_cast<uint8_t>(_tmp_8328);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].orientation_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                            return -1;
                        }
                    
                    if(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle.size() != 0) {
                        // Field:  type(CartesianAngle) name(pitch_angle) extGroup(0)
                            // CartesianAngle  SEQUENCE
                                //  value      CartesianAngleValue     
                                //  confidence AngleConfidence         
                            // Optional fields bytemap
                            
                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007492\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].value.value) << 
                                             " payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].value.value: " << ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].value.value;
                            }
                            
                            float _tmp_8330 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].value.value;
                            _tmp_8330 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_8330);
                            uint16_t* _tmp_8329 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_8329 = static_cast<uint16_t>(_tmp_8330);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007493\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].confidence.value) << 
                                             " payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].confidence.value);
                            }
                            
                            float _tmp_8332 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].confidence.value;
                            _tmp_8332 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_8332);
                            _tmp_8332 -= 1;
                            uint8_t* _tmp_8331 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_8331 = static_cast<uint8_t>(_tmp_8332);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].pitch_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle.size() != 0) {
                        // Field:  type(CartesianAngle) name(roll_angle) extGroup(0)
                            // CartesianAngle  SEQUENCE
                                //  value      CartesianAngleValue     
                                //  confidence AngleConfidence         
                            // Optional fields bytemap
                            
                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007494\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].value.value) << 
                                             " payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].value.value: " << ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].value.value;
                            }
                            
                            float _tmp_8334 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].value.value;
                            _tmp_8334 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_8334);
                            uint16_t* _tmp_8333 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_8333 = static_cast<uint16_t>(_tmp_8334);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007495\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].confidence.value) << 
                                             " payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].confidence.value);
                            }
                            
                            float _tmp_8336 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].confidence.value;
                            _tmp_8336 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_8336);
                            _tmp_8336 -= 1;
                            uint8_t* _tmp_8335 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_8335 = static_cast<uint8_t>(_tmp_8336);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].roll_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set.size() != 0) {
                        // Field:  type(TrailerDataSet) name(trailer_data_set) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(8) span(8) ext(true)
                        uint8_t* _ext_flag_3694 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].
                        *_ext_flag_3694 = 0; 
                        
                        __aux64__ = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements.size();
                        if(__aux64__ > 8) __aux64__ = 8;
                        uint16_t* _tmp_8337 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_8337 = __aux64__ - 1;
                        
                        int __ifl = __aux64__;
                        for(int l = 0; l < __ifl; l++) { 
                            
                                // TrailerData  SEQUENCE
                                    //  refPointId       Identifier1B         
                                    //  hitchPointOffset StandardLength1B     
                                    //  frontOverhang    StandardLength1B   OPTIONAL  
                                    //  rearOverhang     StandardLength1B   OPTIONAL  
                                    //  trailerWidth     VehicleWidth       OPTIONAL  
                                    //  hitchAngle       CartesianAngle       
                                    //  ...
                                uint8_t* _ext_flag_3695 = (uint8_t*) buffer++;  // Write extension flag for TrailerData
                                *_ext_flag_3695 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_8338 = (char*) buffer++;
                                *_tmp_8338 = (ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].front_overhang.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007497\033[0m| Optional field front_overhang = " << *_tmp_8338;
                                char* _tmp_8339 = (char*) buffer++;
                                *_tmp_8339 = (ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].rear_overhang.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007498\033[0m| Optional field rear_overhang = " << *_tmp_8339;
                                char* _tmp_8340 = (char*) buffer++;
                                *_tmp_8340 = (ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].trailer_width.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007499\033[0m| Optional field trailer_width = " << *_tmp_8340;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007500\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].ref_point_id.value) << 
                                                 " payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_8341 = (uint8_t*) buffer++;
                                *_tmp_8341 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].ref_point_id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(hitch_point_offset) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007501\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_point_offset.value) << 
                                                 " payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_point_offset.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_point_offset.value);
                                }
                                
                                float _tmp_8343 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_point_offset.value;
                                _tmp_8343 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8343);
                                uint8_t* _tmp_8342 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_8342 = static_cast<uint8_t>(_tmp_8343);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_point_offset.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_point_offset.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].front_overhang.size() != 0) {
                                    // Field:  type(StandardLength1B) name(front_overhang) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007502\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].front_overhang[0].value) << 
                                                     " payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].front_overhang[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].front_overhang[0].value);
                                    }
                                    
                                    float _tmp_8345 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].front_overhang[0].value;
                                    _tmp_8345 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8345);
                                    uint8_t* _tmp_8344 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8344 = static_cast<uint8_t>(_tmp_8345);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].front_overhang[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].front_overhang[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].rear_overhang.size() != 0) {
                                    // Field:  type(StandardLength1B) name(rear_overhang) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007503\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].rear_overhang[0].value) << 
                                                     " payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].rear_overhang[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].rear_overhang[0].value);
                                    }
                                    
                                    float _tmp_8347 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].rear_overhang[0].value;
                                    _tmp_8347 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8347);
                                    uint8_t* _tmp_8346 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8346 = static_cast<uint8_t>(_tmp_8347);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].rear_overhang[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].rear_overhang[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].trailer_width.size() != 0) {
                                    // Field:  type(VehicleWidth) name(trailer_width) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007504\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].trailer_width[0].value) << 
                                                     " payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].trailer_width[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].trailer_width[0].value);
                                    }
                                    
                                    float _tmp_8349 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].trailer_width[0].value;
                                    _tmp_8349 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8349);
                                    _tmp_8349 -= 1;
                                    uint8_t* _tmp_8348 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8348 = static_cast<uint8_t>(_tmp_8349);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].trailer_width[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].trailer_width[0].value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(CartesianAngle) name(hitch_angle) extGroup(0)
                                    // CartesianAngle  SEQUENCE
                                        //  value      CartesianAngleValue     
                                        //  confidence AngleConfidence         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007505\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.value.value) << 
                                                     " payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.value.value: " << ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.value.value;
                                    }
                                    
                                    float _tmp_8351 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.value.value;
                                    _tmp_8351 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8351);
                                    uint16_t* _tmp_8350 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8350 = static_cast<uint16_t>(_tmp_8351);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007506\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.confidence.value) << 
                                                     " payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.confidence.value);
                                    }
                                    
                                    float _tmp_8353 = ros->payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.confidence.value;
                                    _tmp_8353 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8353);
                                    _tmp_8353 -= 1;
                                    uint8_t* _tmp_8352 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8352 = static_cast<uint8_t>(_tmp_8353);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_vehicle_container[0].trailer_data_set[0].elements[l].hitch_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                        return -1;
                                    }
                                
                                if(*_ext_flag_3695) {
                                }
                        }
                    }
                    
                    if(*_ext_flag_3687) {
                    }
            
            }
            else if(ros->payload.cpm_containers.elements[k].originating_rsu_container.size() != 0)  // CHOICE 1  fieldType(WrappedCpmContainer) 
            {
                *_choice_277 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m007507\033[0m| Choice selection: 1";
            
                    // OriginatingRsuContainer  SEQUENCE
                        //  mapReference MapReference   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_3703 = (uint8_t*) buffer++;  // Write extension flag for OriginatingRsuContainer
                    *_ext_flag_3703 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_8356 = (char*) buffer++;
                    *_tmp_8356 = (ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m007508\033[0m| Optional field map_reference = " << *_tmp_8356;
                    
                    if(ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference.size() != 0) {
                        // Field:  type(MapReference) name(map_reference) extGroup(0)
                        // Choice
                           // #0  roadsegment   RoadSegmentReferenceId
                           // #1  intersection   IntersectionReferenceId
                        uint8_t* _choice_278 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment.size() != 0) {  // CHOICE 0  fieldType(MapReference) 
                            *_choice_278 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007509\033[0m| Choice selection: 0";
                        
                                // RoadSegmentReferenceId  SEQUENCE
                                    //  region     Identifier2B   OPTIONAL  
                                    //  id         Identifier2B     
                                // Optional fields bytemap
                                char* _tmp_8357 = (char*) buffer++;
                                *_tmp_8357 = (ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].region.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007510\033[0m| Optional field region = " << *_tmp_8357;
                                
                                if(ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].region.size() != 0) {
                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                    // Integer
                                    
                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007511\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value) << 
                                                     " payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value: " << ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value;
                                    }
                                    
                                    uint16_t* _tmp_8358 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8358 = ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007512\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value) << 
                                                 " payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value: " << ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value;
                                }
                                
                                uint16_t* _tmp_8359 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8359 = ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection.size() != 0)  // CHOICE 1  fieldType(MapReference) 
                        {
                            *_choice_278 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007513\033[0m| Choice selection: 1";
                        
                                // IntersectionReferenceId  SEQUENCE
                                    //  region     Identifier2B   OPTIONAL  
                                    //  id         Identifier2B     
                                // Optional fields bytemap
                                char* _tmp_8360 = (char*) buffer++;
                                *_tmp_8360 = (ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].region.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007514\033[0m| Optional field region = " << *_tmp_8360;
                                
                                if(ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].region.size() != 0) {
                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                    // Integer
                                    
                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007515\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value) << 
                                                     " payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value: " << ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value;
                                    }
                                    
                                    uint16_t* _tmp_8361 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8361 = ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007516\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].id.value) << 
                                                 " payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].id.value: " << ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].id.value;
                                }
                                
                                uint16_t* _tmp_8362 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8362 = ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_278) << ") selected in CHOICE MapReference in 'payload.cpm_containers.elements[k].originating_rsu_container[0].map_reference[0]'; message dropped.";
                            return -1;
                        }
                    }
                    
                    if(*_ext_flag_3703) {
                    }
            
            }
            else if(ros->payload.cpm_containers.elements[k].sensor_information_container.size() != 0)  // CHOICE 2  fieldType(WrappedCpmContainer) 
            {
                *_choice_277 = 2;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m007517\033[0m| Choice selection: 2";
            
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                uint8_t* _ext_flag_3709 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].sensor_information_container[0].
                *_ext_flag_3709 = 0; 
                
                __aux64__ = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements.size();
                if(__aux64__ > 128) __aux64__ = 128;
                uint16_t* _tmp_8364 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_8364 = __aux64__ - 1;
                
                int __ifm = __aux64__;
                for(int m = 0; m < __ifm; m++) { 
                    
                        // SensorInformation  SEQUENCE
                            //  sensorId                   Identifier1B                           
                            //  sensorType                 SensorType                             
                            //  perceptionRegionShape      Shape                                OPTIONAL  
                            //  perceptionRegionConfidence ConfidenceLevel                      OPTIONAL  
                            //  shadowingApplies           SensorInformation_shadowingApplies     
                            //  ...
                        uint8_t* _ext_flag_3710 = (uint8_t*) buffer++;  // Write extension flag for SensorInformation
                        *_ext_flag_3710 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_8365 = (char*) buffer++;
                        *_tmp_8365 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007519\033[0m| Optional field perception_region_shape = " << *_tmp_8365;
                        char* _tmp_8366 = (char*) buffer++;
                        *_tmp_8366 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_confidence.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007520\033[0m| Optional field perception_region_confidence = " << *_tmp_8366;
                        
                        // Field:  type(Identifier1B) name(sensor_id) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007521\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_id.value) << 
                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_id.value);
                        }
                        
                        uint8_t* _tmp_8367 = (uint8_t*) buffer++;
                        *_tmp_8367 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_id.value; 
                        __aux64__ = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SensorType) name(sensor_type) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(31) span(32) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007522\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_type.value) << 
                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_type.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_type.value);
                        }
                        
                        uint8_t* _tmp_8368 = (uint8_t*) buffer++;
                        *_tmp_8368 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_type.value; 
                        __aux64__ = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_type.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 31) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].sensor_type.value' (" << __aux64__ << ") exceeds max allowable (31); message dropped.";
                            return -1;
                        }
                        
                        if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape.size() != 0) {
                            // Field:  type(Shape) name(perception_region_shape) extGroup(0)
                            // Choice
                               // #0  rectangular   RectangularShape
                               // #1  circular   CircularShape
                               // #2  polygonal   PolygonalShape
                               // #3  elliptical   EllipticalShape
                               // #4  radial   RadialShape
                               // #5  radialShapes   RadialShapes
                            uint8_t* _ext_flag_3713 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_3713 = 0; 
                            
                            uint8_t* _choice_279 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                                *_choice_279 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007523\033[0m| Choice selection: 0";
                            
                                    // RectangularShape  SEQUENCE
                                        //  centerPoint CartesianPosition3d   OPTIONAL  
                                        //  semiLength  StandardLength12b       
                                        //  semiBreadth StandardLength12b       
                                        //  orientation Wgs84AngleValue       OPTIONAL  
                                        //  height      StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_8369 = (char*) buffer++;
                                    *_tmp_8369 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007524\033[0m| Optional field center_point = " << *_tmp_8369;
                                    char* _tmp_8370 = (char*) buffer++;
                                    *_tmp_8370 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007525\033[0m| Optional field orientation = " << *_tmp_8370;
                                    char* _tmp_8371 = (char*) buffer++;
                                    *_tmp_8371 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007526\033[0m| Optional field height = " << *_tmp_8371;
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_8372 = (char*) buffer++;
                                            *_tmp_8372 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007527\033[0m| Optional field z_coordinate = " << *_tmp_8372;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007528\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_8374 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                            _tmp_8374 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8374);
                                            _tmp_8374 -= -32768;
                                            uint16_t* _tmp_8373 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8373 = static_cast<uint16_t>(_tmp_8374);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007529\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_8376 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                            _tmp_8376 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8376);
                                            _tmp_8376 -= -32768;
                                            uint16_t* _tmp_8375 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8375 = static_cast<uint16_t>(_tmp_8376);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007530\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_8378 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                _tmp_8378 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8378);
                                                _tmp_8378 -= -32768;
                                                uint16_t* _tmp_8377 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8377 = static_cast<uint16_t>(_tmp_8378);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007531\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_length.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_length.value;
                                    }
                                    
                                    float _tmp_8380 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_length.value;
                                    _tmp_8380 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8380);
                                    uint16_t* _tmp_8379 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8379 = static_cast<uint16_t>(_tmp_8380);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007532\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_breadth.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_breadth.value;
                                    }
                                    
                                    float _tmp_8382 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_breadth.value;
                                    _tmp_8382 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8382);
                                    uint16_t* _tmp_8381 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8381 = static_cast<uint16_t>(_tmp_8382);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].orientation.size() != 0) {
                                        // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007533\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].orientation[0].value) << 
                                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].orientation[0].value;
                                        }
                                        
                                        float _tmp_8384 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].orientation[0].value;
                                        _tmp_8384 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8384);
                                        uint16_t* _tmp_8383 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8383 = static_cast<uint16_t>(_tmp_8384);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007534\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].height[0].value;
                                        }
                                        
                                        float _tmp_8386 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].height[0].value;
                                        _tmp_8386 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8386);
                                        uint16_t* _tmp_8385 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8385 = static_cast<uint16_t>(_tmp_8386);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                            {
                                *_choice_279 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007535\033[0m| Choice selection: 1";
                            
                                    // CircularShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                        //  radius              StandardLength12b       
                                        //  height              StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_8387 = (char*) buffer++;
                                    *_tmp_8387 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007536\033[0m| Optional field shape_reference_point = " << *_tmp_8387;
                                    char* _tmp_8388 = (char*) buffer++;
                                    *_tmp_8388 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007537\033[0m| Optional field height = " << *_tmp_8388;
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_8389 = (char*) buffer++;
                                            *_tmp_8389 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007538\033[0m| Optional field z_coordinate = " << *_tmp_8389;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007539\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_8391 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_8391 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8391);
                                            _tmp_8391 -= -32768;
                                            uint16_t* _tmp_8390 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8390 = static_cast<uint16_t>(_tmp_8391);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007540\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_8393 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_8393 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8393);
                                            _tmp_8393 -= -32768;
                                            uint16_t* _tmp_8392 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8392 = static_cast<uint16_t>(_tmp_8393);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007541\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_8395 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_8395 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8395);
                                                _tmp_8395 -= -32768;
                                                uint16_t* _tmp_8394 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8394 = static_cast<uint16_t>(_tmp_8395);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007542\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].radius.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].radius.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].radius.value;
                                    }
                                    
                                    float _tmp_8397 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].radius.value;
                                    _tmp_8397 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8397);
                                    uint16_t* _tmp_8396 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8396 = static_cast<uint16_t>(_tmp_8397);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007543\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].height[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].height[0].value;
                                        }
                                        
                                        float _tmp_8399 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].height[0].value;
                                        _tmp_8399 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8399);
                                        uint16_t* _tmp_8398 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8398 = static_cast<uint16_t>(_tmp_8399);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                            {
                                *_choice_279 = 2;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007544\033[0m| Choice selection: 2";
                            
                                    // PolygonalShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                        //  polygon             SequenceOfCartesianPosition3d     
                                        //  height              StandardLength12b               OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_8400 = (char*) buffer++;
                                    *_tmp_8400 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007545\033[0m| Optional field shape_reference_point = " << *_tmp_8400;
                                    char* _tmp_8401 = (char*) buffer++;
                                    *_tmp_8401 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007546\033[0m| Optional field height = " << *_tmp_8401;
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_8402 = (char*) buffer++;
                                            *_tmp_8402 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007547\033[0m| Optional field z_coordinate = " << *_tmp_8402;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007548\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_8404 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_8404 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8404);
                                            _tmp_8404 -= -32768;
                                            uint16_t* _tmp_8403 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8403 = static_cast<uint16_t>(_tmp_8404);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007549\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_8406 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_8406 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8406);
                                            _tmp_8406 -= -32768;
                                            uint16_t* _tmp_8405 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8405 = static_cast<uint16_t>(_tmp_8406);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007550\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_8408 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_8408 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8408);
                                                _tmp_8408 -= -32768;
                                                uint16_t* _tmp_8407 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8407 = static_cast<uint16_t>(_tmp_8408);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_3729 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.
                                    *_ext_flag_3729 = 0; 
                                    
                                    __aux64__ = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_8409 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_8409 = __aux64__ - 1;
                                    
                                    int __ifn = __aux64__;
                                    for(int n = 0; n < __ifn; n++) { 
                                        
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_8410 = (char*) buffer++;
                                            *_tmp_8410 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007552\033[0m| Optional field z_coordinate = " << *_tmp_8410;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007553\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].x_coordinate.value;
                                            }
                                            
                                            float _tmp_8412 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].x_coordinate.value;
                                            _tmp_8412 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8412);
                                            _tmp_8412 -= -32768;
                                            uint16_t* _tmp_8411 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8411 = static_cast<uint16_t>(_tmp_8412);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007554\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].y_coordinate.value;
                                            }
                                            
                                            float _tmp_8414 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].y_coordinate.value;
                                            _tmp_8414 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8414);
                                            _tmp_8414 -= -32768;
                                            uint16_t* _tmp_8413 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8413 = static_cast<uint16_t>(_tmp_8414);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007555\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_8416 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].z_coordinate[0].value;
                                                _tmp_8416 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8416);
                                                _tmp_8416 -= -32768;
                                                uint16_t* _tmp_8415 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8415 = static_cast<uint16_t>(_tmp_8416);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].polygon.elements[n].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007556\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].height[0].value;
                                        }
                                        
                                        float _tmp_8418 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].height[0].value;
                                        _tmp_8418 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8418);
                                        uint16_t* _tmp_8417 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8417 = static_cast<uint16_t>(_tmp_8418);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                            {
                                *_choice_279 = 3;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007557\033[0m| Choice selection: 3";
                            
                                    // EllipticalShape  SEQUENCE
                                        //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                        //  semiMajorAxisLength StandardLength12b       
                                        //  semiMinorAxisLength StandardLength12b       
                                        //  orientation         Wgs84AngleValue       OPTIONAL  
                                        //  height              StandardLength12b     OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_8419 = (char*) buffer++;
                                    *_tmp_8419 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007558\033[0m| Optional field shape_reference_point = " << *_tmp_8419;
                                    char* _tmp_8420 = (char*) buffer++;
                                    *_tmp_8420 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007559\033[0m| Optional field orientation = " << *_tmp_8420;
                                    char* _tmp_8421 = (char*) buffer++;
                                    *_tmp_8421 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].height.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007560\033[0m| Optional field height = " << *_tmp_8421;
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_8422 = (char*) buffer++;
                                            *_tmp_8422 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007561\033[0m| Optional field z_coordinate = " << *_tmp_8422;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007562\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_8424 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_8424 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8424);
                                            _tmp_8424 -= -32768;
                                            uint16_t* _tmp_8423 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8423 = static_cast<uint16_t>(_tmp_8424);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007563\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_8426 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_8426 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8426);
                                            _tmp_8426 -= -32768;
                                            uint16_t* _tmp_8425 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8425 = static_cast<uint16_t>(_tmp_8426);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007564\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_8428 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_8428 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8428);
                                                _tmp_8428 -= -32768;
                                                uint16_t* _tmp_8427 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8427 = static_cast<uint16_t>(_tmp_8428);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007565\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_major_axis_length.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_major_axis_length.value;
                                    }
                                    
                                    float _tmp_8430 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_major_axis_length.value;
                                    _tmp_8430 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8430);
                                    uint16_t* _tmp_8429 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8429 = static_cast<uint16_t>(_tmp_8430);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007566\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value;
                                    }
                                    
                                    float _tmp_8432 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value;
                                    _tmp_8432 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8432);
                                    uint16_t* _tmp_8431 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8431 = static_cast<uint16_t>(_tmp_8432);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].orientation.size() != 0) {
                                        // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007567\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].orientation[0].value) << 
                                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].orientation[0].value;
                                        }
                                        
                                        float _tmp_8434 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].orientation[0].value;
                                        _tmp_8434 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8434);
                                        uint16_t* _tmp_8433 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8433 = static_cast<uint16_t>(_tmp_8434);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].height.size() != 0) {
                                        // Field:  type(StandardLength12b) name(height) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007568\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].height[0].value) << 
                                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].height[0].value;
                                        }
                                        
                                        float _tmp_8436 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].height[0].value;
                                        _tmp_8436 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8436);
                                        uint16_t* _tmp_8435 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8435 = static_cast<uint16_t>(_tmp_8436);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                            {
                                *_choice_279 = 4;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007569\033[0m| Choice selection: 4";
                            
                                    // RadialShape  SEQUENCE
                                        //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                        //  range                                 StandardLength12b       
                                        //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                        //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                        //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                        //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_8437 = (char*) buffer++;
                                    *_tmp_8437 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007570\033[0m| Optional field shape_reference_point = " << *_tmp_8437;
                                    char* _tmp_8438 = (char*) buffer++;
                                    *_tmp_8438 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007571\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_8438;
                                    char* _tmp_8439 = (char*) buffer++;
                                    *_tmp_8439 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007572\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_8439;
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point.size() != 0) {
                                        // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                            // CartesianPosition3d  SEQUENCE
                                                //  xCoordinate CartesianCoordinate     
                                                //  yCoordinate CartesianCoordinate     
                                                //  zCoordinate CartesianCoordinate   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_8440 = (char*) buffer++;
                                            *_tmp_8440 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007573\033[0m| Optional field z_coordinate = " << *_tmp_8440;
                                            
                                            // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007574\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                            }
                                            
                                            float _tmp_8442 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                            _tmp_8442 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8442);
                                            _tmp_8442 -= -32768;
                                            uint16_t* _tmp_8441 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8441 = static_cast<uint16_t>(_tmp_8442);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007575\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                            }
                                            
                                            float _tmp_8444 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                            _tmp_8444 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8444);
                                            _tmp_8444 -= -32768;
                                            uint16_t* _tmp_8443 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8443 = static_cast<uint16_t>(_tmp_8444);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007576\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                 " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                }
                                                
                                                float _tmp_8446 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                _tmp_8446 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8446);
                                                _tmp_8446 -= -32768;
                                                uint16_t* _tmp_8445 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8445 = static_cast<uint16_t>(_tmp_8446);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                    return -1;
                                                }
                                            }
                                    }
                                    
                                    // Field:  type(StandardLength12b) name(range) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007577\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].range.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].range.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].range.value;
                                    }
                                    
                                    float _tmp_8448 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].range.value;
                                    _tmp_8448 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8448);
                                    uint16_t* _tmp_8447 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8447 = static_cast<uint16_t>(_tmp_8448);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007578\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                    }
                                    
                                    float _tmp_8450 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                    _tmp_8450 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8450);
                                    uint16_t* _tmp_8449 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8449 = static_cast<uint16_t>(_tmp_8450);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007579\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                    }
                                    
                                    float _tmp_8452 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                    _tmp_8452 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8452);
                                    uint16_t* _tmp_8451 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8451 = static_cast<uint16_t>(_tmp_8452);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_start.size() != 0) {
                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007580\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value) << 
                                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                        }
                                        
                                        float _tmp_8454 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                        _tmp_8454 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8454);
                                        uint16_t* _tmp_8453 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8453 = static_cast<uint16_t>(_tmp_8454);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_end.size() != 0) {
                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007581\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value) << 
                                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                        }
                                        
                                        float _tmp_8456 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                        _tmp_8456 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8456);
                                        uint16_t* _tmp_8455 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8455 = static_cast<uint16_t>(_tmp_8456);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                    }
                            
                            }
                            else if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                            {
                                *_choice_279 = 5;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007582\033[0m| Choice selection: 5";
                            
                                    // RadialShapes  SEQUENCE
                                        //  refPointId       Identifier1B                 
                                        //  xCoordinate      CartesianCoordinateSmall     
                                        //  yCoordinate      CartesianCoordinateSmall     
                                        //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                        //  radialShapesList RadialShapesList             
                                    // Optional fields bytemap
                                    char* _tmp_8457 = (char*) buffer++;
                                    *_tmp_8457 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007583\033[0m| Optional field z_coordinate = " << *_tmp_8457;
                                    
                                    // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007584\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].ref_point_id.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].ref_point_id.value);
                                    }
                                    
                                    uint8_t* _tmp_8458 = (uint8_t*) buffer++;
                                    *_tmp_8458 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].ref_point_id.value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].ref_point_id.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007585\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].x_coordinate.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].x_coordinate.value;
                                    }
                                    
                                    float _tmp_8460 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].x_coordinate.value;
                                    _tmp_8460 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8460);
                                    _tmp_8460 -= -3094;
                                    uint16_t* _tmp_8459 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8459 = static_cast<uint16_t>(_tmp_8460);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007586\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].y_coordinate.value) << 
                                                     " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].y_coordinate.value;
                                    }
                                    
                                    float _tmp_8462 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].y_coordinate.value;
                                    _tmp_8462 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8462);
                                    _tmp_8462 -= -3094;
                                    uint16_t* _tmp_8461 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8461 = static_cast<uint16_t>(_tmp_8462);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].z_coordinate.size() != 0) {
                                        // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007587\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value) << 
                                                         " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value;
                                        }
                                        
                                        float _tmp_8464 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value;
                                        _tmp_8464 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8464);
                                        _tmp_8464 -= -3094;
                                        uint16_t* _tmp_8463 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8463 = static_cast<uint16_t>(_tmp_8464);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_3753 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.
                                    *_ext_flag_3753 = 0; 
                                    
                                    __aux64__ = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_8465 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_8465 = __aux64__ - 1;
                                    
                                    int __ifo = __aux64__;
                                    for(int o = 0; o < __ifo; o++) { 
                                        
                                            // RadialShapeDetails  SEQUENCE
                                                //  range                       StandardLength12b       
                                                //  horizontalOpeningAngleStart CartesianAngleValue     
                                                //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                                //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                                //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                            // Optional fields bytemap
                                            char* _tmp_8466 = (char*) buffer++;
                                            *_tmp_8466 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007589\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_8466;
                                            char* _tmp_8467 = (char*) buffer++;
                                            *_tmp_8467 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007590\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_8467;
                                            
                                            // Field:  type(StandardLength12b) name(range) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007591\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].range.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].range.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].range.value;
                                            }
                                            
                                            float _tmp_8469 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].range.value;
                                            _tmp_8469 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8469);
                                            uint16_t* _tmp_8468 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8468 = static_cast<uint16_t>(_tmp_8469);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007592\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_start.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_start.value;
                                            }
                                            
                                            float _tmp_8471 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_start.value;
                                            _tmp_8471 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8471);
                                            uint16_t* _tmp_8470 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8470 = static_cast<uint16_t>(_tmp_8471);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007593\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_end.value) << 
                                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_end.value;
                                            }
                                            
                                            float _tmp_8473 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_end.value;
                                            _tmp_8473 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8473);
                                            uint16_t* _tmp_8472 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8472 = static_cast<uint16_t>(_tmp_8473);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_start.size() != 0) {
                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007594\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_start[0].value) << 
                                                                 " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_start[0].value;
                                                }
                                                
                                                float _tmp_8475 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_start[0].value;
                                                _tmp_8475 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8475);
                                                uint16_t* _tmp_8474 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8474 = static_cast<uint16_t>(_tmp_8475);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_end.size() != 0) {
                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007595\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_end[0].value) << 
                                                                 " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_end[0].value;
                                                }
                                                
                                                float _tmp_8477 = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_end[0].value;
                                                _tmp_8477 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8477);
                                                uint16_t* _tmp_8476 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8476 = static_cast<uint16_t>(_tmp_8477);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0].radial_shapes[0].radial_shapes_list.elements[o].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                    }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_279) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_shape[0]'; message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_confidence.size() != 0) {
                            // Field:  type(ConfidenceLevel) name(perception_region_confidence) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(101) span(101) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007596\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_confidence[0].value) << 
                                             " payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_confidence[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_confidence[0].value);
                            }
                            
                            uint8_t* _tmp_8478 = (uint8_t*) buffer++;
                            __aux64__ = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_confidence[0].value - 1;
                            *_tmp_8478 = __aux64__;
                            __aux64__ = ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_confidence[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_confidence[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].perception_region_confidence[0].value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(SensorInformation_shadowingApplies) name(shadowing_applies) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_8479 = (uint8_t*)buffer++;
                        *_tmp_8479 = (ros->payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].shadowing_applies.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007597\033[0m| payload.cpm_containers.elements[k].sensor_information_container[0].elements[m].shadowing_applies: " << (*_tmp_8479);
                        
                        if(*_ext_flag_3710) {
                        }
                }
            
            }
            else if(ros->payload.cpm_containers.elements[k].perception_region_container.size() != 0)  // CHOICE 3  fieldType(WrappedCpmContainer) 
            {
                *_choice_277 = 3;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m007598\033[0m| Choice selection: 3";
            
                // SequenceOf
                // Data Type UInt16
                // SEQUENCE_OF  min(1) max(256) span(256) ext(true)
                uint8_t* _ext_flag_3760 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perception_region_container[0].
                *_ext_flag_3760 = 0; 
                
                __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements.size();
                if(__aux64__ > 256) __aux64__ = 256;
                uint16_t* _tmp_8481 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_8481 = __aux64__ - 1;
                
                int __ifp = __aux64__;
                for(int p = 0; p < __ifp; p++) { 
                    
                        // PerceptionRegion  SEQUENCE
                            //  measurementDeltaTime       DeltaTimeMilliSecondSigned            
                            //  perceptionRegionConfidence ConfidenceLevel                       
                            //  perceptionRegionShape      Shape                                 
                            //  shadowingApplies           PerceptionRegion_shadowingApplies     
                            //  sensorIdList               SequenceOfIdentifier1B              OPTIONAL  
                            //  numberOfPerceivedObjects   CardinalNumber1B                    OPTIONAL  
                            //  perceivedObjectIds         PerceivedObjectIds                  OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3761 = (uint8_t*) buffer++;  // Write extension flag for PerceptionRegion
                        *_ext_flag_3761 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_8482 = (char*) buffer++;
                        *_tmp_8482 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007600\033[0m| Optional field sensor_id_list = " << *_tmp_8482;
                        char* _tmp_8483 = (char*) buffer++;
                        *_tmp_8483 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].number_of_perceived_objects.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007601\033[0m| Optional field number_of_perceived_objects = " << *_tmp_8483;
                        char* _tmp_8484 = (char*) buffer++;
                        *_tmp_8484 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007602\033[0m| Optional field perceived_object_ids = " << *_tmp_8484;
                        
                        // Field:  type(DeltaTimeMilliSecondSigned) name(measurement_delta_time) extGroup(0)
                        // Real
                        
                        // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(1000.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007603\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].measurement_delta_time.value) << 
                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].measurement_delta_time.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].measurement_delta_time.value;
                        }
                        
                        float _tmp_8486 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].measurement_delta_time.value;
                        _tmp_8486 *= 1000.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_8486);
                        _tmp_8486 -= -2048;
                        uint16_t* _tmp_8485 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_8485 = static_cast<uint16_t>(_tmp_8486);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].measurement_delta_time.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].measurement_delta_time.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(ConfidenceLevel) name(perception_region_confidence) extGroup(0)
                        // Integer
                        
                        // UINT8  min(1) max(101) span(101) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m007604\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_confidence.value) << 
                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_confidence.value);
                        }
                        
                        uint8_t* _tmp_8487 = (uint8_t*) buffer++;
                        __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_confidence.value - 1;
                        *_tmp_8487 = __aux64__;
                        __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_confidence.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 101) {
                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_confidence.value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Shape) name(perception_region_shape) extGroup(0)
                        // Choice
                           // #0  rectangular   RectangularShape
                           // #1  circular   CircularShape
                           // #2  polygonal   PolygonalShape
                           // #3  elliptical   EllipticalShape
                           // #4  radial   RadialShape
                           // #5  radialShapes   RadialShapes
                        uint8_t* _ext_flag_3764 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_3764 = 0; 
                        
                        uint8_t* _choice_280 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_280 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007605\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  centerPoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength  StandardLength12b       
                                    //  semiBreadth StandardLength12b       
                                    //  orientation Wgs84AngleValue       OPTIONAL  
                                    //  height      StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_8488 = (char*) buffer++;
                                *_tmp_8488 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007606\033[0m| Optional field center_point = " << *_tmp_8488;
                                char* _tmp_8489 = (char*) buffer++;
                                *_tmp_8489 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007607\033[0m| Optional field orientation = " << *_tmp_8489;
                                char* _tmp_8490 = (char*) buffer++;
                                *_tmp_8490 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007608\033[0m| Optional field height = " << *_tmp_8490;
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8491 = (char*) buffer++;
                                        *_tmp_8491 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007609\033[0m| Optional field z_coordinate = " << *_tmp_8491;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007610\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_8493 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value;
                                        _tmp_8493 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8493);
                                        _tmp_8493 -= -32768;
                                        uint16_t* _tmp_8492 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8492 = static_cast<uint16_t>(_tmp_8493);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007611\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_8495 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value;
                                        _tmp_8495 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8495);
                                        _tmp_8495 -= -32768;
                                        uint16_t* _tmp_8494 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8494 = static_cast<uint16_t>(_tmp_8495);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007612\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_8497 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value;
                                            _tmp_8497 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8497);
                                            _tmp_8497 -= -32768;
                                            uint16_t* _tmp_8496 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8496 = static_cast<uint16_t>(_tmp_8497);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007613\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_length.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_8499 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_length.value;
                                _tmp_8499 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8499);
                                uint16_t* _tmp_8498 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8498 = static_cast<uint16_t>(_tmp_8499);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007614\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_breadth.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_8501 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_breadth.value;
                                _tmp_8501 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8501);
                                uint16_t* _tmp_8500 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8500 = static_cast<uint16_t>(_tmp_8501);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].orientation.size() != 0) {
                                    // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007615\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].orientation[0].value) << 
                                                     " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_8503 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].orientation[0].value;
                                    _tmp_8503 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8503);
                                    uint16_t* _tmp_8502 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8502 = static_cast<uint16_t>(_tmp_8503);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007616\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_8505 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].height[0].value;
                                    _tmp_8505 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8505);
                                    uint16_t* _tmp_8504 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8504 = static_cast<uint16_t>(_tmp_8505);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_280 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007617\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_8506 = (char*) buffer++;
                                *_tmp_8506 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007618\033[0m| Optional field shape_reference_point = " << *_tmp_8506;
                                char* _tmp_8507 = (char*) buffer++;
                                *_tmp_8507 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007619\033[0m| Optional field height = " << *_tmp_8507;
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8508 = (char*) buffer++;
                                        *_tmp_8508 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007620\033[0m| Optional field z_coordinate = " << *_tmp_8508;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007621\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_8510 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_8510 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8510);
                                        _tmp_8510 -= -32768;
                                        uint16_t* _tmp_8509 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8509 = static_cast<uint16_t>(_tmp_8510);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007622\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_8512 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_8512 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8512);
                                        _tmp_8512 -= -32768;
                                        uint16_t* _tmp_8511 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8511 = static_cast<uint16_t>(_tmp_8512);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007623\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_8514 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_8514 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8514);
                                            _tmp_8514 -= -32768;
                                            uint16_t* _tmp_8513 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8513 = static_cast<uint16_t>(_tmp_8514);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007624\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].radius.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].radius.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].radius.value;
                                }
                                
                                float _tmp_8516 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].radius.value;
                                _tmp_8516 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8516);
                                uint16_t* _tmp_8515 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8515 = static_cast<uint16_t>(_tmp_8516);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007625\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].height[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_8518 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].height[0].value;
                                    _tmp_8518 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8518);
                                    uint16_t* _tmp_8517 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8517 = static_cast<uint16_t>(_tmp_8518);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_280 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007626\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_8519 = (char*) buffer++;
                                *_tmp_8519 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007627\033[0m| Optional field shape_reference_point = " << *_tmp_8519;
                                char* _tmp_8520 = (char*) buffer++;
                                *_tmp_8520 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007628\033[0m| Optional field height = " << *_tmp_8520;
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8521 = (char*) buffer++;
                                        *_tmp_8521 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007629\033[0m| Optional field z_coordinate = " << *_tmp_8521;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007630\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_8523 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_8523 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8523);
                                        _tmp_8523 -= -32768;
                                        uint16_t* _tmp_8522 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8522 = static_cast<uint16_t>(_tmp_8523);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007631\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_8525 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_8525 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8525);
                                        _tmp_8525 -= -32768;
                                        uint16_t* _tmp_8524 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8524 = static_cast<uint16_t>(_tmp_8525);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007632\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_8527 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_8527 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8527);
                                            _tmp_8527 -= -32768;
                                            uint16_t* _tmp_8526 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8526 = static_cast<uint16_t>(_tmp_8527);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_3780 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.
                                *_ext_flag_3780 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_8528 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_8528 = __aux64__ - 1;
                                
                                int __ifq = __aux64__;
                                for(int q = 0; q < __ifq; q++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8529 = (char*) buffer++;
                                        *_tmp_8529 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007634\033[0m| Optional field z_coordinate = " << *_tmp_8529;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007635\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].x_coordinate.value;
                                        }
                                        
                                        float _tmp_8531 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].x_coordinate.value;
                                        _tmp_8531 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8531);
                                        _tmp_8531 -= -32768;
                                        uint16_t* _tmp_8530 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8530 = static_cast<uint16_t>(_tmp_8531);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007636\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].y_coordinate.value;
                                        }
                                        
                                        float _tmp_8533 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].y_coordinate.value;
                                        _tmp_8533 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8533);
                                        _tmp_8533 -= -32768;
                                        uint16_t* _tmp_8532 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8532 = static_cast<uint16_t>(_tmp_8533);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007637\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_8535 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].z_coordinate[0].value;
                                            _tmp_8535 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8535);
                                            _tmp_8535 -= -32768;
                                            uint16_t* _tmp_8534 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8534 = static_cast<uint16_t>(_tmp_8535);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].polygon.elements[q].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007638\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_8537 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].height[0].value;
                                    _tmp_8537 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8537);
                                    uint16_t* _tmp_8536 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8536 = static_cast<uint16_t>(_tmp_8537);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_280 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007639\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         Wgs84AngleValue       OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_8538 = (char*) buffer++;
                                *_tmp_8538 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007640\033[0m| Optional field shape_reference_point = " << *_tmp_8538;
                                char* _tmp_8539 = (char*) buffer++;
                                *_tmp_8539 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007641\033[0m| Optional field orientation = " << *_tmp_8539;
                                char* _tmp_8540 = (char*) buffer++;
                                *_tmp_8540 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007642\033[0m| Optional field height = " << *_tmp_8540;
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8541 = (char*) buffer++;
                                        *_tmp_8541 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007643\033[0m| Optional field z_coordinate = " << *_tmp_8541;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007644\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_8543 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_8543 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8543);
                                        _tmp_8543 -= -32768;
                                        uint16_t* _tmp_8542 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8542 = static_cast<uint16_t>(_tmp_8543);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007645\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_8545 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_8545 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8545);
                                        _tmp_8545 -= -32768;
                                        uint16_t* _tmp_8544 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8544 = static_cast<uint16_t>(_tmp_8545);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007646\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_8547 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_8547 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8547);
                                            _tmp_8547 -= -32768;
                                            uint16_t* _tmp_8546 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8546 = static_cast<uint16_t>(_tmp_8547);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007647\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_major_axis_length.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_8549 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_major_axis_length.value;
                                _tmp_8549 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8549);
                                uint16_t* _tmp_8548 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8548 = static_cast<uint16_t>(_tmp_8549);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007648\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_minor_axis_length.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_8551 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_minor_axis_length.value;
                                _tmp_8551 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8551);
                                uint16_t* _tmp_8550 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8550 = static_cast<uint16_t>(_tmp_8551);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].orientation.size() != 0) {
                                    // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007649\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].orientation[0].value) << 
                                                     " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_8553 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].orientation[0].value;
                                    _tmp_8553 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8553);
                                    uint16_t* _tmp_8552 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8552 = static_cast<uint16_t>(_tmp_8553);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007650\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].height[0].value) << 
                                                     " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_8555 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].height[0].value;
                                    _tmp_8555 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8555);
                                    uint16_t* _tmp_8554 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8554 = static_cast<uint16_t>(_tmp_8555);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_280 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007651\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                    //  range                                 StandardLength12b       
                                    //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                    //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                    //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_8556 = (char*) buffer++;
                                *_tmp_8556 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007652\033[0m| Optional field shape_reference_point = " << *_tmp_8556;
                                char* _tmp_8557 = (char*) buffer++;
                                *_tmp_8557 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007653\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_8557;
                                char* _tmp_8558 = (char*) buffer++;
                                *_tmp_8558 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007654\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_8558;
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8559 = (char*) buffer++;
                                        *_tmp_8559 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007655\033[0m| Optional field z_coordinate = " << *_tmp_8559;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007656\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_8561 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_8561 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8561);
                                        _tmp_8561 -= -32768;
                                        uint16_t* _tmp_8560 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8560 = static_cast<uint16_t>(_tmp_8561);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007657\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_8563 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_8563 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8563);
                                        _tmp_8563 -= -32768;
                                        uint16_t* _tmp_8562 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8562 = static_cast<uint16_t>(_tmp_8563);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007658\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_8565 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_8565 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8565);
                                            _tmp_8565 -= -32768;
                                            uint16_t* _tmp_8564 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8564 = static_cast<uint16_t>(_tmp_8565);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007659\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].range.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].range.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].range.value;
                                }
                                
                                float _tmp_8567 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].range.value;
                                _tmp_8567 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8567);
                                uint16_t* _tmp_8566 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8566 = static_cast<uint16_t>(_tmp_8567);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007660\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_8569 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value;
                                _tmp_8569 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8569);
                                uint16_t* _tmp_8568 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8568 = static_cast<uint16_t>(_tmp_8569);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007661\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_8571 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value;
                                _tmp_8571 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8571);
                                uint16_t* _tmp_8570 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8570 = static_cast<uint16_t>(_tmp_8571);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007662\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_start[0].value) << 
                                                     " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_8573 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_8573 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8573);
                                    uint16_t* _tmp_8572 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8572 = static_cast<uint16_t>(_tmp_8573);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007663\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_end[0].value) << 
                                                     " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_8575 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_8575 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8575);
                                    uint16_t* _tmp_8574 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8574 = static_cast<uint16_t>(_tmp_8575);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_280 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007664\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_8576 = (char*) buffer++;
                                *_tmp_8576 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007665\033[0m| Optional field z_coordinate = " << *_tmp_8576;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007666\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].ref_point_id.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_8577 = (uint8_t*) buffer++;
                                *_tmp_8577 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007667\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].x_coordinate.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_8579 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].x_coordinate.value;
                                _tmp_8579 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8579);
                                _tmp_8579 -= -3094;
                                uint16_t* _tmp_8578 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8578 = static_cast<uint16_t>(_tmp_8579);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007668\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].y_coordinate.value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_8581 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].y_coordinate.value;
                                _tmp_8581 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8581);
                                _tmp_8581 -= -3094;
                                uint16_t* _tmp_8580 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8580 = static_cast<uint16_t>(_tmp_8581);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007669\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].z_coordinate[0].value) << 
                                                     " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_8583 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].z_coordinate[0].value;
                                    _tmp_8583 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8583);
                                    _tmp_8583 -= -3094;
                                    uint16_t* _tmp_8582 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8582 = static_cast<uint16_t>(_tmp_8583);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_3804 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.
                                *_ext_flag_3804 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_8584 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_8584 = __aux64__ - 1;
                                
                                int __ifr = __aux64__;
                                for(int r = 0; r < __ifr; r++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8585 = (char*) buffer++;
                                        *_tmp_8585 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007671\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_8585;
                                        char* _tmp_8586 = (char*) buffer++;
                                        *_tmp_8586 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007672\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_8586;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007673\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].range.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].range.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].range.value;
                                        }
                                        
                                        float _tmp_8588 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].range.value;
                                        _tmp_8588 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8588);
                                        uint16_t* _tmp_8587 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8587 = static_cast<uint16_t>(_tmp_8588);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007674\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_start.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_8590 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_start.value;
                                        _tmp_8590 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8590);
                                        uint16_t* _tmp_8589 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8589 = static_cast<uint16_t>(_tmp_8590);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007675\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_end.value) << 
                                                         " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_8592 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_end.value;
                                        _tmp_8592 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8592);
                                        uint16_t* _tmp_8591 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8591 = static_cast<uint16_t>(_tmp_8592);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007676\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_start[0].value) << 
                                                             " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_8594 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_start[0].value;
                                            _tmp_8594 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8594);
                                            uint16_t* _tmp_8593 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8593 = static_cast<uint16_t>(_tmp_8594);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007677\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_end[0].value) << 
                                                             " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_8596 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_end[0].value;
                                            _tmp_8596 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8596);
                                            uint16_t* _tmp_8595 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8595 = static_cast<uint16_t>(_tmp_8596);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape.radial_shapes[0].radial_shapes_list.elements[r].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_280) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perception_region_shape'; message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(PerceptionRegion_shadowingApplies) name(shadowing_applies) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_8597 = (uint8_t*)buffer++;
                        *_tmp_8597 = (ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].shadowing_applies.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m007678\033[0m| payload.cpm_containers.elements[k].perception_region_container[0].elements[p].shadowing_applies: " << (*_tmp_8597);
                        
                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list.size() != 0) {
                            // Field:  type(SequenceOfIdentifier1B) name(sensor_id_list) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                            uint8_t* _ext_flag_3810 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list[0].
                            *_ext_flag_3810 = 0; 
                            
                            __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list[0].elements.size();
                            if(__aux64__ > 128) __aux64__ = 128;
                            uint16_t* _tmp_8598 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_8598 = __aux64__ - 1;
                            
                            int __ifs = __aux64__;
                            for(int s = 0; s < __ifs; s++) { 
                                
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007680\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list[0].elements[s].value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list[0].elements[s].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list[0].elements[s].value);
                                }
                                
                                uint8_t* _tmp_8599 = (uint8_t*) buffer++;
                                *_tmp_8599 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list[0].elements[s].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list[0].elements[s].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list[0].elements[s].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].sensor_id_list[0].elements[s].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].number_of_perceived_objects.size() != 0) {
                            // Field:  type(CardinalNumber1B) name(number_of_perceived_objects) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007681\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].number_of_perceived_objects[0].value) << 
                                             " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].number_of_perceived_objects[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].number_of_perceived_objects[0].value);
                            }
                            
                            uint8_t* _tmp_8600 = (uint8_t*) buffer++;
                            *_tmp_8600 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].number_of_perceived_objects[0].value; 
                            __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].number_of_perceived_objects[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].number_of_perceived_objects[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].number_of_perceived_objects[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids.size() != 0) {
                            // Field:  type(PerceivedObjectIds) name(perceived_object_ids) extGroup(0)
                            // SequenceOf
                            // Data Type UInt8
                            // SEQUENCE_OF  min(0) max(255) span(256) ext(true)
                            uint8_t* _ext_flag_3813 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids[0].
                            *_ext_flag_3813 = 0; 
                            
                            __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids[0].elements.size();
                            if(__aux64__ > 255) __aux64__ = 255;
                            uint16_t* _tmp_8601 = (uint16_t*)buffer;
                            buffer += 2;
                            *_tmp_8601 = __aux64__;
                            
                            int __ift = __aux64__;
                            for(int t = 0; t < __ift; t++) { 
                                
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007683\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids[0].elements[t].value) << 
                                                 " payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids[0].elements[t].value: " << ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids[0].elements[t].value;
                                }
                                
                                uint16_t* _tmp_8602 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8602 = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids[0].elements[t].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids[0].elements[t].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids[0].elements[t].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perception_region_container[0].elements[p].perceived_object_ids[0].elements[t].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                                
                            }
                        }
                        
                        if(*_ext_flag_3761) {
                        }
                }
            
            }
            else if(ros->payload.cpm_containers.elements[k].perceived_object_container.size() != 0)  // CHOICE 4  fieldType(WrappedCpmContainer) 
            {
                *_choice_277 = 4;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m007684\033[0m| Choice selection: 4";
            
                    // PerceivedObjectContainer  SEQUENCE
                        //  numberOfPerceivedObjects CardinalNumber1B     
                        //  perceivedObjects         PerceivedObjects     
                        //  ...
                    uint8_t* _ext_flag_3815 = (uint8_t*) buffer++;  // Write extension flag for PerceivedObjectContainer
                    *_ext_flag_3815 = 0;  
                    
                    // Optional fields bytemap
                    
                    // Field:  type(CardinalNumber1B) name(number_of_perceived_objects) extGroup(0)
                    // Integer
                    
                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m007685\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].number_of_perceived_objects.value) << 
                                     " payload.cpm_containers.elements[k].perceived_object_container[0].number_of_perceived_objects.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].number_of_perceived_objects.value);
                    }
                    
                    uint8_t* _tmp_8604 = (uint8_t*) buffer++;
                    *_tmp_8604 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].number_of_perceived_objects.value; 
                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].number_of_perceived_objects.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].number_of_perceived_objects.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].number_of_perceived_objects.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(PerceivedObjects) name(perceived_objects) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(0) max(255) span(256) ext(true)
                    uint8_t* _ext_flag_3817 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.
                    *_ext_flag_3817 = 0; 
                    
                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements.size();
                    if(__aux64__ > 255) __aux64__ = 255;
                    uint16_t* _tmp_8605 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_8605 = __aux64__;
                    
                    int __ifu = __aux64__;
                    for(int u = 0; u < __ifu; u++) { 
                        
                            // PerceivedObject  SEQUENCE
                                //  objectId                           Identifier2B                                           OPTIONAL  
                                //  measurementDeltaTime               DeltaTimeMilliSecondSigned                               
                                //  position                           CartesianPosition3dWithConfidence                        
                                //  velocity                           Velocity3dWithConfidence                               OPTIONAL  
                                //  acceleration                       Acceleration3dWithConfidence                           OPTIONAL  
                                //  angles                             EulerAnglesWithConfidence                              OPTIONAL  
                                //  zAngularVelocity                   CartesianAngularVelocityComponent                      OPTIONAL  
                                //  lowerTriangularCorrelationMatrices LowerTriangularPositiveSemidefiniteMatrices            OPTIONAL  
                                //  objectDimensionZ                   ObjectDimension                                        OPTIONAL  
                                //  objectDimensionY                   ObjectDimension                                        OPTIONAL  
                                //  objectDimensionX                   ObjectDimension                                        OPTIONAL  
                                //  objectAge                          PerceivedObject_DeltaTimeMilliSecondSigned_objectAge   OPTIONAL  
                                //  objectPerceptionQuality            ObjectPerceptionQuality                                OPTIONAL  
                                //  sensorIdList                       SequenceOfIdentifier1B                                 OPTIONAL  
                                //  classification                     ObjectClassDescription                                 OPTIONAL  
                                //  mapPosition                        MapPosition                                            OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_3818 = (uint8_t*) buffer++;  // Write extension flag for PerceivedObject
                            *_ext_flag_3818 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_8606 = (char*) buffer++;
                            *_tmp_8606 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_id.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007687\033[0m| Optional field object_id = " << *_tmp_8606;
                            char* _tmp_8607 = (char*) buffer++;
                            *_tmp_8607 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007688\033[0m| Optional field velocity = " << *_tmp_8607;
                            char* _tmp_8608 = (char*) buffer++;
                            *_tmp_8608 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007689\033[0m| Optional field acceleration = " << *_tmp_8608;
                            char* _tmp_8609 = (char*) buffer++;
                            *_tmp_8609 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007690\033[0m| Optional field angles = " << *_tmp_8609;
                            char* _tmp_8610 = (char*) buffer++;
                            *_tmp_8610 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007691\033[0m| Optional field z_angular_velocity = " << *_tmp_8610;
                            char* _tmp_8611 = (char*) buffer++;
                            *_tmp_8611 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007692\033[0m| Optional field lower_triangular_correlation_matrices = " << *_tmp_8611;
                            char* _tmp_8612 = (char*) buffer++;
                            *_tmp_8612 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007693\033[0m| Optional field object_dimension_z = " << *_tmp_8612;
                            char* _tmp_8613 = (char*) buffer++;
                            *_tmp_8613 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007694\033[0m| Optional field object_dimension_y = " << *_tmp_8613;
                            char* _tmp_8614 = (char*) buffer++;
                            *_tmp_8614 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007695\033[0m| Optional field object_dimension_x = " << *_tmp_8614;
                            char* _tmp_8615 = (char*) buffer++;
                            *_tmp_8615 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_age.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007696\033[0m| Optional field object_age = " << *_tmp_8615;
                            char* _tmp_8616 = (char*) buffer++;
                            *_tmp_8616 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_perception_quality.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007697\033[0m| Optional field object_perception_quality = " << *_tmp_8616;
                            char* _tmp_8617 = (char*) buffer++;
                            *_tmp_8617 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007698\033[0m| Optional field sensor_id_list = " << *_tmp_8617;
                            char* _tmp_8618 = (char*) buffer++;
                            *_tmp_8618 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007699\033[0m| Optional field classification = " << *_tmp_8618;
                            char* _tmp_8619 = (char*) buffer++;
                            *_tmp_8619 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m007700\033[0m| Optional field map_position = " << *_tmp_8619;
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_id.size() != 0) {
                                // Field:  type(Identifier2B) name(object_id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007701\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_id[0].value) << 
                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_id[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_id[0].value;
                                }
                                
                                uint16_t* _tmp_8620 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8620 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_id[0].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_id[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_id[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                            }
                            
                            // Field:  type(DeltaTimeMilliSecondSigned) name(measurement_delta_time) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-2048) max(2047) span(4096) scaleDivisor(1000.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m007702\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].measurement_delta_time.value) << 
                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].measurement_delta_time.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].measurement_delta_time.value;
                            }
                            
                            float _tmp_8622 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].measurement_delta_time.value;
                            _tmp_8622 *= 1000.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_8622);
                            _tmp_8622 -= -2048;
                            uint16_t* _tmp_8621 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_8621 = static_cast<uint16_t>(_tmp_8622);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -2048) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].measurement_delta_time.value' (" << __aux64__ << ") less than (-2048); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].measurement_delta_time.value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(CartesianPosition3dWithConfidence) name(position) extGroup(0)
                                // CartesianPosition3dWithConfidence  SEQUENCE
                                    //  xCoordinate CartesianCoordinateWithConfidence     
                                    //  yCoordinate CartesianCoordinateWithConfidence     
                                    //  zCoordinate CartesianCoordinateWithConfidence   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_8623 = (char*) buffer++;
                                *_tmp_8623 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m007703\033[0m| Optional field z_coordinate = " << *_tmp_8623;
                                
                                // Field:  type(CartesianCoordinateWithConfidence) name(x_coordinate) extGroup(0)
                                    // CartesianCoordinateWithConfidence  SEQUENCE
                                        //  value      CartesianCoordinateLarge     
                                        //  confidence CoordinateConfidence         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007704\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.value.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.value.value;
                                    }
                                    
                                    float _tmp_8625 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.value.value;
                                    _tmp_8625 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8625);
                                    _tmp_8625 -= -131072;
                                    uint32_t* _tmp_8624 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_8624 = static_cast<uint32_t>(_tmp_8625);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007705\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.confidence.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.confidence.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.confidence.value;
                                    }
                                    
                                    float _tmp_8627 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.confidence.value;
                                    _tmp_8627 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8627);
                                    _tmp_8627 -= 1;
                                    uint16_t* _tmp_8626 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8626 = static_cast<uint16_t>(_tmp_8627);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.x_coordinate.confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                        return -1;
                                    }
                                
                                // Field:  type(CartesianCoordinateWithConfidence) name(y_coordinate) extGroup(0)
                                    // CartesianCoordinateWithConfidence  SEQUENCE
                                        //  value      CartesianCoordinateLarge     
                                        //  confidence CoordinateConfidence         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007706\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.value.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.value.value;
                                    }
                                    
                                    float _tmp_8629 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.value.value;
                                    _tmp_8629 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8629);
                                    _tmp_8629 -= -131072;
                                    uint32_t* _tmp_8628 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_8628 = static_cast<uint32_t>(_tmp_8629);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007707\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.confidence.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.confidence.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.confidence.value;
                                    }
                                    
                                    float _tmp_8631 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.confidence.value;
                                    _tmp_8631 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8631);
                                    _tmp_8631 -= 1;
                                    uint16_t* _tmp_8630 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_8630 = static_cast<uint16_t>(_tmp_8631);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.y_coordinate.confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                        return -1;
                                    }
                                
                                if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateWithConfidence) name(z_coordinate) extGroup(0)
                                        // CartesianCoordinateWithConfidence  SEQUENCE
                                            //  value      CartesianCoordinateLarge     
                                            //  confidence CoordinateConfidence         
                                        // Optional fields bytemap
                                        
                                        // Field:  type(CartesianCoordinateLarge) name(value) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-131072) max(131071) span(262144) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007708\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].value.value) << 
                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].value.value;
                                        }
                                        
                                        float _tmp_8633 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].value.value;
                                        _tmp_8633 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8633);
                                        _tmp_8633 -= -131072;
                                        uint32_t* _tmp_8632 = (uint32_t*) buffer; buffer += 4;
                                        *_tmp_8632 = static_cast<uint32_t>(_tmp_8633);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -131072) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].value.value' (" << __aux64__ << ") less than (-131072); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 131071) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].value.value' (" << __aux64__ << ") exceeds max allowable (131071); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CoordinateConfidence) name(confidence) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(1) max(4096) span(4096) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007709\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].confidence.value) << 
                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].confidence.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].confidence.value;
                                        }
                                        
                                        float _tmp_8635 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].confidence.value;
                                        _tmp_8635 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8635);
                                        _tmp_8635 -= 1;
                                        uint16_t* _tmp_8634 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8634 = static_cast<uint16_t>(_tmp_8635);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4096) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].position.z_coordinate[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (4096); message dropped.";
                                            return -1;
                                        }
                                }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity.size() != 0) {
                                // Field:  type(Velocity3dWithConfidence) name(velocity) extGroup(0)
                                // Choice
                                   // #0  polarVelocity   VelocityPolarWithZ
                                   // #1  cartesianVelocity   VelocityCartesian
                                uint8_t* _choice_281 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity.size() != 0) {  // CHOICE 0  fieldType(Velocity3dWithConfidence) 
                                    *_choice_281 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007710\033[0m| Choice selection: 0";
                                
                                        // VelocityPolarWithZ  SEQUENCE
                                            //  velocityMagnitude Speed                 
                                            //  velocityDirection CartesianAngle        
                                            //  zVelocity         VelocityComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8636 = (char*) buffer++;
                                        *_tmp_8636 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007711\033[0m| Optional field z_velocity = " << *_tmp_8636;
                                        
                                        // Field:  type(Speed) name(velocity_magnitude) extGroup(0)
                                            // Speed  SEQUENCE
                                                //  speedValue      SpeedValue          
                                                //  speedConfidence SpeedConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(SpeedValue) name(speed_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007712\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value;
                                            }
                                            
                                            float _tmp_8638 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value;
                                            _tmp_8638 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8638);
                                            uint16_t* _tmp_8637 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8637 = static_cast<uint16_t>(_tmp_8638);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(speed_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007713\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value);
                                            }
                                            
                                            float _tmp_8640 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value;
                                            _tmp_8640 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8640);
                                            _tmp_8640 -= 1;
                                            uint8_t* _tmp_8639 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8639 = static_cast<uint8_t>(_tmp_8640);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_magnitude.speed_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        // Field:  type(CartesianAngle) name(velocity_direction) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007714\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.value.value;
                                            }
                                            
                                            float _tmp_8642 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.value.value;
                                            _tmp_8642 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8642);
                                            uint16_t* _tmp_8641 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8641 = static_cast<uint16_t>(_tmp_8642);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007715\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.confidence.value);
                                            }
                                            
                                            float _tmp_8644 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.confidence.value;
                                            _tmp_8644 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8644);
                                            _tmp_8644 -= 1;
                                            uint8_t* _tmp_8643 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8643 = static_cast<uint8_t>(_tmp_8644);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].velocity_direction.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity.size() != 0) {
                                            // Field:  type(VelocityComponent) name(z_velocity) extGroup(0)
                                                // VelocityComponent  SEQUENCE
                                                    //  value      VelocityComponentValue     
                                                    //  confidence SpeedConfidence            
                                                // Optional fields bytemap
                                                
                                                // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007716\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].value.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].value.value;
                                                }
                                                
                                                float _tmp_8646 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].value.value;
                                                _tmp_8646 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8646);
                                                _tmp_8646 -= -16383;
                                                uint16_t* _tmp_8645 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8645 = static_cast<uint16_t>(_tmp_8646);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007717\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].confidence.value);
                                                }
                                                
                                                float _tmp_8648 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].confidence.value;
                                                _tmp_8648 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8648);
                                                _tmp_8648 -= 1;
                                                uint8_t* _tmp_8647 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_8647 = static_cast<uint8_t>(_tmp_8648);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].polar_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity.size() != 0)  // CHOICE 1  fieldType(Velocity3dWithConfidence) 
                                {
                                    *_choice_281 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007718\033[0m| Choice selection: 1";
                                
                                        // VelocityCartesian  SEQUENCE
                                            //  xVelocity  VelocityComponent     
                                            //  yVelocity  VelocityComponent     
                                            //  zVelocity  VelocityComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8649 = (char*) buffer++;
                                        *_tmp_8649 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007719\033[0m| Optional field z_velocity = " << *_tmp_8649;
                                        
                                        // Field:  type(VelocityComponent) name(x_velocity) extGroup(0)
                                            // VelocityComponent  SEQUENCE
                                                //  value      VelocityComponentValue     
                                                //  confidence SpeedConfidence            
                                            // Optional fields bytemap
                                            
                                            // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007720\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.value.value;
                                            }
                                            
                                            float _tmp_8651 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.value.value;
                                            _tmp_8651 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8651);
                                            _tmp_8651 -= -16383;
                                            uint16_t* _tmp_8650 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8650 = static_cast<uint16_t>(_tmp_8651);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007721\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.confidence.value);
                                            }
                                            
                                            float _tmp_8653 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.confidence.value;
                                            _tmp_8653 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8653);
                                            _tmp_8653 -= 1;
                                            uint8_t* _tmp_8652 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8652 = static_cast<uint8_t>(_tmp_8653);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].x_velocity.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        // Field:  type(VelocityComponent) name(y_velocity) extGroup(0)
                                            // VelocityComponent  SEQUENCE
                                                //  value      VelocityComponentValue     
                                                //  confidence SpeedConfidence            
                                            // Optional fields bytemap
                                            
                                            // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007722\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.value.value;
                                            }
                                            
                                            float _tmp_8655 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.value.value;
                                            _tmp_8655 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8655);
                                            _tmp_8655 -= -16383;
                                            uint16_t* _tmp_8654 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8654 = static_cast<uint16_t>(_tmp_8655);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007723\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.confidence.value);
                                            }
                                            
                                            float _tmp_8657 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.confidence.value;
                                            _tmp_8657 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8657);
                                            _tmp_8657 -= 1;
                                            uint8_t* _tmp_8656 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8656 = static_cast<uint8_t>(_tmp_8657);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].y_velocity.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity.size() != 0) {
                                            // Field:  type(VelocityComponent) name(z_velocity) extGroup(0)
                                                // VelocityComponent  SEQUENCE
                                                    //  value      VelocityComponentValue     
                                                    //  confidence SpeedConfidence            
                                                // Optional fields bytemap
                                                
                                                // Field:  type(VelocityComponentValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007724\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].value.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].value.value;
                                                }
                                                
                                                float _tmp_8659 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].value.value;
                                                _tmp_8659 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8659);
                                                _tmp_8659 -= -16383;
                                                uint16_t* _tmp_8658 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8658 = static_cast<uint16_t>(_tmp_8659);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(SpeedConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007725\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value);
                                                }
                                                
                                                float _tmp_8661 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value;
                                                _tmp_8661 *= 100.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8661);
                                                _tmp_8661 -= 1;
                                                uint8_t* _tmp_8660 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_8660 = static_cast<uint8_t>(_tmp_8661);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0].cartesian_velocity[0].z_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_281) << ") selected in CHOICE Velocity3dWithConfidence in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].velocity[0]'; message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration.size() != 0) {
                                // Field:  type(Acceleration3dWithConfidence) name(acceleration) extGroup(0)
                                // Choice
                                   // #0  polarAcceleration   AccelerationPolarWithZ
                                   // #1  cartesianAcceleration   AccelerationCartesian
                                uint8_t* _choice_282 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration.size() != 0) {  // CHOICE 0  fieldType(Acceleration3dWithConfidence) 
                                    *_choice_282 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007726\033[0m| Choice selection: 0";
                                
                                        // AccelerationPolarWithZ  SEQUENCE
                                            //  accelerationMagnitude AccelerationMagnitude     
                                            //  accelerationDirection CartesianAngle            
                                            //  zAcceleration         AccelerationComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8662 = (char*) buffer++;
                                        *_tmp_8662 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007727\033[0m| Optional field z_acceleration = " << *_tmp_8662;
                                        
                                        // Field:  type(AccelerationMagnitude) name(acceleration_magnitude) extGroup(0)
                                            // AccelerationMagnitude  SEQUENCE
                                                //  accelerationMagnitudeValue AccelerationMagnitudeValue     
                                                //  accelerationConfidence     AccelerationConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationMagnitudeValue) name(acceleration_magnitude_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(161) span(162) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007728\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value);
                                            }
                                            
                                            float _tmp_8664 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value;
                                            _tmp_8664 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8664);
                                            uint8_t* _tmp_8663 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8663 = static_cast<uint8_t>(_tmp_8664);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_magnitude_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(acceleration_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007729\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value);
                                            }
                                            
                                            float _tmp_8666 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value;
                                            _tmp_8666 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8666);
                                            uint8_t* _tmp_8665 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8665 = static_cast<uint8_t>(_tmp_8666);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_magnitude.acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                return -1;
                                            }
                                        
                                        // Field:  type(CartesianAngle) name(acceleration_direction) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007730\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.value.value;
                                            }
                                            
                                            float _tmp_8668 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.value.value;
                                            _tmp_8668 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8668);
                                            uint16_t* _tmp_8667 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8667 = static_cast<uint16_t>(_tmp_8668);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007731\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value);
                                            }
                                            
                                            float _tmp_8670 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value;
                                            _tmp_8670 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8670);
                                            _tmp_8670 -= 1;
                                            uint8_t* _tmp_8669 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8669 = static_cast<uint8_t>(_tmp_8670);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].acceleration_direction.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration.size() != 0) {
                                            // Field:  type(AccelerationComponent) name(z_acceleration) extGroup(0)
                                                // AccelerationComponent  SEQUENCE
                                                    //  value      AccelerationValue          
                                                    //  confidence AccelerationConfidence     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(AccelerationValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007732\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value;
                                                }
                                                
                                                float _tmp_8672 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value;
                                                _tmp_8672 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8672);
                                                _tmp_8672 -= -160;
                                                uint16_t* _tmp_8671 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8671 = static_cast<uint16_t>(_tmp_8672);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007733\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value);
                                                }
                                                
                                                float _tmp_8674 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value;
                                                _tmp_8674 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8674);
                                                uint8_t* _tmp_8673 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_8673 = static_cast<uint8_t>(_tmp_8674);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].polar_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration.size() != 0)  // CHOICE 1  fieldType(Acceleration3dWithConfidence) 
                                {
                                    *_choice_282 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007734\033[0m| Choice selection: 1";
                                
                                        // AccelerationCartesian  SEQUENCE
                                            //  xAcceleration AccelerationComponent     
                                            //  yAcceleration AccelerationComponent     
                                            //  zAcceleration AccelerationComponent   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_8675 = (char*) buffer++;
                                        *_tmp_8675 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007735\033[0m| Optional field z_acceleration = " << *_tmp_8675;
                                        
                                        // Field:  type(AccelerationComponent) name(x_acceleration) extGroup(0)
                                            // AccelerationComponent  SEQUENCE
                                                //  value      AccelerationValue          
                                                //  confidence AccelerationConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007736\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value;
                                            }
                                            
                                            float _tmp_8677 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value;
                                            _tmp_8677 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8677);
                                            _tmp_8677 -= -160;
                                            uint16_t* _tmp_8676 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8676 = static_cast<uint16_t>(_tmp_8677);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007737\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value);
                                            }
                                            
                                            float _tmp_8679 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value;
                                            _tmp_8679 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8679);
                                            uint8_t* _tmp_8678 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8678 = static_cast<uint8_t>(_tmp_8679);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].x_acceleration.confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                return -1;
                                            }
                                        
                                        // Field:  type(AccelerationComponent) name(y_acceleration) extGroup(0)
                                            // AccelerationComponent  SEQUENCE
                                                //  value      AccelerationValue          
                                                //  confidence AccelerationConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(AccelerationValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007738\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value;
                                            }
                                            
                                            float _tmp_8681 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value;
                                            _tmp_8681 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8681);
                                            _tmp_8681 -= -160;
                                            uint16_t* _tmp_8680 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8680 = static_cast<uint16_t>(_tmp_8681);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007739\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value);
                                            }
                                            
                                            float _tmp_8683 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value;
                                            _tmp_8683 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8683);
                                            uint8_t* _tmp_8682 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8682 = static_cast<uint8_t>(_tmp_8683);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].y_acceleration.confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                return -1;
                                            }
                                        
                                        if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration.size() != 0) {
                                            // Field:  type(AccelerationComponent) name(z_acceleration) extGroup(0)
                                                // AccelerationComponent  SEQUENCE
                                                    //  value      AccelerationValue          
                                                    //  confidence AccelerationConfidence     
                                                // Optional fields bytemap
                                                
                                                // Field:  type(AccelerationValue) name(value) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007740\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value;
                                                }
                                                
                                                float _tmp_8685 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value;
                                                _tmp_8685 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8685);
                                                _tmp_8685 -= -160;
                                                uint16_t* _tmp_8684 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8684 = static_cast<uint16_t>(_tmp_8685);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                    return -1;
                                                }
                                                
                                                // Field:  type(AccelerationConfidence) name(confidence) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007741\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value);
                                                }
                                                
                                                float _tmp_8687 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value;
                                                _tmp_8687 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_8687);
                                                uint8_t* _tmp_8686 = (uint8_t*) buffer; buffer += 1;
                                                *_tmp_8686 = static_cast<uint8_t>(_tmp_8687);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0].cartesian_acceleration[0].z_acceleration[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                                    return -1;
                                                }
                                        }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_282) << ") selected in CHOICE Acceleration3dWithConfidence in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].acceleration[0]'; message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles.size() != 0) {
                                // Field:  type(EulerAnglesWithConfidence) name(angles) extGroup(0)
                                    // EulerAnglesWithConfidence  SEQUENCE
                                        //  zAngle     CartesianAngle     
                                        //  yAngle     CartesianAngle   OPTIONAL  
                                        //  xAngle     CartesianAngle   OPTIONAL  
                                    // Optional fields bytemap
                                    char* _tmp_8688 = (char*) buffer++;
                                    *_tmp_8688 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007742\033[0m| Optional field y_angle = " << *_tmp_8688;
                                    char* _tmp_8689 = (char*) buffer++;
                                    *_tmp_8689 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007743\033[0m| Optional field x_angle = " << *_tmp_8689;
                                    
                                    // Field:  type(CartesianAngle) name(z_angle) extGroup(0)
                                        // CartesianAngle  SEQUENCE
                                            //  value      CartesianAngleValue     
                                            //  confidence AngleConfidence         
                                        // Optional fields bytemap
                                        
                                        // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007744\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.value.value) << 
                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.value.value;
                                        }
                                        
                                        float _tmp_8691 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.value.value;
                                        _tmp_8691 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8691);
                                        uint16_t* _tmp_8690 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_8690 = static_cast<uint16_t>(_tmp_8691);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007745\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.confidence.value) << 
                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.confidence.value);
                                        }
                                        
                                        float _tmp_8693 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.confidence.value;
                                        _tmp_8693 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_8693);
                                        _tmp_8693 -= 1;
                                        uint8_t* _tmp_8692 = (uint8_t*) buffer; buffer += 1;
                                        *_tmp_8692 = static_cast<uint8_t>(_tmp_8693);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].z_angle.confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                            return -1;
                                        }
                                    
                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle.size() != 0) {
                                        // Field:  type(CartesianAngle) name(y_angle) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007746\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].value.value;
                                            }
                                            
                                            float _tmp_8695 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].value.value;
                                            _tmp_8695 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8695);
                                            uint16_t* _tmp_8694 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8694 = static_cast<uint16_t>(_tmp_8695);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007747\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].confidence.value);
                                            }
                                            
                                            float _tmp_8697 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].confidence.value;
                                            _tmp_8697 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8697);
                                            _tmp_8697 -= 1;
                                            uint8_t* _tmp_8696 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8696 = static_cast<uint8_t>(_tmp_8697);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].y_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle.size() != 0) {
                                        // Field:  type(CartesianAngle) name(x_angle) extGroup(0)
                                            // CartesianAngle  SEQUENCE
                                                //  value      CartesianAngleValue     
                                                //  confidence AngleConfidence         
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007748\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].value.value;
                                            }
                                            
                                            float _tmp_8699 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].value.value;
                                            _tmp_8699 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8699);
                                            uint16_t* _tmp_8698 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8698 = static_cast<uint16_t>(_tmp_8699);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AngleConfidence) name(confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007749\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].confidence.value);
                                            }
                                            
                                            float _tmp_8701 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].confidence.value;
                                            _tmp_8701 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8701);
                                            _tmp_8701 -= 1;
                                            uint8_t* _tmp_8700 = (uint8_t*) buffer; buffer += 1;
                                            *_tmp_8700 = static_cast<uint8_t>(_tmp_8701);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].angles[0].x_angle[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                return -1;
                                            }
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity.size() != 0) {
                                // Field:  type(CartesianAngularVelocityComponent) name(z_angular_velocity) extGroup(0)
                                    // CartesianAngularVelocityComponent  SEQUENCE
                                        //  value      CartesianAngularVelocityComponentValue     
                                        //  confidence AngularSpeedConfidence                     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(CartesianAngularVelocityComponentValue) name(value) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-255) max(256) span(512) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007750\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].value.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].value.value;
                                    }
                                    
                                    uint16_t* _tmp_8702 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].value.value - -255;
                                    *_tmp_8702 = __aux64__;
                                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].value.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].value.value' (" << __aux64__ << ") less than (-255); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AngularSpeedConfidence) name(confidence) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(7) span(8) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007751\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].confidence.value);
                                    }
                                    
                                    uint8_t* _tmp_8703 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_8703 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].confidence.value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].confidence.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].z_angular_velocity[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices.size() != 0) {
                                // Field:  type(LowerTriangularPositiveSemidefiniteMatrices) name(lower_triangular_correlation_matrices) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(4) span(4) ext(false)
                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements.size();
                                if(__aux64__ > 4) __aux64__ = 4;
                                uint16_t* _tmp_8704 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_8704 = __aux64__ - 1;
                                
                                int __ifv = __aux64__;
                                for(int v = 0; v < __ifv; v++) { 
                                    
                                        // LowerTriangularPositiveSemidefiniteMatrix  SEQUENCE
                                            //  componentsIncludedIntheMatrix MatrixIncludedComponents                             
                                            //  matrix                        LowerTriangularPositiveSemidefiniteMatrixColumns     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(MatrixIncludedComponents) name(components_included_inthe_matrix) extGroup(0)
                                        // BitString
                                        // BIT_STRING  min(13) max(13) span(1)
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m007753\033[0m| payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.values.size());
                                        
                                        if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.values.size() < 13) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.value' " << (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.values.size()) << " is less than allowable (13); message dropped.";
                                            return -1;
                                        }
                                        if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.values.size() > 13) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.value' " << (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.values.size()) << " exceeds max allowable (13); message dropped.";
                                            return -1;
                                        }
                                        
                                        uint8_t* _ext_flag_3861 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.
                                        *_ext_flag_3861 = 0; 
                                        
                                        uint8_t* _tmp_8705 = (uint8_t*)buffer;
                                        __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.values.size();
                                        if(__aux64__ > 13) __aux64__ = 13;
                                        *_tmp_8705 = __aux64__ - 13;
                                        buffer += 1;
                                        
                                        int __ifw = __aux64__;
                                        for(int w = 0; w < __ifw; w++) {
                                            uint8_t* __b__ = (uint8_t*)buffer++;
                                            *__b__ = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].components_included_inthe_matrix.values[w]? 1: 0);
                                        }
                                        
                                        // Field:  type(LowerTriangularPositiveSemidefiniteMatrixColumns) name(matrix) extGroup(0)
                                        // SequenceOf
                                        // Data Type UInt8
                                        // SEQUENCE_OF  min(1) max(13) span(13) ext(false)
                                        __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements.size();
                                        if(__aux64__ > 13) __aux64__ = 13;
                                        uint16_t* _tmp_8706 = (uint16_t*)buffer;
                                        buffer += 2;
                                        *_tmp_8706 = __aux64__ - 1;
                                        
                                        int __ifx = __aux64__;
                                        for(int x = 0; x < __ifx; x++) { 
                                            
                                            // SequenceOf
                                            // Data Type UInt8
                                            // SEQUENCE_OF  min(1) max(13) span(13) ext(true)
                                            uint8_t* _ext_flag_3862 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements[x].
                                            *_ext_flag_3862 = 0; 
                                            
                                            __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements[x].elements.size();
                                            if(__aux64__ > 13) __aux64__ = 13;
                                            uint16_t* _tmp_8707 = (uint16_t*)buffer;
                                            buffer += 2;
                                            *_tmp_8707 = __aux64__ - 1;
                                            
                                            int __ify = __aux64__;
                                            for(int y = 0; y < __ify; y++) { 
                                                
                                                // Integer
                                                
                                                // INT8  min(-100) max(101) span(202) dataType(Int8)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007756\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements[x].elements[y].value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements[x].elements[y].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements[x].elements[y].value);
                                                }
                                                
                                                uint8_t* _tmp_8708 = (uint8_t*) buffer++;
                                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements[x].elements[y].value - -100;
                                                *_tmp_8708 = __aux64__;
                                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements[x].elements[y].value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < -100) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements[x].elements[y].value' (" << __aux64__ << ") less than (-100); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].lower_triangular_correlation_matrices[0].elements[v].matrix.elements[x].elements[y].value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                                    return -1;
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_z) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007757\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].value.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].value.value);
                                    }
                                    
                                    float _tmp_8710 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].value.value;
                                    _tmp_8710 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8710);
                                    _tmp_8710 -= 1;
                                    uint8_t* _tmp_8709 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8709 = static_cast<uint8_t>(_tmp_8710);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007758\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].confidence.value);
                                    }
                                    
                                    float _tmp_8712 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].confidence.value;
                                    _tmp_8712 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8712);
                                    _tmp_8712 -= 1;
                                    uint8_t* _tmp_8711 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8711 = static_cast<uint8_t>(_tmp_8712);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_z[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_y) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007759\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].value.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].value.value);
                                    }
                                    
                                    float _tmp_8714 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].value.value;
                                    _tmp_8714 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8714);
                                    _tmp_8714 -= 1;
                                    uint8_t* _tmp_8713 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8713 = static_cast<uint8_t>(_tmp_8714);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007760\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].confidence.value);
                                    }
                                    
                                    float _tmp_8716 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].confidence.value;
                                    _tmp_8716 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8716);
                                    _tmp_8716 -= 1;
                                    uint8_t* _tmp_8715 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8715 = static_cast<uint8_t>(_tmp_8716);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_y[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x.size() != 0) {
                                // Field:  type(ObjectDimension) name(object_dimension_x) extGroup(0)
                                    // ObjectDimension  SEQUENCE
                                        //  value      ObjectDimensionValue          
                                        //  confidence ObjectDimensionConfidence     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ObjectDimensionValue) name(value) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(256) span(256) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007761\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].value.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].value.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].value.value);
                                    }
                                    
                                    float _tmp_8718 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].value.value;
                                    _tmp_8718 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8718);
                                    _tmp_8718 -= 1;
                                    uint8_t* _tmp_8717 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8717 = static_cast<uint8_t>(_tmp_8718);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 256) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].value.value' (" << __aux64__ << ") exceeds max allowable (256); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ObjectDimensionConfidence) name(confidence) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(32) span(32) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007762\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].confidence.value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].confidence.value);
                                    }
                                    
                                    float _tmp_8720 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].confidence.value;
                                    _tmp_8720 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_8720);
                                    _tmp_8720 -= 1;
                                    uint8_t* _tmp_8719 = (uint8_t*) buffer; buffer += 1;
                                    *_tmp_8719 = static_cast<uint8_t>(_tmp_8720);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 32) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_dimension_x[0].confidence.value' (" << __aux64__ << ") exceeds max allowable (32); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_age.size() != 0) {
                                // Field:  type(PerceivedObject_DeltaTimeMilliSecondSigned_objectAge) name(object_age) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(2047) span(2048) scaleDivisor(1000.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007763\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_age[0].value) << 
                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_age[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_age[0].value;
                                }
                                
                                float _tmp_8722 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_age[0].value;
                                _tmp_8722 *= 1000.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_8722);
                                uint16_t* _tmp_8721 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_8721 = static_cast<uint16_t>(_tmp_8722);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_age[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 2047) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_age[0].value' (" << __aux64__ << ") exceeds max allowable (2047); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_perception_quality.size() != 0) {
                                // Field:  type(ObjectPerceptionQuality) name(object_perception_quality) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m007764\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_perception_quality[0].value) << 
                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_perception_quality[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_perception_quality[0].value);
                                }
                                
                                uint8_t* _tmp_8723 = (uint8_t*) buffer++;
                                *_tmp_8723 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_perception_quality[0].value; 
                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_perception_quality[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_perception_quality[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].object_perception_quality[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list.size() != 0) {
                                // Field:  type(SequenceOfIdentifier1B) name(sensor_id_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(128) span(128) ext(true)
                                uint8_t* _ext_flag_3872 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list[0].
                                *_ext_flag_3872 = 0; 
                                
                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list[0].elements.size();
                                if(__aux64__ > 128) __aux64__ = 128;
                                uint16_t* _tmp_8724 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_8724 = __aux64__ - 1;
                                
                                int __ifz = __aux64__;
                                for(int z = 0; z < __ifz; z++) { 
                                    
                                    // Integer
                                    
                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m007766\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list[0].elements[z].value) << 
                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list[0].elements[z].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list[0].elements[z].value);
                                    }
                                    
                                    uint8_t* _tmp_8725 = (uint8_t*) buffer++;
                                    *_tmp_8725 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list[0].elements[z].value; 
                                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list[0].elements[z].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list[0].elements[z].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].sensor_id_list[0].elements[z].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                        return -1;
                                    }
                                    
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification.size() != 0) {
                                // Field:  type(ObjectClassDescription) name(classification) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(8) span(8) ext(false)
                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements.size();
                                if(__aux64__ > 8) __aux64__ = 8;
                                uint16_t* _tmp_8726 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_8726 = __aux64__ - 1;
                                
                                int __ifa = __aux64__;
                                for(int a = 0; a < __ifa; a++) { 
                                    
                                        // ObjectClassWithConfidence  SEQUENCE
                                            //  objectClass ObjectClass         
                                            //  confidence  ConfidenceLevel     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(ObjectClass) name(object_class) extGroup(0)
                                        // Choice
                                           // #0  vehicleSubClass   TrafficParticipantType
                                           // #1  vruSubClass   VruProfileAndSubprofile
                                           // #2  groupSubClass   VruClusterInformation
                                           // #3  otherSubClass   OtherSubClass
                                        uint8_t* _ext_flag_3874 = (uint8_t*) buffer; 
                                        buffer++;
                                        *_ext_flag_3874 = 0; 
                                        
                                        uint8_t* _choice_283 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vehicle_sub_class.size() != 0) {  // CHOICE 0  fieldType(ObjectClass) 
                                            *_choice_283 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007768\033[0m| Choice selection: 0";
                                        
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007769\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vehicle_sub_class[0].value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vehicle_sub_class[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vehicle_sub_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_8727 = (uint8_t*) buffer++;
                                            *_tmp_8727 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vehicle_sub_class[0].value; 
                                            __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vehicle_sub_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vehicle_sub_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vehicle_sub_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class.size() != 0)  // CHOICE 1  fieldType(ObjectClass) 
                                        {
                                            *_choice_283 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007770\033[0m| Choice selection: 1";
                                        
                                            // Choice
                                               // #0  pedestrian   VruSubProfilePedestrian
                                               // #1  bicyclistAndLightVruVehicle   VruSubProfileBicyclist
                                               // #2  motorcyclist   VruSubProfileMotorcyclist
                                               // #3  animal   VruSubProfileAnimal
                                            uint8_t* _ext_flag_3876 = (uint8_t*) buffer; 
                                            buffer++;
                                            *_ext_flag_3876 = 0; 
                                            
                                            uint8_t* _choice_284 = (uint8_t*) buffer;
                                            buffer++;
                                            
                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].pedestrian.size() != 0) {  // CHOICE 0  fieldType(VruProfileAndSubprofile) 
                                                *_choice_284 = 0;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007771\033[0m| Choice selection: 0";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007772\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].pedestrian[0].value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].pedestrian[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].pedestrian[0].value);
                                                }
                                                
                                                uint8_t* _tmp_8728 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_8728 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].pedestrian[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].pedestrian[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].pedestrian[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].pedestrian[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle.size() != 0)  // CHOICE 1  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_284 = 1;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007773\033[0m| Choice selection: 1";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007774\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value);
                                                }
                                                
                                                uint8_t* _tmp_8729 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_8729 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].bicyclist_and_light_vru_vehicle[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].motorcyclist.size() != 0)  // CHOICE 2  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_284 = 2;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007775\033[0m| Choice selection: 2";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007776\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].motorcyclist[0].value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].motorcyclist[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].motorcyclist[0].value);
                                                }
                                                
                                                uint8_t* _tmp_8730 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_8730 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].motorcyclist[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].motorcyclist[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].motorcyclist[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].motorcyclist[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].animal.size() != 0)  // CHOICE 3  fieldType(VruProfileAndSubprofile) 
                                            {
                                                *_choice_284 = 3;  // Setting choice selection
                                            
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007777\033[0m| Choice selection: 3";
                                            
                                                // Enumerated
                                                // INT32  min(0) max(15) span(16) dataType(Int32)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007778\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].animal[0].value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].animal[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].animal[0].value);
                                                }
                                                
                                                uint8_t* _tmp_8731 = (uint8_t*)buffer;
                                                buffer += 1;
                                                *_tmp_8731 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].animal[0].value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].animal[0].value; 
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].animal[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0].animal[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                    return -1;
                                                }
                                            
                                            }
                                            else
                                            {
                                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_284) << ") selected in CHOICE VruProfileAndSubprofile in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.vru_sub_class[0]'; message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class.size() != 0)  // CHOICE 2  fieldType(ObjectClass) 
                                        {
                                            *_choice_283 = 2;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007779\033[0m| Choice selection: 2";
                                        
                                                // VruClusterInformation  SEQUENCE
                                                    //  clusterId               Identifier1B         OPTIONAL  
                                                    //  clusterBoundingBoxShape Shape                OPTIONAL  
                                                    //  clusterCardinalitySize  CardinalNumber1B       
                                                    //  clusterProfiles         VruClusterProfiles   OPTIONAL  
                                                    //  ...
                                                uint8_t* _ext_flag_3881 = (uint8_t*) buffer++;  // Write extension flag for VruClusterInformation
                                                *_ext_flag_3881 = 0;  
                                                
                                                // Optional fields bytemap
                                                char* _tmp_8732 = (char*) buffer++;
                                                *_tmp_8732 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_id.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007780\033[0m| Optional field cluster_id = " << *_tmp_8732;
                                                char* _tmp_8733 = (char*) buffer++;
                                                *_tmp_8733 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007781\033[0m| Optional field cluster_bounding_box_shape = " << *_tmp_8733;
                                                char* _tmp_8734 = (char*) buffer++;
                                                *_tmp_8734 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007782\033[0m| Optional field cluster_profiles = " << *_tmp_8734;
                                                
                                                if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_id.size() != 0) {
                                                    // Field:  type(Identifier1B) name(cluster_id) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007783\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_id[0].value) << 
                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_id[0].value);
                                                    }
                                                    
                                                    uint8_t* _tmp_8735 = (uint8_t*) buffer++;
                                                    *_tmp_8735 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_id[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_id[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape.size() != 0) {
                                                    // Field:  type(Shape) name(cluster_bounding_box_shape) extGroup(0)
                                                    // Choice
                                                       // #0  rectangular   RectangularShape
                                                       // #1  circular   CircularShape
                                                       // #2  polygonal   PolygonalShape
                                                       // #3  elliptical   EllipticalShape
                                                       // #4  radial   RadialShape
                                                       // #5  radialShapes   RadialShapes
                                                    uint8_t* _ext_flag_3883 = (uint8_t*) buffer; 
                                                    buffer++;
                                                    *_ext_flag_3883 = 0; 
                                                    
                                                    uint8_t* _choice_285 = (uint8_t*) buffer;
                                                    buffer++;
                                                    
                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                                                        *_choice_285 = 0;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m007784\033[0m| Choice selection: 0";
                                                    
                                                            // RectangularShape  SEQUENCE
                                                                //  centerPoint CartesianPosition3d   OPTIONAL  
                                                                //  semiLength  StandardLength12b       
                                                                //  semiBreadth StandardLength12b       
                                                                //  orientation Wgs84AngleValue       OPTIONAL  
                                                                //  height      StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_8736 = (char*) buffer++;
                                                            *_tmp_8736 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007785\033[0m| Optional field center_point = " << *_tmp_8736;
                                                            char* _tmp_8737 = (char*) buffer++;
                                                            *_tmp_8737 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007786\033[0m| Optional field orientation = " << *_tmp_8737;
                                                            char* _tmp_8738 = (char*) buffer++;
                                                            *_tmp_8738 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007787\033[0m| Optional field height = " << *_tmp_8738;
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(center_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_8739 = (char*) buffer++;
                                                                    *_tmp_8739 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m007788\033[0m| Optional field z_coordinate = " << *_tmp_8739;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007789\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8741 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value;
                                                                    _tmp_8741 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8741);
                                                                    _tmp_8741 -= -32768;
                                                                    uint16_t* _tmp_8740 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8740 = static_cast<uint16_t>(_tmp_8741);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007790\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8743 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value;
                                                                    _tmp_8743 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8743);
                                                                    _tmp_8743 -= -32768;
                                                                    uint16_t* _tmp_8742 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8742 = static_cast<uint16_t>(_tmp_8743);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m007791\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_8745 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value;
                                                                        _tmp_8745 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_8745);
                                                                        _tmp_8745 -= -32768;
                                                                        uint16_t* _tmp_8744 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_8744 = static_cast<uint16_t>(_tmp_8745);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].center_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007792\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value;
                                                            }
                                                            
                                                            float _tmp_8747 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value;
                                                            _tmp_8747 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8747);
                                                            uint16_t* _tmp_8746 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8746 = static_cast<uint16_t>(_tmp_8747);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007793\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value;
                                                            }
                                                            
                                                            float _tmp_8749 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value;
                                                            _tmp_8749 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8749);
                                                            uint16_t* _tmp_8748 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8748 = static_cast<uint16_t>(_tmp_8749);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation.size() != 0) {
                                                                // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m007794\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value) << 
                                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value;
                                                                }
                                                                
                                                                float _tmp_8751 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value;
                                                                _tmp_8751 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_8751);
                                                                uint16_t* _tmp_8750 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_8750 = static_cast<uint16_t>(_tmp_8751);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m007795\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_8753 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value;
                                                                _tmp_8753 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_8753);
                                                                uint16_t* _tmp_8752 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_8752 = static_cast<uint16_t>(_tmp_8753);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                                                    {
                                                        *_choice_285 = 1;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m007796\033[0m| Choice selection: 1";
                                                    
                                                            // CircularShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                                                //  radius              StandardLength12b       
                                                                //  height              StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_8754 = (char*) buffer++;
                                                            *_tmp_8754 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007797\033[0m| Optional field shape_reference_point = " << *_tmp_8754;
                                                            char* _tmp_8755 = (char*) buffer++;
                                                            *_tmp_8755 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007798\033[0m| Optional field height = " << *_tmp_8755;
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_8756 = (char*) buffer++;
                                                                    *_tmp_8756 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m007799\033[0m| Optional field z_coordinate = " << *_tmp_8756;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007800\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8758 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_8758 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8758);
                                                                    _tmp_8758 -= -32768;
                                                                    uint16_t* _tmp_8757 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8757 = static_cast<uint16_t>(_tmp_8758);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007801\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8760 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_8760 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8760);
                                                                    _tmp_8760 -= -32768;
                                                                    uint16_t* _tmp_8759 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8759 = static_cast<uint16_t>(_tmp_8760);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m007802\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_8762 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_8762 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_8762);
                                                                        _tmp_8762 -= -32768;
                                                                        uint16_t* _tmp_8761 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_8761 = static_cast<uint16_t>(_tmp_8762);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007803\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value;
                                                            }
                                                            
                                                            float _tmp_8764 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value;
                                                            _tmp_8764 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8764);
                                                            uint16_t* _tmp_8763 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8763 = static_cast<uint16_t>(_tmp_8764);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m007804\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_8766 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value;
                                                                _tmp_8766 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_8766);
                                                                uint16_t* _tmp_8765 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_8765 = static_cast<uint16_t>(_tmp_8766);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                                                    {
                                                        *_choice_285 = 2;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m007805\033[0m| Choice selection: 2";
                                                    
                                                            // PolygonalShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                                                //  polygon             SequenceOfCartesianPosition3d     
                                                                //  height              StandardLength12b               OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_8767 = (char*) buffer++;
                                                            *_tmp_8767 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007806\033[0m| Optional field shape_reference_point = " << *_tmp_8767;
                                                            char* _tmp_8768 = (char*) buffer++;
                                                            *_tmp_8768 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007807\033[0m| Optional field height = " << *_tmp_8768;
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_8769 = (char*) buffer++;
                                                                    *_tmp_8769 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m007808\033[0m| Optional field z_coordinate = " << *_tmp_8769;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007809\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8771 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_8771 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8771);
                                                                    _tmp_8771 -= -32768;
                                                                    uint16_t* _tmp_8770 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8770 = static_cast<uint16_t>(_tmp_8771);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007810\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8773 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_8773 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8773);
                                                                    _tmp_8773 -= -32768;
                                                                    uint16_t* _tmp_8772 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8772 = static_cast<uint16_t>(_tmp_8773);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m007811\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_8775 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_8775 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_8775);
                                                                        _tmp_8775 -= -32768;
                                                                        uint16_t* _tmp_8774 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_8774 = static_cast<uint16_t>(_tmp_8775);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                                            uint8_t* _ext_flag_3899 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.
                                                            *_ext_flag_3899 = 0; 
                                                            
                                                            __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements.size();
                                                            if(__aux64__ > 16) __aux64__ = 16;
                                                            uint16_t* _tmp_8776 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_8776 = __aux64__ - 1;
                                                            
                                                            int __ifb = __aux64__;
                                                            for(int b = 0; b < __ifb; b++) { 
                                                                
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_8777 = (char*) buffer++;
                                                                    *_tmp_8777 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m007813\033[0m| Optional field z_coordinate = " << *_tmp_8777;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007814\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8779 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value;
                                                                    _tmp_8779 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8779);
                                                                    _tmp_8779 -= -32768;
                                                                    uint16_t* _tmp_8778 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8778 = static_cast<uint16_t>(_tmp_8779);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007815\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8781 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value;
                                                                    _tmp_8781 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8781);
                                                                    _tmp_8781 -= -32768;
                                                                    uint16_t* _tmp_8780 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8780 = static_cast<uint16_t>(_tmp_8781);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m007816\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_8783 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value;
                                                                        _tmp_8783 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_8783);
                                                                        _tmp_8783 -= -32768;
                                                                        uint16_t* _tmp_8782 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_8782 = static_cast<uint16_t>(_tmp_8783);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].polygon.elements[b].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m007817\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_8785 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value;
                                                                _tmp_8785 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_8785);
                                                                uint16_t* _tmp_8784 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_8784 = static_cast<uint16_t>(_tmp_8785);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                                                    {
                                                        *_choice_285 = 3;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m007818\033[0m| Choice selection: 3";
                                                    
                                                            // EllipticalShape  SEQUENCE
                                                                //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                                                //  semiMajorAxisLength StandardLength12b       
                                                                //  semiMinorAxisLength StandardLength12b       
                                                                //  orientation         Wgs84AngleValue       OPTIONAL  
                                                                //  height              StandardLength12b     OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_8786 = (char*) buffer++;
                                                            *_tmp_8786 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007819\033[0m| Optional field shape_reference_point = " << *_tmp_8786;
                                                            char* _tmp_8787 = (char*) buffer++;
                                                            *_tmp_8787 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007820\033[0m| Optional field orientation = " << *_tmp_8787;
                                                            char* _tmp_8788 = (char*) buffer++;
                                                            *_tmp_8788 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007821\033[0m| Optional field height = " << *_tmp_8788;
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_8789 = (char*) buffer++;
                                                                    *_tmp_8789 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m007822\033[0m| Optional field z_coordinate = " << *_tmp_8789;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007823\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8791 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_8791 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8791);
                                                                    _tmp_8791 -= -32768;
                                                                    uint16_t* _tmp_8790 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8790 = static_cast<uint16_t>(_tmp_8791);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007824\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8793 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_8793 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8793);
                                                                    _tmp_8793 -= -32768;
                                                                    uint16_t* _tmp_8792 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8792 = static_cast<uint16_t>(_tmp_8793);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m007825\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_8795 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_8795 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_8795);
                                                                        _tmp_8795 -= -32768;
                                                                        uint16_t* _tmp_8794 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_8794 = static_cast<uint16_t>(_tmp_8795);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007826\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value;
                                                            }
                                                            
                                                            float _tmp_8797 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value;
                                                            _tmp_8797 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8797);
                                                            uint16_t* _tmp_8796 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8796 = static_cast<uint16_t>(_tmp_8797);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007827\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value;
                                                            }
                                                            
                                                            float _tmp_8799 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value;
                                                            _tmp_8799 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8799);
                                                            uint16_t* _tmp_8798 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8798 = static_cast<uint16_t>(_tmp_8799);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation.size() != 0) {
                                                                // Field:  type(Wgs84AngleValue) name(orientation) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m007828\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value) << 
                                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value;
                                                                }
                                                                
                                                                float _tmp_8801 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value;
                                                                _tmp_8801 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_8801);
                                                                uint16_t* _tmp_8800 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_8800 = static_cast<uint16_t>(_tmp_8801);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height.size() != 0) {
                                                                // Field:  type(StandardLength12b) name(height) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m007829\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value) << 
                                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value;
                                                                }
                                                                
                                                                float _tmp_8803 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value;
                                                                _tmp_8803 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_8803);
                                                                uint16_t* _tmp_8802 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_8802 = static_cast<uint16_t>(_tmp_8803);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                                                    {
                                                        *_choice_285 = 4;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m007830\033[0m| Choice selection: 4";
                                                    
                                                            // RadialShape  SEQUENCE
                                                                //  shapeReferencePoint                   CartesianPosition3d   OPTIONAL  
                                                                //  range                                 StandardLength12b       
                                                                //  stationaryHorizontalOpeningAngleStart Wgs84AngleValue         
                                                                //  stationaryHorizontalOpeningAngleEnd   Wgs84AngleValue         
                                                                //  verticalOpeningAngleStart             CartesianAngleValue   OPTIONAL  
                                                                //  verticalOpeningAngleEnd               CartesianAngleValue   OPTIONAL  
                                                            // Optional fields bytemap
                                                            char* _tmp_8804 = (char*) buffer++;
                                                            *_tmp_8804 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007831\033[0m| Optional field shape_reference_point = " << *_tmp_8804;
                                                            char* _tmp_8805 = (char*) buffer++;
                                                            *_tmp_8805 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007832\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_8805;
                                                            char* _tmp_8806 = (char*) buffer++;
                                                            *_tmp_8806 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007833\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_8806;
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point.size() != 0) {
                                                                // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                                                    // CartesianPosition3d  SEQUENCE
                                                                        //  xCoordinate CartesianCoordinate     
                                                                        //  yCoordinate CartesianCoordinate     
                                                                        //  zCoordinate CartesianCoordinate   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_8807 = (char*) buffer++;
                                                                    *_tmp_8807 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m007834\033[0m| Optional field z_coordinate = " << *_tmp_8807;
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007835\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8809 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value;
                                                                    _tmp_8809 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8809);
                                                                    _tmp_8809 -= -32768;
                                                                    uint16_t* _tmp_8808 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8808 = static_cast<uint16_t>(_tmp_8809);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007836\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                                                    }
                                                                    
                                                                    float _tmp_8811 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value;
                                                                    _tmp_8811 *= 100.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8811);
                                                                    _tmp_8811 -= -32768;
                                                                    uint16_t* _tmp_8810 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8810 = static_cast<uint16_t>(_tmp_8811);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                                                        // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m007837\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_8813 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                                                        _tmp_8813 *= 100.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_8813);
                                                                        _tmp_8813 -= -32768;
                                                                        uint16_t* _tmp_8812 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_8812 = static_cast<uint16_t>(_tmp_8813);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                            }
                                                            
                                                            // Field:  type(StandardLength12b) name(range) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007838\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value;
                                                            }
                                                            
                                                            float _tmp_8815 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value;
                                                            _tmp_8815 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8815);
                                                            uint16_t* _tmp_8814 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8814 = static_cast<uint16_t>(_tmp_8815);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_start) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007839\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                                            }
                                                            
                                                            float _tmp_8817 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value;
                                                            _tmp_8817 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8817);
                                                            uint16_t* _tmp_8816 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8816 = static_cast<uint16_t>(_tmp_8817);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(Wgs84AngleValue) name(stationary_horizontal_opening_angle_end) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007840\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                                            }
                                                            
                                                            float _tmp_8819 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value;
                                                            _tmp_8819 *= 10.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8819);
                                                            uint16_t* _tmp_8818 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8818 = static_cast<uint16_t>(_tmp_8819);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].stationary_horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start.size() != 0) {
                                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m007841\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value) << 
                                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                                                }
                                                                
                                                                float _tmp_8821 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value;
                                                                _tmp_8821 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_8821);
                                                                uint16_t* _tmp_8820 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_8820 = static_cast<uint16_t>(_tmp_8821);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end.size() != 0) {
                                                                // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m007842\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value) << 
                                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                                                }
                                                                
                                                                float _tmp_8823 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value;
                                                                _tmp_8823 *= 10.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_8823);
                                                                uint16_t* _tmp_8822 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_8822 = static_cast<uint16_t>(_tmp_8823);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                    
                                                    }
                                                    else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                                                    {
                                                        *_choice_285 = 5;  // Setting choice selection
                                                    
                                                        if(debug)
                                                            logger->debug() << "|\033[38;5;94m007843\033[0m| Choice selection: 5";
                                                    
                                                            // RadialShapes  SEQUENCE
                                                                //  refPointId       Identifier1B                 
                                                                //  xCoordinate      CartesianCoordinateSmall     
                                                                //  yCoordinate      CartesianCoordinateSmall     
                                                                //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                                                //  radialShapesList RadialShapesList             
                                                            // Optional fields bytemap
                                                            char* _tmp_8824 = (char*) buffer++;
                                                            *_tmp_8824 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                                            if(debug)
                                                                logger->debug() << "|\033[38;5;94m007844\033[0m| Optional field z_coordinate = " << *_tmp_8824;
                                                            
                                                            // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                                            // Integer
                                                            
                                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007845\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value);
                                                            }
                                                            
                                                            uint8_t* _tmp_8825 = (uint8_t*) buffer++;
                                                            *_tmp_8825 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value; 
                                                            __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value;
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007846\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value;
                                                            }
                                                            
                                                            float _tmp_8827 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value;
                                                            _tmp_8827 *= 100.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8827);
                                                            _tmp_8827 -= -3094;
                                                            uint16_t* _tmp_8826 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8826 = static_cast<uint16_t>(_tmp_8827);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                                            // Real
                                                            
                                                            // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                            if(debug) {
                                                                logger->debug() << "|\033[38;5;94m007847\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value) << 
                                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value;
                                                            }
                                                            
                                                            float _tmp_8829 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value;
                                                            _tmp_8829 *= 100.0;
                                                            __aux64__ = static_cast<uint64_t>(_tmp_8829);
                                                            _tmp_8829 -= -3094;
                                                            uint16_t* _tmp_8828 = (uint16_t*) buffer; buffer += 2;
                                                            *_tmp_8828 = static_cast<uint16_t>(_tmp_8829);
                                                            
                                                            // MIN validator
                                                            if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                return -1;
                                                            }
                                                            // MAX validator
                                                            if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                return -1;
                                                            }
                                                            
                                                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate.size() != 0) {
                                                                // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                                                // Real
                                                                
                                                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                                                if(debug) {
                                                                    logger->debug() << "|\033[38;5;94m007848\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value) << 
                                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value;
                                                                }
                                                                
                                                                float _tmp_8831 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value;
                                                                _tmp_8831 *= 100.0;
                                                                __aux64__ = static_cast<uint64_t>(_tmp_8831);
                                                                _tmp_8831 -= -3094;
                                                                uint16_t* _tmp_8830 = (uint16_t*) buffer; buffer += 2;
                                                                *_tmp_8830 = static_cast<uint16_t>(_tmp_8831);
                                                                
                                                                // MIN validator
                                                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                                                    return -1;
                                                                }
                                                                // MAX validator
                                                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                                                    return -1;
                                                                }
                                                            }
                                                            
                                                            // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                                            // SequenceOf
                                                            // Data Type UInt8
                                                            // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                                            uint8_t* _ext_flag_3923 = (uint8_t*) buffer++; // Write extension flag for ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.
                                                            *_ext_flag_3923 = 0; 
                                                            
                                                            __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements.size();
                                                            if(__aux64__ > 16) __aux64__ = 16;
                                                            uint16_t* _tmp_8832 = (uint16_t*)buffer;
                                                            buffer += 2;
                                                            *_tmp_8832 = __aux64__ - 1;
                                                            
                                                            int __ifc = __aux64__;
                                                            for(int c = 0; c < __ifc; c++) { 
                                                                
                                                                    // RadialShapeDetails  SEQUENCE
                                                                        //  range                       StandardLength12b       
                                                                        //  horizontalOpeningAngleStart CartesianAngleValue     
                                                                        //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                                                        //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                                                        //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                                                    // Optional fields bytemap
                                                                    char* _tmp_8833 = (char*) buffer++;
                                                                    *_tmp_8833 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m007850\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_8833;
                                                                    char* _tmp_8834 = (char*) buffer++;
                                                                    *_tmp_8834 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                                                    if(debug)
                                                                        logger->debug() << "|\033[38;5;94m007851\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_8834;
                                                                    
                                                                    // Field:  type(StandardLength12b) name(range) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007852\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value;
                                                                    }
                                                                    
                                                                    float _tmp_8836 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value;
                                                                    _tmp_8836 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8836);
                                                                    uint16_t* _tmp_8835 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8835 = static_cast<uint16_t>(_tmp_8836);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007853\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value;
                                                                    }
                                                                    
                                                                    float _tmp_8838 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value;
                                                                    _tmp_8838 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8838);
                                                                    uint16_t* _tmp_8837 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8837 = static_cast<uint16_t>(_tmp_8838);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                                                    // Real
                                                                    
                                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                    if(debug) {
                                                                        logger->debug() << "|\033[38;5;94m007854\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value) << 
                                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value;
                                                                    }
                                                                    
                                                                    float _tmp_8840 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value;
                                                                    _tmp_8840 *= 10.0;
                                                                    __aux64__ = static_cast<uint64_t>(_tmp_8840);
                                                                    uint16_t* _tmp_8839 = (uint16_t*) buffer; buffer += 2;
                                                                    *_tmp_8839 = static_cast<uint16_t>(_tmp_8840);
                                                                    
                                                                    // MIN validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    // MAX validator
                                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                        return -1;
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start.size() != 0) {
                                                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m007855\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value) << 
                                                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_8842 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value;
                                                                        _tmp_8842 *= 10.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_8842);
                                                                        uint16_t* _tmp_8841 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_8841 = static_cast<uint16_t>(_tmp_8842);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end.size() != 0) {
                                                                        // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                                                        // Real
                                                                        
                                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                                        if(debug) {
                                                                            logger->debug() << "|\033[38;5;94m007856\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value) << 
                                                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value;
                                                                        }
                                                                        
                                                                        float _tmp_8844 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value;
                                                                        _tmp_8844 *= 10.0;
                                                                        __aux64__ = static_cast<uint64_t>(_tmp_8844);
                                                                        uint16_t* _tmp_8843 = (uint16_t*) buffer; buffer += 2;
                                                                        *_tmp_8843 = static_cast<uint16_t>(_tmp_8844);
                                                                        
                                                                        // MIN validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                                            return -1;
                                                                        }
                                                                        // MAX validator
                                                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0].radial_shapes[0].radial_shapes_list.elements[c].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    
                                                            }
                                                    
                                                    }
                                                    else
                                                    {
                                                        logger->warning() << "Wrong option (" << static_cast<int>(*_choice_285) << ") selected in CHOICE Shape in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_bounding_box_shape[0]'; message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(CardinalNumber1B) name(cluster_cardinality_size) extGroup(0)
                                                // Integer
                                                
                                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007857\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_cardinality_size.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_cardinality_size.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_cardinality_size.value);
                                                }
                                                
                                                uint8_t* _tmp_8845 = (uint8_t*) buffer++;
                                                *_tmp_8845 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_cardinality_size.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_cardinality_size.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_cardinality_size.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_cardinality_size.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                    return -1;
                                                }
                                                
                                                if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles.size() != 0) {
                                                    // Field:  type(VruClusterProfiles) name(cluster_profiles) extGroup(0)
                                                    // BitString
                                                    // BIT_STRING  min(4) max(4) span(1)
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m007858\033[0m| payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].values.size());
                                                    
                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].values.size() < 4) {
                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].value' " << (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].values.size()) << " is less than allowable (4); message dropped.";
                                                        return -1;
                                                    }
                                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].values.size() > 4) {
                                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].value' " << (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].values.size()) << " exceeds max allowable (4); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    uint8_t* _tmp_8846 = (uint8_t*)buffer;
                                                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].values.size();
                                                    if(__aux64__ > 4) __aux64__ = 4;
                                                    *_tmp_8846 = __aux64__ - 4;
                                                    buffer += 1;
                                                    
                                                    int __ifd = __aux64__;
                                                    for(int d = 0; d < __ifd; d++) {
                                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                                        *__b__ = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.group_sub_class[0].cluster_profiles[0].values[d]? 1: 0);
                                                    }
                                                }
                                                
                                                if(*_ext_flag_3881) {
                                                }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.other_sub_class.size() != 0)  // CHOICE 3  fieldType(ObjectClass) 
                                        {
                                            *_choice_283 = 3;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007859\033[0m| Choice selection: 3";
                                        
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007860\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.other_sub_class[0].value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.other_sub_class[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.other_sub_class[0].value);
                                            }
                                            
                                            uint8_t* _tmp_8848 = (uint8_t*) buffer++;
                                            *_tmp_8848 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.other_sub_class[0].value; 
                                            __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.other_sub_class[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.other_sub_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class.other_sub_class[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        
                                        }
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_283) << ") selected in CHOICE ObjectClass in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].object_class'; message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(ConfidenceLevel) name(confidence) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(1) max(101) span(101) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007861\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].confidence.value) << 
                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].confidence.value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].confidence.value);
                                        }
                                        
                                        uint8_t* _tmp_8849 = (uint8_t*) buffer++;
                                        __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].confidence.value - 1;
                                        *_tmp_8849 = __aux64__;
                                        __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].confidence.value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 101) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].classification[0].elements[a].confidence.value' (" << __aux64__ << ") exceeds max allowable (101); message dropped.";
                                            return -1;
                                        }
                                        
                                }
                            }
                            
                            if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position.size() != 0) {
                                // Field:  type(MapPosition) name(map_position) extGroup(0)
                                    // MapPosition  SEQUENCE
                                        //  mapReference             MapReference               OPTIONAL  
                                        //  laneId                   Identifier1B               OPTIONAL  
                                        //  connectionId             Identifier1B               OPTIONAL  
                                        //  longitudinalLanePosition LongitudinalLanePosition   OPTIONAL  
                                        //  ...
                                    uint8_t* _ext_flag_3932 = (uint8_t*) buffer++;  // Write extension flag for MapPosition
                                    *_ext_flag_3932 = 0;  
                                    
                                    // Optional fields bytemap
                                    char* _tmp_8850 = (char*) buffer++;
                                    *_tmp_8850 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007862\033[0m| Optional field map_reference = " << *_tmp_8850;
                                    char* _tmp_8851 = (char*) buffer++;
                                    *_tmp_8851 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].lane_id.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007863\033[0m| Optional field lane_id = " << *_tmp_8851;
                                    char* _tmp_8852 = (char*) buffer++;
                                    *_tmp_8852 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].connection_id.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007864\033[0m| Optional field connection_id = " << *_tmp_8852;
                                    char* _tmp_8853 = (char*) buffer++;
                                    *_tmp_8853 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position.size() != 0 ? 1 : 0);
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m007865\033[0m| Optional field longitudinal_lane_position = " << *_tmp_8853;
                                    
                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference.size() != 0) {
                                        // Field:  type(MapReference) name(map_reference) extGroup(0)
                                        // Choice
                                           // #0  roadsegment   RoadSegmentReferenceId
                                           // #1  intersection   IntersectionReferenceId
                                        uint8_t* _choice_286 = (uint8_t*) buffer;
                                        buffer++;
                                        
                                        if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment.size() != 0) {  // CHOICE 0  fieldType(MapReference) 
                                            *_choice_286 = 0;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007866\033[0m| Choice selection: 0";
                                        
                                                // RoadSegmentReferenceId  SEQUENCE
                                                    //  region     Identifier2B   OPTIONAL  
                                                    //  id         Identifier2B     
                                                // Optional fields bytemap
                                                char* _tmp_8854 = (char*) buffer++;
                                                *_tmp_8854 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007867\033[0m| Optional field region = " << *_tmp_8854;
                                                
                                                if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].region.size() != 0) {
                                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007868\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].region[0].value) << 
                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].region[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_8855 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_8855 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].region[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007869\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].id.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].id.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_8856 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8856 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].id.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].roadsegment[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection.size() != 0)  // CHOICE 1  fieldType(MapReference) 
                                        {
                                            *_choice_286 = 1;  // Setting choice selection
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m007870\033[0m| Choice selection: 1";
                                        
                                                // IntersectionReferenceId  SEQUENCE
                                                    //  region     Identifier2B   OPTIONAL  
                                                    //  id         Identifier2B     
                                                // Optional fields bytemap
                                                char* _tmp_8857 = (char*) buffer++;
                                                *_tmp_8857 = (ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].region.size() != 0 ? 1 : 0);
                                                if(debug)
                                                    logger->debug() << "|\033[38;5;94m007871\033[0m| Optional field region = " << *_tmp_8857;
                                                
                                                if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].region.size() != 0) {
                                                    // Field:  type(Identifier2B) name(region) extGroup(0)
                                                    // Integer
                                                    
                                                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m007872\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].region[0].value) << 
                                                                     " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].region[0].value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].region[0].value;
                                                    }
                                                    
                                                    uint16_t* _tmp_8858 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_8858 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].region[0].value; 
                                                    __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].region[0].value;
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                        logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                                // Integer
                                                
                                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m007873\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].id.value) << 
                                                                 " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].id.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].id.value;
                                                }
                                                
                                                uint16_t* _tmp_8859 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_8859 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].id.value; 
                                                __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].id.value;
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                                    logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0].intersection[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                                    return -1;
                                                }
                                        
                                        }
                                        else
                                        {
                                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_286) << ") selected in CHOICE MapReference in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].map_reference[0]'; message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].lane_id.size() != 0) {
                                        // Field:  type(Identifier1B) name(lane_id) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007874\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].lane_id[0].value) << 
                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].lane_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].lane_id[0].value);
                                        }
                                        
                                        uint8_t* _tmp_8860 = (uint8_t*) buffer++;
                                        *_tmp_8860 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].lane_id[0].value; 
                                        __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].lane_id[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].lane_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].lane_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].connection_id.size() != 0) {
                                        // Field:  type(Identifier1B) name(connection_id) extGroup(0)
                                        // Integer
                                        
                                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m007875\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].connection_id[0].value) << 
                                                         " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].connection_id[0].value: " << static_cast<int>(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].connection_id[0].value);
                                        }
                                        
                                        uint8_t* _tmp_8861 = (uint8_t*) buffer++;
                                        *_tmp_8861 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].connection_id[0].value; 
                                        __aux64__ = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].connection_id[0].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].connection_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].connection_id[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                            return -1;
                                        }
                                    }
                                    
                                    if(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position.size() != 0) {
                                        // Field:  type(LongitudinalLanePosition) name(longitudinal_lane_position) extGroup(0)
                                            // LongitudinalLanePosition  SEQUENCE
                                                //  longitudinalLanePositionValue      LongitudinalLanePositionValue          
                                                //  longitudinalLanePositionConfidence LongitudinalLanePositionConfidence     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(LongitudinalLanePositionValue) name(longitudinal_lane_position_value) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(32767) span(32768) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007876\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value;
                                            }
                                            
                                            float _tmp_8863 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value;
                                            _tmp_8863 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8863);
                                            uint16_t* _tmp_8862 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8862 = static_cast<uint16_t>(_tmp_8863);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_value.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(LongitudinalLanePositionConfidence) name(longitudinal_lane_position_confidence) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(1023) span(1024) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m007877\033[0m| " << tools::getTypeName(ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value) << 
                                                             " payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value: " << ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value;
                                            }
                                            
                                            float _tmp_8865 = ros->payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value;
                                            _tmp_8865 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_8865);
                                            uint16_t* _tmp_8864 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_8864 = static_cast<uint16_t>(_tmp_8865);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                                logger->warning() << "Error: Value in 'payload.cpm_containers.elements[k].perceived_object_container[0].perceived_objects.elements[u].map_position[0].longitudinal_lane_position[0].longitudinal_lane_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                                return -1;
                                            }
                                    }
                                    
                                    if(*_ext_flag_3932) {
                                    }
                            }
                            
                            if(*_ext_flag_3818) {
                            }
                    }
                    
                    if(*_ext_flag_3815) {
                    }
            
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_277) << ") selected in CHOICE WrappedCpmContainer in 'payload.cpm_containers.elements[k]'; message dropped.";
                return -1;
            }
        }
        
        if(*_ext_flag_3670) {
        }
    
	
            return buffer - start;
        }
    } 
}