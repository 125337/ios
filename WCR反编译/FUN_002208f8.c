// FUN_002208f8 @ 002208f8

byte FUN_002208f8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  double dVar2;
  undefined8 uVar3;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  if (((local_20 == 0) ||
      (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768),
      (uVar1 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8), param_1 <= DAT_02323e60)
     ) {
    local_11 = false;
  }
  else {
    dVar2 = DAT_02323e60;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
    _CGRectGetWidth(param_1,dVar2);
    uVar3 = 0x3ff0000000000000;
    local_11 = false;
    if (1.0 < param_1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
      _CGRectGetHeight(param_1,uVar3,param_3,param_4);
      local_11 = 1.0 < param_1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

