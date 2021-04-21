/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:45:14
*************************************************************$ */
#ifndef _ModeTransition_TrafficLightController_H_
#define _ModeTransition_TrafficLightController_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* AutoMode/ */ AutoMode;
  kcg_bool /* ManualMode/ */ ManualMode;
} inC_ModeTransition_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TRAFFIC_MODE_Type_TrafficLightController /* MODE/ */ MODE;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_ModeTransition /* ModeTransition: */ ModeTransition_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ModeTransition_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::ModeTransition/ */
extern void ModeTransition_TrafficLightController(
  inC_ModeTransition_TrafficLightController *inC,
  outC_ModeTransition_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ModeTransition_reset_TrafficLightController(
  outC_ModeTransition_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ModeTransition_init_TrafficLightController(
  outC_ModeTransition_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ModeTransition_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ModeTransition_TrafficLightController.h
** Generation date: 2020-06-09T12:45:14
*************************************************************$ */

