// performIdleSnapAnimated: @ 015e9fe0

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::performIdleSnapAnimated_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  double in_d0;
  double dVar6;
  double dVar7;
  double in_d2;
  undefined8 uVar8;
  double in_d3;
  double dVar9;
  double local_200;
  double local_1f8;
  double local_1e0;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  ID local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined **local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_a1;
  double local_a0;
  double local_80;
  undefined8 uStack_78;
  double local_70;
  undefined8 uStack_68;
  double local_50;
  double local_48;
  double local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sidebarExpanded_026b1248);
  if ((((param_1 & 1) == 0) &&
      (IVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDragging_026b1380)
      , (IVar2 & 1) == 0)) &&
     (IVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isHidden_026ca768),
     (IVar2 & 1) == 0)) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballAvatarHost_026b12f8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar3 & 1) != 0) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_40 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      uStack_78 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
      local_80 = *(double *)PTR__UIEdgeInsetsZero_02578118;
      uStack_68 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
      dVar6 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
      IVar2 = local_28;
      local_70 = dVar6;
      local_50 = in_d2;
      local_48 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a0 = dVar6;
      local_80 = dVar6;
      local_70 = in_d2;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar8 = 0x3fe0000000000000;
      bVar1 = local_50 * 0.5 < in_d2;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_c0 = local_40 * 0.5;
      if (bVar1) {
        local_1e0 = local_50 - local_c0;
      }
      else {
        local_1e0 = -local_c0;
      }
      local_c8 = local_1e0;
      dVar7 = 8.0;
      dVar6 = local_80 + 8.0;
      IVar2 = local_28;
      local_e0 = dVar6;
      local_a1 = bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_108 = dVar6;
      local_100 = dVar7;
      local_f8 = uVar8;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_1f8 = dVar7;
      if (dVar7 <= local_e0) {
        local_1f8 = local_e0;
      }
      local_110 = local_1f8;
      local_d8 = local_1f8;
      local_118 = ((local_48 - local_40) - local_70) - 8.0;
      local_200 = local_118;
      if (local_1f8 < local_118) {
        local_200 = local_1f8;
      }
      local_120 = local_200;
      local_d0 = local_200;
      dVar6 = local_c8;
      dVar9 = local_40;
      local_e8 = dVar7;
      FUN_015dff84();
      local_140 = dVar6;
      dStack_138 = local_200;
      local_130 = local_40;
      dStack_128 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIdleSnapped__026b1370,1);
      IVar2 = local_28;
      ppuVar5 = &local_190;
      local_190 = PTR___NSConcreteStackBlock_02578660;
      local_188 = 0xc2000000;
      local_184 = 0;
      local_180 = FUN_015ea510;
      local_178 = &DAT_02583fb0;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = IVar2;
      dStack_160 = dStack_138;
      local_168 = local_140;
      dStack_150 = dStack_128;
      local_158 = local_130;
      _objc_retainBlock();
      local_148 = ppuVar5;
      if ((local_31 & 1) == 0) {
        (*(code *)ppuVar5[2])();
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323e88,0,PTR__OBJC_CLASS___UIView_026cdfd8,
                   PTR_s_animateWithDuration_delay_option_026ca4f0,0,ppuVar5,0);
      }
      _objc_storeStrong(&local_148);
      _objc_storeStrong(&local_170,0);
    }
  }
  return;
}

