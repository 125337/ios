// FUN_003982ec @ 003982ec

void FUN_003982ec(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  FUN_003c5414();
  if ((param_1 & 1) == 0) {
    uVar1 = *(ulong *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  else {
    FUN_003c57ac();
    _objc_retainAutoreleasedReturnValue();
    local_20 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(param_1);
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_sync_exit(param_1);
    (*(code *)PTR__objc_release_02578630)(param_1);
    _objc_storeStrong(&local_20,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

