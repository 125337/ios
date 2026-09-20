// FUN_002c0210 @ 002c0210

byte FUN_002c0210(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uVar5;
  double local_58;
  ulong local_48;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  bVar1 = false;
  bVar2 = true;
  if (local_30 != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
    bVar2 = true;
    if ((uVar3 & 1) == 0) {
      local_48 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar2 = local_48 == 0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar2) {
    local_21 = false;
  }
  else {
    uVar3 = local_30;
    FUN_002b517c();
    if ((uVar3 & 1) == 0) {
      uVar3 = local_30;
      FUN_002b5700();
      if ((uVar3 & 1) == 0) {
        uVar3 = local_30;
        FUN_002c73bc();
        if ((uVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          _CGRectGetWidth(param_1,param_2);
          uVar5 = 0x3ff0000000000000;
          local_58 = param_1;
          if (param_1 <= 1.0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
            _CGRectGetWidth(param_1,uVar5,param_3,param_4);
            local_58 = param_1;
          }
          if (1.0 < local_58) {
            dVar4 = local_58;
            FUN_002b533c(local_30);
            local_21 = false;
            if (1.0 < ABS(dVar4)) {
              local_21 = ABS(dVar4) <= local_58 * 1.25;
            }
          }
          else {
            local_21 = false;
          }
        }
        else {
          local_21 = false;
        }
      }
      else {
        local_21 = false;
      }
    }
    else {
      local_21 = false;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

