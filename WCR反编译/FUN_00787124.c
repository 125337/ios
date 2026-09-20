// FUN_00787124 @ 00787124

byte FUN_00787124(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  long local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_21 = false;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetWidth();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    dVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    dVar3 = dVar2;
    _CGRectGetWidth(dVar2,param_2,param_3,param_4);
    local_21 = false;
    if (param_1 * DAT_023242c0 <= dVar3) {
      _CGRectGetHeight(dVar2,param_2,param_3,param_4);
      local_21 = 36.0 <= dVar2;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

