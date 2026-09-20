// syncWebToTableHost:designWebFrame:cardScale: @ 01e89628

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x40 bytes */

void WCRefineToDoCardView::syncWebToTableHost_designWebFrame_cardScale_
               (ID param_1,SEL param_2,ID param_3,CGRect param_4,double param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double in_d1;
  double in_d2;
  undefined8 in_d3;
  undefined8 uVar9;
  double in_d4;
  undefined1 auStack_260 [48];
  undefined1 auStack_230 [48];
  undefined8 local_200;
  undefined8 uStack_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  double local_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [48];
  undefined1 auStack_188 [48];
  double local_158;
  double local_138;
  double local_f8;
  undefined1 local_d1;
  undefined *local_d0;
  undefined *local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined8 uStack_a8;
  undefined1 local_99;
  undefined *local_98;
  undefined1 local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined4 local_6c;
  undefined *local_68;
  double local_60;
  undefined *local_58;
  SEL local_50;
  undefined *local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined8 uStack_28;
  
  local_58 = (undefined *)0x0;
  local_50 = param_2;
  local_48 = (undefined *)param_1;
  local_40 = param_5;
  local_38 = in_d1;
  local_30 = in_d2;
  uStack_28 = in_d3;
  _objc_storeStrong(&local_58,param_3,param_3,param_4.field0_0x0.field0_0x0,
                    param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
                    param_4.field1_0x10.field1_0x8);
  puVar4 = local_48;
  local_60 = in_d4;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar4;
  if ((puVar4 == (undefined *)0x0) || (local_58 == (undefined *)0x0)) {
    local_6c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_58;
    (*(code *)PTR__objc_release_02578630)();
    if (puVar4 == puVar5) {
      puVar4 = &DAT_028e4808;
      _objc_loadWeakRetained(0);
      local_99 = 0;
      bVar3 = false;
      uVar1 = puVar4 != (undefined *)0x0;
      if ((bool)uVar1) {
        puVar5 = &DAT_028e4808;
        _objc_loadWeakRetained();
        bVar3 = puVar5 != local_48;
        local_99 = uVar1;
        local_98 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar1 = local_99;
      }
      local_99 = uVar1;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (bVar3) {
        local_6c = 1;
        goto LAB_01e89e78;
      }
    }
    else {
      puVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 0;
      local_89 = 0;
      bVar3 = false;
      uVar1 = puVar4 != (undefined *)0x0;
      if ((bool)uVar1) {
        puVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        puVar5 = local_48;
        local_78 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_cardContainer_026be658);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = puVar4 != puVar5;
        local_89 = uVar1;
        local_88 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar1 = local_89;
      }
      local_89 = uVar1;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)();
      if (bVar3) {
        local_6c = 1;
        goto LAB_01e89e78;
      }
      FUN_01e6cacc();
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addSubview__026ca4c0,local_68);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setWebHostedOnTable__026c6f78,1);
    _objc_storeWeak(&DAT_028e4808,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setUserInteractionEnabled__026caad8,1);
    dStack_b8 = *(double *)(PTR__CGRectNull_025782e8 + 8);
    local_c0 = *(double *)PTR__CGRectNull_025782e8;
    uStack_a8 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
    local_b0 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
    puVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_cardContainer_026be658);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar4;
    while( true ) {
      puVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 0;
      bVar3 = false;
      uVar1 = puVar4 != (undefined *)0x0;
      if ((bool)uVar1) {
        puVar5 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = puVar5 != local_58;
        local_d1 = uVar1;
        local_d0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar1 = local_d1;
      }
      local_d1 = uVar1;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (!bVar3) break;
      puVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_c8;
      local_c8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar6 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_58;
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = local_58;
    puVar4 = local_c8;
    if (puVar6 == puVar5) {
      puVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_cardContainer_026be658);
      _objc_retainAutoreleasedReturnValue();
      dVar8 = local_40;
      dVar7 = local_30;
      uVar9 = uStack_28;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_convertRect_fromView__026a9178);
      local_f8 = dVar8;
      local_c0 = dVar8;
      dStack_b8 = local_38;
      local_b0 = dVar7;
      uStack_a8 = uVar9;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_frame_026ca640);
      dVar8 = local_c0 + dVar7;
      local_c0 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_frame_026ca640);
      dStack_b8 = dStack_b8 + dVar7;
      local_138 = dVar8;
    }
    else {
      puVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_cardContainer_026be658);
      _objc_retainAutoreleasedReturnValue();
      dVar8 = local_40;
      dVar7 = local_30;
      uVar9 = uStack_28;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_convertRect_fromView__026a9178);
      local_158 = dVar8;
      local_c0 = dVar8;
      dStack_b8 = local_38;
      local_b0 = dVar7;
      uStack_a8 = uVar9;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _memcpy(auStack_188,PTR__CGAffineTransformIdentity_025782d8,0x30);
    puVar4 = local_68;
    _memcpy(auStack_1b8,auStack_188,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTransform__026caad0,auStack_1b8);
    uStack_1f8 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    local_200 = *(undefined8 *)PTR__CGPointZero_025782e0;
    uStack_1c8 = uStack_28;
    local_1d0 = local_30;
    uStack_1e8 = uStack_28;
    local_1f0 = local_30;
    local_1e0 = local_200;
    uStack_1d8 = uStack_1f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_200,uStack_1f8,local_30,uStack_28,local_68,PTR_s_setBounds__026ca8a0);
    if (DAT_02323db0 < ABS(local_60 - 1.0)) {
      _CGAffineTransformMakeScale(local_60,local_60);
      puVar4 = local_68;
      _memcpy(auStack_260,auStack_230,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTransform__026caad0,auStack_260);
    }
    dVar8 = local_c0;
    _CGRectGetMidX(local_c0,dStack_b8,local_b0,uStack_a8);
    dVar7 = local_c0;
    _CGRectGetMidY(local_c0,dStack_b8,local_b0,uStack_a8);
    FUN_01e7b0cc();
    (*(code *)PTR__objc_msgSend_02578628)(dVar8,dVar7,local_68,PTR_s_setCenter__026ca8c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bringSubviewToFront__026ca550,local_68);
    _objc_storeStrong(&local_c8,0);
    local_6c = 0;
  }
LAB_01e89e78:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_58,0);
  return;
}

