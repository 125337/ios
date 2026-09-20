// showToast:isLoading: @ 01710778

/* Function Stack Size: 0x1c bytes */

void ToastManager::showToast_isLoading_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  ID local_1b0;
  undefined8 local_1a8;
  byte local_1a0;
  byte local_19f;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  undefined4 local_114;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  ID local_f0;
  undefined8 local_e8;
  byte local_e0;
  byte local_c9;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
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
  
  uVar22 = DAT_02323da8;
  uVar1 = DAT_02323d00;
  uVar21 = DAT_02323c60;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_c9 = (byte)param_4;
  puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_b8;
    local_110 = PTR___NSConcreteStackBlock_02578660;
    local_108 = 0xc2000000;
    local_104 = 0;
    local_100 = FUN_017131ac;
    local_f8 = &DAT_02579420;
    (*(code *)PTR__objc_retain_02578638)();
    uVar21 = local_c8;
    local_f0 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = uVar21;
    local_e0 = local_c9 & 1;
    _dispatch_async(puVar4,&local_110);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_114 = 1;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_f0,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_clearAllToasts_026b3948);
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_120 == (undefined *)0x0) {
      local_114 = 1;
    }
    else {
      uVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_containsString__0269d0b0,&cf__g_RgHevQQbcx);
      local_121 = (byte)uVar5;
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc_init();
      local_130 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_setAccessibilityIdentifier__0269ebc0,&cf_ToastView);
      if ((local_c9 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar22,uVar22,uVar22,uVar21,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar22,0x3fe0000000000000,uVar1,uVar21,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4030000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setClipsToBounds__026ca8c8,0);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_130,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_addSubview__026ca4c0,local_130);
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x408f380000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
      puVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar21 = 0;
      uVar22 = 0x4008000000000000;
      FUN_017131fc();
      puVar4 = local_130;
      local_140 = uVar21;
      uStack_138 = uVar22;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uStack_148 = uStack_138;
      local_150 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,uStack_138);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3eb33333);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setCurrentToastView__026b3928,local_130);
      if ((local_c9 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_alloc_init();
        local_168 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setText__026caa88,&cf__);
        puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setFont__026ca958);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setTextColor__026caa98);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_168,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addSubview__026ca4c0,local_168);
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
        puVar3 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4028000000000000,puVar3,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = local_168;
        local_68 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_centerYAnchor_0269ce10);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_centerYAnchor_0269ce10);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_constraintEqualToAnchor__0269ce08);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_60 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_68,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
        (*(code *)PTR__objc_release_02578630)(puVar11);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_alloc_init();
        local_170 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setText__026caa88,local_c8);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setTextColor__026caa98);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                   PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setFont__026ca958);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setTextAlignment__026caa90,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setNumberOfLines__026ca9d8,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addSubview__026ca4c0,local_170);
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
        puVar3 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4020000000000000,puVar3,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = local_170;
        local_88 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0xc028000000000000,puVar8,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = local_170;
        local_80 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_topAnchor_0269ce30);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_topAnchor_0269ce30);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4024000000000000,puVar11,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = local_170;
        local_78 = puVar13;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_bottomAnchor_0269ce38);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bottomAnchor_0269ce38);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar14;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0xc024000000000000,puVar14,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_70 = puVar16;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_88,4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
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
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_170);
        _objc_storeStrong(&local_168,0);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIActivityIndicatorView_026cebe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_initWithActivityIndicatorStyle__026acd50,100);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_158 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setColor__026acd60);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addSubview__026ca4c0,local_158);
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_startAnimating_026cab18);
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
        puVar3 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4028000000000000,puVar3,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = local_158;
        local_38 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_centerYAnchor_0269ce10);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_centerYAnchor_0269ce10);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_constraintEqualToAnchor__0269ce08);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_38,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
        (*(code *)PTR__objc_release_02578630)(puVar11);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_alloc_init();
        local_160 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setText__026caa88,local_c8);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setTextColor__026caa98);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                   PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setFont__026ca958);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setTextAlignment__026caa90,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setNumberOfLines__026ca9d8,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_160,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addSubview__026ca4c0,local_160);
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
        puVar3 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_leadingAnchor_0269ce20);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4020000000000000,puVar3,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = local_160;
        local_58 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0xc028000000000000,puVar8,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = local_160;
        local_50 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_topAnchor_0269ce30);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_topAnchor_0269ce30);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4024000000000000,puVar11,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = local_160;
        local_48 = puVar13;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_bottomAnchor_0269ce38);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bottomAnchor_0269ce38);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar14;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0xc024000000000000,puVar14,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_40 = puVar16;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_58,4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
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
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_160);
        _objc_storeStrong(&local_158,0);
      }
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      puVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_130;
      local_b0 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_safeAreaLayoutGuide_0269cf90);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4041800000000000,puVar8,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = local_130;
      local_a8 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)(0x406f400000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = local_130;
      local_a0 = puVar13;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x403e000000000000,puVar14,PTR_s_constraintGreaterThanOrEqualToAn_0269ce28);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = local_130;
      local_98 = puVar16;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc03e000000000000,puVar17,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_90 = puVar19;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
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
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setIsAnimating__026b3938,1);
      puVar6 = local_130;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      puVar4 = PTR___NSConcreteStackBlock_02578660;
      local_198 = PTR___NSConcreteStackBlock_02578660;
      local_190 = 0xc2000000;
      local_18c = 0;
      local_188 = FUN_01713228;
      local_180 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      IVar2 = local_b8;
      local_178 = puVar6;
      local_1d0 = puVar4;
      local_1c8 = 0xc2000000;
      local_1c4 = 0;
      local_1c0 = FUN_017132c4;
      local_1b8 = &DAT_025885b0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar21 = local_c8;
      local_1b0 = IVar2;
      local_1a0 = local_c9 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = uVar21;
      local_19f = local_121 & 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02324020,0,uVar1,0x3fe0000000000000,puVar3,
                 PTR_s_animateWithDuration_delay_usingS_026ca4f8,0x20000,&local_198,&local_1d0);
      _objc_storeStrong(&local_1a8);
      _objc_storeStrong(&local_1b0,0);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_130,0);
      local_114 = 0;
    }
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

