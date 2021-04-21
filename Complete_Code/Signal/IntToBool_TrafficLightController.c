/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:24:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IntToBool_TrafficLightController.h"

/* TrafficLightController::IntToBool/ */
void IntToBool_TrafficLightController(
  inC_IntToBool_TrafficLightController *inC,
  outC_IntToBool_TrafficLightController *outC)
{
  outC->ITB_Output = inC->ITB_Input != kcg_lit_int8(0);
}

#ifndef KCG_USER_DEFINED_INIT
void IntToBool_init_TrafficLightController(
  outC_IntToBool_TrafficLightController *outC)
{
  outC->ITB_Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void IntToBool_reset_TrafficLightController(
  outC_IntToBool_TrafficLightController *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** IntToBool_TrafficLightController.c
** Generation date: 2020-06-09T12:24:48
*************************************************************$ */

