// FUN_01580028 @ 01580028

/* WARNING: Type propagation algorithm not settling */

void FUN_01580028(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  double local_a0;
  double local_98;
  double local_50 [6];
  double local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_3);
  local_50[4] = 0.0;
  local_50[3] = 0.0;
  local_50[2] = 0.0;
  local_50[1] = 0.0;
  uVar1 = local_18;
  local_50[5] = (double)param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_getRed_green_blue_alpha__026ca660,local_50 + 4,local_50 + 3,local_50 + 2
             ,local_50 + 1);
  if ((uVar1 & 1) == 0) {
    local_50[0] = 0.0;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_getWhite_alpha__026ca668,local_50,local_50 + 1);
    if ((uVar1 & 1) != 0) {
      local_50[2] = local_50[0];
      local_50[3] = local_50[0];
      local_50[4] = local_50[0];
    }
  }
  if (local_20 <= 1.0) {
    local_98 = local_20;
  }
  else {
    local_98 = 1.0;
  }
  if (local_98 <= 0.0) {
    local_a0 = 0.0;
  }
  else {
    local_a0 = local_98;
  }
  local_20 = local_a0;
  local_50[4] = local_50[4] * (1.0 - local_a0);
  local_50[3] = local_50[3] * (1.0 - local_a0);
  local_50[2] = local_50[2] * (1.0 - local_a0);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50[4],local_50[3],local_50[2],local_50[5],PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

