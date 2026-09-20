// FUN_01874610 @ 01874610

void FUN_01874610(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  else {
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar4);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

