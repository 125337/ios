// FUN_0020984c @ 0020984c

double FUN_0020984c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  double local_150;
  double local_118;
  double local_88;
  ulong local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  ulong local_50 [3];
  uint local_34;
  ulong local_30;
  double local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_28 = 0.0;
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_00207ce4();
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      FUN_00209d78();
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = uVar2;
      if (uVar2 == 0) {
        local_118 = 0.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_bounds_026ca548);
        local_78 = param_1;
        local_70 = param_2;
        local_68 = param_3;
        local_60 = param_4;
        _CGRectGetHeight(param_1,param_2);
        local_118 = param_1;
      }
      local_58 = local_118;
      param_2 = 0x3ff0000000000000;
      if (1.0 < local_118) {
        local_28 = local_118;
      }
      local_34 = (uint)(1.0 < local_118);
      _objc_storeStrong(local_50,0);
      param_1 = local_118;
      if (local_34 != 0) goto LAB_00209c60;
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_80 = uVar2;
    if (uVar2 == 0) {
      local_150 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_bounds_026ca548);
      _CGRectGetHeight(param_1,param_2);
      local_150 = param_1;
    }
    local_88 = local_150;
    uVar3 = 0x3ff0000000000000;
    bVar1 = false;
    if (local_150 < 1.0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar2 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (bVar1) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGRectGetHeight(local_150,uVar3,param_3,param_4);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_88 = local_150;
    }
    local_28 = local_88;
    local_34 = 1;
    _objc_storeStrong(&local_80,0);
  }
LAB_00209c60:
  _objc_storeStrong(&local_30,0);
  return local_28;
}

