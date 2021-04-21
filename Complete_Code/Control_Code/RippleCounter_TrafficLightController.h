/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:09:45
*************************************************************$ */
#ifndef _RippleCounter_TrafficLightController_H_
#define _RippleCounter_TrafficLightController_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  int_TrafficLightController /* _L4/, modulo/ */ modulo;
  kcg_bool /* Incr/, _L9/ */ Incr;
} inC_RippleCounter_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* _L8/, rippleClock/ */ rippleClock;
  int_TrafficLightController /* count/ */ count;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int8 /* _L5/ */ _L5;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RippleCounter_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::RippleCounter/ */
extern void RippleCounter_TrafficLightController(
  inC_RippleCounter_TrafficLightController *inC,
  outC_RippleCounter_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RippleCounter_reset_TrafficLightController(
  outC_RippleCounter_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RippleCounter_init_TrafficLightController(
  outC_RippleCounter_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RippleCounter_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** RippleCounter_TrafficLightController.h
** Generation date: 2020-05-21T13:09:45
*************************************************************$ */

