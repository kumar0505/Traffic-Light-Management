/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:43:39
*************************************************************$ */
#ifndef _ManualMode_TrafficLightController_H_
#define _ManualMode_TrafficLightController_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* Press_N_to_S/ */ Press_N_to_S;
  kcg_bool /* Press_S_to_E/ */ Press_S_to_E;
  kcg_bool /* Press_E_to_N/ */ Press_E_to_N;
} inC_ManualMode_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MANUAL_SIGNAL_TYPE_TrafficLightController /* Signal_Set/ */ Signal_Set;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_ManualMode /* ManualMode: */ ManualMode_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ManualMode_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::ManualMode/ */
extern void ManualMode_TrafficLightController(
  inC_ManualMode_TrafficLightController *inC,
  outC_ManualMode_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ManualMode_reset_TrafficLightController(
  outC_ManualMode_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ManualMode_init_TrafficLightController(
  outC_ManualMode_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ManualMode_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ManualMode_TrafficLightController.h
** Generation date: 2020-06-09T12:43:39
*************************************************************$ */

