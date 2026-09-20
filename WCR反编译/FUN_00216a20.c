// FUN_00216a20 @ 00216a20

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_00216a20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_30;
  double local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  bVar1 = true;
  if (local_30 != 0) {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  if (bVar1) {
    local_28 = -1.0;
  }
  else {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
    uVar2 = (uint)lVar3;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    dVar4 = param_1;
    uVar9 = param_2;
    uVar11 = param_3;
    uVar13 = param_4;
    _CGRectIsEmpty();
    lVar3 = local_30;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_convertRect_toView__0269ded8,0);
      uVar2 = (uint)lVar3;
      dVar5 = dVar4;
      uVar10 = uVar9;
      uVar12 = uVar11;
      uVar14 = uVar13;
      _CGRectIntersection();
      _CGRectIsNull(dVar5,uVar10,uVar12,uVar14);
      if (((uVar2 & 1) == 0) && (_CGRectIsEmpty(dVar5,uVar10,uVar12,uVar14), (uVar2 & 1) == 0)) {
        dVar6 = dVar5;
        _CGRectGetWidth(dVar5,uVar10,uVar12,uVar14);
        _CGRectGetHeight(dVar5,uVar10,uVar12,uVar14);
        dVar7 = param_1;
        _CGRectGetMidX(param_1,param_2,param_3,param_4);
        _CGRectGetMidY(param_1,param_2,param_3,param_4);
        FUN_001e6228();
        dVar8 = dVar4;
        _CGRectGetMidX(dVar4,uVar9,uVar11,uVar13);
        _CGRectGetMidY(dVar4,uVar9,uVar11,uVar13);
        FUN_001e6228();
        local_28 = dVar6 * dVar5 * 1000.0 -
                   ((dVar4 - param_1) * (dVar4 - param_1) + (dVar8 - dVar7) * (dVar8 - dVar7));
      }
      else {
        local_28 = -1.0;
      }
    }
    else {
      local_28 = -1.0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_28;
}

