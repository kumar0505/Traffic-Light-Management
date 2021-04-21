/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:37:09
*************************************************************$ */
#ifndef _EastToNorth_TrafficLightController_H_
#define _EastToNorth_TrafficLightController_H_

#include "kcg_types.h"
#include "EastSignal_TrafficLightController.h"
#include "SouthSignal_TrafficLightController.h"
#include "NorthSisnal_TrafficLightController.h"
#include "Counter_TrafficLightController.h"

/* ========================  input structure  ====================== */
typedef struct {
  int_TrafficLightController /* Time_EtoN/, _L16/ */ Time_EtoN;
} inC_EastToNorth_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* NR/ */ NR;
  kcg_bool /* NG/ */ NG;
  kcg_bool /* NY/ */ NY;
  kcg_bool /* ER/ */ ER;
  kcg_bool /* EG/ */ EG;
  kcg_bool /* EY/ */ EY;
  kcg_bool /* SR/ */ SR;
  kcg_bool /* SG/ */ SG;
  kcg_bool /* SY/ */ SY;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_STE /* STE: */ STE_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_TrafficLightController /* _L12=(TrafficLightController::Counter#3)/ */ Context_Counter_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_EastToNorth_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::EastToNorth/ */
extern void EastToNorth_TrafficLightController(
  inC_EastToNorth_TrafficLightController *inC,
  outC_EastToNorth_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EastToNorth_reset_TrafficLightController(
  outC_EastToNorth_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EastToNorth_init_TrafficLightController(
  outC_EastToNorth_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EastToNorth_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EastToNorth_TrafficLightController.h
** Generation date: 2020-06-09T12:37:09
*************************************************************$ */

