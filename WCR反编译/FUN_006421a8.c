// FUN_006421a8 @ 006421a8

byte FUN_006421a8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = true;
  if (local_20 != 0) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (bVar1) {
    local_11 = 0;
  }
  else {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_11 = lVar4 == local_20;
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

