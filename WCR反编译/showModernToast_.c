// showModernToast: @ 00f96060

/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::showModernToast_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  dispatch_time_t dVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *local_550;
  undefined *local_540;
  ulong local_480;
  ulong local_478;
  undefined1 *local_440;
  undefined1 *local_438;
  undefined *local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  code *local_3f8;
  undefined *local_3f0;
  undefined *local_3e8;
  double local_3e0;
  undefined *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  code *local_3c8;
  undefined *local_3c0;
  undefined *local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined *local_390;
  byte local_381;
  undefined *local_380;
  byte local_371;
  undefined *local_370;
  undefined *local_368;
  byte local_359;
  undefined *local_358;
  byte local_349;
  undefined *local_348;
  undefined *local_340;
  char *local_338;
  char *local_330;
  byte local_322;
  byte local_321;
  undefined1 auStack_320 [48];
  undefined1 auStack_2f0 [48];
  undefined1 auStack_2c0 [48];
  undefined1 auStack_290 [48];
  undefined *local_260;
  undefined8 local_258;
  undefined *local_250;
  byte local_241;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  long local_1b0;
  undefined1 *local_1a8;
  undefined4 local_19c;
  undefined1 *local_198;
  undefined8 local_190;
  SEL local_188;
  ID local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar26 = DAT_02323d00;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_190 = 0;
  local_188 = param_2;
  local_180 = param_1;
  _objc_storeStrong(&local_190,param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_198 == (undefined1 *)0x0) {
    local_19c = 1;
  }
  else {
    puVar2 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_viewWithTag__026cabe0,0x24f6da);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
      local_1b0 = 0;
      _memset(auStack_1f8,0,0x40);
      puVar2 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_438 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_438 != (undefined1 *)0x0) {
        lVar23 = *local_1e8;
        local_440 = (undefined1 *)0x0;
        do {
          do {
            if (*local_1e8 - lVar23 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar23,puVar2);
            }
            local_1b8 = *(ulong *)(local_1f0 + (long)local_440 * 8);
            _memset(auStack_240,0,0x40);
            uVar3 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_478 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_478 != 0) {
              lVar24 = *local_230;
              local_480 = 0;
              do {
                do {
                  if (*local_230 - lVar24 != 0) {
                    _objc_enumerationMutation(*local_230 - lVar24,uVar3);
                  }
                  uVar25 = *(ulong *)(local_238 + local_480 * 8);
                  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                  local_200 = uVar25;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar25,PTR_s_isKindOfClass__0269cd68,puVar1)
                  ;
                  if ((uVar25 & 1) != 0) {
                    _objc_storeStrong(&local_1b0,local_200);
                    local_19c = 4;
                    goto LAB_00f963b0;
                  }
                  local_480 = local_480 + 1;
                } while (local_480 < local_478);
                local_478 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                           auStack_128,0x10);
                local_480 = 0;
              } while (local_478 != 0);
            }
            local_19c = 0;
LAB_00f963b0:
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if (local_1b0 != 0) {
              local_19c = 2;
              goto LAB_00f96454;
            }
            local_440 = local_440 + 1;
          } while (local_440 < local_438);
          local_438 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,
                     0x10);
          local_440 = (undefined1 *)0x0;
        } while (local_438 != (undefined1 *)0x0);
      }
      local_19c = 0;
