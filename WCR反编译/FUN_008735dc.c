// FUN_008735dc @ 008735dc

undefined8
FUN_008735dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  ulong local_e8;
  undefined4 local_dc;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  uVar1 = local_30;
  FUN_00872d54();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_38 = uVar1;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar2;
    if ((uVar2 == 0) || (uVar1 = local_30, FUN_008715a0(), uVar2 = local_30, (uVar1 & 1) == 0)) {
      local_28 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_convertRect_toView__0269ded8,local_e8);
      _CGRectGetMidX();
      dVar3 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_bounds_026ca548);
      _CGRectGetWidth(dVar3,param_2,param_3,param_4);
      if (((dVar3 <= 1.0) || (param_1 < 0.0)) || (dVar3 < param_1)) {
        local_28 = 0;
      }
      else {
        local_28 = 2;
        if (param_1 < dVar3 * 0.5) {
          local_28 = 1;
        }
      }
    }
    local_dc = 1;
    _objc_storeStrong(&local_e8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    local_88 = param_1;
    local_80 = param_2;
    local_78 = param_3;
    local_70 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_convertRect_toView__0269ded8,local_38);
    local_68 = param_1;
    uStack_60 = param_2;
    local_58 = param_3;
    uStack_50 = param_4;
    _CGRectGetMidX();
    local_90 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    if (1.0 < param_1) {
      local_28 = 2;
      if (local_90 < param_1 * 0.5) {
        local_28 = 1;
      }
      local_dc = 1;
    }
    else {
      local_28 = 0;
      local_dc = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

