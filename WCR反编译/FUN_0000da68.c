// FUN_0000da68 @ 0000da68

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0000da68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
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
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_99;
  ulong local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  uint local_78;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_5);
  uVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isViewLoaded_0269cde0);
  if ((uVar3 & 1) == 0) {
    local_78 = 1;
  }
  else {
    uVar3 = local_68;
    _objc_getAssociatedObject(local_68,&DAT_028c79f2);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 0;
    local_99 = 0;
    bVar2 = false;
    uVar1 = uVar3 != 0;
    local_80 = uVar3;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      uVar4 = local_68;
      local_88 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar3 == uVar4;
      local_99 = uVar1;
      local_98 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar1 = local_99;
    }
    local_99 = uVar1;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (!bVar2) {
      puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_initWithEffect__026ca6e0);
      local_e8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_130 = param_1;
      uStack_128 = param_2;
      local_120 = param_3;
      uStack_118 = param_4;
      local_108 = param_1;
      uStack_100 = param_2;
      local_f8 = param_3;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_e8,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setUserInteractionEnabled__026caad8,1);
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc_init();
      local_138 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setText__026caa88,&cf_J_Y_R_);
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setNumberOfLines__026ca9d8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTextAlignment__026caa90,1);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      puVar5 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
      _objc_retainAutoreleasedReturnValue();
      local_140 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle_forState__026caab8,&cf_e,0);
      puVar5 = local_140;
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitleColor_forState__026caac0,puVar6,0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4032000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      _objc_initWeak(auStack_148,local_68);
      puVar6 = local_140;
      puVar5 = PTR__OBJC_CLASS___UIAction_026ce028;
      local_170 = PTR___NSConcreteStackBlock_02578660;
      local_168 = 0xc2000000;
      local_164 = 0;
      local_160 = FUN_0000f90c;
      local_158 = &DAT_02578dd0;
      _objc_copyWeak(auStack_150,auStack_148);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_actionWithHandler__0269cdf0,&local_170);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_addAction_forControlEvents__0269cdf8,puVar5,0x40);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      puVar6 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_138;
      local_60 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc038000000000000,puVar10,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = local_138;
      local_58 = puVar13;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4038000000000000,puVar14,PTR_s_constraintGreaterThanOrEqualToAn_0269ce28);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = local_140;
      local_50 = puVar17;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_centerXAnchor_0269ce00);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar18;
      (*(code *)PTR__objc_msgSend_02578628)(puVar18,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = local_140;
      local_48 = puVar21;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar22;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4034000000000000,puVar22,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = local_140;
      local_40 = puVar24;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar25;
      (*(code *)PTR__objc_msgSend_02578628)(0x405e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = local_140;
      local_38 = puVar26;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = puVar27;
      (*(code *)PTR__objc_msgSend_02578628)(0x4042000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar28;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60
                 ,7);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_activateConstraints__0269ce58);
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
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_setAssociatedObject(local_68,&DAT_028c79f2,local_e8,1);
      _objc_destroyWeak(auStack_150);
      _objc_destroyWeak(auStack_148);
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_e8,0);
    }
    else {
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e0 = param_1;
      uStack_d8 = param_2;
      local_d0 = param_3;
      uStack_c8 = param_4;
      local_c0 = param_1;
      uStack_b8 = param_2;
      local_b0 = param_3;
      uStack_a8 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_80,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_78 = (uint)bVar2;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

