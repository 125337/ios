// FUN_0155d844 @ 0155d844

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0155d844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6,byte param_7)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_550;
  double local_520;
  double local_518;
  double local_4f8;
  undefined *local_460;
  undefined4 local_458;
  undefined4 local_454;
  code *local_450;
  undefined *local_448;
  undefined *local_440;
  undefined *local_438;
  undefined *local_430;
  undefined *local_428;
  byte local_420;
  byte local_41f;
  byte local_41e;
  undefined **local_418;
  undefined *local_410;
  undefined4 local_408;
  undefined4 local_404;
  code *local_400;
  undefined *local_3f8;
  undefined *local_3f0;
  undefined *local_3e8;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined *local_3d0;
  undefined *local_3c8;
  double local_3c0;
  undefined8 local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  double dStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  double local_378;
  double dStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  undefined8 local_348;
  double dStack_340;
  byte local_338;
  byte local_337;
  byte local_336;
  undefined **local_330;
  double local_328;
  double local_320;
  undefined8 local_318;
  undefined8 local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  undefined8 local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  undefined1 local_2b9;
  undefined *local_2b8;
  double local_2b0;
  double dStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  double local_290;
  double dStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  byte local_269;
  double local_268;
  double local_260;
  double local_258;
  undefined8 local_250;
  double local_248;
  undefined8 local_240;
  double dStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  double local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  double local_200;
  byte local_1f1;
  double local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [48];
  undefined4 local_68;
  char local_61;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  byte local_2a;
  byte local_29;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  local_2a = param_7;
  local_29 = param_6;
  FUN_015874e4(local_28);
  puVar3 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5e80);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_38 = puVar3;
  _objc_getAssociatedObject(local_28,DAT_028c5e88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_40 = puVar4;
  _objc_getAssociatedObject(local_28,DAT_028c5e90);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_48 = puVar3;
  _objc_getAssociatedObject(local_28,DAT_028c5ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_28;
  local_50 = puVar4;
  _objc_getAssociatedObject(local_28,DAT_028c5ee8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_40;
  local_61 = '\0';
  bVar2 = true;
  local_58 = puVar5;
  if (((local_38 != (undefined *)0x0) && (bVar2 = true, local_40 != (undefined *)0x0)) &&
     (bVar2 = true, local_48 != (undefined *)0x0)) {
    puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_61 = '\x01';
    bVar2 = puVar3 == puVar4;
    local_60 = puVar4;
  }
  if (local_61 != '\0') {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  puVar3 = PTR__CGAffineTransformIdentity_025782d8;
  if (bVar2) {
    local_68 = 1;
  }
  else {
    _memcpy(auStack_98,PTR__CGAffineTransformIdentity_025782d8,0x30);
    puVar4 = local_38;
    _memcpy(auStack_c8,auStack_98,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTransform__026caad0,auStack_c8);
    _memcpy(auStack_f8,puVar3,0x30);
    puVar3 = local_40;
    _memcpy(auStack_128,auStack_f8,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTransform__026caad0,auStack_128);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    local_148 = 0;
    dVar8 = 0.0;
    local_190 = dVar8;
    uStack_188 = param_2;
    local_180 = param_3;
    uStack_178 = param_4;
    local_170 = dVar8;
    uStack_168 = param_2;
    local_160 = param_3;
    uStack_158 = param_4;
    uStack_140 = param_2;
    local_138 = param_3;
    uStack_130 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFrame__026ca960);
    puVar3 = local_28;
    _objc_getAssociatedObject(local_28,DAT_028c5ec0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_198 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    local_1c0 = dVar8;
    local_1b8 = param_2;
    local_1b0 = param_3;
    local_1a8 = param_4;
    _CGRectGetHeight();
    local_1a0 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    local_1e8 = dVar8;
    local_1e0 = param_2;
    local_1d8 = param_3;
    local_1d0 = param_4;
    _CGRectGetHeight();
    if (local_198 <= 0.0) {
      param_2 = 0x4028000000000000;
      local_4f8 = local_1a0 + 12.0;
    }
    else {
      local_4f8 = local_198;
    }
    local_1f0 = local_4f8;
    puVar3 = local_28;
    local_1c8 = dVar8;
    _objc_getAssociatedObject(local_28,DAT_028c5eb0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_1f1 = (byte)puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
    local_220 = local_4f8;
    local_218 = param_2;
    local_210 = param_3;
    local_208 = param_4;
    _CGRectGetMinY();
    local_200 = local_4f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    local_240 = 0;
    if ((local_29 & 1) == 0) {
      dStack_238 = local_1f0;
      if ((local_1f1 & 1) == 0) {
        local_250 = 0;
        local_258 = local_1f0 - 12.0;
        local_520 = local_258;
        if (local_258 <= 0.0) {
          local_520 = 0.0;
        }
        local_260 = local_520;
        local_518 = local_520;
      }
      else {
        local_518 = local_1f0 + local_1c8;
      }
      local_248 = local_518;
    }
    else {
      dStack_238 = 0.0;
      local_248 = local_1c8;
    }
    dVar9 = local_200 + local_248;
    puVar3 = local_28;
    dVar11 = local_248;
    local_268 = dVar9;
    local_230 = param_3;
    uStack_228 = param_4;
    FUN_0158c9b0(local_28,local_29 & 1);
    local_269 = (byte)puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
    dVar8 = dVar9;
    local_290 = dVar9;
    dStack_288 = dVar11;
    local_280 = param_3;
    uStack_278 = param_4;
    if (local_50 != (undefined *)0x0) {
      dVar10 = local_268 + 6.0;
      dVar8 = dVar10;
      dVar11 = 6.0;
      dStack_288 = dVar10;
      if ((local_269 & 1) != 0) {
        _CGRectGetMaxY();
        dVar8 = dVar9;
        dVar11 = dVar10;
        local_268 = dVar9;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
    puVar3 = local_58;
    local_2b9 = 0;
    bVar2 = false;
    uVar1 = local_58 != (undefined *)0x0;
    local_2b0 = dVar8;
    dStack_2a8 = dVar11;
    local_2a0 = param_3;
    uStack_298 = param_4;
    if ((bool)uVar1) {
      puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar3 != puVar4;
      local_2b9 = uVar1;
      local_2b8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar1 = local_2b9;
    }
    local_2b9 = uVar1;
    if (bVar2) {
      local_2c8 = 10.0;
      if ((local_269 & 1) == 0) {
        local_2c8 = 14.0;
      }
      dVar11 = local_268 + local_2c8;
      dVar8 = local_2b0;
      param_3 = local_2a0;
      param_4 = uStack_298;
      dStack_2a8 = dVar11;
      _CGRectGetMaxY(local_269 & 1);
      local_268 = dVar8;
    }
    puVar3 = local_28;
    _objc_getAssociatedObject(local_28,DAT_028c5ef0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_2d0 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    local_2f8 = local_268 + 16.0;
    local_300 = local_2d0;
    local_550 = local_2f8;
    if (local_2f8 < local_2d0) {
      local_550 = local_2d0;
    }
    local_308 = local_550;
    dStack_2d8 = local_550;
    puVar3 = local_28;
    dVar9 = local_2d0;
    local_2f0 = dVar8;
    dStack_2e8 = dVar11;
    local_2e0 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_328 = local_550;
      local_320 = dVar9;
      local_318 = param_3;
      local_310 = param_4;
      _CGRectGetHeight(local_550,dVar9,param_3,param_4);
      dVar8 = local_2f0;
      _CGRectGetHeight(local_2f0,dStack_2e8,local_2e0,dStack_2d8);
      dStack_2e8 = (double)(long)((local_550 - dVar8) * 0.5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUserInteractionEnabled__026caad8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUserInteractionEnabled__026caad8,1);
    if ((local_29 & 1) != 0) {
      FUN_0156ad1c(local_40);
    }
    if (((local_29 & 1) == 0) && (local_50 != (undefined *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInteractionEnabled__026caad8,1);
    }
    puVar4 = local_48;
    puVar3 = PTR___NSConcreteStackBlock_02578660;
    ppuVar6 = &local_410;
    local_410 = PTR___NSConcreteStackBlock_02578660;
    local_408 = 0xc2000000;
    local_404 = 0;
    local_400 = FUN_0158ca74;
    local_3f8 = &DAT_02586b60;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_40;
    local_3f0 = puVar4;
    local_3c0 = local_248;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_38;
    local_3e8 = puVar5;
    dStack_3b0 = dStack_238;
    local_3b8 = local_240;
    uStack_3a0 = uStack_228;
    local_3a8 = local_230;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_50;
    local_3e0 = puVar4;
    local_338 = local_29 & 1;
    local_337 = local_1f1 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_58;
    local_3d8 = puVar5;
    dStack_390 = dStack_288;
    local_398 = local_290;
    uStack_380 = uStack_278;
    local_388 = local_280;
    local_336 = local_269 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_28;
    local_3d0 = puVar4;
    dStack_370 = dStack_2a8;
    local_378 = local_2b0;
    uStack_360 = uStack_298;
    local_368 = local_2a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_3c8 = puVar5;
    dStack_350 = dStack_2e8;
    local_358 = local_2f0;
    dStack_340 = dStack_2d8;
    local_348 = local_2e0;
    _objc_retainBlock();
    puVar5 = local_38;
    ppuVar7 = &local_460;
    local_460 = puVar3;
    local_458 = 0xc2000000;
    local_454 = 0;
    local_450 = FUN_0158cdec;
    local_448 = &DAT_02586b90;
    local_330 = ppuVar6;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_40;
    local_440 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_50;
    local_438 = puVar4;
    local_420 = local_29 & 1;
    local_41f = local_1f1 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_28;
    local_430 = puVar3;
    local_41e = local_269 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_428 = puVar4;
    _objc_retainBlock();
    local_418 = ppuVar7;
    FUN_01587c10(local_28,local_2a & 1,local_330,ppuVar7);
    _objc_storeStrong(&local_418);
    _objc_storeStrong(&local_428,0);
    _objc_storeStrong(&local_430,0);
    _objc_storeStrong(&local_438,0);
    _objc_storeStrong(&local_440,0);
    _objc_storeStrong(&local_330,0);
    _objc_storeStrong(&local_3c8,0);
    _objc_storeStrong(&local_3d0,0);
    _objc_storeStrong(&local_3d8,0);
    _objc_storeStrong(&local_3e0,0);
    _objc_storeStrong(&local_3e8,0);
    _objc_storeStrong(&local_3f0,0);
    local_68 = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

