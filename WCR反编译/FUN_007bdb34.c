// FUN_007bdb34 @ 007bdb34

byte FUN_007bdb34(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  long local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_6);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,local_20);
    dVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
    _CGRectGetWidth(param_2,dVar1,param_3,param_4);
    local_11 = true;
    if (60.0 < param_1) {
      local_11 = param_2 - 60.0 <= param_1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

