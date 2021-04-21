/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EastSignal_TrafficLightController.h"

/* TrafficLightController::EastSignal/ */
void EastSignal_TrafficLightController(
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
  kcg_bool *EY)
{
  /* _L10/ */
  array_int8_3 _L10;

  _L10[0] = Input1;
  _L10[1] = Input2;
  _L10[2] = Input3;
  *ER = _L10[0] != kcg_lit_int8(0);
  *EY = _L10[1] != kcg_lit_int8(0);
  *EG = _L10[2] != kcg_lit_int8(0);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EastSignal_TrafficLightController.c
** Generation date: 2020-06-09T12:39:51
*************************************************************$ */

