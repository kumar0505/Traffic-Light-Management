/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:37:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EastToNorth_TrafficLightController.h"

/* TrafficLightController::EastToNorth/ */
void EastToNorth_TrafficLightController(
  inC_EastToNorth_TrafficLightController *inC,
  outC_EastToNorth_TrafficLightController *outC)
{
  /* STE: */
  SSM_ST_STE STE_state_act;

  /* _L12=(TrafficLightController::Counter#3)/ */
  Counter_TrafficLightController(
    inC->Time_EtoN - kcg_lit_int8(5),
    &outC->Context_Counter_3);
  /* STE: */
  switch (outC->STE_state_nxt) {
    case SSM_st_Stopping_STE :
      STE_state_act = SSM_st_Stopping_STE;
      break;
    case SSM_st_Running_STE :
      if (outC->Context_Counter_3.rippleClock) {
        STE_state_act = SSM_st_Stopping_STE;
      }
      else {
        STE_state_act = SSM_st_Running_STE;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* STE: */
  switch (STE_state_act) {
    case SSM_st_Stopping_STE :
      /* STE:Stopping:_L9=(TrafficLightController::EastSignal#6)/ */
      EastSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->ER,
        &outC->EG,
        &outC->EY);
      /* STE:Stopping:_L5=(TrafficLightController::SouthSignal#6)/ */
      SouthSignal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        &outC->SR,
        &outC->SG,
        &outC->SY);
      /* STE:Stopping:_L1=(TrafficLightController::NorthSisnal#6)/ */
      NorthSisnal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        &outC->NR,
        &outC->NG,
        &outC->NY);
      outC->STE_state_nxt = SSM_st_Stopping_STE;
      break;
    case SSM_st_Running_STE :
      /* STE:Running:_L9=(TrafficLightController::EastSignal#5)/ */
      EastSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        &outC->ER,
        &outC->EG,
        &outC->EY);
      /* STE:Running:_L5=(TrafficLightController::SouthSignal#5)/ */
      SouthSignal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        &outC->SR,
        &outC->SG,
        &outC->SY);
      /* STE:Running:_L1=(TrafficLightController::NorthSisnal#5)/ */
      NorthSisnal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        &outC->NR,
        &outC->NG,
        &outC->NY);
      outC->STE_state_nxt = SSM_st_Running_STE;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void EastToNorth_init_TrafficLightController(
  outC_EastToNorth_TrafficLightController *outC)
{
  outC->NR = kcg_true;
  outC->NG = kcg_true;
  outC->NY = kcg_true;
  outC->ER = kcg_true;
  outC->EG = kcg_true;
  outC->EY = kcg_true;
  outC->SR = kcg_true;
  outC->SG = kcg_true;
  outC->SY = kcg_true;
  /* _L12=(TrafficLightController::Counter#3)/ */
  Counter_init_TrafficLightController(&outC->Context_Counter_3);
  outC->STE_state_nxt = SSM_st_Running_STE;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EastToNorth_reset_TrafficLightController(
  outC_EastToNorth_TrafficLightController *outC)
{
  /* _L12=(TrafficLightController::Counter#3)/ */
  Counter_reset_TrafficLightController(&outC->Context_Counter_3);
  outC->STE_state_nxt = SSM_st_Running_STE;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EastToNorth_TrafficLightController.c
** Generation date: 2020-06-09T12:37:09
*************************************************************$ */

