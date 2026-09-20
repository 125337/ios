// FUN_0051d3dc @ 0051d3dc

void FUN_0051d3dc(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong local_60;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = local_20 == 0;
  if (bVar1) {
    local_60 = 0;
  }
  else {
    local_60 = local_20;
    FUN_0051eac8(local_20,&cf_thirdPartyHandler);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (local_28 == 0) {
    local_18 = 0;
  }
  else {
    pcVar2 = "TLProfileVideoMediaViewProvider";
    _objc_getClass();
    if ((pcVar2 == (char *)0x0) ||
       (uVar3 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar2),
       (uVar3 & 1) == 0)) {
      local_18 = 0;
    }
    else {
      uVar3 = local_28;
      FUN_0051eac8(local_28,&cf_dataItem);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

