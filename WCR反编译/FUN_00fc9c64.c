// FUN_00fc9c64 @ 00fc9c64

void FUN_00fc9c64(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = uVar1;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    uVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_3c = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_38);
    uVar1 = local_30;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_3c = 1;
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      uVar2 = local_30;
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if ((uVar1 < uVar2) &&
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_characterAtIndex__0269fa18,local_48),
         (int)uVar1 == 0x3a)) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_substringFromIndex__0269d120,local_48 + 1);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasPrefix__0269d320,&cf_newline_s_);
        if ((uVar1 & 1) != 0) {
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,1);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_50;
          local_50 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        uVar1 = local_50;
        FUN_00fbe464();
        _objc_retainAutoreleasedReturnValue();
        local_3c = 1;
        local_18 = uVar1;
        _objc_storeStrong(&local_50,0);
      }
      else {
        uVar1 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_3c = 1;
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

