// FUN_002a1f00 @ 002a1f00

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002a1f00(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double local_5c8;
  ulong local_4a0;
  ulong local_468;
  ulong local_420;
  undefined1 auStack_380 [48];
  undefined1 auStack_350 [48];
  double local_320;
  double local_318;
  double local_310;
  undefined *local_308;
  undefined *local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  code *local_2f0;
  undefined *local_2e8;
  ulong local_2e0;
  ulong local_2d8;
  undefined *local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  code *local_2c0;
  undefined *local_2b8;
  ulong local_2b0;
  ulong local_2a8;
  double local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [48];
  undefined1 auStack_250 [48];
  double local_220;
  double dStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulong local_128;
  ulong local_120;
  undefined4 local_114;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  byte local_f1;
  ulong local_f0;
  byte local_e1;
  ulong local_e0;
  byte local_d1;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8 [3];
  ulong local_a0;
  byte local_91;
  ulong local_90;
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar1 = DAT_02323ec8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  local_88 = param_1;
  uStack_80 = param_2;
  local_78 = param_3;
  uStack_70 = param_4;
  _objc_storeStrong(&local_90,param_5);
  uVar4 = local_90;
  local_91 = param_6;
  FUN_0029ded4(local_90,0x24f74a);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = uVar4;
  if (uVar4 == 0) {
    FUN_002aef14();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_a0;
    local_a0 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar4 = local_90;
    FUN_002acca8(local_90,1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_90;
    local_b8[0] = uVar4;
    FUN_0029ded4(local_90,0x24f749);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 0;
    local_e1 = 0;
    local_f1 = 0;
    local_c0 = uVar5;
    if (uVar5 == 0) {
LAB_002a2118:
      local_420 = local_b8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = local_420;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = uVar5;
      if (uVar5 != local_b8[0]) goto LAB_002a2118;
      local_420 = local_b8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = local_420;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_420 = local_420 + 1;
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    uVar5 = local_a0;
    uVar4 = local_b8[0];
    local_c8 = local_420;
    local_100 = local_420;
    uVar6 = local_b8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    local_468 = uVar7;
    if (local_100 < uVar7) {
      local_468 = local_100;
    }
    local_110 = local_468;
    local_108 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_insertSubview_atIndex__026ca748,uVar5,local_468);
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(local_b8,0);
  }
  puVar8 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setHidden__026ca970,1);
    local_114 = 1;
    goto LAB_002a314c;
  }
  local_4a0 = local_90;
  FUN_0029cc70();
  _objc_retainAutoreleasedReturnValue();
  local_120 = local_4a0;
  if (local_4a0 == 0) {
    local_4a0 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_4a0,PTR_s_selectedIndex_0269e580);
  }
  local_128 = local_4a0;
  FUN_002b215c(local_90,local_4a0);
  uStack_168 = uStack_80;
  local_170 = local_88;
  uStack_158 = uStack_70;
  local_160 = local_78;
  uVar4 = local_90;
  dVar13 = local_88;
  uVar15 = uStack_80;
  uVar17 = local_78;
  uVar18 = uStack_70;
  FUN_002b5a34(local_90,local_128);
  uVar2 = (undefined4)uVar4;
  local_190 = dVar13;
  uStack_188 = uVar15;
  local_180 = uVar17;
  uStack_178 = uVar18;
  local_148 = dVar13;
  uStack_140 = uVar15;
  local_138 = uVar17;
  uStack_130 = uVar18;
  _CGRectIsEmpty(dVar13,uVar15);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setHidden__026ca970,uVar2);
  uVar4 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isHidden_026ca768);
  if ((uVar4 & 1) == 0) {
    dVar13 = 1.0;
    if ((local_91 & 1) == 0) {
      dVar13 = DAT_02323d00;
    }
    dVar16 = DAT_02323d00;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setAlpha__026ca860);
    if ((local_91 & 1) == 0) {
LAB_002a3078:
      _memcpy(auStack_350,PTR__CGAffineTransformIdentity_025782d8,0x30);
      uVar4 = local_a0;
      _memcpy(auStack_380,auStack_350,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setTransform__026caad0,auStack_380);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,uStack_140,local_138,uStack_130,local_a0,PTR_s_setFrame__026ca960);
      FUN_002af980(local_90,local_a0);
    }
    else {
      uVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_frame_026ca640);
      uVar3 = (uint)uVar4;
      local_1b0 = dVar13;
      local_1a8 = dVar16;
      local_1a0 = uVar17;
      local_198 = uVar18;
      _CGRectIsEmpty();
      if ((uVar3 & 1) != 0) goto LAB_002a3078;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_frame_026ca640);
      uStack_1f8 = uStack_140;
      local_200 = local_148;
      uStack_1e8 = uStack_130;
      local_1f0 = local_138;
      dVar14 = local_148;
      local_1d0 = dVar13;
      dStack_1c8 = dVar16;
      local_1c0 = uVar17;
      uStack_1b8 = uVar18;
      _CGRectGetMidX(local_148,uStack_140,local_138,uStack_130);
      dStack_218 = dStack_1c8;
      local_220 = local_1d0;
      uStack_208 = uStack_1b8;
      local_210 = local_1c0;
      dVar13 = local_1d0;
      _CGRectGetMidX(local_1d0,dStack_1c8,local_1c0,uStack_1b8);
      local_1d8 = 1.0;
      if (dVar14 < dVar13) {
        local_1d8 = -1.0;
      }
      _CGAffineTransformMakeScale(DAT_02323ef8,DAT_02323ef0);
      uVar4 = local_a0;
      _memcpy(auStack_280,auStack_250,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setTransform__026caad0,auStack_280);
      uVar4 = local_a0;
      puVar9 = PTR__OBJC_CLASS___UIView_026cdfd8;
      puVar8 = PTR___NSConcreteStackBlock_02578660;
      local_2d0 = PTR___NSConcreteStackBlock_02578660;
      local_2c8 = 0xc2000000;
      local_2c4 = 0;
      local_2c0 = FUN_002b5d14;
      local_2b8 = &DAT_0257b9b8;
      (*(code *)PTR__objc_retain_02578638)();
      uVar5 = local_90;
      local_2b0 = uVar4;
      uStack_298 = uStack_140;
      local_2a0 = local_148;
      uStack_288 = uStack_130;
      local_290 = local_138;
      (*(code *)PTR__objc_retain_02578638)();
      uVar6 = local_90;
      local_2a8 = uVar5;
      local_300 = puVar8;
      local_2f8 = 0xc2000000;
      local_2f4 = 0;
      local_2f0 = FUN_002b5df0;
      local_2e8 = &DAT_02579820;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_a0;
      local_2e0 = uVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_2d8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,0,DAT_02323ee8,DAT_02323c98,puVar9,
                 PTR_s_animateWithDuration_delay_usingS_026ca4f8,6,&local_2d0,&local_300);
      puVar8 = PTR__OBJC_CLASS___CAKeyframeAnimation_026ce4d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAKeyframeAnimation_026ce4d8,PTR_s_animationWithKeyPath__026ca510
                 ,&cf_transform_scale_x);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_308 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_310 = DAT_02323c68;
      local_318 = DAT_02323ee0 + DAT_02323ed8 * ABS(local_1d8);
      local_5c8 = local_318;
      if (DAT_02323c68 < local_318) {
        local_5c8 = DAT_02323c68;
      }
      local_320 = local_5c8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_48 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_5c8 + 1.0,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_40 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323ed0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setValues__026caae0);
      (*(code *)PTR__objc_release_02578630)(puVar12);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_68 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fd3333333333333,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_60 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe6666666666666,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_50 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_setKeyTimes__026ca980);
      (*(code *)PTR__objc_release_02578630)(puVar12);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,local_308,PTR_s_setDuration__026ca920);
      uVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _objc_storeStrong(&local_308);
      _objc_storeStrong(&local_2d8,0);
      _objc_storeStrong(&local_2e0,0);
      _objc_storeStrong(&local_2a8,0);
      _objc_storeStrong(&local_2b0,0);
    }
    local_114 = 0;
  }
  else {
    local_114 = 1;
  }
  _objc_storeStrong(&local_120,0);
LAB_002a314c:
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

