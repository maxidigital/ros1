#*                                                                                         *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                         *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                           *
#*                                                                                         *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                *
#*                                                                                         *
#* This program and the accompanying materials are made available under the                *
#* terms of the Eclipse Public License 2.0 which is available at                           *
#* http://www.eclipse.org/legal/epl-2.0.                                                   *
#*                                                                                         *
#* SPDX-License-Identifier: EPL-2.0                                                        *
#*                                                                                         *
#*                                                                                         *
#* File automatically generated with DLR Wind v2                                           *
#*                                                                                         *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0                     *
#*                                                                                         *
#* Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) cam(2) version(2)}                                                *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# ASN.1 Definition:
# SEQUENCE {
#    basicContainer BasicContainer,
#    highFrequencyContainer HighFrequencyContainer,
#    lowFrequencyContainer LowFrequencyContainer OPTIONAL,
#    specialVehicleContainer SpecialVehicleContainer OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of CamParameters **********
#

BasicContainer            basic_container
HighFrequencyContainer    high_frequency_container
LowFrequencyContainer[]   low_frequency_container   # OPTIONAL
SpecialVehicleContainer[] special_vehicle_container # OPTIONAL

# ********** END of CamParameters   **********
