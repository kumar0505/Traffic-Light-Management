/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NorthToSouth_TrafficLightController.h"

/* TrafficLightController::NorthToSouth/ */
void NorthToSouth_TrafficLightController(
  /* Tnts/, _L5/ */
  int_TrafficLightController Tnts,
  outC_NorthToSouth_TrafficLightController *outC)
{
  /* NTS: */
  SSM_ST_NTS NTS_state_act;

  /* _L1=(TrafficLightController::Counter#1)/ */
  Counter_TrafficLightController(
    Tnts - kcg_lit_int8(5),
    &outC->Context_Counter_1);
  /* NTS: */
  switch (outC->NTS_state_nxt) {
    case SSM_st_Stopping_NTS :
      NTS_state_act = SSM_st_Stopping_NTS;
      break;
    case SSM_st_Running_NTS :
      if (outC->Context_Counter_1.rippleClock) {
        NTS_state_act = SSM_st_Stopping_NTS;
      }
      else {
        NTS_state_act = SSM_st_Running_NTS;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* NTS: */
  switch (NTS_state_act) {
    case SSM_st_Stopping_NTS :
      /* NTS:Stopping:_L9=(TrafficLightController::EastSignal#3)/ */
      EastSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->ER,
        &outC->EGr,
        &outC->EGl,
        &outC->EY);
      /* NTS:Stopping:_L5=(TrafficLightController::SouthtSignal#2)/ */
      SouthtSignal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->SR,
        &outC->SGr,
        &outC->SGs,
        &outC->SY);
      /* NTS:Stopping:_L1=(TrafficLightController::NorthSisnal#2)/ */
      NorthSisnal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(1),
        kcg_lit_int8(1),
        kcg_lit_int8(1),
        &outC->NR,
        &outC->NGl,
        &outC->NGs,
        &outC->NY);
      outC->NTS_state_nxt = SSM_st_Stopping_NTS;
      break;
    case SSM_st_Running_NTS :
      /* NTS:Running:_L9=(TrafficLightController::EastSignal#1)/ */
      EastSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->ER,
        &outC->EGr,
        &outC->EGl,
        &outC->EY);
      /* NTS:Running:_L5=(TrafficLightController::SouthtSignal#1)/ */
      SouthtSignal_TrafficLightController(
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->SR,
        &outC->SGr,
        &outC->SGs,
        &outC->SY);
      /* NTS:Running:_L1=(TrafficLightController::NorthSisnal#1)/ */
      NorthSisnal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        kcg_lit_int8(1),
        kcg_lit_int8(0),
        &outC->NR,
        &outC->NGl,
        &outC->NGs,
        &outC->NY);
      outC->NTS_state_nxt = SSM_st_Running_NTS;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void NorthToSouth_init_TrafficLightController(
  outC_NorthToSouth_TrafficLightController *outC)
{
  outC->NR = kcg_true;
  outC->NGl = kcg_true;
  outC->NGs = kcg_true;
  outC->NY = kcg_true;
  outC->SR = kcg_true;
  outC->SGr = kcg_true;
  outC->SGs = kcg_true;
  outC->SY = kcg_true;
  outC->ER = kcg_true;
  outC->EGr = kcg_true;
  outC->EGl = kcg_true;
  outC->EY = kcg_true;
  /* _L1=(TrafficLightController::Counter#1)/ */
  Counter_init_TrafficLightController(&outC->Context_Counter_1);
  outC->NTS_state_nxt = SSM_st_Running_NTS;
}
#endif /* KCG_USER_DEFINED_INIT */


void NorthToSouth_reset_TrafficLightController(
  outC_NorthToSouth_TrafficLightController *outC)
{
  /* _L1=(TrafficLightController::Counter#1)/ */
  Counter_reset_TrafficLightController(&outC->Context_Counter_1);
  outC->NTS_state_nxt = SSM_st_Running_NTS;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** NorthToSouth_TrafficLightController.c
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

