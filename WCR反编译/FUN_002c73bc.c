// FUN_002c73bc @ 002c73bc

byte FUN_002c73bc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  double local_78;
  long local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_21 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    _CGRectGetMinX();
    local_78 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    _CGRectGetWidth(local_78,param_2);
    uVar1 = 0x3ff0000000000000;
    if (local_78 <= 1.0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      _CGRectGetWidth(local_78,uVar1,param_3,param_4);
    }
    local_21 = false;
    if ((1.0 < local_78) && (local_21 = false, local_78 * 0.5 <= ABS(param_1))) {
      local_21 = ABS(param_1) <= local_78 * 1.25;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

