/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:23:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_TrafficLightController.h"

/* TrafficLightController::Counter/ */
void Counter_TrafficLightController(
  inC_Counter_TrafficLightController *inC,
  outC_Counter_TrafficLightController *outC)
{
  /* _L3/ */
  kcg_int8 _L3;

  _L3 = kcg_lit_int8(1) + outC->_L4;
  outC->count = _L3 % inC->modulo;
  outC->rippleClock = _L3 != outC->count;
  outC->_L4 = outC->count;
}

#ifndef KCG_USER_DEFINED_INIT
void Counter_init_TrafficLightController(
  outC_Counter_TrafficLightController *outC)
{
  outC->rippleClock = kcg_true;
  outC->count = kcg_lit_int8(0);
  outC->_L4 = kcg_lit_int8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Counter_reset_TrafficLightController(
  outC_Counter_TrafficLightController *outC)
{
  outC->_L4 = kcg_lit_int8(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Counter_TrafficLightController.c
** Generation date: 2020-06-09T12:23:25
*************************************************************$ */

