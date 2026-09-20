// installIfNeeded @ 006e4978

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenRecordingProgressHUD::installIfNeeded(ID param_1,SEL param_2)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  double dVar42;
  undefined8 uVar43;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_3e0;
  double local_3d8;
  undefined *local_370;
  undefined *local_338;
  undefined *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  code *local_248;
  undefined *local_240;
  undefined *local_238;
  double local_230;
  undefined8 local_228;
  double local_220;
  double local_218;
  undefined8 local_210;
  double local_208;
  undefined8 local_200;
  double local_1e8;
  double local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  undefined *local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  byte local_199;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_188 [48];
  undefined1 auStack_158 [48];
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  undefined *local_c8;
  undefined8 local_c0;
  byte local_b5;
  undefined4 local_b4;
  ID local_b0 [3];
  SEL local_98;
  ID local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar43 = DAT_02323ee8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = param_2;
  local_90 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_containerView_026a6d08);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar2 == 0) {
    IVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_targetWindow_026a6d10);
    _objc_retainAutoreleasedReturnValue();
    local_b0[0] = IVar2;
    if (IVar2 == 0) {
      local_b4 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_viewWithTag__026cabe0,0x24f6da);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_b0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_viewWithTag__026cabe0,0x24f6dc);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_b5 = 0;
      uVar1 = 0xd;
      FUN_006e48ac(0xd,0);
      if ((uVar1 & 1) != 0) {
        IVar2 = local_b0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_traitCollection_026caba8);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_b5 = IVar3 == 2;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      local_c0 = 2;
      if ((local_b5 & 1) == 0) {
        local_c0 = 1;
      }
      puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,local_c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithEffect__026ca6e0);
      local_c8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTag__026caa80,DAT_02324268);
      puVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4032000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_c8,PTR_s_setAlpha__026ca860);
      _CGAffineTransformMakeScale(uVar43);
      _CGAffineTransformMakeTranslation(0,0xc045000000000000);
      _CGAffineTransformConcat(auStack_128,auStack_158);
      puVar4 = local_c8;
      _memcpy(auStack_188,auStack_f8,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTransform__026caad0,auStack_188);
      puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc_init();
      puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      local_190 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_199 = 0;
      local_1a9 = 0;
      local_338 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_b5 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        local_1a9 = 1;
        local_1a8 = local_338;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_199 = 1;
        local_198 = local_338;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setTextColor__026caa98,local_338);
      if ((local_1a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1a8);
      }
      if ((local_199 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_198);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setTextAlignment__026caa90,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323f28,local_190,PTR_s_setMinimumScaleFactor__026ca9d0);
      puVar4 = PTR__OBJC_CLASS___UIProgressView_026ce858;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithProgressViewStyle__026a6d20,1);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_1b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setProgressTintColor__026a6d28);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_1c1 = 0;
      local_1d1 = 0;
      local_370 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_b5 & 1) == 0) {
        uVar43 = DAT_02323cc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_1d1 = 1;
        local_1d0 = local_370;
      }
      else {
        uVar43 = DAT_02323c70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_1c1 = 1;
        local_1c0 = local_370;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setTrackTintColor__026a6d30,local_370);
      if ((local_1d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1d0);
      }
      if ((local_1c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1c0);
      }
      puVar4 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      dVar42 = 2.0;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setClipsToBounds__026ca8c8,1);
      puVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_addSubview__026ca4c0,local_c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_bounds_026ca548);
      local_208 = dVar42;
      local_200 = uVar43;
      _CGRectGetWidth(dVar42,uVar43,in_d2,in_d3);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      local_1e8 = dVar42 - 40.0;
      local_210 = 0x4071e00000000000;
      local_3d8 = local_1e8;
      if (286.0 <= local_1e8) {
        local_3d8 = 286.0;
      }
      local_218 = local_3d8;
      local_220 = local_3d8;
      local_228 = 0x406dc00000000000;
      if (238.0 <= local_3d8) {
        local_3e0 = local_3d8;
      }
      else {
        local_3e0 = 238.0;
      }
      local_230 = local_3e0;
      local_1e0 = local_3e0;
      puVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_b0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_safeAreaLayoutGuide_0269cf90);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4024000000000000,puVar5,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_c8;
      local_88 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = local_b0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_c8;
      local_80 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = local_c8;
      local_78 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)(0x404d000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = local_190;
      local_70 = puVar13;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402c000000000000,puVar14,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = local_190;
      local_68 = puVar17;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar18;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc02c000000000000,puVar18,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = local_190;
      local_60 = puVar21;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar23;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar22;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4022000000000000,puVar22,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = local_190;
      local_58 = puVar25;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar26;
      (*(code *)PTR__objc_msgSend_02578628)(0x4034000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = local_1b8;
      local_50 = puVar27;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = puVar29;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar28;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4032000000000000,puVar28,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = local_1b8;
      local_48 = puVar31;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar33 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar33;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = puVar32;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc032000000000000,puVar32,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar36 = local_1b8;
      local_40 = puVar35;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar37 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar38 = puVar36;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4020000000000000,puVar36,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar39 = local_1b8;
      local_38 = puVar38;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      puVar40 = puVar39;
      (*(code *)PTR__objc_msgSend_02578628)(0x4010000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar41 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar40;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88
                 ,0xc);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
      (*(code *)PTR__objc_release_02578630)(puVar41);
      (*(code *)PTR__objc_release_02578630)(puVar40);
      (*(code *)PTR__objc_release_02578630)(puVar39);
      (*(code *)PTR__objc_release_02578630)(puVar38);
      (*(code *)PTR__objc_release_02578630)(puVar37);
      (*(code *)PTR__objc_release_02578630)(puVar36);
      (*(code *)PTR__objc_release_02578630)(puVar35);
      (*(code *)PTR__objc_release_02578630)(puVar34);
      (*(code *)PTR__objc_release_02578630)(puVar33);
      (*(code *)PTR__objc_release_02578630)(puVar32);
      (*(code *)PTR__objc_release_02578630)(puVar31);
      (*(code *)PTR__objc_release_02578630)(puVar30);
      (*(code *)PTR__objc_release_02578630)(puVar29);
      (*(code *)PTR__objc_release_02578630)(puVar28);
      (*(code *)PTR__objc_release_02578630)(puVar27);
      (*(code *)PTR__objc_release_02578630)(puVar26);
      (*(code *)PTR__objc_release_02578630)(puVar25);
      (*(code *)PTR__objc_release_02578630)(puVar24);
      (*(code *)PTR__objc_release_02578630)(puVar23);
      (*(code *)PTR__objc_release_02578630)(puVar22);
      (*(code *)PTR__objc_release_02578630)(puVar21);
      (*(code *)PTR__objc_release_02578630)(puVar20);
      (*(code *)PTR__objc_release_02578630)(puVar19);
      (*(code *)PTR__objc_release_02578630)(puVar18);
      (*(code *)PTR__objc_release_02578630)(puVar17);
      (*(code *)PTR__objc_release_02578630)(puVar16);
      (*(code *)PTR__objc_release_02578630)(puVar15);
      (*(code *)PTR__objc_release_02578630)(puVar14);
      (*(code *)PTR__objc_release_02578630)(puVar13);
      (*(code *)PTR__objc_release_02578630)(puVar12);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setContainerView__026a6d38,local_c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTitleLabel__026a6d40,local_190);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setProgressView__026a6d48,local_1b8);
      puVar5 = local_c8;
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_258 = PTR___NSConcreteStackBlock_02578660;
      local_250 = 0xc2000000;
      local_24c = 0;
      local_248 = FUN_006e68d0;
      local_240 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_238 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323f38,0,DAT_02324258,DAT_02323d00,puVar4,
                 PTR_s_animateWithDuration_delay_usingS_026ca4f8,0x20000,&local_258,0);
      _objc_storeStrong(&local_238);
      _objc_storeStrong(&local_1b8,0);
      _objc_storeStrong(&local_190,0);
      _objc_storeStrong(&local_c8,0);
      local_b4 = 0;
    }
    _objc_storeStrong(local_b0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

