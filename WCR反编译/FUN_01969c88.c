// FUN_01969c88 @ 01969c88

void FUN_01969c88(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (lVar3 != 0) {
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0x28;
    _objc_loadWeakRetained();
    bVar1 = lVar5 != lVar6;
    (*(code *)PTR__objc_release_02578630)(lVar6);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (!bVar1) {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar8);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

