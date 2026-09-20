// FUN_003e60a8 @ 003e60a8

byte FUN_003e60a8(undefined8 param_1)

{
  ulong uVar1;
  ulong local_90;
  bool local_49;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    FUN_003e6808();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,local_38);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__);
        local_90 = local_20;
        local_49 = (uVar1 & 1) == 0;
        if (local_49) {
        }
        else {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_substringToIndex__0269d6c0,uVar1 - 1)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_48 = local_90;
        }
        local_49 = !local_49;
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = local_90;
        if (local_49) {
          (*(code *)PTR__objc_release_02578630)(local_48);
        }
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_38);
        local_11 = (byte)uVar1 & 1;
        local_30 = 1;
        _objc_storeStrong(&local_40,0);
      }
      else {
        local_11 = 1;
        local_30 = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