LAB_00f96454:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_removeFromSuperview_026ca800);
      _objc_storeStrong(&local_1b0,0);
    }
    local_241 = 0;
    local_250 = (undefined *)0x0;
    puVar2 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == (undefined1 *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_250;
      local_250 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      puVar2 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_traitCollection_026caba8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_250;
      local_250 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_250;
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_userInterfaceStyle_026cabc8);
    local_241 = puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    _objc_storeStrong(&local_250,0);
    local_258 = 2;
    if ((local_241 & 1) == 0) {
      local_258 = 1;
    }
    puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,local_258);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithEffect__026ca6e0);
    local_260 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setTag__026caa80,0x24f6da);
    puVar1 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4036000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setAlpha__026ca860);
    _CGAffineTransformMakeScale(uVar26);
    _CGAffineTransformMakeTranslation(0,0xc049000000000000);
    _CGAffineTransformConcat(auStack_2c0,auStack_2f0);
    puVar1 = local_260;
    _memcpy(auStack_320,auStack_290,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTransform__026caad0,auStack_320);
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_321 = (byte)puVar4;
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_322 = (byte)puVar4;
    local_330 = (char *)0x0;
    pcVar5 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = "MMThemeManager";
    _objc_getClass("MMThemeManager");
    pcVar7 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_getService__0269d170,pcVar6);
    _objc_retainAutoreleasedReturnValue();
    local_338 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    if (local_338 != (char *)0x0) {
      local_349 = 0;
      local_359 = 0;
      local_540 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_241 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        local_359 = 1;
        local_358 = local_540;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_349 = 1;
        local_348 = local_540;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_340 = local_540;
      if ((local_359 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_358);
      }
      if ((local_349 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_348);
      }
      if ((local_322 & 1) == 0) {
        pcVar6 = local_338;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_338,PTR_s_svgImageNamed_color__0269f760,&cf_bell_on_filled,local_340);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_330;
        local_330 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      else if ((local_321 & 1) == 0) {
        pcVar6 = local_338;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_338,PTR_s_svgImageNamed_color__0269f760,&cf_eyes_off_filled,local_340);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_330;
        local_330 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      else {
        pcVar6 = local_338;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_338,PTR_s_svgImageNamed_color__0269f760,&cf_eyes_on_filled,local_340);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_330;
        local_330 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      _objc_storeStrong(&local_340,0);
    }
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_368 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setContentMode__026ca8e0,1);
    local_371 = 0;
    local_381 = 0;
    local_550 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_241 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      local_381 = 1;
      local_380 = local_550;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_371 = 1;
      local_370 = local_550;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_setTintColor__026caab0,local_550);
    if ((local_381 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_380);
    }
    if ((local_371 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_370);
    }
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    local_390 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,local_190);
    if ((local_241 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
      puVar4 = local_390;
      (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar26 = 0;
      uVar27 = 0x3ff0000000000000;
      FUN_00f97ac4();
      puVar1 = local_390;
      local_3a0 = uVar26;
      uStack_398 = uVar27;
      (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uStack_3a8 = uStack_398;
      local_3b0 = local_3a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3a0,uStack_398);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_390;
      (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4000000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_390;
      (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3f666666);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_addSubview__026ca4c0,local_260);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_260,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_368,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_390,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar4 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_safeAreaLayoutGuide_0269cf90);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4024000000000000,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = local_260;
    local_140 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_centerXAnchor_0269ce00);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_centerXAnchor_0269ce00);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = local_260;
    local_138 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_130 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_140)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(puVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar9 = local_368;
    (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402e000000000000,puVar9,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_368;
    local_160 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_centerYAnchor_0269ce10);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = local_368;
    local_158 = puVar17;
    (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_widthAnchor_0269ce40);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = local_368;
    local_150 = puVar19;
    (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_148 = puVar21;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_160,
               4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar16);
    (*(code *)PTR__objc_release_02578630)(puVar21);
    (*(code *)PTR__objc_release_02578630)(puVar20);
    (*(code *)PTR__objc_release_02578630)(puVar19);
    (*(code *)PTR__objc_release_02578630)(puVar18);
    (*(code *)PTR__objc_release_02578630)(puVar17);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar4 = local_390;
    (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = local_368;
    (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4020000000000000,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = local_390;
    local_178 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc02e000000000000,puVar12,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = local_390;
    local_170 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_centerYAnchor_0269ce10);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar17;
    (*(code *)PTR__objc_msgSend_02578628)(puVar17,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_168 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_178,
               3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar21);
    (*(code *)PTR__objc_release_02578630)(puVar20);
    (*(code *)PTR__objc_release_02578630)(puVar19);
    (*(code *)PTR__objc_release_02578630)(puVar18);
    (*(code *)PTR__objc_release_02578630)(puVar17);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(puVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar9 = local_260;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_3d8 = PTR___NSConcreteStackBlock_02578660;
    local_3d0 = 0xc2000000;
    local_3cc = 0;
    local_3c8 = FUN_00f97af0;
    local_3c0 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_3b8 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe0000000000000,0,DAT_02323db8,0x3ff0000000000000,puVar4,
               PTR_s_animateWithDuration_delay_usingS_026ca4f8,0x20000,&local_3d8);
    local_3e0 = DAT_02323d88;
    dVar22 = _dispatch_time(0,(long)(DAT_02323d88 * 1000000000.0));
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = local_260;
    local_408 = puVar1;
    local_400 = 0xc2000000;
    local_3fc = 0;
    local_3f8 = FUN_00f97b90;
    local_3f0 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_3e8 = puVar9;
    _dispatch_after(dVar22,puVar4,&local_408);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_3e8,0);
    _objc_storeStrong(&local_3b8,0);
    _objc_storeStrong(&local_390,0);
    _objc_storeStrong(&local_368,0);
    _objc_storeStrong(&local_338,0);
    _objc_storeStrong(&local_330,0);
    _objc_storeStrong(&local_260,0);
    _objc_storeStrong(&local_1a8,0);
    local_19c = 0;
  }
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_190,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

