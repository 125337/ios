// FUN_00378468 @ 00378468

byte FUN_00378468(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    local_11 = false;
    if (local_30 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
      dVar3 = param_1;
      _CACurrentMediaTime();
      local_11 = dVar3 < param_1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

