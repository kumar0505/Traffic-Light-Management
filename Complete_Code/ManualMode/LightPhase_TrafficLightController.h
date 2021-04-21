/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:42:11
*************************************************************$ */
#ifndef _LightPhase_TrafficLightController_H_
#define _LightPhase_TrafficLightController_H_

#include "kcg_types.h"
#include "NorthSisnal_TrafficLightController.h"
#include "EastSignal_TrafficLightController.h"
#include "SouthSignal_TrafficLightController.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ER/, PeakPhase:Running:_L4/ */ ER;
  kcg_bool /* EG/, PeakPhase:Running:_L5/ */ EG;
  kcg_bool /* EY/, PeakPhase:Running:_L6/ */ EY;
  kcg_bool /* NR/, PeakPhase:Running:_L7/ */ NR;
  kcg_bool /* NG/, PeakPhase:Running:_L8/ */ NG;
  kcg_bool /* NY/, PeakPhase:Running:_L9/ */ NY;
  kcg_bool /* PeakPhase:Running:_L1/, SR/ */ SR;
  kcg_bool /* PeakPhase:Running:_L2/, SG/ */ SG;
  kcg_bool /* PeakPhase:Running:_L3/, SY/ */ SY;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_LightPhase_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::LightPhase/ */
extern void LightPhase_TrafficLightController(
  outC_LightPhase_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LightPhase_reset_TrafficLightController(
  outC_LightPhase_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LightPhase_init_TrafficLightController(
  outC_LightPhase_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LightPhase_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** LightPhase_TrafficLightController.h
** Generation date: 2020-06-09T12:42:11
*************************************************************$ */

