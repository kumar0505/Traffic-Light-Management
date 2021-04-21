/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:35:45
*************************************************************$ */
#ifndef _SouthSignal_TrafficLightController_H_
#define _SouthSignal_TrafficLightController_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  int_TrafficLightController /* Input1/, _L2/ */ Input1;
  int_TrafficLightController /* Input2/, _L3/ */ Input2;
  int_TrafficLightController /* Input3/, _L4/ */ Input3;
} inC_SouthSignal_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* @1/ITB_Output/, @1/_L2/, SR/, _L14/ */ SR;
  kcg_bool /* @2/ITB_Output/, @2/_L2/, SG/, _L16/ */ SG;
  kcg_bool /* @3/ITB_Output/, @3/_L2/, SY/, _L15/ */ SY;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SouthSignal_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::SouthSignal/ */
extern void SouthSignal_TrafficLightController(
  inC_SouthSignal_TrafficLightController *inC,
  outC_SouthSignal_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SouthSignal_reset_TrafficLightController(
  outC_SouthSignal_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SouthSignal_init_TrafficLightController(
  outC_SouthSignal_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TrafficLightController::SouthSignal/
  @1: (TrafficLightController::IntToBool#1)
  @2: (TrafficLightController::IntToBool#3)
  @3: (TrafficLightController::IntToBool#2)
*/

#endif /* _SouthSignal_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SouthSignal_TrafficLightController.h
** Generation date: 2020-06-09T12:35:45
*************************************************************$ */

