#*                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                    *
#*                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore         *
#*                                                                                  *
#* This program and the accompanying materials are made available under the         *
#* terms of the Eclipse Public License 2.0 which is available at                    *
#* http://www.eclipse.org/legal/epl-2.0.                                            *
#*                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                 *
#*                                                                                  *
#*                                                                                  *
#* File automatically generated with DLR Wind v2                                    *
#*                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(2)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# SEQUENCE {
#    dangerousGoodsType DangerousGoodsBasic,
#    unNumber INTEGER(0..9999),
#    elevatedTemperature BOOLEAN,
#    tunnelsRestricted BOOLEAN,
#    limitedQuantity BOOLEAN,
#    emergencyActionCode IA5String(SIZE(1..24)) OPTIONAL,
#    phoneNumber PhoneNumber OPTIONAL,
#    companyName UTF8String(SIZE(1..24)) OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of DangerousGoodsExtended **********
#

DangerousGoodsBasic                         dangerous_goods_type
DangerousGoodsExtendedUnNumber              un_number
DangerousGoodsExtendedElevatedTemperature   elevated_temperature
DangerousGoodsExtendedTunnelsRestricted     tunnels_restricted
DangerousGoodsExtendedLimitedQuantity       limited_quantity
DangerousGoodsExtendedEmergencyActionCode[] emergency_action_code # OPTIONAL
PhoneNumber[]                               phone_number          # OPTIONAL
DangerousGoodsExtendedCompanyName[]         company_name          # OPTIONAL

# ********** END of DangerousGoodsExtended   **********
