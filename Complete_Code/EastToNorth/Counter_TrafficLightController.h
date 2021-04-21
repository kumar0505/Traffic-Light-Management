/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:37:09
*************************************************************$ */
#ifndef _Counter_TrafficLightController_H_
#define _Counter_TrafficLightController_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  int_TrafficLightController /* count/ */ count;
  kcg_bool /* _L6/, rippleClock/ */ rippleClock;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int8 /* _L4/ */ _L4;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Counter_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::Counter/ */
extern void Counter_TrafficLightController(
  /* _L8/, modulo/ */
  int_TrafficLightController modulo,
  outC_Counter_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Counter_reset_TrafficLightController(
  outC_Counter_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Counter_init_TrafficLightController(
  outC_Counter_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Counter_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Counter_TrafficLightController.h
** Generation date: 2020-06-09T12:37:09
*************************************************************$ */

