/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_TrafficLightController.h"

/* TrafficLightController::Counter/ */
void Counter_TrafficLightController(
  /* _L8/, modulo/ */
  int_TrafficLightController modulo,
  outC_Counter_TrafficLightController *outC)
{
  /* _L3/ */
  kcg_int8 _L3;

  _L3 = kcg_lit_int8(1) + outC->_L4;
  outC->count = _L3 % modulo;
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


void Counter_reset_TrafficLightController(
  outC_Counter_TrafficLightController *outC)
{
  outC->_L4 = kcg_lit_int8(0);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Counter_TrafficLightController.c
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

