/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */
#include<iostream>
#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "State_Diagram_TrafficLightController.h"

using namespace std;


int main()   {

/* TrafficLightController::State_Diagram/ */
void State_Diagram_TrafficLightController(
  inC_State_Diagram_TrafficLightController *inC,
  outC_State_Diagram_TrafficLightController *outC)
{
  /* State_Diagram: */
  SSM_ST_State_Diagram State_Diagram_state_act;
  /* State_Diagram: */
  kcg_bool State_Diagram_reset_act;

  outC->Peak_Mode = ((inC->hour >= kcg_lit_int8(7)) & (inC->min >= kcg_lit_int8(
          30))) | ((inC->hour >= kcg_lit_int8(16)) & (inC->min >= kcg_lit_int8(
          30)));
  outC->Moderate_Mode = ((inC->hour >= kcg_lit_int8(10)) & (inC->min >=
        kcg_lit_int8(30))) | ((inC->hour >= kcg_lit_int8(19)) & (inC->min >=
        kcg_lit_int8(30)));
  outC->Normal_Mode = (inC->hour >= kcg_lit_int8(23)) & (inC->min >=
      kcg_lit_int8(0));
  /* State_Diagram: */
  switch (outC->State_Diagram_state_nxt) {
    case SSM_st_peak_State_Diagram :
      if (outC->Moderate_Mode) {
        State_Diagram_state_act = SSM_st_Moderate_State_Diagram;
      }
      else if (outC->Normal_Mode) {
        State_Diagram_state_act = SSM_st_Normal_State_Diagram;
      }
      else {
        State_Diagram_state_act = SSM_st_peak_State_Diagram;
      }
      State_Diagram_reset_act = outC->Moderate_Mode | outC->Normal_Mode;
      break;
    case SSM_st_Moderate_State_Diagram :
      if (outC->Normal_Mode) {
        State_Diagram_state_act = SSM_st_Normal_State_Diagram;
      }
      else if (outC->Peak_Mode) {
        State_Diagram_state_act = SSM_st_peak_State_Diagram;
      }
      else {
        State_Diagram_state_act = SSM_st_Moderate_State_Diagram;
      }
      State_Diagram_reset_act = outC->Normal_Mode | outC->Peak_Mode;
      break;
    case SSM_st_Normal_State_Diagram :
      if (outC->Moderate_Mode) {
        State_Diagram_state_act = SSM_st_Moderate_State_Diagram;
      }
      else if (outC->Peak_Mode) {
        State_Diagram_state_act = SSM_st_peak_State_Diagram;
      }
      else {
        State_Diagram_state_act = SSM_st_Normal_State_Diagram;
      }
      State_Diagram_reset_act = outC->Moderate_Mode | outC->Peak_Mode;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* State_Diagram: */
  switch (State_Diagram_state_act) {
    case SSM_st_peak_State_Diagram :
      if (State_Diagram_reset_act) {
        /* State_Diagram:peak:_L1=(TrafficLightController::Signal_Rotation#3)/ */
        Signal_Rotation_reset_TrafficLightController(
          &outC->Context_Signal_Rotation_3);
      }
      /* State_Diagram:peak:_L1=(TrafficLightController::Signal_Rotation#3)/ */
      Signal_Rotation_TrafficLightController(
        kcg_lit_int8(115),
        kcg_lit_int8(25),
        kcg_lit_int8(25),
        &outC->Context_Signal_Rotation_3);
      outC->EY = outC->Context_Signal_Rotation_3.EY;
      outC->EGl = outC->Context_Signal_Rotation_3.EGl;
      outC->EGr = outC->Context_Signal_Rotation_3.EGr;
      outC->ER = outC->Context_Signal_Rotation_3.ER;
      outC->SY = outC->Context_Signal_Rotation_3.SY;
      outC->SGs = outC->Context_Signal_Rotation_3.SGs;
      outC->SGr = outC->Context_Signal_Rotation_3.SGr;
      outC->SR = outC->Context_Signal_Rotation_3.SR;
      outC->NY = outC->Context_Signal_Rotation_3.NY;
      outC->NGs = outC->Context_Signal_Rotation_3.NGs;
      outC->NGl = outC->Context_Signal_Rotation_3.NGl;
      outC->NR = outC->Context_Signal_Rotation_3.NR;
      outC->State_Diagram_state_nxt = SSM_st_peak_State_Diagram;
      break;
    case SSM_st_Moderate_State_Diagram :
      if (State_Diagram_reset_act) {
        /* State_Diagram:Moderate:_L1=(TrafficLightController::Signal_Rotation#2)/ */
        Signal_Rotation_reset_TrafficLightController(
          &outC->Context_Signal_Rotation_2);
      }
      /* State_Diagram:Moderate:_L1=(TrafficLightController::Signal_Rotation#2)/ */
      Signal_Rotation_TrafficLightController(
        kcg_lit_int8(55),
        kcg_lit_int8(25),
        kcg_lit_int8(25),
        &outC->Context_Signal_Rotation_2);
      outC->EY = outC->Context_Signal_Rotation_2.EY;
      outC->EGl = outC->Context_Signal_Rotation_2.EGl;
      outC->EGr = outC->Context_Signal_Rotation_2.EGr;
      outC->ER = outC->Context_Signal_Rotation_2.ER;
      outC->SY = outC->Context_Signal_Rotation_2.SY;
      outC->SGs = outC->Context_Signal_Rotation_2.SGs;
      outC->SGr = outC->Context_Signal_Rotation_2.SGr;
      outC->SR = outC->Context_Signal_Rotation_2.SR;
      outC->NY = outC->Context_Signal_Rotation_2.NY;
      outC->NGs = outC->Context_Signal_Rotation_2.NGs;
      outC->NGl = outC->Context_Signal_Rotation_2.NGl;
      outC->NR = outC->Context_Signal_Rotation_2.NR;
      outC->State_Diagram_state_nxt = SSM_st_Moderate_State_Diagram;
      break;
    case SSM_st_Normal_State_Diagram :
      /* State_Diagram:Normal:_L9=(TrafficLightController::NorthSisnal#1)/ */
      NorthSisnal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        &outC->NR,
        &outC->NGl,
        &outC->NGs,
        &outC->NY);
      /* State_Diagram:Normal:_L5=(TrafficLightController::SouthtSignal#1)/ */
      SouthtSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        &outC->SR,
        &outC->SGr,
        &outC->SGs,
        &outC->SY);
      /* State_Diagram:Normal:_L1=(TrafficLightController::EastSignal#1)/ */
      EastSignal_TrafficLightController(
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(0),
        kcg_lit_int8(1),
        &outC->ER,
        &outC->EGr,
        &outC->EGl,
        &outC->EY);
      outC->State_Diagram_state_nxt = SSM_st_Normal_State_Diagram;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void State_Diagram_init_TrafficLightController(
  outC_State_Diagram_TrafficLightController *outC)
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
  outC->Normal_Mode = kcg_true;
  outC->Moderate_Mode = kcg_true;
  outC->Peak_Mode = kcg_true;
  /* State_Diagram:Moderate:_L1=(TrafficLightController::Signal_Rotation#2)/ */
  Signal_Rotation_init_TrafficLightController(&outC->Context_Signal_Rotation_2);
  /* State_Diagram:peak:_L1=(TrafficLightController::Signal_Rotation#3)/ */
  Signal_Rotation_init_TrafficLightController(&outC->Context_Signal_Rotation_3);
  outC->State_Diagram_state_nxt = SSM_st_Moderate_State_Diagram;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void State_Diagram_reset_TrafficLightController(
  outC_State_Diagram_TrafficLightController *outC)
{
  /* State_Diagram:Moderate:_L1=(TrafficLightController::Signal_Rotation#2)/ */
  Signal_Rotation_reset_TrafficLightController(
    &outC->Context_Signal_Rotation_2);
  /* State_Diagram:peak:_L1=(TrafficLightController::Signal_Rotation#3)/ */
  Signal_Rotation_reset_TrafficLightController(
    &outC->Context_Signal_Rotation_3);
  outC->State_Diagram_state_nxt = SSM_st_Moderate_State_Diagram;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

}

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** State_Diagram_TrafficLightController.c
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

