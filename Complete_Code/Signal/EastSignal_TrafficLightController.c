/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:24:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EastSignal_TrafficLightController.h"

/* TrafficLightController::EastSignal/ */
void EastSignal_TrafficLightController(
  inC_EastSignal_TrafficLightController *inC,
  outC_EastSignal_TrafficLightController *outC)
{
  /* _L10/ */
  E_Signal_TrafficLightController _L10;

  _L10[0] = inC->Input1;
  _L10[1] = inC->Input2;
  _L10[2] = inC->Input3;
  outC->ER = _L10[0] != kcg_lit_int8(0);
  outC->EY = _L10[1] != kcg_lit_int8(0);
  outC->EG = _L10[2] != kcg_lit_int8(0);
}

#ifndef KCG_USER_DEFINED_INIT
void EastSignal_init_TrafficLightController(
  outC_EastSignal_TrafficLightController *outC)
{
  outC->ER = kcg_true;
  outC->EG = kcg_true;
  outC->EY = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EastSignal_reset_TrafficLightController(
  outC_EastSignal_TrafficLightController *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EastSignal_TrafficLightController.c
** Generation date: 2020-06-09T12:24:33
*************************************************************$ */

