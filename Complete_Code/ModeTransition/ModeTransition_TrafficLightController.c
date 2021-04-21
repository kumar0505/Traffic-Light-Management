/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:45:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeTransition_TrafficLightController.h"

/* TrafficLightController::ModeTransition/ */
void ModeTransition_TrafficLightController(
  inC_ModeTransition_TrafficLightController *inC,
  outC_ModeTransition_TrafficLightController *outC)
{
  /* ModeTransition: */
  SSM_ST_ModeTransition ModeTransition_state_act;

  /* ModeTransition: */
  switch (outC->ModeTransition_state_nxt) {
    case SSM_st_ManualMode_ModeTransition :
      if ((!inC->ManualMode) & inC->AutoMode) {
        ModeTransition_state_act = SSM_st_AutomaticMode_ModeTransition;
      }
      else {
        ModeTransition_state_act = SSM_st_ManualMode_ModeTransition;
      }
      break;
    case SSM_st_AutomaticMode_ModeTransition :
      if ((!inC->AutoMode) & inC->ManualMode) {
        ModeTransition_state_act = SSM_st_ManualMode_ModeTransition;
      }
      else {
        ModeTransition_state_act = SSM_st_AutomaticMode_ModeTransition;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* ModeTransition: */
  switch (ModeTransition_state_act) {
    case SSM_st_ManualMode_ModeTransition :
      outC->MODE = MANUAL_MODE_TrafficLightController;
      outC->ModeTransition_state_nxt = SSM_st_ManualMode_ModeTransition;
      break;
    case SSM_st_AutomaticMode_ModeTransition :
      outC->MODE = AUTOMATIC_MODE_TrafficLightController;
      outC->ModeTransition_state_nxt = SSM_st_AutomaticMode_ModeTransition;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ModeTransition_init_TrafficLightController(
  outC_ModeTransition_TrafficLightController *outC)
{
  outC->MODE = AUTOMATIC_MODE_TrafficLightController;
  outC->ModeTransition_state_nxt = SSM_st_AutomaticMode_ModeTransition;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ModeTransition_reset_TrafficLightController(
  outC_ModeTransition_TrafficLightController *outC)
{
  outC->ModeTransition_state_nxt = SSM_st_AutomaticMode_ModeTransition;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ModeTransition_TrafficLightController.c
** Generation date: 2020-06-09T12:45:14
*************************************************************$ */

