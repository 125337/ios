// FUN_0061c7a8 @ 0061c7a8

void FUN_0061c7a8(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_c0;
  ulong local_60;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar1 = local_28;
  FUN_0061cb9c();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = 0;
  pcVar2 = &cf_title;
  local_30 = uVar1;
  _NSSelectorFromString();
  if ((local_30 != 0) &&
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2),
     (uVar1 & 1) != 0)) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_48[0];
    local_48[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_48[0] == 0) {
    uVar1 = local_30;
    FUN_0061b3c8(local_30,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar1;
    if (uVar1 == 0) {
      local_60 = local_30;
      FUN_0061b3c8(local_30,&cf__title);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_60;
    }
    _objc_storeStrong(local_48,local_c0);
    if (uVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((local_48[0] == 0) &&
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2),
     (uVar1 & 1) != 0)) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_48[0];
    local_48[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_48[0];
  FUN_0061cf8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

