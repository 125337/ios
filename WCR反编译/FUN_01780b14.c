// FUN_01780b14 @ 01780b14

byte FUN_01780b14(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  double dVar1;
  long local_30;
  double local_28;
  undefined8 local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_1;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_11 = false;
  }
  else {
    FUN_017919d8();
    if (0.0 < param_1) {
      dVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      _CGRectGetWidth(dVar1,param_2,param_3,param_4);
      if (0.0 < dVar1) {
        local_11 = true;
        if (param_1 < local_28) {
          local_11 = dVar1 - param_1 <= local_28;
        }
      }
      else {
        local_11 = false;
      }
    }
    else {
      local_11 = false;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

