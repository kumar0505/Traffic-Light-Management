/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Signal_Rotation_TrafficLightController.h"

/* TrafficLightController::Signal_Rotation/ */
void Signal_Rotation_TrafficLightController(
  /* Tnts/, _L8/ */
  int_TrafficLightController Tnts,
  /* Tetn/, _L11/ */
  int_TrafficLightController Tetn,
  /* Tste/, _L10/ */
  int_TrafficLightController Tste,
  outC_Signal_Rotation_TrafficLightController *outC)
{
  /* SM1:Normal:SM2: */
  SSM_ST_SM2_Normal_SM1 SM2_clock_Normal_SM1;
  /* SM1:Normal:SM2: */
  kcg_bool SM2_reset_act_Normal_SM1;

  /* _L6=(TrafficLightController::Counter#3)/ */
  Counter_TrafficLightController(Tetn, &outC->Context_Counter_3);
  outC->Tout3 = outC->Context_Counter_3.rippleClock;
  /* _L4=(TrafficLightController::Counter#2)/ */
  Counter_TrafficLightController(Tste, &outC->Context_Counter_2);
  outC->Tout2 = outC->Context_Counter_2.rippleClock;
  /* _L2=(TrafficLightController::Counter#1)/ */
  Counter_TrafficLightController(Tnts, &outC->Context_Counter_1);
  outC->Tout1 = outC->Context_Counter_1.rippleClock;
  /* SM1:Normal:SM2: */
  switch (outC->SM2_state_nxt_Normal_SM1) {
    case SSM_st_ETN_SM2_Normal_SM1 :
      SM2_reset_act_Normal_SM1 = outC->Tout3;
      if (outC->Tout3) {
        SM2_clock_Normal_SM1 = SSM_st_NTS_SM2_Normal_SM1;
      }
      else {
        SM2_clock_Normal_SM1 = SSM_st_ETN_SM2_Normal_SM1;
      }
      break;
    case SSM_st_STE_SM2_Normal_SM1 :
      SM2_reset_act_Normal_SM1 = outC->Tout2;
      if (outC->Tout2) {
        SM2_clock_Normal_SM1 = SSM_st_ETN_SM2_Normal_SM1;
      }
      else {
        SM2_clock_Normal_SM1 = SSM_st_STE_SM2_Normal_SM1;
      }
      break;
    case SSM_st_NTS_SM2_Normal_SM1 :
      SM2_reset_act_Normal_SM1 = outC->Tout1;
      if (outC->Tout1) {
        SM2_clock_Normal_SM1 = SSM_st_STE_SM2_Normal_SM1;
      }
      else {
        SM2_clock_Normal_SM1 = SSM_st_NTS_SM2_Normal_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1:Normal:SM2: */
  switch (SM2_clock_Normal_SM1) {
    case SSM_st_ETN_SM2_Normal_SM1 :
      outC->SM2_state_nxt_Normal_SM1 = SSM_st_ETN_SM2_Normal_SM1;
      if (SM2_reset_act_Normal_SM1) {
        /* SM1:Normal:SM2:ETN:_L1=(TrafficLightController::EastToNorth#1)/ */
        EastToNorth_reset_TrafficLightController(&outC->Context_EastToNorth_1);
      }
      /* SM1:Normal:SM2:ETN:_L1=(TrafficLightController::EastToNorth#1)/ */
      EastToNorth_TrafficLightController(Tetn, &outC->Context_EastToNorth_1);
      outC->NR = outC->Context_EastToNorth_1.NR;
      outC->NGl = outC->Context_EastToNorth_1.NGl;
      outC->NGs = outC->Context_EastToNorth_1.NGs;
      outC->NY = outC->Context_EastToNorth_1.NY;
      outC->SR = outC->Context_EastToNorth_1.SR;
      outC->SGr = outC->Context_EastToNorth_1.SGr;
      outC->SGs = outC->Context_EastToNorth_1.SGs;
      outC->SY = outC->Context_EastToNorth_1.SY;
      outC->ER = outC->Context_EastToNorth_1.ER;
      outC->EGr = outC->Context_EastToNorth_1.EGr;
      outC->EGl = outC->Context_EastToNorth_1.EGl;
      outC->EY = outC->Context_EastToNorth_1.EY;
      break;
    case SSM_st_STE_SM2_Normal_SM1 :
      outC->SM2_state_nxt_Normal_SM1 = SSM_st_STE_SM2_Normal_SM1;
      if (SM2_reset_act_Normal_SM1) {
        /* SM1:Normal:SM2:STE:_L1=(TrafficLightController::SouthToEast#1)/ */
        SouthToEast_reset_TrafficLightController(&outC->Context_SouthToEast_1);
      }
      /* SM1:Normal:SM2:STE:_L1=(TrafficLightController::SouthToEast#1)/ */
      SouthToEast_TrafficLightController(Tste, &outC->Context_SouthToEast_1);
      outC->NR = outC->Context_SouthToEast_1.NR;
      outC->NGl = outC->Context_SouthToEast_1.NGl;
      outC->NGs = outC->Context_SouthToEast_1.NGs;
      outC->NY = outC->Context_SouthToEast_1.NY;
      outC->SR = outC->Context_SouthToEast_1.SR;
      outC->SGr = outC->Context_SouthToEast_1.SGr;
      outC->SGs = outC->Context_SouthToEast_1.SGs;
      outC->SY = outC->Context_SouthToEast_1.SY;
      outC->ER = outC->Context_SouthToEast_1.ER;
      outC->EGr = outC->Context_SouthToEast_1.EGr;
      outC->EGl = outC->Context_SouthToEast_1.EGl;
      outC->EY = outC->Context_SouthToEast_1.EY;
      break;
    case SSM_st_NTS_SM2_Normal_SM1 :
      outC->SM2_state_nxt_Normal_SM1 = SSM_st_NTS_SM2_Normal_SM1;
      if (SM2_reset_act_Normal_SM1) {
        /* SM1:Normal:SM2:NTS:_L1=(TrafficLightController::NorthToSouth#1)/ */
        NorthToSouth_reset_TrafficLightController(
          &outC->Context_NorthToSouth_1);
      }
      /* SM1:Normal:SM2:NTS:_L1=(TrafficLightController::NorthToSouth#1)/ */
      NorthToSouth_TrafficLightController(Tnts, &outC->Context_NorthToSouth_1);
      outC->NR = outC->Context_NorthToSouth_1.NR;
      outC->NGl = outC->Context_NorthToSouth_1.NGl;
      outC->NGs = outC->Context_NorthToSouth_1.NGs;
      outC->NY = outC->Context_NorthToSouth_1.NY;
      outC->SR = outC->Context_NorthToSouth_1.SR;
      outC->SGr = outC->Context_NorthToSouth_1.SGr;
      outC->SGs = outC->Context_NorthToSouth_1.SGs;
      outC->SY = outC->Context_NorthToSouth_1.SY;
      outC->ER = outC->Context_NorthToSouth_1.ER;
      outC->EGr = outC->Context_NorthToSouth_1.EGr;
      outC->EGl = outC->Context_NorthToSouth_1.EGl;
      outC->EY = outC->Context_NorthToSouth_1.EY;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Signal_Rotation_init_TrafficLightController(
  outC_Signal_Rotation_TrafficLightController *outC)
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
  outC->Tout1 = kcg_true;
  outC->Tout2 = kcg_true;
  outC->Tout3 = kcg_true;
  /* SM1:Normal:SM2:NTS:_L1=(TrafficLightController::NorthToSouth#1)/ */
  NorthToSouth_init_TrafficLightController(&outC->Context_NorthToSouth_1);
  /* SM1:Normal:SM2:STE:_L1=(TrafficLightController::SouthToEast#1)/ */
  SouthToEast_init_TrafficLightController(&outC->Context_SouthToEast_1);
  /* SM1:Normal:SM2:ETN:_L1=(TrafficLightController::EastToNorth#1)/ */
  EastToNorth_init_TrafficLightController(&outC->Context_EastToNorth_1);
  /* _L2=(TrafficLightController::Counter#1)/ */
  Counter_init_TrafficLightController(&outC->Context_Counter_1);
  /* _L4=(TrafficLightController::Counter#2)/ */
  Counter_init_TrafficLightController(&outC->Context_Counter_2);
  /* _L6=(TrafficLightController::Counter#3)/ */
  Counter_init_TrafficLightController(&outC->Context_Counter_3);
  outC->SM2_state_nxt_Normal_SM1 = SSM_st_NTS_SM2_Normal_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void Signal_Rotation_reset_TrafficLightController(
  outC_Signal_Rotation_TrafficLightController *outC)
{
  /* SM1:Normal:SM2:NTS:_L1=(TrafficLightController::NorthToSouth#1)/ */
  NorthToSouth_reset_TrafficLightController(&outC->Context_NorthToSouth_1);
  /* SM1:Normal:SM2:STE:_L1=(TrafficLightController::SouthToEast#1)/ */
  SouthToEast_reset_TrafficLightController(&outC->Context_SouthToEast_1);
  /* SM1:Normal:SM2:ETN:_L1=(TrafficLightController::EastToNorth#1)/ */
  EastToNorth_reset_TrafficLightController(&outC->Context_EastToNorth_1);
  /* _L2=(TrafficLightController::Counter#1)/ */
  Counter_reset_TrafficLightController(&outC->Context_Counter_1);
  /* _L4=(TrafficLightController::Counter#2)/ */
  Counter_reset_TrafficLightController(&outC->Context_Counter_2);
  /* _L6=(TrafficLightController::Counter#3)/ */
  Counter_reset_TrafficLightController(&outC->Context_Counter_3);
  outC->SM2_state_nxt_Normal_SM1 = SSM_st_NTS_SM2_Normal_SM1;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Signal_Rotation_TrafficLightController.c
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

