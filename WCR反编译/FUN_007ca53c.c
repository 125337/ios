// FUN_007ca53c @ 007ca53c

byte FUN_007ca53c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == local_28) {
    local_11 = 1;
  }
  else if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqual__0269e9a8,local_28);
    uVar2 = local_20;
    if ((uVar1 & 1) == 0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_CGColor_026ca470);
      uVar1 = local_28;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGColor_026ca470);
      if ((uVar2 == 0) || (uVar1 == 0)) {
        local_11 = 0;
      }
      else {
        _CGColorEqualToColor(uVar2,uVar1);
        local_11 = (byte)uVar2 & 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

