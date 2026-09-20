// FUN_01127468 @ 01127468

void FUN_01127468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
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
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  double dVar58;
  double local_488;
  double local_480;
  undefined *local_3e8;
  undefined *local_398;
  undefined *local_390;
  undefined *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  code *local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double local_2a0;
  undefined8 local_298;
  double local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  double local_270;
  double local_268;
  undefined *local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  byte local_229;
  undefined *local_228;
  byte local_219;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  byte local_1f9;
  undefined *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  undefined *local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined1 auStack_1b0 [48];
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [48];
  undefined *local_f0;
  undefined8 local_e8;
  byte local_dd;
  undefined4 local_dc;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
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
  
  uVar7 = DAT_02323d00;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(ulong *)(param_5 + 0x20);
  local_d0 = param_5;
  local_c8 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_invalidated_026a6d50);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_targetWindow_026a6d10);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = lVar2;
    if (lVar2 == 0) {
      local_dc = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_viewWithTag__026cabe0,0x24f6da);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar2 = local_d8;
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_viewTag_026af1c0);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_viewWithTag__026cabe0,uVar3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      local_dd = 0;
      lVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_traitCollection_026caba8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_dd = lVar4 == 2;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      local_e8 = 2;
      if ((local_dd & 1) == 0) {
        local_e8 = 1;
      }
      puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,local_e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_initWithEffect__026ca6e0);
      local_f0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_viewTag_026af1c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setTag__026caa80,uVar3);
      puVar5 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4036000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setAlpha__026ca860);
      _CGAffineTransformMakeScale(uVar7);
      _CGAffineTransformMakeTranslation(0,0xc049000000000000);
      _CGAffineTransformConcat(auStack_150,auStack_180);
      puVar5 = local_f0;
      _memcpy(auStack_1b0,auStack_120,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTransform__026caad0,auStack_1b0);
      puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR_s_toastIconWithDarkMode__026af1c8,local_dd & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_initWithImage__0269e558);
      local_1b8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setContentMode__026ca8e0,1);
      local_1c1 = 0;
      local_1d1 = 0;
      local_390 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_dd & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        local_1d1 = 1;
        local_1d0 = local_390;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_1c1 = 1;
        local_1c0 = local_390;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setTintColor__026caab0,local_390);
      if ((local_1d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1d0);
      }
      if ((local_1c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1c0);
      }
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc_init();
      local_1e9 = 0;
      local_1f9 = 0;
      local_398 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_1e0 = puVar5;
      if ((local_dd & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,DAT_02323cc0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_1f9 = 1;
        local_1f8 = local_398;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,DAT_02323c70,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_1e9 = 1;
        local_1e8 = local_398;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_setBackgroundColor__026ca888,local_398);
      if ((local_1f9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1f8);
      }
      if ((local_1e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1e8);
      }
      puVar5 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_setClipsToBounds__026ca8c8,1);
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc_init();
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_208 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar5 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4000000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addSubview__026ca4c0,local_208);
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc_init();
      local_210 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setText__026caa88,&cf_0_);
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setTextAlignment__026caa90,2);
      uVar7 = *(undefined8 *)PTR__UIFontWeightMedium_02578150;
      puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_219 = 0;
      local_229 = 0;
      local_3e8 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_dd & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        local_229 = 1;
        local_228 = local_3e8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_219 = 1;
        local_218 = local_3e8;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setTextColor__026caa98,local_3e8);
      if ((local_229 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_228);
      }
      if ((local_219 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_218);
      }
      if ((local_dd & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
        puVar6 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar7 = 0;
        uVar3 = 0x3ff0000000000000;
        FUN_01129200();
        puVar5 = local_210;
        local_240 = uVar7;
        uStack_238 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        uStack_248 = uStack_238;
        local_250 = local_240;
        uVar7 = uStack_238;
        (*(code *)PTR__objc_msgSend_02578628)(local_240);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x4000000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x3f666666);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar5 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addSubview__026ca4c0,local_f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_208,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_210,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      puVar5 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(0);
      _objc_retainAutoreleasedReturnValue();
      local_258 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      dVar58 = 42.0;
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_260 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
      local_290 = dVar58;
      local_288 = uVar7;
      local_280 = param_3;
      local_278 = param_4;
      _CGRectGetWidth(dVar58,uVar7,param_3,param_4);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      local_270 = dVar58 - 40.0;
      local_298 = 0x4067800000000000;
      local_480 = local_270;
      if (188.0 <= local_270) {
        local_480 = 188.0;
      }
      local_2a0 = local_480;
      local_2a8 = local_480;
      local_2b0 = 0x4066000000000000;
      if (176.0 <= local_480) {
        local_488 = local_480;
      }
      else {
        local_488 = 176.0;
      }
      local_2b8 = local_488;
      local_268 = local_488;
      puVar6 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_safeAreaLayoutGuide_0269cf90);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_topOffset_026af1d0);
      puVar8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_constraintEqualToAnchor_constant_0269ce18,lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_f0;
      local_c0 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = local_f0;
      local_b8 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)(local_268);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = local_f0;
      local_b0 = puVar13;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)(0x4046000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = local_1b8;
      local_a8 = puVar15;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar16;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,puVar16,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = local_1b8;
      local_a0 = puVar19;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar21;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar20;
      (*(code *)PTR__objc_msgSend_02578628)(puVar20,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = local_1b8;
      local_98 = puVar23;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar24;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = local_1b8;
      local_90 = puVar25;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar26;
      (*(code *)PTR__objc_msgSend_02578628)(0x4032000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = local_210;
      local_88 = puVar27;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = puVar29;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar28;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc02e000000000000,puVar28,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = local_210;
      local_80 = puVar31;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      puVar33 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar33;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = puVar32;
      (*(code *)PTR__objc_msgSend_02578628)(puVar32,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_260;
      puVar36 = local_1e0;
      local_78 = puVar35;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar37 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar38 = puVar36;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4020000000000000,puVar36,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar39 = local_1e0;
      local_68 = puVar38;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar40 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar41 = puVar39;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc020000000000000,puVar39,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar42 = local_1e0;
      local_60 = puVar41;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      puVar43 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar44 = puVar43;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar45 = puVar42;
      (*(code *)PTR__objc_msgSend_02578628)(puVar42,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar46 = local_1e0;
      local_58 = puVar45;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      dVar58 = 4.0;
      puVar47 = puVar46;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar48 = local_208;
      local_50 = puVar47;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar49 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar50 = puVar48;
      (*(code *)PTR__objc_msgSend_02578628)(puVar48,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar51 = local_208;
      local_48 = puVar50;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar52 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar53 = puVar51;
      (*(code *)PTR__objc_msgSend_02578628)(puVar51,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar54 = local_208;
      local_40 = puVar53;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar55 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar56 = puVar54;
      (*(code *)PTR__objc_msgSend_02578628)(puVar54,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      local_30 = local_258;
      puVar57 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_38 = puVar56;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,0x13);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_activateConstraints__0269ce58);
      (*(code *)PTR__objc_release_02578630)(puVar57);
      (*(code *)PTR__objc_release_02578630)(puVar56);
      (*(code *)PTR__objc_release_02578630)(puVar55);
      (*(code *)PTR__objc_release_02578630)(puVar54);
      (*(code *)PTR__objc_release_02578630)(puVar53);
      (*(code *)PTR__objc_release_02578630)(puVar52);
      (*(code *)PTR__objc_release_02578630)(puVar51);
      (*(code *)PTR__objc_release_02578630)(puVar50);
      (*(code *)PTR__objc_release_02578630)(puVar49);
      (*(code *)PTR__objc_release_02578630)(puVar48);
      (*(code *)PTR__objc_release_02578630)(puVar47);
      (*(code *)PTR__objc_release_02578630)(puVar46);
      (*(code *)PTR__objc_release_02578630)(puVar45);
      (*(code *)PTR__objc_release_02578630)(puVar44);
      (*(code *)PTR__objc_release_02578630)(puVar43);
      (*(code *)PTR__objc_release_02578630)(puVar42);
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
      (*(code *)PTR__objc_release_02578630)(lVar10);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setContainerView__026a6d38,local_f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setIconView__026af1d8,local_1b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setProgressTrackView__026af1e0,local_1e0);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setProgressFillView__026af1e8,local_208);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setProgressFillWidthConstraint__026af1f0,
                 local_258);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setProgressLabelWidthConstraint__026af1f8,
                 local_260);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setPercentLabel__026af200,local_210);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_timeIntervalSinceReferenceDate_0269e4e0);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setShowTimestamp__026af208);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_displayedProgress_026af1b0);
      if (0.0 < dVar58) {
        uVar7 = *(undefined8 *)(param_5 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_5 + 0x20),PTR_s_displayedProgress_026af1b0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_applyProgress_failedCount_animat_026af1b8,0,0);
      }
      puVar6 = local_f0;
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_2e0 = PTR___NSConcreteStackBlock_02578660;
      local_2d8 = 0xc2000000;
      local_2d4 = 0;
      local_2d0 = FUN_0112922c;
      local_2c8 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,0,DAT_02323db8,0x3ff0000000000000,puVar5,
                 PTR_s_animateWithDuration_delay_usingS_026ca4f8,0x20000,&local_2e0);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_startSimulatedProgressIfNeeded_026af210);
      _objc_storeStrong(&local_2c0,0);
      _objc_storeStrong(&local_260,0);
      _objc_storeStrong(&local_258,0);
      _objc_storeStrong(&local_210,0);
      _objc_storeStrong(&local_208,0);
      _objc_storeStrong(&local_1e0,0);
      _objc_storeStrong(&local_1b8,0);
      _objc_storeStrong(&local_f0,0);
      local_dc = 0;
    }
    _objc_storeStrong(&local_d8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

