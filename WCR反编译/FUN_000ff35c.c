// FUN_000ff35c @ 000ff35c

void FUN_000ff35c(long param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    _objc_getAssociatedObject(lVar1,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (lVar2 == *(long *)(param_1 + 0x30)) {
      FUN_000ff4a0(local_28,*(undefined8 *)(param_1 + 0x38),1);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

