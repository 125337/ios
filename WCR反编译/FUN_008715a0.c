// FUN_008715a0 @ 008715a0

byte FUN_008715a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  double dVar4;
  long local_40;
  undefined4 local_34;
  long local_30;
  bool local_21;
  long lVar3;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_21 = false;
    local_34 = 1;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    local_40 = lVar2;
    if (lVar2 == 0) {
      local_21 = false;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_convertRect_toView__0269ded8,local_40);
      uVar1 = (uint)lVar3;
      _CGRectIsEmpty(param_1);
      if ((uVar1 & 1) == 0) {
        dVar4 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_safeAreaInsets_026ca828);
        _CGRectGetMidY(param_1,param_2,param_3,param_4);
        local_21 = param_1 <= dVar4 + 180.0;
      }
      else {
        local_21 = false;
      }
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

