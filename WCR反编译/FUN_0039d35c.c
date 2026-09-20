// FUN_0039d35c @ 0039d35c

void FUN_0039d35c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong local_58;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  FUN_0039e3b0(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_nativePassthrough_026a2e00);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_58 = 0;
  }
  else {
    local_58 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nativeOriginalIndexPath_026a3078);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_58;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

