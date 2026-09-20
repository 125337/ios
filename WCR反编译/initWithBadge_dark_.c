// initWithBadge:dark: @ 01cf6378

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x1c bytes */

ID WCRefineProfileBgPreviewPane::initWithBadge_dark_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 ****ppppuVar26;
  undefined8 ****ppppuVar27;
  undefined8 ****ppppuVar28;
  undefined8 ****ppppuVar29;
  undefined8 ****ppppuVar30;
  undefined *puVar31;
  undefined8 ****ppppuVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 ****ppppuVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *local_230;
  undefined *local_128;
  undefined *local_e8;
  undefined *local_d8;
  undefined *local_d0;
  byte local_c1;
  undefined *local_c0;
  byte local_b1;
  undefined *local_b0;
  ID ***local_a8;
  undefined *local_a0;
  byte local_91;
  long local_90;
  SEL local_88;
  undefined8 ****local_80;
  undefined8 ****local_78;
  undefined8 ****local_70;
  undefined8 ****local_68;
  undefined8 ****local_60;
  undefined8 ****local_58;
  undefined8 ****local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar4 = DAT_02324040;
  uVar3 = DAT_02323e70;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  local_88 = param_2;
  local_80 = (undefined8 ****)param_1;
  _objc_storeStrong(&local_90,param_3);
  local_a8 = (ID ***)local_80;
  local_91 = (byte)param_4;
  local_80 = (undefined8 ****)0x0;
  ppppuVar5 = &local_a8;
  local_a0 = PTR_WCRefineProfileBgPreviewPane_026d0038;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_025782f0,
                      *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                      *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),ppppuVar5,
                      PTR_s_initWithFrame__026ca6e8);
  local_80 = ppppuVar5;
  _objc_storeStrong(&local_80);
  if (local_80 != (undefined8 ****)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setUserInteractionEnabled__026caad8,0);
    local_b1 = 0;
    local_c1 = 0;
    local_128 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_91 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02332e50,DAT_02323c60,DAT_02323f88,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_c1 = 1;
      local_c0 = local_128;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c68,DAT_02323cc0,DAT_02323d40,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 1;
      local_b0 = local_128;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888,local_128);
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    uVar2 = 2;
    if ((local_91 & 1) == 0) {
      uVar2 = 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setOverrideUserInterfaceStyle__026caa00,uVar2);
    puVar6 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setImageView__026b1b58);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    ppppuVar5 = local_80;
    ppppuVar7 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar5,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(ppppuVar7);
    puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setEmptyLabel__026a2660);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    ppppuVar5 = local_80;
    ppppuVar7 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar5,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(ppppuVar7);
    puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    local_d0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setText__026caa88,local_90);
    puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setTextAlignment__026caa90,1);
    bVar1 = (local_91 & 1) == 0;
    local_230 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,DAT_02323f78,DAT_02323c70,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_230;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323e00,DAT_02339dc0,uVar4,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_230;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setBackgroundColor__026ca888,local_230);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    lVar8 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setHidden__026ca970,lVar8 == 0);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_d0);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    ppppuVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = ppppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar10 = ppppuVar7;
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar7,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = local_80;
    local_78 = ppppuVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar12 = ppppuVar11;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar13 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar14 = ppppuVar12;
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar12,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar15 = local_80;
    local_70 = ppppuVar14;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar16 = ppppuVar15;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar17 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar18 = ppppuVar16;
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar16,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar19 = local_80;
    local_68 = ppppuVar18;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar20 = ppppuVar19;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar21 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar22 = ppppuVar20;
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar20,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar23 = local_80;
    local_60 = ppppuVar22;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar24 = ppppuVar23;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar25 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_centerXAnchor_0269ce00);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar26 = ppppuVar24;
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar24,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar27 = local_80;
    local_58 = ppppuVar26;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar28 = ppppuVar27;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar29 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_centerYAnchor_0269ce10);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar30 = ppppuVar28;
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar28,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = local_d0;
    local_50 = ppppuVar30;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar32 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar31;
    (*(code *)PTR__objc_msgSend_02578628)(puVar31,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar34 = local_d0;
    local_48 = puVar33;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar35 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar36 = puVar34;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4018000000000000,puVar34,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar37 = local_d0;
    local_40 = puVar36;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_widthAnchor_0269ce40);
    _objc_retainAutoreleasedReturnValue();
    puVar38 = puVar37;
    (*(code *)PTR__objc_msgSend_02578628)(0x4036000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar39 = local_d0;
    local_38 = puVar38;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar40 = puVar39;
    (*(code *)PTR__objc_msgSend_02578628)(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar41 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar40;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,
               10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar41);
    (*(code *)PTR__objc_release_02578630)(puVar40);
    (*(code *)PTR__objc_release_02578630)(puVar39);
    (*(code *)PTR__objc_release_02578630)(puVar38);
    (*(code *)PTR__objc_release_02578630)(puVar37);
    (*(code *)PTR__objc_release_02578630)(puVar36);
    (*(code *)PTR__objc_release_02578630)(ppppuVar35);
    (*(code *)PTR__objc_release_02578630)(puVar34);
    (*(code *)PTR__objc_release_02578630)(puVar33);
    (*(code *)PTR__objc_release_02578630)(ppppuVar32);
    (*(code *)PTR__objc_release_02578630)(puVar31);
    (*(code *)PTR__objc_release_02578630)(ppppuVar30);
    (*(code *)PTR__objc_release_02578630)(ppppuVar29);
    (*(code *)PTR__objc_release_02578630)(ppppuVar28);
    (*(code *)PTR__objc_release_02578630)(ppppuVar27);
    (*(code *)PTR__objc_release_02578630)(ppppuVar26);
    (*(code *)PTR__objc_release_02578630)(ppppuVar25);
    (*(code *)PTR__objc_release_02578630)(ppppuVar24);
    (*(code *)PTR__objc_release_02578630)(ppppuVar23);
    (*(code *)PTR__objc_release_02578630)(ppppuVar22);
    (*(code *)PTR__objc_release_02578630)(ppppuVar21);
    (*(code *)PTR__objc_release_02578630)(ppppuVar20);
    (*(code *)PTR__objc_release_02578630)(ppppuVar19);
    (*(code *)PTR__objc_release_02578630)(ppppuVar18);
    (*(code *)PTR__objc_release_02578630)(ppppuVar17);
    (*(code *)PTR__objc_release_02578630)(ppppuVar16);
    (*(code *)PTR__objc_release_02578630)(ppppuVar15);
    (*(code *)PTR__objc_release_02578630)(ppppuVar14);
    (*(code *)PTR__objc_release_02578630)(ppppuVar13);
    (*(code *)PTR__objc_release_02578630)(ppppuVar12);
    (*(code *)PTR__objc_release_02578630)(ppppuVar11);
    (*(code *)PTR__objc_release_02578630)(ppppuVar10);
    (*(code *)PTR__objc_release_02578630)(ppppuVar9);
    (*(code *)PTR__objc_release_02578630)(ppppuVar7);
    (*(code *)PTR__objc_release_02578630)(ppppuVar5);
    _objc_storeStrong(&local_d0,0);
  }
  ppppuVar5 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return (ID)ppppuVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

