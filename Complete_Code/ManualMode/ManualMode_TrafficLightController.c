/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:43:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManualMode_TrafficLightController.h"

/* TrafficLightController::ManualMode/ */
void ManualMode_TrafficLightController(
  inC_ManualMode_TrafficLightController *inC,
  outC_ManualMode_TrafficLightController *outC)
{
  /* ManualMode: */
  SSM_ST_ManualMode ManualMode_state_act;

  /* ManualMode: */
  switch (outC->ManualMode_state_nxt) {
    case SSM_st_East_To_North_ManualMode :
      if (inC->Press_N_to_S) {
        ManualMode_state_act = SSM_st_North_To_South_ManualMode;
      }
      else if (inC->Press_S_to_E) {
        ManualMode_state_act = SSM_st_South_To_East_ManualMode;
      }
      else {
        ManualMode_state_act = SSM_st_East_To_North_ManualMode;
      }
      break;
    case SSM_st_South_To_East_ManualMode :
      if (inC->Press_E_to_N) {
        ManualMode_state_act = SSM_st_East_To_North_ManualMode;
      }
      else if (inC->Press_N_to_S) {
        ManualMode_state_act = SSM_st_North_To_South_ManualMode;
      }
      else {
        ManualMode_state_act = SSM_st_South_To_East_ManualMode;
      }
      break;
    case SSM_st_North_To_South_ManualMode :
      if (inC->Press_S_to_E) {
        ManualMode_state_act = SSM_st_South_To_East_ManualMode;
      }
      else if (inC->Press_E_to_N) {
        ManualMode_state_act = SSM_st_East_To_North_ManualMode;
      }
      else {
        ManualMode_state_act = SSM_st_North_To_South_ManualMode;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* ManualMode: */
  switch (ManualMode_state_act) {
    case SSM_st_East_To_North_ManualMode :
      outC->Signal_Set = SET_E_TO_N_SIGNAL_TrafficLightController;
      outC->ManualMode_state_nxt = SSM_st_East_To_North_ManualMode;
      break;
    case SSM_st_South_To_East_ManualMode :
      outC->Signal_Set = SET_S_TO_E_SIGNAL_TrafficLightController;
      outC->ManualMode_state_nxt = SSM_st_South_To_East_ManualMode;
      break;
    case SSM_st_North_To_South_ManualMode :
      outC->Signal_Set = SET_N_TO_S_SIGNAL_TrafficLightController;
      outC->ManualMode_state_nxt = SSM_st_North_To_South_ManualMode;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ManualMode_init_TrafficLightController(
  outC_ManualMode_TrafficLightController *outC)
{
  outC->Signal_Set = SET_E_TO_N_SIGNAL_TrafficLightController;
  outC->ManualMode_state_nxt = SSM_st_North_To_South_ManualMode;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManualMode_reset_TrafficLightController(
  outC_ManualMode_TrafficLightController *outC)
{
  outC->ManualMode_state_nxt = SSM_st_North_To_South_ManualMode;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ManualMode_TrafficLightController.c
** Generation date: 2020-06-09T12:43:39
*************************************************************$ */

