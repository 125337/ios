// FUN_0061cb9c @ 0061cb9c

void FUN_0061cb9c(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_e8;
  ulong local_68;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  uVar1 = local_28;
  FUN_0061c4dc();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_leftConfig;
  local_38 = uVar1;
  _NSSelectorFromString();
  if ((local_38 != 0) &&
     (uVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar2),
     (uVar1 & 1) != 0)) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((local_30 == 0) &&
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2),
     (uVar1 & 1) != 0)) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_30 == 0) {
    uVar1 = local_38;
    FUN_0061b3c8(local_38,&cf_leftConfig);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar1;
    if (uVar1 == 0) {
      local_68 = local_38;
      FUN_0061b3c8(local_38,&cf__leftConfig);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_68;
    }
    _objc_storeStrong(&local_30,local_e8);
    if (uVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

