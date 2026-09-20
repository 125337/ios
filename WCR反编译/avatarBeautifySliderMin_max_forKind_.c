// avatarBeautifySliderMin:max:forKind: @ 01819be0

/* Function Stack Size: 0x28 bytes */

void WCRefineAvatarCornerBeautifyViewController::avatarBeautifySliderMin_max_forKind_
               (ID param_1,SEL param_2,double *param_3,double *param_4,long_long param_5)

{
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0.0;
  local_38 = 1.0;
  if (param_5 - 1 < 2) {
    local_30 = 0.0;
    local_38 = 100.0;
    goto LAB_01819d18;
  }
  if (param_5 - 3 < 2) {
    local_30 = 0.0;
    local_38 = 5.0;
    goto LAB_01819d18;
  }
  if (1 < param_5 - 5) {
    if (param_5 - 7 < 2) {
LAB_01819cf8:
      local_30 = -50.0;
      local_38 = 50.0;
      goto LAB_01819d18;
    }
    if (param_5 != 9) {
      if (param_5 - 10 < 2) goto LAB_01819cf8;
      if (param_5 != 0xc) {
        if (param_5 - 0xd < 2) goto LAB_01819cf8;
        if (param_5 != 0xf) goto LAB_01819d18;
      }
    }
  }
  local_30 = DAT_02323ca0;
  local_38 = 5.0;
LAB_01819d18:
  if (param_3 != (double *)0x0) {
    *param_3 = local_30;
  }
  if (param_4 != (double *)0x0) {
    *param_4 = local_38;
  }
  return;
}

