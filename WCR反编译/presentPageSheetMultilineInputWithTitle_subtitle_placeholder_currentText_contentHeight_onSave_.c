// presentPageSheetMultilineInputWithTitle:subtitle:placeholder:currentText:contentHeight:onSave: @ 00fc3fb0

/* Function Stack Size: 0x40 bytes */

ID WCRefineHelper::
   presentPageSheetMultilineInputWithTitle_subtitle_placeholder_currentText_contentHeight_onSave_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,double param_7,
             ID param_8,undefined4 param_9)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
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
  undefined8 uVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  double dVar32;
  double local_388;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  double local_190;
  undefined8 local_188;
  undefined8 local_180;
  double local_178;
  byte local_169;
  undefined *local_168;
  double local_160;
  char *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  double dStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  double dStack_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  undefined4 local_cc;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  double local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  SEL local_78;
  ID local_70;
  char *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_4);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_5);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_6);
  local_a8 = 0;
  local_a0 = param_7;
  _objc_storeStrong(&local_a8,param_8);
  lVar1 = local_80;
  FUN_00fc2f88();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = local_88;
  local_b0 = lVar1;
  FUN_00fc2f88();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = local_90;
  local_b8 = uVar28;
  FUN_00fc2f88();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_98;
  local_c0 = uVar30;
  FUN_00fc2f88();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_b0;
  local_c8 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_a8 == 0)) {
    local_68 = (char *)0x0;
    local_cc = 1;
  }
  else {
    pcVar3 = "MMPageSheetConfig";
    _objc_getClass();
    pcVar4 = "MMPageSheetAdapter";
    local_d8 = pcVar3;
    _objc_getClass();
    local_e0 = pcVar4;
    if ((local_d8 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
      local_68 = (char *)0x0;
      local_cc = 1;
    }
    else {
      pcVar3 = local_d8;
      _objc_alloc_init();
      local_e8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTitle__0269cef0,local_b0);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setNavLeftStyle__026aa730,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setEnableDragToClose__026aa740,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
      FUN_00f954a8(local_e8);
      puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      _objc_alloc_init();
      puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_f0 = puVar5;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_f8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UITextView_026ce1b8;
      _objc_alloc_init();
      local_100 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setText__026caa88,local_c8);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      dVar32 = 20.0;
      uVar28 = 0x4034000000000000;
      uVar30 = 0x4034000000000000;
      uVar31 = 0x4034000000000000;
      FUN_00fc4f84();
      local_140 = uVar28;
      uStack_138 = uVar30;
      local_130 = uVar31;
      dStack_128 = dVar32;
      local_120 = uVar28;
      uStack_118 = uVar30;
      local_110 = uVar31;
      dStack_108 = dVar32;
      (*(code *)PTR__objc_msgSend_02578628)(uVar28,local_100,PTR_s_setTextContainerInset__026a9fd8);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setAutocorrectionType__026ac820);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setAutocapitalizationType__026ac818);
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addSubview__026ca4c0,local_100);
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc_init();
      local_148 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setText__026caa88,local_c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setNumberOfLines__026ca9d8,0);
      puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setUserInteractionEnabled__026caad8,0);
      lVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setHidden__026ca970,lVar1 != 0);
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addSubview__026ca4c0,local_148);
      puVar5 = PTR_WCRPageSheetTextViewPlaceholderProxy_026cec10;
      _objc_alloc_init();
      local_150 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setPlaceholderLabel__026ad080,local_148);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setDelegate__026ca910,local_150);
      _objc_setAssociatedObject(local_100,&DAT_028e2fcc,local_150,1);
      FUN_00f9567c(local_100);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      puVar6 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_100;
      local_60 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = local_100;
      local_58 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = local_100;
      local_50 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar15;
      (*(code *)PTR__objc_msgSend_02578628)(puVar15,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = local_148;
      local_48 = puVar17;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4034000000000000,puVar18,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = local_148;
      local_40 = puVar20;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar21;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4034000000000000,puVar21,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = local_148;
      local_38 = puVar23;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar24;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc034000000000000,puVar24,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar26;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60
                 ,7);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_activateConstraints__0269ce58);
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
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setView__026aa750,local_f8);
      pcVar3 = local_e0;
      _objc_alloc_init();
      local_158 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setPageSheetConfig__026aa758,local_e8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_setHostViewController__026a58c8,local_f0);
      local_169 = 0;
      if (local_a0 <= 0.0) {
        puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        dVar29 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        local_169 = 1;
        local_168 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_388 = (dVar32 * 3.0) / 5.0;
        local_190 = dVar29;
        local_188 = uVar30;
        local_180 = uVar31;
        local_178 = dVar32;
      }
      else {
        local_388 = local_a0;
      }
      if ((local_169 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_168);
      }
      local_160 = local_388;
      (*(code *)PTR__objc_msgSend_02578628)(local_388,local_158,PTR_s_setContentHeight__026aa760);
      puVar5 = PTR_WCRPageSheetSaveContext_026cec08;
      _objc_alloc_init();
      local_198 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setSheet__026aa770,local_158);
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setTextView__026ab040,local_100);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_198,PTR_s_setMultilineSaveHandler__026ad088,local_a8);
      _objc_setAssociatedObject(local_158,&DAT_028e2fcd,local_100);
      _objc_setAssociatedObject(local_158,&DAT_028e2fcb,local_198,1);
      FUN_00f957f0(local_160,local_158,local_100);
      puVar6 = local_100;
      pcVar3 = local_158;
      local_1d0 = PTR___NSConcreteStackBlock_02578660;
      local_1c8 = 0xc2000000;
      local_1c4 = 0;
      local_1c0 = FUN_00fc4fd0;
      local_1b8 = &DAT_025839b0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar28 = local_b8;
      local_1b0 = pcVar3;
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_198;
      local_1a8 = uVar28;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = puVar5;
      FUN_00fc31ec(pcVar3,puVar6,&local_1d0);
      pcVar3 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = pcVar3;
      local_cc = 1;
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(&local_1a8,0);
      _objc_storeStrong(&local_1b0,0);
      _objc_storeStrong(&local_198,0);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_148,0);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_68;
}

