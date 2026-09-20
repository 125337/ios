// FUN_007f586c @ 007f586c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_007f586c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_510;
  double local_4f8;
  undefined *local_360;
  undefined4 local_358;
  undefined4 local_354;
  code *local_350;
  undefined *local_348;
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined *local_330;
  byte local_321;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  byte local_2f9;
  undefined *local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double local_298;
  byte local_289;
  undefined *local_288;
  double local_280;
  undefined8 local_278;
  double local_270;
  double local_268;
  double local_260;
  undefined *local_258;
  double local_250;
  undefined8 uStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  undefined8 uStack_228;
  double local_220;
  double dStack_218;
  double local_210;
  undefined8 local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  double dStack_1d8;
  byte local_1c9;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 uStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 uStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  undefined8 uStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  undefined8 uStack_118;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if ((local_28 == (undefined *)0x0) || (local_30 == 0)) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectionStyle__0269e5f8,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,0);
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setPreservesSuperviewLayoutMargi_026a89d8,0);
    puVar2 = PTR__UIEdgeInsetsZero_02578118;
    uStack_78 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
    local_80 = *(undefined8 *)PTR__UIEdgeInsetsZero_02578118;
    uStack_68 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
    local_70 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
    local_60 = local_80;
    uStack_58 = uStack_78;
    local_50 = local_70;
    uStack_48 = uStack_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,uStack_78,local_70,uStack_68,local_28,PTR_s_setLayoutMargins__026a0250);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uStack_98 = *(undefined8 *)(puVar2 + 8);
    local_a0 = *(undefined8 *)puVar2;
    uStack_88 = *(undefined8 *)(puVar2 + 0x18);
    local_90 = *(undefined8 *)(puVar2 + 0x10);
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uStack_98;
    local_c0 = local_a0;
    uStack_a8 = uStack_88;
    local_b0 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__NSDirectionalEdgeInsetsZero_02578060;
    uStack_f8 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_02578060 + 8);
    local_100 = *(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_02578060;
    uStack_e8 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_02578060 + 0x18);
    local_f0 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_02578060 + 0x10);
    local_e0 = local_100;
    uStack_d8 = uStack_f8;
    local_d0 = local_f0;
    uStack_c8 = uStack_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,uStack_f8,local_f0,uStack_e8,local_28,
               PTR_s_setDirectionalLayoutMargins__026a89e0);
    uStack_118 = *(undefined8 *)(puVar2 + 8);
    local_120 = *(double *)puVar2;
    dStack_108 = *(double *)(puVar2 + 0x18);
    local_110 = *(double *)(puVar2 + 0x10);
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uStack_118;
    local_140 = local_120;
    dStack_128 = dStack_108;
    local_130 = local_110;
    dVar8 = local_120;
    uVar6 = uStack_118;
    dVar4 = local_110;
    dVar10 = dStack_108;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    puVar2 = local_28;
    local_160 = dVar8;
    uStack_158 = uVar6;
    local_150 = dVar4;
    dStack_148 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    dVar7 = dVar8;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
      dVar7 = dVar4;
      local_1a0 = dVar8;
      local_198 = uVar6;
      local_190 = dVar4;
      local_188 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_convertRect_toView__0269ded8,local_30);
      dVar4 = dVar7;
      local_180 = dVar8;
      uStack_178 = uVar6;
      local_170 = dVar7;
      dStack_168 = dVar10;
      local_160 = dVar8;
      uStack_158 = uVar6;
      local_150 = dVar7;
      dStack_148 = dVar10;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    puVar2 = local_28;
    puVar3 = PTR_WCRefineToDoFullWidthCell_026ce988;
    local_1c8 = dVar7;
    local_1c0 = uVar6;
    local_1b8 = dVar4;
    local_1b0 = dVar10;
    local_1a8 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoFullWidthCell_026ce988,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_1c9 = (byte)puVar2;
    dVar8 = local_1a8;
    if ((0.0 < local_1a8) && (((ulong)puVar2 & 1) != 0)) {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1f0 = dVar8;
      uStack_1e8 = uVar6;
      local_1e0 = dVar4;
      dStack_1d8 = dVar10;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_1f0 = -local_160;
      uStack_1e8 = 0;
      local_1e0 = local_1a8;
      dVar8 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      uStack_228 = uStack_1e8;
      local_230 = local_1f0;
      local_220 = local_1e0;
      puVar2 = local_28;
      dStack_218 = dVar10;
      local_210 = dVar8;
      local_208 = uVar6;
      local_200 = dVar4;
      local_1f8 = dVar10;
      dStack_1d8 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uStack_248 = uStack_228;
      local_250 = local_230;
      dStack_238 = dStack_218;
      local_240 = local_220;
      dVar8 = local_230;
      uVar6 = uStack_228;
      dVar4 = local_220;
      dVar10 = dStack_218;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    local_258 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_289 = 0;
    local_4f8 = dVar4;
    local_280 = dVar8;
    local_278 = uVar6;
    local_270 = dVar4;
    local_268 = dVar10;
    if (dVar4 <= 0.0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      local_2d0 = dVar4;
      local_2c8 = uVar6;
      local_2c0 = local_4f8;
      local_2b8 = dVar10;
    }
    else {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      local_289 = 1;
      local_288 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_2b0 = dVar4;
      local_2a8 = uVar6;
      local_2a0 = local_4f8;
      local_298 = dVar10;
    }
    if ((local_289 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_288);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_260 = local_4f8;
    dVar8 = 1.0;
    if (local_4f8 < local_1a8 - 1.0) {
      local_260 = local_1a8;
    }
    dVar7 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoCardView_026ce978,PTR_s_layoutCardWidthForAvailableWidth_026a8990,
               local_258);
    dVar4 = local_260;
    local_2d8 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoCardView_026ce978,PTR_s_layoutCardHeightForConfig_tableW_026a8998,
               local_258);
    local_510 = local_260;
    dVar7 = local_2d8;
    local_2e0 = dVar4;
    FUN_00800270(local_258);
    local_2f9 = 0;
    local_2e8 = local_510;
    if ((local_1c9 & 1) == 0) {
      local_510 = local_510 - local_160;
      puVar2 = local_28;
      dVar7 = local_510;
      dVar4 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      local_2f9 = 1;
      local_2f8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_510 = local_510 - dVar7;
      local_320 = dVar7;
      local_318 = dVar4;
      local_310 = dVar8;
      local_308 = dVar10;
    }
    if ((local_2f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2f8);
    }
    local_2f0 = local_510;
    local_321 = 0;
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_330 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_330;
    puVar3 = PTR_WCRefineToDoCardView_026ce978;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineToDoCardView_026ce978,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_321 = 1;
      puVar3 = PTR_WCRefineToDoCardView_026ce978;
      _objc_alloc();
      local_510 = *(double *)PTR__CGRectZero_025782f0;
      dVar7 = *(double *)(PTR__CGRectZero_025782f0 + 8);
      dVar8 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
      dVar10 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar2 = local_330;
      local_330 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_setTag__026caa80,DAT_02324328);
      (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_setUserInteractionEnabled__026caad8,1);
      _objc_initWeak(auStack_338,local_38);
      local_360 = PTR___NSConcreteStackBlock_02578660;
      local_358 = 0xc2000000;
      local_354 = 0;
      local_350 = FUN_00802280;
      local_348 = &DAT_0257be28;
      _objc_copyWeak(auStack_340,auStack_338);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_330,PTR_s_setOnTapToOpenSettings__026a89a0,&local_360);
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_destroyWeak(auStack_340);
      _objc_destroyWeak(auStack_338);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_frame_026ca640);
    dVar4 = local_2f0;
    dVar5 = local_2f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_toDoCardTopSpacing_026a8958);
    dVar9 = local_2d8;
    dVar11 = local_2e0;
    FUN_007f1484();
    bVar1 = true;
    if (((ABS(local_510 - dVar4) <= 0.5) && (bVar1 = true, ABS(dVar7 - dVar5) <= 0.5)) &&
       (bVar1 = true, ABS(dVar8 - dVar9) <= 0.5)) {
      bVar1 = 0.5 < ABS(dVar10 - dVar11);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_260,local_330,PTR_s_setReferenceTableWidth__026a89a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_setUsesExpandedPreviewSlot__026a89b0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_setDiagSlotName__026a89b8,&cf_cell);
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,dVar5,dVar9,dVar11,local_330,PTR_s_setFrame__026ca960);
    }
    FUN_007f84d0();
    DAT_028ccf08 = DAT_028ccf08 + 1;
    if ((local_321 & 1) != 0) {
      DAT_028ccf10 = DAT_028ccf10 + 1;
    }
    if ((local_321 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_330,PTR_s_reloadContentWithReason__026a8988,&cf_configure_cell_create);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_resyncHostedWebGeometry_026a85a8);
    _objc_storeStrong(&local_330);
    _objc_storeStrong(&local_258,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

