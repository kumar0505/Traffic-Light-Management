/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:38:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SouthSignal_TrafficLightController.h"

/* TrafficLightController::SouthSignal/ */
void SouthSignal_TrafficLightController(
  /* Input1/, _L2/ */
  int_TrafficLightController Input1,
  /* Input2/, _L3/ */
  int_TrafficLightController Input2,
  /* Input3/, _L4/ */
  int_TrafficLightController Input3,
  /* @1/ITB_Output/, @1/_L2/, SR/, _L14/ */
  kcg_bool *SR,
  /* @2/ITB_Output/, @2/_L2/, SG/, _L16/ */
  kcg_bool *SG,
  /* @3/ITB_Output/, @3/_L2/, SY/, _L15/ */
  kcg_bool *SY)
{
  /* _L1/ */
  array_int8_3 _L1;

  _L1[0] = Input1;
  _L1[1] = Input2;
  _L1[2] = Input3;
  *SR = _L1[0] != kcg_lit_int8(0);
  *SY = _L1[1] != kcg_lit_int8(0);
  *SG = _L1[2] != kcg_lit_int8(0);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SouthSignal_TrafficLightController.c
** Generation date: 2020-06-09T12:38:48
*************************************************************$ */

