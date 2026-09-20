// FUN_00f5e8cc @ 00f5e8cc

void FUN_00f5e8cc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x28;
  local_28 = uVar1;
  _objc_loadWeakRetained();
  uVar1 = local_28;
  local_30 = param_1;
  if ((local_28 != 0) && (param_1 != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_managers_026ac768);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pushToManager__026ac770,local_30);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

