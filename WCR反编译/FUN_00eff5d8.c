// FUN_00eff5d8 @ 00eff5d8

void FUN_00eff5d8(double param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  if ((local_20 == 0) || (param_1 <= 0.0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  else {
    dVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_size_026cab00);
    dVar3 = 0.5;
    if ((0.5 <= ABS(dVar2 - param_1)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_size_026cab00), local_18 = local_20,
       0.5 <= ABS(dVar3 - param_1))) {
      lVar1 = local_20;
      FUN_00ef4540(param_1,local_20,0);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

