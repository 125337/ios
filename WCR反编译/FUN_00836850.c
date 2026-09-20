// FUN_00836850 @ 00836850

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_00836850(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double local_360;
  long local_80;
  long local_70;
  long local_38;
  long local_30;
  double local_28;
  long lVar5;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  bVar2 = false;
  bVar1 = false;
  bVar3 = true;
  if ((local_30 != 0) && (bVar3 = true, local_38 != 0)) {
    lVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    uVar4 = (uint)lVar5;
    _CGRectIsEmpty();
    bVar3 = true;
    if ((uVar4 & 1) == 0) {
      local_70 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_80 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar3 = local_70 != local_80;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  lVar5 = local_30;
  if (bVar3) {
    local_28 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_convertRect_toView__0269ded8,local_38);
    lVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    uVar4 = (uint)lVar5;
    _CGRectIntersection();
    _CGRectIsNull(param_1,param_2,param_3,param_4);
    if (((uVar4 & 1) == 0) &&
       (dVar6 = param_1, uVar9 = param_2, uVar10 = param_3, uVar11 = param_4, _CGRectIsEmpty(),
       (uVar4 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      _CGRectGetWidth();
      dVar7 = dVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      _CGRectGetHeight(dVar7,uVar9,uVar10,uVar11);
      if (dVar6 * dVar7 <= 0.0) {
        local_360 = 0.0;
      }
      else {
        dVar8 = param_1;
        _CGRectGetWidth(param_1,param_2,param_3,param_4);
        _CGRectGetHeight(param_1,param_2,param_3,param_4);
        local_360 = (dVar8 * param_1) / (dVar6 * dVar7);
      }
      local_28 = local_360;
    }
    else {
      local_28 = 0.0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

