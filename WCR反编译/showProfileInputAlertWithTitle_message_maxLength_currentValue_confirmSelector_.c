// showProfileInputAlertWithTitle:message:maxLength:currentValue:confirmSelector: @ 01cd9ff4

/* Function Stack Size: 0x38 bytes */

void WCRefineProfileCardBeautifyViewController::
     showProfileInputAlertWithTitle_message_maxLength_currentValue_confirmSelector_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               SEL param_7)

{
  ID IVar1;
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
  SEL SVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  double dVar30;
  cfstringStruct *local_238;
  cfstringStruct *local_220;
  cfstringStruct *local_1a0;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  ID local_148;
  char *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  char *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double dStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double dStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  char *local_a0;
  SEL local_98;
  cfstringStruct *local_90;
  unsigned_long_long local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
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
  local_78 = (cfstringStruct *)0x0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  local_80 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_80,param_4);
  local_90 = (cfstringStruct *)0x0;
  local_88 = param_5;
  _objc_storeStrong(&local_90,param_6);
  pcVar2 = "MMPageSheetConfig";
  local_98 = param_7;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_78 == (cfstringStruct *)0x0) {
    local_1a0 = &::cf___;
  }
  else {
    local_1a0 = local_78;
  }
  local_a0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setValue_forKey__0269d300,local_1a0,&cf_title);
  pcVar2 = local_a0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_navLeftStyle);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar2 = local_a0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_enableEdgeSlideToClose);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar2 = local_a0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_enableDragToClose);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar2 = local_a0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_isAllowTapBgMaskToClose);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_a8 = puVar3;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_b0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UITextView_026ce1b8;
  _objc_alloc_init();
  local_b8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_90 == (cfstringStruct *)0x0) {
    local_220 = &::cf___;
  }
  else {
    local_220 = local_90;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setText__026caa88,local_220);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  dVar30 = 20.0;
  uVar27 = 0x4034000000000000;
  uVar28 = 0x4034000000000000;
  uVar29 = 0x4034000000000000;
  FUN_01cd9de0();
  local_100 = uVar27;
  uStack_f8 = uVar28;
  local_f0 = uVar29;
  dStack_e8 = dVar30;
  local_d8 = uVar27;
  uStack_d0 = uVar28;
  local_c8 = uVar29;
  dStack_c0 = dVar30;
  (*(code *)PTR__objc_msgSend_02578628)(uVar27,local_b8,PTR_s_setTextContainerInset__026a9fd8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setDelegate__026ca910,local_68);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addSubview__026ca4c0,local_b8);
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  local_108 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  if (local_80 == (cfstringStruct *)0x0) {
    local_238 = &::cf___;
  }
  else {
    local_238 = local_80;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setText__026caa88,local_238);
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setNumberOfLines__026ca9d8,0);
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addSubview__026ca4c0,local_108);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = local_b8;
  local_60 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_b8;
  local_58 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = local_b8;
  local_50 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = local_108;
  local_48 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  (*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = local_108;
  local_40 = puVar18;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4034000000000000,puVar19,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = local_108;
  local_38 = puVar21;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = 0xc034000000000000;
  puVar24 = puVar22;
  (*(code *)PTR__objc_msgSend_02578628)(puVar22,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar24;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7);
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
  _objc_setAssociatedObject(local_68,&DAT_028e46fa,local_b8);
  IVar1 = local_68;
  SVar26 = local_98;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar1,&DAT_028e46fb,SVar26,3);
  (*(code *)PTR__objc_release_02578630)(SVar26);
  IVar1 = local_68;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,local_88)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar1,&DAT_028e46fc,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_setAssociatedObject(local_b8,&DAT_028e46f9,local_108,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_updateProfileInputPlaceholderVis_026c3870,local_b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setView__026aa750,local_b0);
  pcVar2 = "MMPageSheetAdapter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_110 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_138 = uVar27;
  local_130 = uVar28;
  local_128 = uVar29;
  local_120 = dVar30;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_118 = (dVar30 * 3.0) / 5.0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_110,PTR_s_setValue_forKey__0269d300,local_a0,&cf_pageSheetConfig);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_110,PTR_s_setValue_forKey__0269d300,local_a8,&cf_hostViewController);
  pcVar2 = local_110;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_118,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_contentHeight);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_setAssociatedObject(local_68,&DAT_028e46fd,local_110,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_118,PTR_WCRefineHelper_026ce000,PTR_s_attachKeyboardSyncToPageSheet_in_026b3f58,
             local_110,local_b8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showPageSheet_animated_thenFocus_026b3f60,local_110,1
             ,local_b8);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_68;
  local_168 = PTR___NSConcreteStackBlock_02578660;
  local_160 = 0xc2000000;
  local_15c = 0;
  local_158 = FUN_01cdb03c;
  local_150 = &DAT_0257a7a0;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_110;
  local_148 = IVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = pcVar2;
  _dispatch_async(puVar3,&local_168);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

