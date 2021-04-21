/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:22:14
*************************************************************$ */
#ifndef _AutomaticMode_TrafficLightController_H_
#define _AutomaticMode_TrafficLightController_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  int_TrafficLightController /* Hour/, _L2/, _L22/, _L44/ */ Hour;
  int_TrafficLightController /* Min/, _L23/, _L3/, _L57/ */ Min;
} inC_AutomaticMode_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TRAFFIC_PHASE_Type_TrafficLightController /* TrafficPhase/ */ TrafficPhase;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_PhaseTransition_AutomaticMode_AutomaticMode /* AutomaticMode:AutomaticMode:PhaseTransition: */ PhaseTransition_state_nxt_AutomaticMode_AutomaticMode;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_AutomaticMode_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::AutomaticMode/ */
extern void AutomaticMode_TrafficLightController(
  inC_AutomaticMode_TrafficLightController *inC,
  outC_AutomaticMode_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AutomaticMode_reset_TrafficLightController(
  outC_AutomaticMode_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AutomaticMode_init_TrafficLightController(
  outC_AutomaticMode_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AutomaticMode_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AutomaticMode_TrafficLightController.h
** Generation date: 2020-06-09T12:22:14
*************************************************************$ */

