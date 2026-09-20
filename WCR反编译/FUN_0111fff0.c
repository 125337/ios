// FUN_0111fff0 @ 0111fff0

void FUN_0111fff0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double local_50;
  undefined8 local_38;
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasPrefix__0269d320,&cf__);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 != 6) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (uVar1 != 8) {
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar3;
      goto LAB_011202ec;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSScanner_026ce368;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  else {
    local_38 = 0x3ff0000000000000;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (uVar1 == 8) {
      local_38 = 0;
      local_50 = (double)NEON_ucvtf(0);
    }
    else {
      local_50 = (double)NEON_ucvtf(0);
    }
    local_50 = local_50 / 255.0;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0,local_50,local_38,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
LAB_011202ec:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

