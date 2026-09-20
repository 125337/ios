// FUN_0061c4dc @ 0061c4dc

void FUN_0061c4dc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_a8;
  ulong local_58;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    pcVar1 = &cf_cellConfig;
    _NSSelectorFromString();
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (local_30 == 0) {
      uVar2 = local_20;
      FUN_0061b3c8(local_20,&cf_cellConfig);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = uVar2;
      if (uVar2 == 0) {
        local_58 = local_20;
        FUN_0061b3c8(local_20,&cf__cellConfig);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = local_58;
      }
      _objc_storeStrong(&local_30,local_a8);
      if (uVar2 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

