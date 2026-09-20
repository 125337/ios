// FUN_0055fdbc @ 0055fdbc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0055fdbc(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                 undefined8 param_6,byte param_7)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  double local_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  undefined *local_4b8;
  undefined *local_4b0;
  undefined *local_438;
  undefined4 local_430;
  undefined4 local_42c;
  code *local_428;
  undefined *local_420;
  undefined *local_418;
  undefined1 auStack_410 [8];
  undefined *local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  code *local_3f8;
  undefined *local_3f0;
  undefined *local_3e8;
  undefined *local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  code *local_3d0;
  undefined *local_3c8;
  undefined *local_3c0;
  undefined1 auStack_3b8 [8];
  undefined *local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  code *local_3a0;
  undefined *local_398;
  undefined *local_390;
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [48];
  undefined1 auStack_350 [64];
  double local_310;
  double dStack_308;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined4 local_294;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined4 local_264;
  double local_260;
  undefined8 local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  undefined4 local_1bc;
  undefined *local_1b8;
  undefined *local_1b0;
  long local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  long local_160;
  undefined *local_158 [8];
  undefined *local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  byte local_c9;
  undefined8 local_c8;
  long local_c0;
  double local_b8;
  double dStack_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar2 = DAT_02323da8;
  dVar1 = DAT_02323c68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar14 = DAT_02323c68;
  local_c9 = param_7;
  local_c8 = param_6;
  local_c0 = param_5;
  local_b8 = param_1;
  dStack_b0 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_bounds_026ca548);
  local_110 = param_1;
  local_108 = param_2;
  local_100 = dVar14;
  local_f8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_convertRect_toView__0269ded8,0);
  puVar7 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_f0 = param_1;
  dStack_e8 = param_2;
  local_e0 = dVar14;
  dStack_d8 = param_4;
  _objc_alloc();
  dVar14 = dStack_e8;
  dVar13 = local_e0;
  dVar17 = dStack_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_118 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setTag__026caa80,0x5ea4);
  puVar7 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_158[0] = puVar8;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  if (local_158[0] == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_118);
  }
  else {
    _memset(auStack_1a0,0,0x40);
    puVar7 = local_158[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_4b0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_4b0 != (undefined *)0x0) {
      lVar9 = *local_190;
      local_4b8 = (undefined *)0x0;
      do {
        do {
          if (*local_190 - lVar9 != 0) {
            _objc_enumerationMutation(*local_190 - lVar9,puVar8);
          }
          lVar10 = *(long *)(local_198 + (long)local_4b8 * 8);
          local_160 = lVar10;
          (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_tag_026cab98);
          if (lVar10 == 0x5ea4) {
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_removeFromSuperview_026ca800);
          }
          local_4b8 = local_4b8 + 1;
        } while (local_4b8 < local_4b0);
        local_4b0 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                   0x10);
        local_4b8 = (undefined *)0x0;
      } while (local_4b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_addSubview__026ca4c0,local_118);
  }
  lVar9 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_WCRefineLoadWeChatExpressionImag_026a50c0,local_c9 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_1b0 = (undefined *)0x0;
  local_1a8 = lVar9;
  if (lVar9 == 0) {
    puVar8 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc_init();
    puVar7 = local_1b0;
    local_1b0 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
    dVar14 = dVar2;
    dVar13 = dVar2;
    dVar17 = DAT_02323d00;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar7 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x403e000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc_init();
    local_1b8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setImage__026ca978,local_1a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setContentMode__026ca8e0,1);
    _objc_storeStrong(&local_1b0,local_1b8);
    _objc_storeStrong(&local_1b8,0);
  }
  dVar12 = local_b8;
  if (local_1b0 == (undefined *)0x0) {
    local_1bc = 1;
  }
  else {
    bVar6 = false;
    dVar16 = dVar14;
    dVar19 = dVar13;
    dVar21 = dVar17;
    if (0.0 < local_b8) {
      dVar11 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bounds_026ca548);
      dVar5 = dStack_b0;
      bVar6 = false;
      dVar16 = dVar13;
      dVar19 = dVar13;
      dVar21 = dVar14;
      local_1f0 = dVar11;
      local_1e8 = dVar14;
      local_1e0 = dVar13;
      local_1d8 = dVar17;
      if ((dVar12 < dVar13) && (bVar6 = false, dVar12 = dVar5, 0.0 < dStack_b0)) {
        dVar17 = dStack_b0;
        dVar16 = dVar14;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bounds_026ca548);
        bVar6 = dVar5 < dVar16;
        dVar21 = dVar13;
        local_210 = dVar17;
        local_208 = dVar13;
        local_200 = dVar19;
        local_1f8 = dVar16;
      }
    }
    if (bVar6) {
      dStack_1c8 = dStack_b0;
      local_1d0 = local_b8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bounds_026ca548);
      uVar15 = 0x4000000000000000;
      dVar13 = dVar19 / 2.0;
      dVar14 = dVar13;
      local_240 = dVar12;
      local_238 = dVar16;
      local_230 = dVar19;
      local_228 = dVar21;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bounds_026ca548);
      dVar17 = dVar12 / 2.0;
      local_260 = dVar14;
      local_258 = uVar15;
      local_250 = dVar16;
      local_248 = dVar12;
      FUN_0056d460();
      local_220 = dVar13;
      dStack_218 = dVar17;
      local_1d0 = dVar13;
      dStack_1c8 = dVar17;
    }
    local_264 = 0x1e;
    local_278 = local_1d0;
    local_280 = local_e0 - 30.0;
    local_5c8 = local_280;
    if (local_1d0 < local_280) {
      local_5c8 = local_1d0;
    }
    local_288 = local_5c8;
    local_270 = local_5c8;
    if (local_5c8 <= 30.0) {
      local_5d0 = 30.0;
    }
    else {
      local_5d0 = local_5c8;
    }
    local_290 = local_5d0;
    local_1d0 = local_5d0;
    local_294 = 0x1e;
    local_2a8 = dStack_1c8;
    local_2b0 = dStack_d8 - 30.0;
    local_5d8 = local_2b0;
    if (dStack_1c8 < local_2b0) {
      local_5d8 = dStack_1c8;
    }
    local_2b8 = local_5d8;
    local_2a0 = local_5d8;
    if (local_5d8 <= 30.0) {
      local_5e0 = 30.0;
    }
    else {
      local_5e0 = local_5d8;
    }
    local_2c0 = local_5e0;
    dStack_1c8 = local_5e0;
    uVar18 = 0;
    uVar15 = 0;
    uVar22 = 0x404e000000000000;
    uVar20 = 0x404e000000000000;
    FUN_0056ce4c();
    local_2e0 = uVar15;
    uStack_2d8 = uVar18;
    local_2d0 = uVar20;
    uStack_2c8 = uVar22;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar15,uVar18,uVar20,uVar22,local_1b0,PTR_s_setFrame__026ca960);
    dStack_308 = dStack_1c8;
    local_310 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,dStack_1c8,local_1b0,PTR_s_setCenter__026ca8c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_addSubview__026ca4c0,local_1b0);
    _CGAffineTransformMakeScale(dVar1);
    puVar7 = local_1b0;
    _memcpy(auStack_380,auStack_350,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setTransform__026caad0,auStack_380);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_1b0,PTR_s_setAlpha__026ca860);
    _objc_initWeak(auStack_388,local_118);
    puVar3 = local_1b0;
    puVar8 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar7 = PTR___NSConcreteStackBlock_02578660;
    if ((local_c9 & 1) == 0) {
      local_408 = PTR___NSConcreteStackBlock_02578660;
      local_400 = 0xc2000000;
      local_3fc = 0;
      local_3f8 = FUN_0056d858;
      local_3f0 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_1b0;
      local_3e8 = puVar3;
      local_438 = puVar7;
      local_430 = 0xc2000000;
      local_42c = 0;
      local_428 = FUN_0056d8f4;
      local_420 = &DAT_0257de78;
      (*(code *)PTR__objc_retain_02578638)();
      local_418 = puVar4;
      _objc_copyWeak(auStack_410,auStack_388);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar2,0,puVar8,PTR_s_animateWithDuration_delay_option_026ca4f0,0x20000,&local_408,
                 &local_438);
      _objc_destroyWeak(auStack_410);
      _objc_storeStrong(&local_418);
      _objc_storeStrong(&local_3e8,0);
    }
    else {
      local_3b0 = PTR___NSConcreteStackBlock_02578660;
      local_3a8 = 0xc2000000;
      local_3a4 = 0;
      local_3a0 = FUN_0056d48c;
      local_398 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_1b0;
      local_390 = puVar3;
      local_3e0 = puVar7;
      local_3d8 = 0xc2000000;
      local_3d4 = 0;
      local_3d0 = FUN_0056d528;
      local_3c8 = &DAT_0257de78;
      (*(code *)PTR__objc_retain_02578638)();
      local_3c0 = puVar4;
      _objc_copyWeak(auStack_3b8,auStack_388);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar2,0,puVar8,PTR_s_animateWithDuration_delay_option_026ca4f0,0x20000,&local_3b0,
                 &local_3e0);
      _objc_destroyWeak(auStack_3b8);
      _objc_storeStrong(&local_3c0);
      _objc_storeStrong(&local_390,0);
    }
    _objc_destroyWeak(auStack_388);
    local_1bc = 0;
  }
  _objc_storeStrong(&local_1b0);
  _objc_storeStrong(&local_1a8,0);
  _objc_storeStrong(local_158,0);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

