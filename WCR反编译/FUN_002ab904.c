// FUN_002ab904 @ 002ab904

void FUN_002ab904(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_150;
  double local_b0;
  
  uVar4 = param_5;
  dVar8 = param_1;
  uVar10 = param_2;
  uVar12 = param_3;
  uVar14 = param_4;
  FUN_002bad18();
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_frame_026ca640);
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_b0 = param_1;
    uVar13 = param_3;
    uVar15 = param_4;
    _CGRectGetWidth(param_1,param_2);
    uVar11 = 0x3ff0000000000000;
    if (local_b0 <= 1.0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_bounds_026ca548);
      _CGRectGetWidth(local_b0,uVar11,uVar13,uVar15);
    }
    bVar1 = false;
    if (1.0 < local_b0) {
      dVar9 = param_1;
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      bVar1 = false;
      if (local_b0 * 0.5 <= ABS(dVar9)) {
        dVar9 = param_1;
        _CGRectGetMinX(param_1,param_2,param_3,param_4);
        bVar1 = ABS(dVar9) <= local_b0 * 1.25;
      }
    }
    uVar4 = param_5;
    FUN_002c73bc();
    bVar3 = false;
    bVar2 = 0;
    if (((ulong)puVar6 & 1) != 0) {
      local_150 = param_5;
      (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      bVar2 = 0;
      if (local_150 != 0) {
        uVar7 = param_5;
        (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_isHidden_026ca768);
        bVar2 = 0;
        if (((uVar7 & 1) == 0) && (bVar2 = 0, bVar1)) {
          bVar2 = (byte)uVar4 ^ 1;
        }
      }
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    if ((bVar2 & 1) != 0) {
      FUN_002b7184(param_5,&cf_MMTabBar_setFrame_beforeVisibleOffscreen);
      uVar4 = param_5;
      FUN_0029cc70();
      _objc_retainAutoreleasedReturnValue();
      FUN_002bb194(param_5,uVar4,0);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      FUN_002d63bc(param_5,&cf_MMTabBar_setFrame_beforeVisibleOffscreen);
    }
    (*DAT_028c97b0)(param_5,param_6);
    if (((ulong)puVar6 & 1) != 0) {
      uVar4 = param_5;
      (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_isHidden_026ca768);
      if (((uVar4 & 1) == 0) && (uVar4 = param_5, FUN_002c73bc(), (uVar4 & 1) != 0)) {
        FUN_002dc340(param_5,&cf_MMTabBar_setFrame_afterVisibleOffscreen);
      }
      uVar4 = param_5;
      FUN_002c007c();
      FUN_002b7184(param_5,&cf_MMTabBar_setFrame_afterOrig);
      uVar7 = param_5;
      (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_isHidden_026ca768);
      if (((uVar7 & 1) == 0) && ((uVar4 & 1) == 0)) {
        param_1 = 1.0;
        (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_setNeedsLayout_0269deb8);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_frame_026ca640);
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    bVar1 = true;
    if (ABS(param_1) <= 1.0) {
      _CGRectGetMinX(dVar8,uVar10,uVar12,uVar14);
      bVar1 = 1.0 < ABS(dVar8);
    }
    if (bVar1) {
      FUN_002c3da8(param_5,&cf_MMTabBar_setFrame_suspicious);
    }
  }
  else {
    (*DAT_028c97b0)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

