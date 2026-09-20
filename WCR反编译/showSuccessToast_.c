// showSuccessToast: @ 017133cc

/* Function Stack Size: 0x18 bytes */

void ToastManager::showSuccessToast_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  undefined8 uVar39;
  undefined8 uVar40;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  ID local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined *local_e8;
  uint local_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  ID local_b8;
  undefined8 local_b0 [3];
  undefined8 local_98;
  SEL local_90;
  ID local_88;
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
  
  uVar39 = DAT_02323da8;
  uVar2 = DAT_02323d00;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = 0;
  local_90 = param_2;
  local_88 = param_1;
  _objc_storeStrong(&local_98,param_3);
  puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar5 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar4 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_88;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_01715018;
    local_c0 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_98;
    local_b8 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0[0] = uVar2;
    _dispatch_async(puVar5,&local_d8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_dc = 1;
    _objc_storeStrong(local_b0);
    _objc_storeStrong(&local_b8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_clearAllToasts_026b3948);
    puVar5 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    bVar1 = local_e8 != (undefined *)0x0;
    if (bVar1) {
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc_init();
      local_f0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_setAccessibilityIdentifier__0269ebc0,&cf_ToastView);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar39,uVar2,uVar39,DAT_02323c60,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4030000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setClipsToBounds__026ca8c8,0);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_f0,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addSubview__026ca4c0,local_f0);
      puVar5 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x408f380000000000);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
      puVar4 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar39 = 0;
      uVar40 = 0x4008000000000000;
      FUN_017131fc();
      puVar5 = local_f0;
      local_100 = uVar39;
      uStack_f8 = uVar40;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = uStack_f8;
      local_110 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,uStack_f8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3eb33333);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setCurrentToastView__026b3928,local_f0);
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc_init();
      local_118 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setText__026caa88,&::cf__);
      puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,*(undefined8 *)PTR__UIFontWeightBold_02578140,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addSubview__026ca4c0,local_118);
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc_init();
      local_120 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setText__026caa88,local_98);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setTextAlignment__026caa90,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setNumberOfLines__026ca9d8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addSubview__026ca4c0,local_120);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      puVar4 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_f0;
      local_80 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_safeAreaLayoutGuide_0269cf90);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4041800000000000,puVar8,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = local_f0;
      local_78 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)(0x406f400000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = local_f0;
      local_70 = puVar13;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x403e000000000000,puVar14,PTR_s_constraintGreaterThanOrEqualToAn_0269ce28);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = local_f0;
      local_68 = puVar16;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc03e000000000000,puVar17,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = local_118;
      local_60 = puVar19;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar20;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,puVar20,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = local_118;
      local_58 = puVar22;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar23;
      (*(code *)PTR__objc_msgSend_02578628)(puVar23,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = local_120;
      local_50 = puVar25;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = puVar26;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4020000000000000,puVar26,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = local_120;
      local_48 = puVar28;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar29;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc028000000000000,puVar29,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = local_120;
      local_40 = puVar31;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar33 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar32;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4024000000000000,puVar32,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar35 = local_120;
      local_38 = puVar34;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar36 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar35;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc024000000000000,puVar35,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar38 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar37;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80
                 ,0xb);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_activateConstraints__0269ce58);
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
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar5 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_initWithStyle__026ca710,1);
      local_128 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_prepare_026ca7d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_impactOccurred_026ca6a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setIsAnimating__026b3938,1);
      puVar6 = local_f0;
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      puVar5 = PTR___NSConcreteStackBlock_02578660;
      local_150 = PTR___NSConcreteStackBlock_02578660;
      local_148 = 0xc2000000;
      local_144 = 0;
      local_140 = FUN_01715060;
      local_138 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_88;
      local_130 = puVar6;
      local_178 = puVar5;
      local_170 = 0xc2000000;
      local_16c = 0;
      local_168 = FUN_017150fc;
      local_160 = &DAT_025790c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02324020,0,uVar2,0x3fe0000000000000,puVar4,
                 PTR_s_animateWithDuration_delay_usingS_026ca4f8,0x20000,&local_150,&local_178);
      _objc_storeStrong(&local_158);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_f0,0);
    }
    local_dc = (uint)!bVar1;
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

