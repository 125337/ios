// presentSendCodeFormatPluginStyleSheetWithInitialText:stockRepository: @ 0173e190

/* Function Stack Size: 0x20 bytes */

void ThemeBoxAirDropViewController::
     presentSendCodeFormatPluginStyleSheetWithInitialText_stockRepository_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  char *pcVar2;
  char *pcVar3;
  long_long lVar4;
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
  cfstringStruct *local_1a8;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  ID local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  char *local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double dStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  double dStack_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long_long local_a8;
  char *local_a0;
  undefined4 local_94;
  char *local_90;
  char *local_88;
  long_long local_80;
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
  pcVar2 = "MMPageSheetConfig";
  local_80 = param_4;
  _objc_getClass();
  pcVar3 = "MMPageSheetAdapter";
  local_88 = pcVar2;
  _objc_getClass();
  local_90 = pcVar3;
  if ((local_88 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yJSO__);
    local_94 = 1;
  }
  else {
    pcVar2 = local_88;
    _objc_alloc_init();
    lVar4 = local_80;
    local_a0 = pcVar2;
    FUN_017383dc();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_a8 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_aS_Q_<h__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTitle__0269cef0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setNavLeftStyle__026aa730,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setEnableDragToClose__026aa740,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_preparePageSheetConfigForMultili_026b3f40,local_a0)
    ;
    puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    _objc_alloc_init();
    puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_b0 = puVar5;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_b8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    _objc_alloc_init();
    local_c0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (local_78 == (cfstringStruct *)0x0) {
      local_1a8 = &::cf___;
    }
    else {
      local_1a8 = local_78;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setText__026caa88,local_1a8);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    dVar32 = 20.0;
    uVar28 = 0x4034000000000000;
    uVar30 = 0x4034000000000000;
    uVar31 = 0x4034000000000000;
    FUN_01737f0c();
    local_100 = uVar28;
    uStack_f8 = uVar30;
    local_f0 = uVar31;
    dStack_e8 = dVar32;
    local_e0 = uVar28;
    uStack_d8 = uVar30;
    local_d0 = uVar31;
    dStack_c8 = dVar32;
    (*(code *)PTR__objc_msgSend_02578628)(uVar28,local_c0,PTR_s_setTextContainerInset__026a9fd8);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setDelegate__026ca910,local_68);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_attachMultilineKeyboardAvoidance_026b3f48,local_c0)
    ;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = &cf__ec_SMO___;
    puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    local_110 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setText__026caa88,local_108);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setNumberOfLines__026ca9d8,0);
    puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addSubview__026ca4c0,local_c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addSubview__026ca4c0,local_110);
    _objc_setAssociatedObject(local_c0,&DAT_028e3fa0,local_110);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = local_c0;
    local_60 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = local_c0;
    local_58 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = local_c0;
    local_50 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)(puVar15,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = local_110;
    local_48 = puVar17;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar18;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4034000000000000,puVar18,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = local_110;
    local_40 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar21;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4034000000000000,puVar21,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = local_110;
    local_38 = puVar23;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = 0xc034000000000000;
    puVar26 = puVar24;
    (*(code *)PTR__objc_msgSend_02578628)(puVar24,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar26;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
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
    puVar5 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_110,PTR_s_setHidden__026ca970,puVar6 != (undefined *)0x0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setView__026aa750,local_b8);
    _objc_setAssociatedObject(local_68,&DAT_028e3fa1,local_c0,1);
    _objc_setAssociatedObject(local_68,&DAT_028e3fa2,&cf_sendCode,3);
    pcVar2 = local_90;
    _objc_alloc_init();
    local_118 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setPageSheetConfig__026aa758,local_a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setHostViewController__026a58c8,local_b0);
    puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar29 = (dVar32 * 3.0) / 5.0;
    local_140 = uVar28;
    local_138 = uVar30;
    local_130 = uVar31;
    local_128 = dVar32;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_120 = dVar29;
    (*(code *)PTR__objc_msgSend_02578628)(dVar29,local_118,PTR_s_setContentHeight__026aa760);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setAirDropSheet__026b3f50,local_118);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_WCRefineHelper_026ce000,PTR_s_attachKeyboardSyncToPageSheet_in_026b3f58
               ,local_118,local_c0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showPageSheet_animated_thenFocus_026b3f60,local_118
               ,1,local_c0);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_68;
    local_170 = PTR___NSConcreteStackBlock_02578660;
    local_168 = 0xc2000000;
    local_164 = 0;
    local_160 = FUN_0173f058;
    local_158 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_118;
    local_150 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = pcVar2;
    _dispatch_async(puVar5,&local_170);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    local_94 = 0;
  }
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

