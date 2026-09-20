// FUN_0051d124 @ 0051d124

void FUN_0051d124(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68;
  ulong local_58;
  char *local_50;
  undefined4 local_48;
  bool local_41;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_41 = false;
  bVar1 = local_20 == 0;
  if (bVar1) {
    local_68 = 0;
  }
  else {
    local_68 = local_20;
    FUN_0051eac8(local_20,&cf_thirdPartyHandler);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_68;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (local_28 == 0) {
    local_18 = 0;
    local_48 = 1;
  }
  else {
    pcVar2 = "TLProfileFinderMediaViewProvider";
    _objc_getClass();
    local_50 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       (uVar3 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar2),
       (uVar3 & 1) == 0)) {
      local_18 = 0;
      local_48 = 1;
    }
    else {
      uVar3 = local_28;
      FUN_0051eac8(local_28,&cf_dataItem);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar3;
      if (uVar3 == 0) {
        uVar3 = local_28;
        FUN_0051f558(local_28,&cf_updateInvalidAndGetDetailDataItemIfNeeded);
        _objc_unsafeClaimAutoreleasedReturnValue(uVar3);
        uVar4 = local_28;
        FUN_0051eac8(local_28,&cf_dataItem);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_58;
        local_58 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
      local_48 = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

