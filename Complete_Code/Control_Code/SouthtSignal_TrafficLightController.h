/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */
#ifndef _SouthtSignal_TrafficLightController_H_
#define _SouthtSignal_TrafficLightController_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* TrafficLightController::SouthtSignal/ */
extern void SouthtSignal_TrafficLightController(
  /* Input1/, _L2/ */
  int_TrafficLightController Input1,
  /* Input2/, _L3/ */
  int_TrafficLightController Input2,
  /* Input3/, _L4/ */
  int_TrafficLightController Input3,
  /* Input4/, _L5/ */
  int_TrafficLightController Input4,
  /* @1/ITB_Output/, @1/_L2/, SR/, _L14/ */
  kcg_bool *SR,
  /* @2/ITB_Output/, @2/_L2/, SGr/, _L15/ */
  kcg_bool *SGr,
  /* @3/ITB_Output/, @3/_L2/, SGs/, _L16/ */
  kcg_bool *SGs,
  /* @4/ITB_Output/, @4/_L2/, SY/, _L17/ */
  kcg_bool *SY);

/*
  Expanded instances for: TrafficLightController::SouthtSignal/
  @1: (TrafficLightController::IntToBool#1)
  @2: (TrafficLightController::IntToBool#2)
  @3: (TrafficLightController::IntToBool#3)
  @4: (TrafficLightController::IntToBool#4)
*/

#endif /* _SouthtSignal_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SouthtSignal_TrafficLightController.h
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

