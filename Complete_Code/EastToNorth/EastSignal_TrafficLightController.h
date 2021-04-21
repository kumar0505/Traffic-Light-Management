/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:37:09
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
  /* @1/ITB_Output/, @1/_L2/, ER/, _L20/ */
  kcg_bool *ER,
  /* @2/ITB_Output/, @2/_L2/, EG/, _L22/ */
  kcg_bool *EG,
  /* @3/ITB_Output/, @3/_L2/, EY/, _L21/ */
  kcg_bool *EY);

/*
  Expanded instances for: TrafficLightController::EastSignal/
  @1: (TrafficLightController::IntToBool#4)
  @2: (TrafficLightController::IntToBool#6)
  @3: (TrafficLightController::IntToBool#5)
*/

#endif /* _EastSignal_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EastSignal_TrafficLightController.h
** Generation date: 2020-06-09T12:37:09
*************************************************************$ */

