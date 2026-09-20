// wakeFromIdleAnimated: @ 015e990c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::wakeFromIdleAnimated_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined **ppuVar5;
  double in_d0;
  double dVar6;
  double in_d1;
  double dVar7;
  double in_d2;
  undefined8 uVar8;
  double in_d3;
  double dVar9;
  double local_228;
  double local_220;
  double local_208;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  ID local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  undefined **local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c1;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined8 uStack_88;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  byte local_51;
  undefined *local_50;
  byte local_41;
  ID local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelIdleSnap_026b12a0);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_idleSnapped_026b1350);
  local_41 = 0;
  local_51 = 0;
  bVar1 = false;
  if ((IVar2 & 1) == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    in_d1 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    in_d1 = in_d1 - DAT_02323d38;
    bVar1 = in_d1 <= in_d0;
    in_d2 = DAT_02323d38;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIdleSnapped__026b1370,0);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_60 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    dStack_98 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 8);
    uStack_88 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
    dVar6 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
    IVar2 = local_28;
    local_78 = in_d1;
    local_70 = in_d2;
    local_68 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c0 = dVar6;
    dStack_b8 = in_d1;
    local_b0 = in_d2;
    local_a0 = dVar6;
    local_90 = in_d2;
    dStack_98 = in_d1;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar8 = 0x3fe0000000000000;
    bVar1 = local_70 * 0.5 < in_d2;
    local_d8 = in_d2;
    local_d0 = in_d1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (bVar1) {
      local_208 = (local_70 - local_60) - 10.0;
    }
    else {
      local_208 = 10.0;
    }
    local_e0 = local_208;
    dVar7 = 8.0;
    dVar6 = local_a0 + 8.0;
    IVar2 = local_28;
    local_f8 = dVar6;
    local_c1 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_120 = dVar6;
    local_118 = dVar7;
    local_110 = uVar8;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_220 = dVar7;
    if (dVar7 <= local_f8) {
      local_220 = local_f8;
    }
    local_128 = local_220;
    local_f0 = local_220;
    local_130 = ((local_68 - local_60) - local_90) - 8.0;
    local_228 = local_130;
    if (local_220 < local_130) {
      local_228 = local_220;
    }
    local_138 = local_228;
    local_e8 = local_228;
    dVar6 = local_e0;
    dVar9 = local_60;
    local_100 = dVar7;
    FUN_015dff84();
    IVar2 = local_28;
    ppuVar5 = &local_1a8;
    local_1a8 = PTR___NSConcreteStackBlock_02578660;
    local_1a0 = 0xc2000000;
    local_19c = 0;
    local_198 = FUN_015e9f04;
    local_190 = &DAT_02583fb0;
    local_158 = dVar6;
    dStack_150 = local_228;
    local_148 = local_60;
    dStack_140 = dVar9;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = IVar2;
    dStack_178 = dStack_150;
    local_180 = local_158;
    dStack_168 = dStack_140;
    local_170 = local_148;
    _objc_retainBlock();
    local_160 = ppuVar5;
    if ((local_31 & 1) == 0) {
      (*(code *)ppuVar5[2])();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323ec8,0,PTR__OBJC_CLASS___UIView_026cdfd8,
                 PTR_s_animateWithDuration_delay_option_026ca4f0,0x20000,ppuVar5,0);
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_188,0);
  }
  return;
}

