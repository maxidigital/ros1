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
#  This DF shall contain a list of a lower triangular positive semi-definite matrices.
# 
#  @category: Sensing information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE SIZE(1..4) OF LowerTriangularPositiveSemidefiniteMatrix
# 
# Element type: SEQUENCE OF
#
# ********** START of LowerTriangularPositiveSemidefiniteMatrices **********
#

LowerTriangularPositiveSemidefiniteMatrix[] elements        # Range(1, 4)

uint8                                       MIN             = 1
uint8                                       MAX             = 4

# ********** END of LowerTriangularPositiveSemidefiniteMatrices   **********
