/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */
#ifndef _EastToNorth_TrafficLightController_H_
#define _EastToNorth_TrafficLightController_H_

#include "kcg_types.h"
#include "NorthSisnal_TrafficLightController.h"
#include "SouthtSignal_TrafficLightController.h"
#include "EastSignal_TrafficLightController.h"
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
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_NTE /* NTE: */ NTE_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_TrafficLightController /* _L2=(TrafficLightController::Counter#1)/ */ Context_Counter_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_EastToNorth_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::EastToNorth/ */
extern void EastToNorth_TrafficLightController(
  /* Tetn/, _L6/ */
  int_TrafficLightController Tetn,
  outC_EastToNorth_TrafficLightController *outC);

extern void EastToNorth_reset_TrafficLightController(
  outC_EastToNorth_TrafficLightController *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void EastToNorth_init_TrafficLightController(
  outC_EastToNorth_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EastToNorth_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EastToNorth_TrafficLightController.h
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

