// FUN_01878afc @ 01878afc

void FUN_01878afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_5 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,param_2,param_3,param_4);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = param_5 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = param_5 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 != 0) {
    param_5 = param_5 + 0x20;
    _objc_loadWeakRetained();
    lVar1 = param_5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(param_1,param_2,param_3,param_4);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(param_5);
  }
  return;
}

