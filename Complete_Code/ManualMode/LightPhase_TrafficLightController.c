/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:42:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LightPhase_TrafficLightController.h"

/* TrafficLightController::LightPhase/ */
void LightPhase_TrafficLightController(
  outC_LightPhase_TrafficLightController *outC)
{
  /* PeakPhase:Running:_L1=(TrafficLightController::SouthSignal#1)/ */
  SouthSignal_TrafficLightController(
    kcg_lit_int8(0),
    kcg_lit_int8(1),
    kcg_lit_int8(0),
    &outC->SR,
    &outC->SG,
    &outC->SY);
  /* PeakPhase:Running:_L4=(TrafficLightController::EastSignal#1)/ */
  EastSignal_TrafficLightController(
    kcg_lit_int8(0),
    kcg_lit_int8(1),
    kcg_lit_int8(0),
    &outC->ER,
    &outC->EG,
    &outC->EY);
  /* PeakPhase:Running:_L7=(TrafficLightController::NorthSisnal#1)/ */
  NorthSisnal_TrafficLightController(
    kcg_lit_int8(0),
    kcg_lit_int8(1),
    kcg_lit_int8(0),
    &outC->NR,
    &outC->NG,
    &outC->NY);
}

#ifndef KCG_USER_DEFINED_INIT
void LightPhase_init_TrafficLightController(
  outC_LightPhase_TrafficLightController *outC)
{
  outC->ER = kcg_true;
  outC->EG = kcg_true;
  outC->EY = kcg_true;
  outC->NR = kcg_true;
  outC->NG = kcg_true;
  outC->NY = kcg_true;
  outC->SR = kcg_true;
  outC->SG = kcg_true;
  outC->SY = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LightPhase_reset_TrafficLightController(
  outC_LightPhase_TrafficLightController *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** LightPhase_TrafficLightController.c
** Generation date: 2020-06-09T12:42:11
*************************************************************$ */

