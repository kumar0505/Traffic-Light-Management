/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/AdvanceTrafficLight/KCG/config.txt
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_int8_4
kcg_bool kcg_comp_array_int8_4(array_int8_4 *kcg_c1, array_int8_4 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int8_4 */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2020-05-21T13:10:54
*************************************************************$ */

