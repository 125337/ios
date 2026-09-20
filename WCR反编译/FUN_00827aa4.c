// FUN_00827aa4 @ 00827aa4

byte FUN_00827aa4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  double dVar2;
  undefined8 uVar3;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  if ((local_30 == 0) || (local_38 == 0)) {
    local_21 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    lVar1 = local_30;
    if ((param_3 < 1.0) || (uVar3 = 0x3ff0000000000000, param_4 < 1.0)) {
      local_21 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_convertRect_toView__0269ded8,local_38);
      dVar2 = param_4;
      _CGRectGetMinY(param_4,uVar3,param_2,param_1);
      if (dVar2 <= 1.0) {
        dVar2 = param_4;
        _CGRectGetMinX(param_4,uVar3,param_2,param_1);
        if (dVar2 <= 1.0) {
          _CGRectGetWidth(param_4,uVar3,param_2,param_1);
          if (param_3 - 1.0 <= param_4) {
            local_21 = 1;
          }
          else {
            local_21 = 0;
          }
        }
        else {
          local_21 = 0;
        }
      }
      else {
        local_21 = 0;
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

