// FUN_0082f794 @ 0082f794

byte FUN_0082f794(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_188;
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
    if ((param_3 < 1.0) || (dVar3 = 1.0, param_4 < 1.0)) {
      local_21 = 0;
    }
    else {
      dVar1 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      dVar2 = dVar1;
      _CGRectGetWidth(dVar1,dVar3,param_2,param_1);
      if (param_3 - 1.0 <= dVar2) {
        local_188 = param_4 * DAT_02323da8;
        if (local_188 <= 120.0) {
          local_188 = 120.0;
        }
        if (dVar3 <= local_188) {
          dVar2 = dVar1;
          _CGRectGetHeight(dVar1,dVar3,param_2,param_1);
          if (dVar2 < param_4 - 1.0) {
            _CGRectGetMaxY(dVar1,dVar3,param_2,param_1);
            if (param_4 - 1.0 <= dVar1) {
              local_21 = 1;
            }
            else {
              local_21 = 0;
            }
          }
          else {
            local_21 = 1;
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

