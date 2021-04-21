/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:09:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RippleCounter_TrafficLightController.h"

/* TrafficLightController::RippleCounter/ */
void RippleCounter_TrafficLightController(
  inC_RippleCounter_TrafficLightController *inC,
  outC_RippleCounter_TrafficLightController *outC)
{
  /* _L7/ */
  kcg_int8 _L7;

  /* _L7= */
  if (inC->Incr) {
    _L7 = kcg_lit_int8(1) + outC->_L5;
  }
  else {
    _L7 = outC->_L5;
  }
  outC->count = _L7 % inC->modulo;
  outC->rippleClock = _L7 != outC->count;
  outC->_L5 = outC->count;
}

#ifndef KCG_USER_DEFINED_INIT
void RippleCounter_init_TrafficLightController(
  outC_RippleCounter_TrafficLightController *outC)
{
  outC->rippleClock = kcg_true;
  outC->count = kcg_lit_int8(0);
  outC->_L5 = kcg_lit_int8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RippleCounter_reset_TrafficLightController(
  outC_RippleCounter_TrafficLightController *outC)
{
  outC->_L5 = kcg_lit_int8(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** RippleCounter_TrafficLightController.c
** Generation date: 2020-05-21T13:09:45
*************************************************************$ */

