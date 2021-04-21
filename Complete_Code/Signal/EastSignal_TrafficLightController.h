/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:24:33
*************************************************************$ */
#ifndef _EastSignal_TrafficLightController_H_
#define _EastSignal_TrafficLightController_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  int_TrafficLightController /* Input1/, _L9/ */ Input1;
  int_TrafficLightController /* Input2/, _L23/ */ Input2;
  int_TrafficLightController /* Input3/, _L24/ */ Input3;
} inC_EastSignal_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* @1/ITB_Output/, @1/_L2/, ER/, _L20/ */ ER;
  kcg_bool /* @2/ITB_Output/, @2/_L2/, EG/, _L22/ */ EG;
  kcg_bool /* @3/ITB_Output/, @3/_L2/, EY/, _L21/ */ EY;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_EastSignal_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::EastSignal/ */
extern void EastSignal_TrafficLightController(
  inC_EastSignal_TrafficLightController *inC,
  outC_EastSignal_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EastSignal_reset_TrafficLightController(
  outC_EastSignal_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EastSignal_init_TrafficLightController(
  outC_EastSignal_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TrafficLightController::EastSignal/
  @1: (TrafficLightController::IntToBool#4)
  @2: (TrafficLightController::IntToBool#6)
  @3: (TrafficLightController::IntToBool#5)
*/

#endif /* _EastSignal_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EastSignal_TrafficLightController.h
** Generation date: 2020-06-09T12:24:33
*************************************************************$ */

