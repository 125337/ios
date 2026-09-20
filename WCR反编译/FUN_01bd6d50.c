// FUN_01bd6d50 @ 01bd6d50

void FUN_01bd6d50(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar4 == *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (bVar1) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

