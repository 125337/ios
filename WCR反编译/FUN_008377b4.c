// FUN_008377b4 @ 008377b4

void FUN_008377b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  FUN_0082b2a4(lVar1,lVar2,*(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x38) + -1);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  return;
}

