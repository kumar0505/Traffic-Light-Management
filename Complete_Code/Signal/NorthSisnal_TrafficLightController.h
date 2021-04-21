/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:25:03
*************************************************************$ */
#ifndef _NorthSisnal_TrafficLightController_H_
#define _NorthSisnal_TrafficLightController_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  int_TrafficLightController /* Input1/, _L2/ */ Input1;
  int_TrafficLightController /* Input2/, _L3/ */ Input2;
  int_TrafficLightController /* Input3/, _L4/ */ Input3;
} inC_NorthSisnal_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* @1/ITB_Output/, @1/_L2/, NR/, _L14/ */ NR;
  kcg_bool /* @2/ITB_Output/, @2/_L2/, NG/, _L16/ */ NG;
  kcg_bool /* @3/ITB_Output/, @3/_L2/, NY/, _L15/ */ NY;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_NorthSisnal_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::NorthSisnal/ */
extern void NorthSisnal_TrafficLightController(
  inC_NorthSisnal_TrafficLightController *inC,
  outC_NorthSisnal_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NorthSisnal_reset_TrafficLightController(
  outC_NorthSisnal_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NorthSisnal_init_TrafficLightController(
  outC_NorthSisnal_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TrafficLightController::NorthSisnal/
  @1: (TrafficLightController::IntToBool#1)
  @2: (TrafficLightController::IntToBool#3)
  @3: (TrafficLightController::IntToBool#2)
*/

#endif /* _NorthSisnal_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** NorthSisnal_TrafficLightController.h
** Generation date: 2020-06-09T12:25:03
*************************************************************$ */

