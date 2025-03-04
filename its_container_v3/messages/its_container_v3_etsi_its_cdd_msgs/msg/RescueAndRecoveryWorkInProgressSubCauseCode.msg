#*                                                                                 *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                 *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                   *
#*                                                                                 *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore        *
#*                                                                                 *
#* This program and the accompanying materials are made available under the        *
#* terms of the Eclipse Public License 2.0 which is available at                   *
#* http://www.eclipse.org/legal/epl-2.0.                                           *
#*                                                                                 *
#* SPDX-License-Identifier: EPL-2.0                                                *
#*                                                                                 *
#*                                                                                 *
#* File automatically generated with DLR Wind v2                                   *
#*                                                                                 *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE represents the value of the sub cause codes of the @ref CauseCode `rescueAndRecoveryWorkInProgress`
# 
#  The value shall be set to:
#  - 0 `unavailable`             - in case further detailed information on rescue and recovery work is unavailable,
#  - 1 `emergencyVehicles`       - in case rescue work is ongoing by emergency vehicles,
#  - 2 `rescueHelicopterLanding` - in case rescue helicopter is landing,
#  - 3 `policeActivityOngoing`   - in case police activity is ongoing,
#  - 4 `medicalEmergencyOngoing` - in case medical emergency recovery is ongoing,
#  - 5 `childAbductionInProgress`- in case a child kidnapping alarm is activated and rescue work is ongoing,
#  - 6-255: reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), emergencyVehicles(1), rescueHelicopterLanding(2), policeActivityOngoing(3), medicalEmergencyOngoing(4), childAbductionInProgress(5) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of RescueAndRecoveryWorkInProgressSubCauseCode **********
#

uint8           value

uint8           MIN                           = 0
uint8           MAX                           = 255
uint8           UNAVAILABLE                   = 0

uint8           V_UNAVAILABLE                 = 0
uint8           V_EMERGENCY_VEHICLES          = 1
uint8           V_RESCUE_HELICOPTER_LANDING   = 2
uint8           V_POLICE_ACTIVITY_ONGOING     = 3
uint8           V_MEDICAL_EMERGENCY_ONGOING   = 4
uint8           V_CHILD_ABDUCTION_IN_PROGRESS = 5

# ********** END of RescueAndRecoveryWorkInProgressSubCauseCode   **********
