// FUN_01afdf90 @ 01afdf90

void FUN_01afdf90(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

