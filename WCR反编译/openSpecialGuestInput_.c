// openSpecialGuestInput: @ 01de1c00

/* Function Stack Size: 0x18 bytes */

void WCRefineSmallSignalSettingsViewController::openSpecialGuestInput_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
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
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  char *local_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  char *local_118;
  undefined8 local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  undefined8 local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  char *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_8c;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  SEL local_70;
  ID local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "MMPageSheetConfig";
  _objc_getClass();
  pcVar2 = "MMPageSheetAdapter";
  local_80 = pcVar1;
  _objc_getClass();
  local_88 = pcVar2;
  if ((local_80 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_8c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_80;
    local_a0 = puVar3;
    _objc_alloc_init();
    local_a8 = pcVar1;
    FUN_01de2b48(pcVar1,&cf_title,&cf_eQ_RV_);
    pcVar1 = local_a8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    FUN_01de2b48(pcVar1,&cf_navLeftStyle);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_a8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01de2b48(pcVar1,&cf_enableEdgeSlideToClose);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_a8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01de2b48(pcVar1,&cf_enableDragToClose);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_a8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01de2b48(pcVar1,&cf_isAllowTapBgMaskToClose);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_b0 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_b8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    local_c0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setText__026caa88,&cf_kL);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setNumberOfLines__026ca9d8);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addSubview__026ca4c0,local_c0);
    puVar3 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    _objc_alloc_init();
    local_c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setText__026caa88,local_a0);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    dVar29 = 16.0;
    uVar26 = 0x4028000000000000;
    dVar28 = dVar29;
    dVar30 = dVar29;
    FUN_01de2cc8();
    local_110 = uVar26;
    dStack_108 = dVar29;
    local_100 = dVar28;
    dStack_f8 = dVar30;
    local_e8 = uVar26;
    dStack_e0 = dVar29;
    local_d8 = dVar28;
    dStack_d0 = dVar30;
    (*(code *)PTR__objc_msgSend_02578628)(uVar26,local_c8,PTR_s_setTextContainerInset__026a9fd8);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setAutocorrectionType__026ac820);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setAutocapitalizationType__026ac818,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setSmartQuotesType__026b9f30,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setSmartDashesType__026b9f38,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addSubview__026ca4c0,local_c8);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_c0;
    local_60 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,puVar7,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = local_c0;
    local_58 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc030000000000000,puVar10,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = local_c8;
    local_50 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = 0x4020000000000000;
    puVar15 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = local_c8;
    local_48 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    (*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = local_c8;
    local_40 = puVar18;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    (*(code *)PTR__objc_msgSend_02578628)(puVar19,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = local_c8;
    local_38 = puVar21;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar22;
    (*(code *)PTR__objc_msgSend_02578628)(puVar22,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar24;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_activateConstraints__0269ce58);
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
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setView__026aa750,local_b8);
    pcVar1 = local_88;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    local_118 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar27 = dVar30 * DAT_02323c98;
    local_140 = uVar26;
    local_138 = dVar29;
    local_130 = dVar28;
    local_128 = dVar30;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_120 = dVar27;
    FUN_01de2b48(local_118,&cf_pageSheetConfig,local_a8);
    FUN_01de2b48(local_118,&cf_hostViewController,local_b0);
    pcVar1 = local_118;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01de2b48(pcVar1,&cf_contentHeight);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_setAssociatedObject(local_68,DAT_028c69d0,local_118,1);
    _objc_setAssociatedObject(local_68,DAT_028c69d8,local_c8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_WCRefineHelper_026ce000,PTR_s_attachKeyboardSyncToPageSheet_in_026b3f58
               ,local_118,local_c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showPageSheet_animated_thenFocus_026b3f60,local_118
               ,1,local_c8);
    _objc_initWeak(auStack_148,local_68);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_178 = PTR___NSConcreteStackBlock_02578660;
    local_170 = 0xc2000000;
    local_16c = 0;
    local_168 = FUN_01de2d14;
    local_160 = &DAT_02579c60;
    _objc_copyWeak(auStack_150,auStack_148);
    pcVar1 = local_118;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = pcVar1;
    _dispatch_async(puVar3,&local_178);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_158);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    local_8c = 0;
  }
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

