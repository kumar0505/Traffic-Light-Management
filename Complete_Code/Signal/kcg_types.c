/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/TrafficLightManagement/KCG/config.txt
** Generation date: 2020-06-09T12:35:45
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_S_signal_TrafficLightController
kcg_bool kcg_comp_S_signal_TrafficLightController(
  S_signal_TrafficLightController *kcg_c1,
  S_signal_TrafficLightController *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_S_signal_TrafficLightController */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2020-06-09T12:35:45
*************************************************************$ */

