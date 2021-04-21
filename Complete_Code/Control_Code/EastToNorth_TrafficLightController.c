/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EastToNorth_TrafficLightController.h"

/* TrafficLightController::EastToNorth/ */
void EastToNorth_TrafficLightController(
  /* Tetn/, _L6/ */
  int_TrafficLightController Tetn,
  outC_EastToNorth_TrafficLightController *outC)
{
  /* NTE: */
  SSM_ST_NTE NTE_state_act;

  /* _L2=(TrafficLightController::Counter#1)/ */
  Counter_TrafficLightController(
    Tetn - kcg_lit_int8(5),
    &outC->Context_Counter_1);
  /* NTE: */
  switch (outC->NTE_state_nxt) {
    case SSM_st_Stopping_NTE :
      NTE_state_act = SSM_st_Stopping_NTE;
      break;
    case SSM_st_Running_NTE :
      if (outC->Context_Counter_1.rippleClock) {
        NTE_state_act = SSM_st_Stopping_NTE;
      }
      else {
        NTE_state_act = SSM_st_Running_NTE;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* NTE: */
  switch (NTE_state_act) {
    case SSM_st_Stopping_NTE :
      /* NTE:Stopping:_L9=(TrafficLightController::EastSignal#2)/ */
      EastSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(1),
        &outC->ER,
        &outC->EGr,
        &outC->EGl,
        &outC->EY);
      /* NTE:Stopping:_L5=(TrafficLightController::SouthtSignal#2)/ */
      SouthtSignal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->SR,
        &outC->SGr,
        &outC->SGs,
        &outC->SY);
      /* NTE:Stopping:_L1=(TrafficLightController::NorthSisnal#2)/ */
      NorthSisnal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        &outC->NR,
        &outC->NGl,
        &outC->NGs,
        &outC->NY);
      outC->NTE_state_nxt = SSM_st_Stopping_NTE;
      break;
    case SSM_st_Running_NTE :
      /* NTE:Running:_L9=(TrafficLightController::EastSignal#1)/ */
      EastSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->ER,
        &outC->EGr,
        &outC->EGl,
        &outC->EY);
      /* NTE:Running:_L5=(TrafficLightController::SouthtSignal#1)/ */
      SouthtSignal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->SR,
        &outC->SGr,
        &outC->SGs,
        &outC->SY);
      /* NTE:Running:_L1=(TrafficLightController::NorthSisnal#1)/ */
      NorthSisnal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        &outC->NR,
        &outC->NGl,
        &outC->NGs,
        &outC->NY);
      outC->NTE_state_nxt = SSM_st_Running_NTE;
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
  outC->EY = kcg_true;
  outC->EGl = kcg_true;
  outC->EGr = kcg_true;
  outC->ER = kcg_true;
  outC->SY = kcg_true;
  outC->SGs = kcg_true;
  outC->SGr = kcg_true;
  outC->SR = kcg_true;
  outC->NY = kcg_true;
  outC->NGs = kcg_true;
  outC->NGl = kcg_true;
  outC->NR = kcg_true;
  /* _L2=(TrafficLightController::Counter#1)/ */
  Counter_init_TrafficLightController(&outC->Context_Counter_1);
  outC->NTE_state_nxt = SSM_st_Running_NTE;
}
#endif /* KCG_USER_DEFINED_INIT */


void EastToNorth_reset_TrafficLightController(
  outC_EastToNorth_TrafficLightController *outC)
{
  /* _L2=(TrafficLightController::Counter#1)/ */
  Counter_reset_TrafficLightController(&outC->Context_Counter_1);
  outC->NTE_state_nxt = SSM_st_Running_NTE;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EastToNorth_TrafficLightController.c
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

