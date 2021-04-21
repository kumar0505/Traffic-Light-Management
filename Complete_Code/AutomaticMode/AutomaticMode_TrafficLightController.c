/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:22:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AutomaticMode_TrafficLightController.h"

/* TrafficLightController::AutomaticMode/ */
void AutomaticMode_TrafficLightController(
  inC_AutomaticMode_TrafficLightController *inC,
  outC_AutomaticMode_TrafficLightController *outC)
{
  /* AutomaticMode:AutomaticMode:PhaseTransition: */
  SSM_ST_PhaseTransition_AutomaticMode_AutomaticMode PhaseTransition_clock_AutomaticMode_AutomaticMode;
  /* Light_Phase/, _L13/ */
  kcg_bool Light_Phase;
  /* Moderate_Phase/, _L41/ */
  kcg_bool Moderate_Phase;
  /* Peak_Phase/, _L56/ */
  kcg_bool Peak_Phase;

  Peak_Phase = (((inC->Hour >= kcg_lit_int8(9)) & (inC->Hour < kcg_lit_int8(
            12))) | ((inC->Hour >= kcg_lit_int8(16)) & (inC->Hour <
          kcg_lit_int8(20)))) & (inC->Min < kcg_lit_int8(60));
  Moderate_Phase = (((inC->Hour >= kcg_lit_int8(7)) & (inC->Hour < kcg_lit_int8(
            10))) | ((inC->Hour >= kcg_lit_int8(12)) & (inC->Hour <
          kcg_lit_int8(16))) | ((inC->Hour >= kcg_lit_int8(20)) & (inC->Hour >
          kcg_lit_int8(23)))) & (inC->Min < kcg_lit_int8(60));
  Light_Phase = ((inC->Hour < kcg_lit_int8(7)) | ((inC->Hour > kcg_lit_int8(
            23)) & (inC->Hour <= kcg_lit_int8(24)))) & (inC->Min < kcg_lit_int8(
        60));
  /* AutomaticMode:AutomaticMode:PhaseTransition: */
  switch (outC->PhaseTransition_state_nxt_AutomaticMode_AutomaticMode) {
    case SSM_st_PeakTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode :
      if (Moderate_Phase) {
        PhaseTransition_clock_AutomaticMode_AutomaticMode =
          SSM_st_ModerateTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode;
      }
      else if (Light_Phase) {
        PhaseTransition_clock_AutomaticMode_AutomaticMode =
          SSM_st_LightTrafficPhase_PhaseTransition_AutomaticMode_AutomaticMode;
      }
      else {
        PhaseTransition_clock_AutomaticMode_AutomaticMode =
          SSM_st_PeakTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode;
      }
      break;
    case SSM_st_ModerateTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode :
      if (Peak_Phase) {
        PhaseTransition_clock_AutomaticMode_AutomaticMode =
          SSM_st_PeakTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode;
      }
      else if (Light_Phase) {
        PhaseTransition_clock_AutomaticMode_AutomaticMode =
          SSM_st_LightTrafficPhase_PhaseTransition_AutomaticMode_AutomaticMode;
      }
      else {
        PhaseTransition_clock_AutomaticMode_AutomaticMode =
          SSM_st_ModerateTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode;
      }
      break;
    case SSM_st_LightTrafficPhase_PhaseTransition_AutomaticMode_AutomaticMode :
      if (Moderate_Phase) {
        PhaseTransition_clock_AutomaticMode_AutomaticMode =
          SSM_st_ModerateTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode;
      }
      else if (Peak_Phase) {
        PhaseTransition_clock_AutomaticMode_AutomaticMode =
          SSM_st_PeakTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode;
      }
      else {
        PhaseTransition_clock_AutomaticMode_AutomaticMode =
          SSM_st_LightTrafficPhase_PhaseTransition_AutomaticMode_AutomaticMode;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* AutomaticMode:AutomaticMode:PhaseTransition: */
  switch (PhaseTransition_clock_AutomaticMode_AutomaticMode) {
    case SSM_st_PeakTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode :
      outC->PhaseTransition_state_nxt_AutomaticMode_AutomaticMode =
        SSM_st_PeakTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode;
      outC->TrafficPhase = PEAK_TRAFFIC_PHASE_TrafficLightController;
      break;
    case SSM_st_ModerateTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode :
      outC->PhaseTransition_state_nxt_AutomaticMode_AutomaticMode =
        SSM_st_ModerateTrafficMode_PhaseTransition_AutomaticMode_AutomaticMode;
      outC->TrafficPhase = MODERATE_TRAFFIC_PHASE_TrafficLightController;
      break;
    case SSM_st_LightTrafficPhase_PhaseTransition_AutomaticMode_AutomaticMode :
      outC->PhaseTransition_state_nxt_AutomaticMode_AutomaticMode =
        SSM_st_LightTrafficPhase_PhaseTransition_AutomaticMode_AutomaticMode;
      outC->TrafficPhase = LIGHT_TRAFFIC_PHASE_TrafficLightController;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void AutomaticMode_init_TrafficLightController(
  outC_AutomaticMode_TrafficLightController *outC)
{
  outC->TrafficPhase = LIGHT_TRAFFIC_PHASE_TrafficLightController;
  outC->PhaseTransition_state_nxt_AutomaticMode_AutomaticMode =
    SSM_st_LightTrafficPhase_PhaseTransition_AutomaticMode_AutomaticMode;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AutomaticMode_reset_TrafficLightController(
  outC_AutomaticMode_TrafficLightController *outC)
{
  outC->PhaseTransition_state_nxt_AutomaticMode_AutomaticMode =
    SSM_st_LightTrafficPhase_PhaseTransition_AutomaticMode_AutomaticMode;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AutomaticMode_TrafficLightController.c
** Generation date: 2020-06-09T12:22:14
*************************************************************$ */

