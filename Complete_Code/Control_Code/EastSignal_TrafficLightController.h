/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */
#ifndef _EastSignal_TrafficLightController_H_
#define _EastSignal_TrafficLightController_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* TrafficLightController::EastSignal/ */
extern void EastSignal_TrafficLightController(
  /* Input1/, _L9/ */
  int_TrafficLightController Input1,
  /* Input2/, _L23/ */
  int_TrafficLightController Input2,
  /* Input3/, _L24/ */
  int_TrafficLightController Input3,
  /* Input4/, _L39/ */
  int_TrafficLightController Input4,
  /* @1/ITB_Output/, @1/_L2/, ER/, _L20/ */
  kcg_bool *ER,
  /* @2/ITB_Output/, @2/_L2/, EGr/, _L21/ */
  kcg_bool *EGr,
  /* @3/ITB_Output/, @3/_L2/, EGl/, _L22/ */
  kcg_bool *EGl,
  /* @4/ITB_Output/, @4/_L2/, EY/, _L40/ */
  kcg_bool *EY);

/*
  Expanded instances for: TrafficLightController::EastSignal/
  @1: (TrafficLightController::IntToBool#4)
  @2: (TrafficLightController::IntToBool#5)
  @3: (TrafficLightController::IntToBool#6)
  @4: (TrafficLightController::IntToBool#7)
*/

#endif /* _EastSignal_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EastSignal_TrafficLightController.h
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

