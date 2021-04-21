/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */
#ifndef _State_Diagram_TrafficLightController_H_
#define _State_Diagram_TrafficLightController_H_

#include "kcg_types.h"
#include "NorthSisnal_TrafficLightController.h"
#include "SouthtSignal_TrafficLightController.h"
#include "EastSignal_TrafficLightController.h"
#include "Signal_Rotation_TrafficLightController.h"

/* ========================  input structure  ====================== */
typedef struct {
  int_TrafficLightController /* _L1/, _L17/, _L8/, hour/ */ hour;
  int_TrafficLightController /* _L18/, _L2/, _L9/, min/ */ min;
} inC_State_Diagram_TrafficLightController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EY/ */ EY;
  kcg_bool /* EGl/ */ EGl;
  kcg_bool /* EGr/ */ EGr;
  kcg_bool /* ER/ */ ER;
  kcg_bool /* SY/ */ SY;
  kcg_bool /* SGs/ */ SGs;
  kcg_bool /* SGr/ */ SGr;
  kcg_bool /* SR/ */ SR;
  kcg_bool /* NY/ */ NY;
  kcg_bool /* NGs/ */ NGs;
  kcg_bool /* NGl/ */ NGl;
  kcg_bool /* NR/ */ NR;
  kcg_bool /* Normal_Mode/, _L7/ */ Normal_Mode;
  kcg_bool /* Moderate_Mode/, _L15/ */ Moderate_Mode;
  kcg_bool /* Peak_Mode/, _L34/ */ Peak_Mode;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_State_Diagram /* State_Diagram: */ State_Diagram_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Signal_Rotation_TrafficLightController /* State_Diagram:Moderate:_L1=(TrafficLightController::Signal_Rotation#2)/ */ Context_Signal_Rotation_2;
  outC_Signal_Rotation_TrafficLightController /* State_Diagram:peak:_L1=(TrafficLightController::Signal_Rotation#3)/ */ Context_Signal_Rotation_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_State_Diagram_TrafficLightController;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLightController::State_Diagram/ */
extern void State_Diagram_TrafficLightController(
  inC_State_Diagram_TrafficLightController *inC,
  outC_State_Diagram_TrafficLightController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void State_Diagram_reset_TrafficLightController(
  outC_State_Diagram_TrafficLightController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void State_Diagram_init_TrafficLightController(
  outC_State_Diagram_TrafficLightController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _State_Diagram_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** State_Diagram_TrafficLightController.h
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

