// FUN_0019c914 @ 0019c914

double FUN_0019c914(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double local_358;
  double local_318;
  double local_b0;
  byte local_99 [8];
  undefined1 local_91;
  long local_90;
  ulong local_78;
  long local_70;
  undefined8 local_68;
  double local_60;
  undefined8 uStack_58;
  double local_50;
  undefined8 uStack_48;
  double local_40;
  undefined8 uStack_38;
  double local_30;
  double dStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  uStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_6);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_7);
  local_91 = 0;
  bVar3 = true;
  uVar1 = local_70 != 0;
  if ((bool)uVar1) {
    lVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = lVar5 == 0;
    local_91 = uVar1;
    local_90 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    uVar1 = local_91;
  }
  local_91 = uVar1;
  if (bVar3) {
    local_40 = *(double *)PTR__CGRectZero_025782f0;
    dStack_28 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    local_30 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    uStack_38 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  }
  else {
    local_99[0] = 0;
    FUN_001a031c(local_68,local_99);
    local_b0 = local_60;
    dVar11 = local_50;
    _CGRectGetMaxX(local_60,uStack_58);
    uVar7 = local_78;
    local_b0 = local_b0 + param_1;
    puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    dVar9 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar6);
    uVar2 = local_78;
    if ((uVar7 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
      lVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
      uVar4 = (uint)lVar5;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_convertRect_toView__0269ded8);
      (*(code *)PTR__objc_release_02578630)();
      FUN_001a01e0(dVar9);
      if (((uVar4 & 1) != 0) && (0.0 <= dVar9)) {
        dVar8 = local_60;
        dVar11 = local_50;
        _CGRectGetMaxX(local_60,uStack_58);
        dVar9 = dVar9 - dVar8;
        if (((local_99[0] & 1) == 0) && (FUN_001a0538(dVar9), (uVar4 & 1) != 0)) {
          FUN_001a0588(dVar9,local_68);
          local_b0 = local_60;
          dVar11 = local_50;
          _CGRectGetMaxX(local_60,uStack_58);
          local_b0 = local_b0 + dVar9;
        }
      }
    }
    if (local_b0 < 0.0) {
      local_b0 = 0.0;
    }
    lVar5 = local_70;
    local_358 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_318 = (dVar11 - local_b0) - 14.0;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    if (local_318 < 0.0) {
      local_318 = 0.0;
    }
    lVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar5);
    if (local_358 < 44.0) {
      local_358 = 44.0;
    }
    uVar10 = 0;
    FUN_001a0194();
    local_40 = local_b0;
    uStack_38 = uVar10;
    local_30 = local_318;
    dStack_28 = local_358;
  }
  local_99[1] = 1;
  local_99[2] = 0;
  local_99[3] = 0;
  local_99[4] = 0;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  return local_40;
}

