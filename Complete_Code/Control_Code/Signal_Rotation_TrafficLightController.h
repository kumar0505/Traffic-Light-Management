/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */
#ifndef _Signal_Rotation_TrafficLightController_H_
#define _Signal_Rotation_TrafficLightController_H_

#include "kcg_types.h"
#include "EastToNorth_TrafficLightController.h"
#include "SouthToEast_TrafficLightController.h"
#include "NorthToSouth_TrafficLightController.h"
#include "Counter_TrafficLightController.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EY/ */ EY;
  kcg_bool /* EGl/ */ EGl;
  kcg_bool /* EGr/ */ EGr;
  kcg_bool /* ER/ */ ER;
  kcg_bool /* SY/ */ SY;
  kcg_bool /* SGs/ */ SGs;
  kcg_bool /* SGr/ */ SGr;
  kcg_bool /* SR/ */ SR;
  kcg_bool /* NY/ */ NY;
  kcg_bool /* NGs/ */ NGs;
  kcg_bool /* NGl/ */ NGl;
  kcg_bool /* NR/ */ NR;
  kcg_bool /* Tout1/, _L3/ */ Tout1;
  kcg_bool /* Tout2/, _L5/ */ Tout2;
  kcg_bool /* Tout3/, _L7/ */ Tout3;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM2_Normal_SM1 /* SM1:Normal:SM2: */ SM2_state_nxt_Normal_SM1;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NorthToSouth_TrafficLightController /* SM1:Normal:SM2:NTS:_L1=(TrafficLightController::NorthToSouth#1)/ */ Context_NorthToSouth_1;
  outC_SouthToEast_TrafficLightController /* SM1:Normal:SM2:STE:_L1=(TrafficLightController::SouthToEast#1)/ */ Context_SouthToEast_1;
  outC_EastToNorth_TrafficLightController /* SM1:Normal:SM2:ETN:_L1=(TrafficLightController::EastToNorth#1)/ */ Context_EastToNorth_1;
  outC_Counter_TrafficLightController /* _L2=(TrafficLightController::Counter#1)/ */ Context_Counter_1;
  outC_Counter_TrafficLightController /* _L4=(TrafficLightController::Counter#2)/ */ Context_Counter_2;
  outC_Counter_TrafficLightController /* _L6=(TrafficLightController::Counter#3)/ */ Context_Counter_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Signal_Rotation_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::Signal_Rotation/ */
extern void Signal_Rotation_TrafficLightController(
  /* Tnts/, _L8/ */
  int_TrafficLightController Tnts,
  /* Tetn/, _L11/ */
  int_TrafficLightController Tetn,
  /* Tste/, _L10/ */
  int_TrafficLightController Tste,
  outC_Signal_Rotation_TrafficLightController *outC);

extern void Signal_Rotation_reset_TrafficLightController(
  outC_Signal_Rotation_TrafficLightController *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Signal_Rotation_init_TrafficLightController(
  outC_Signal_Rotation_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Signal_Rotation_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Signal_Rotation_TrafficLightController.h
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

