// FUN_0196b670 @ 0196b670

void FUN_0196b670(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

