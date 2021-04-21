/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SouthToEast_TrafficLightController.h"

/* TrafficLightController::SouthToEast/ */
void SouthToEast_TrafficLightController(
  inC_SouthToEast_TrafficLightController *inC,
  outC_SouthToEast_TrafficLightController *outC)
{
  /* STE: */
  SSM_ST_STE STE_state_act;

  /* _L1=(TrafficLightController::Counter#1)/ */
  Counter_TrafficLightController(
    inC->Time_StoE - kcg_lit_int8(5),
    &outC->Context_Counter_1);
  /* STE: */
  switch (outC->STE_state_nxt) {
    case SSM_st_Stopping_STE :
      STE_state_act = SSM_st_Stopping_STE;
      break;
    case SSM_st_Running_STE :
      if (outC->Context_Counter_1.rippleClock) {
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
      /* STE:Stopping:_L9=(TrafficLightController::EastSignal#2)/ */
      EastSignal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        &outC->ER,
        &outC->EG,
        &outC->EY);
      /* STE:Stopping:_L5=(TrafficLightController::SouthSignal#2)/ */
      SouthSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->SR,
        &outC->SG,
        &outC->SY);
      /* STE:Stopping:_L1=(TrafficLightController::NorthSisnal#2)/ */
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
      /* STE:Running:_L9=(TrafficLightController::EastSignal#1)/ */
      EastSignal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        &outC->ER,
        &outC->EG,
        &outC->EY);
      /* STE:Running:_L5=(TrafficLightController::SouthSignal#1)/ */
      SouthSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        &outC->SR,
        &outC->SG,
        &outC->SY);
      /* STE:Running:_L1=(TrafficLightController::NorthSisnal#1)/ */
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
void SouthToEast_init_TrafficLightController(
  outC_SouthToEast_TrafficLightController *outC)
{
  outC->EY = kcg_true;
  outC->EG = kcg_true;
  outC->ER = kcg_true;
  outC->SY = kcg_true;
  outC->SG = kcg_true;
  outC->SR = kcg_true;
  outC->NY = kcg_true;
  outC->NG = kcg_true;
  outC->NR = kcg_true;
  /* _L1=(TrafficLightController::Counter#1)/ */
  Counter_init_TrafficLightController(&outC->Context_Counter_1);
  outC->STE_state_nxt = SSM_st_Running_STE;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SouthToEast_reset_TrafficLightController(
  outC_SouthToEast_TrafficLightController *outC)
{
  /* _L1=(TrafficLightController::Counter#1)/ */
  Counter_reset_TrafficLightController(&outC->Context_Counter_1);
  outC->STE_state_nxt = SSM_st_Running_STE;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SouthToEast_TrafficLightController.c
** Generation date: 2020-06-09T12:39:51
*************************************************************$ */

