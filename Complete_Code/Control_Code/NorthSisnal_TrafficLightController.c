/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NorthSisnal_TrafficLightController.h"

/* TrafficLightController::NorthSisnal/ */
void NorthSisnal_TrafficLightController(
  /* Input1/, _L2/ */
  int_TrafficLightController Input1,
  /* Input2/, _L3/ */
  int_TrafficLightController Input2,
  /* Input3/, _L4/ */
  int_TrafficLightController Input3,
  /* Input4/, _L5/ */
  int_TrafficLightController Input4,
  /* @1/ITB_Output/, @1/_L2/, NR/, _L14/ */
  kcg_bool *NR,
  /* @2/ITB_Output/, @2/_L2/, NGl/, _L15/ */
  kcg_bool *NGl,
  /* @3/ITB_Output/, @3/_L2/, NGs/, _L16/ */
  kcg_bool *NGs,
  /* @4/ITB_Output/, @4/_L2/, NY/, _L17/ */
  kcg_bool *NY)
{
  /* _L1/ */
  array_int8_4 _L1;

  _L1[0] = Input1;
  _L1[1] = Input2;
  _L1[2] = Input3;
  _L1[3] = Input4;
  *NR = _L1[0] != kcg_lit_int8(0);
  *NGl = _L1[1] != kcg_lit_int8(0);
  *NGs = _L1[2] != kcg_lit_int8(0);
  *NY = _L1[3] != kcg_lit_int8(0);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** NorthSisnal_TrafficLightController.c
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

