// FUN_002b3e70 @ 002b3e70

double FUN_002b3e70(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double local_48;
  ulong local_30;
  double local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if ((local_30 == 0) ||
     (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768),
     (uVar1 & 1) != 0)) {
    local_28 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    _CGRectGetWidth(param_1,param_2);
    uVar4 = 0x3ff0000000000000;
    local_48 = param_1;
    if (param_1 <= 1.0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      _CGRectGetWidth(param_1,uVar4);
      local_48 = param_1;
    }
    if (1.0 < local_48) {
      uVar1 = local_30;
      dVar2 = local_48;
      FUN_002b517c();
      if ((uVar1 & 1) == 0) {
        FUN_002b533c(local_30);
        dVar3 = ABS(dVar2);
        dVar5 = 1.0;
        if (1.0 < dVar3) {
          dVar3 = ABS(dVar2);
          param_3 = 0x3ff4000000000000;
          dVar5 = local_48 * 1.25;
          if ((dVar3 <= dVar5) && (uVar1 = local_30, FUN_002b5700(), (uVar1 & 1) != 0)) {
            local_28 = -dVar2;
            goto LAB_002b41e4;
          }
        }
        uVar1 = local_30;
        FUN_002b589c();
        if ((uVar1 & 1) == 0) {
          local_28 = 0.0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          _CGRectGetMinX(dVar3,dVar5,param_3,param_4);
          if (1.0 < ABS(dVar3)) {
            if (ABS(dVar3) <= local_48 * 1.25) {
              local_28 = -dVar3;
            }
            else {
              local_28 = 0.0;
            }
          }
          else {
            local_28 = 0.0;
          }
        }
      }
      else {
        local_28 = 0.0;
      }
    }
    else {
      local_28 = 0.0;
    }
  }
LAB_002b41e4:
  _objc_storeStrong(&local_30,0);
  return local_28;
}

