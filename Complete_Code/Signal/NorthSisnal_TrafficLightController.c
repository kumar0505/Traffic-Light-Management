/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:25:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NorthSisnal_TrafficLightController.h"

/* TrafficLightController::NorthSisnal/ */
void NorthSisnal_TrafficLightController(
  inC_NorthSisnal_TrafficLightController *inC,
  outC_NorthSisnal_TrafficLightController *outC)
{
  /* _L1/ */
  N_signal_TrafficLightController _L1;

  _L1[0] = inC->Input1;
  _L1[1] = inC->Input2;
  _L1[2] = inC->Input3;
  outC->NR = _L1[0] != kcg_lit_int8(0);
  outC->NY = _L1[1] != kcg_lit_int8(0);
  outC->NG = _L1[2] != kcg_lit_int8(0);
}

#ifndef KCG_USER_DEFINED_INIT
void NorthSisnal_init_TrafficLightController(
  outC_NorthSisnal_TrafficLightController *outC)
{
  outC->NR = kcg_true;
  outC->NG = kcg_true;
  outC->NY = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NorthSisnal_reset_TrafficLightController(
  outC_NorthSisnal_TrafficLightController *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** NorthSisnal_TrafficLightController.c
** Generation date: 2020-06-09T12:25:03
*************************************************************$ */

