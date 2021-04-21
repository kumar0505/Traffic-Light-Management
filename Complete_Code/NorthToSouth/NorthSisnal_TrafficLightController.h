/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:38:48
*************************************************************$ */
#ifndef _NorthSisnal_TrafficLightController_H_
#define _NorthSisnal_TrafficLightController_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* TrafficLightController::NorthSisnal/ */
extern void NorthSisnal_TrafficLightController(
  /* Input1/, _L2/ */
  int_TrafficLightController Input1,
  /* Input2/, _L3/ */
  int_TrafficLightController Input2,
  /* Input3/, _L4/ */
  int_TrafficLightController Input3,
  /* @1/ITB_Output/, @1/_L2/, NR/, _L14/ */
  kcg_bool *NR,
  /* @2/ITB_Output/, @2/_L2/, NG/, _L16/ */
  kcg_bool *NG,
  /* @3/ITB_Output/, @3/_L2/, NY/, _L15/ */
  kcg_bool *NY);

/*
  Expanded instances for: TrafficLightController::NorthSisnal/
  @1: (TrafficLightController::IntToBool#1)
  @2: (TrafficLightController::IntToBool#3)
  @3: (TrafficLightController::IntToBool#2)
*/

#endif /* _NorthSisnal_TrafficLightController_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** NorthSisnal_TrafficLightController.h
** Generation date: 2020-06-09T12:38:48
*************************************************************$ */

