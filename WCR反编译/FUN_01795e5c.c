// FUN_01795e5c @ 01795e5c

byte FUN_01795e5c(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  local_28 = param_3;
  FUN_017962c0(local_20,param_3);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    uVar1 = DAT_028e4040;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4040,PTR_s_length_0269cca0);
    if (((uVar1 == 0) ||
        (uVar1 = DAT_028e4040,
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4040,PTR_s_isEqualToString__0269ccc8,local_30)
        , (uVar1 & 1) == 0)) || (1.0 <= param_1 - DAT_028e4060)) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      uVar1 = DAT_028e4040;
      DAT_028e4040 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_11 = 1;
      DAT_028e4060 = param_1;
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

