// FUN_004e145c @ 004e145c

byte FUN_004e145c(undefined8 param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long local_20;
  bool local_11;
  
  dVar1 = DAT_023241d0;
  local_20 = 0;
  dVar3 = DAT_023241d0;
  _objc_storeStrong(&local_20,param_3);
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_panGestureRecognizer_0269dd98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar4 = param_2;
    dVar5 = dVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_panGestureRecognizer_0269dd98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_11 = true;
    if (ABS(param_2) <= 0.5 || ABS(param_2) < ABS(dVar3) * dVar1) {
      local_11 = 30.0 < ABS(dVar5) && ABS(dVar4) * dVar1 <= ABS(dVar5);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

