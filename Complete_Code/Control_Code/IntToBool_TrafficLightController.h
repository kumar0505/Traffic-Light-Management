/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:08:40
*************************************************************$ */
#ifndef _IntToBool_TrafficLightController_H_
#define _IntToBool_TrafficLightController_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  int_TrafficLightController /* ITB_Input/, _L1/ */ ITB_Input;
} inC_IntToBool_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ITB_Output/, _L2/ */ ITB_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_IntToBool_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::IntToBool/ */
extern void IntToBool_TrafficLightController(
  inC_IntToBool_TrafficLightController *inC,
  outC_IntToBool_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void IntToBool_reset_TrafficLightController(
  outC_IntToBool_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void IntToBool_init_TrafficLightController(
  outC_IntToBool_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _IntToBool_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** IntToBool_TrafficLightController.h
** Generation date: 2020-05-21T13:08:40
*************************************************************$ */

