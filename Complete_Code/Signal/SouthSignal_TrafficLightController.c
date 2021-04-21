/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:35:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SouthSignal_TrafficLightController.h"

/* TrafficLightController::SouthSignal/ */
void SouthSignal_TrafficLightController(
  inC_SouthSignal_TrafficLightController *inC,
  outC_SouthSignal_TrafficLightController *outC)
{
  /* _L1/ */
  S_signal_TrafficLightController _L1;

  _L1[0] = inC->Input1;
  _L1[1] = inC->Input2;
  _L1[2] = inC->Input3;
  outC->SR = _L1[0] != kcg_lit_int8(0);
  outC->SY = _L1[1] != kcg_lit_int8(0);
  outC->SG = _L1[2] != kcg_lit_int8(0);
}

#ifndef KCG_USER_DEFINED_INIT
void SouthSignal_init_TrafficLightController(
  outC_SouthSignal_TrafficLightController *outC)
{
  outC->SR = kcg_true;
  outC->SG = kcg_true;
  outC->SY = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SouthSignal_reset_TrafficLightController(
  outC_SouthSignal_TrafficLightController *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SouthSignal_TrafficLightController.c
** Generation date: 2020-06-09T12:35:45
*************************************************************$ */

