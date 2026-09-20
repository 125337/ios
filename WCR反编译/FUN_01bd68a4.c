// FUN_01bd68a4 @ 01bd68a4

void FUN_01bd68a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  
  lVar2 = *(long *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  if (lVar1 == 0) {
    local_40 = *(long *)PTR____NSArray0___02578280;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,local_40);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

