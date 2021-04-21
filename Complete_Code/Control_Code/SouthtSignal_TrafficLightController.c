/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SouthtSignal_TrafficLightController.h"

/* TrafficLightController::SouthtSignal/ */
void SouthtSignal_TrafficLightController(
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
  kcg_bool *SY)
{
  /* _L1/ */
  array_int8_4 _L1;

  _L1[0] = Input1;
  _L1[1] = Input2;
  _L1[2] = Input3;
  _L1[3] = Input4;
  *SR = _L1[0] != kcg_lit_int8(0);
  *SGr = _L1[1] != kcg_lit_int8(0);
  *SGs = _L1[2] != kcg_lit_int8(0);
  *SY = _L1[3] != kcg_lit_int8(0);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SouthtSignal_TrafficLightController.c
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

