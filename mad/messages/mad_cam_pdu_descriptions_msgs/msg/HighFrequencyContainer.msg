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
# CHOICE {
#    basicVehicleContainerHighFrequency BasicVehicleContainerHighFrequency,
#    rsuContainerHighFrequency RSUContainerHighFrequency,
#    ...,
#    madVehicleContainerHighFrequency MADVehicleContainerHighFrequency 
# } 
# 
# Element type: CHOICE
#
# ********** START of HighFrequencyContainer **********
#

BasicVehicleContainerHighFrequency[] basic_vehicle_container_high_frequency #  choice = 0
RSUContainerHighFrequency[]          rsu_container_high_frequency           #  choice = 1
MADVehicleContainerHighFrequency[]   mad_vehicle_container_high_frequency   #  choice = 2

uint8                                LENGTH                                 = 3

# ********** END of HighFrequencyContainer   **********
