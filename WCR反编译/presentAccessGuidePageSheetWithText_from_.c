// presentAccessGuidePageSheetWithText:from: @ 0093b658

/* Function Stack Size: 0x20 bytes */

bool WCRChatToolbarMgr::presentAccessGuidePageSheetWithText_from_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
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
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  double dVar34;
  undefined *local_180;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  char *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined4 local_a4;
  char *local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88;
  SEL local_80;
  ID local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  local_80 = param_2;
  local_78 = param_1;
  _objc_storeStrong(&local_88,param_3);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_4);
  pcVar1 = "MMPageSheetConfig";
  _objc_getClass();
  pcVar2 = "MMPageSheetAdapter";
  local_98 = pcVar1;
  _objc_getClass();
  local_a0 = pcVar2;
  if (((local_98 == (char *)0x0) || (pcVar2 == (char *)0x0)) ||
     (lVar3 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_69 = 0;
    local_a4 = 1;
  }
  else {
    pcVar1 = local_98;
    _objc_alloc_init();
    local_b0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTitle__0269cef0,&cf_ceQe_);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNavLeftStyle__026aa730,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setEnableDragToClose__026aa740,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
    puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    _objc_alloc_init();
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_b8 = puVar4;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_c0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    _objc_alloc_init();
    local_c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setEditable__026a9fc8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setSelectable__026a9fd0,1);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_fontWithName_size__026a1cd0,&cf_Menlo);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 0;
    local_180 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_180 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_180;
    }
    local_d1 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setFont__026ca958,local_180);
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setText__026caa88,local_88);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar33 = 0x4030000000000000;
    uVar30 = 0x4030000000000000;
    uVar31 = 0x4030000000000000;
    uVar32 = 0x4034000000000000;
    FUN_0093c608();
    local_120 = uVar30;
    uStack_118 = uVar31;
    local_110 = uVar32;
    uStack_108 = uVar33;
    local_f8 = uVar30;
    uStack_f0 = uVar31;
    local_e8 = uVar32;
    uStack_e0 = uVar33;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar30,uVar31,uVar32,uVar33,local_c8,PTR_s_setTextContainerInset__026a9fd8);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setAlwaysBounceVertical__026ca868,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_c8);
    puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setTitle_forState__026caab8,&cf_Y6RNx);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    dVar34 = 1.0;
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    uVar30 = DAT_02323d98;
    uVar31 = DAT_02323d90;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da0,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_128;
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4028000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_128);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar5 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4034000000000000,puVar5,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = local_128;
    local_68 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc034000000000000,puVar8,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = local_128;
    local_60 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_safeAreaLayoutGuide_0269cf90);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc030000000000000,puVar11,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = local_128;
    local_58 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = local_c8;
    local_50 = puVar16;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    (*(code *)PTR__objc_msgSend_02578628)(puVar17,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = local_c8;
    local_48 = puVar19;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)(puVar20,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = local_c8;
    local_40 = puVar22;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar23;
    (*(code *)PTR__objc_msgSend_02578628)(puVar23,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = local_c8;
    local_38 = puVar25;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = 0xc028000000000000;
    puVar28 = puVar26;
    (*(code *)PTR__objc_msgSend_02578628)(puVar26,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar28;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
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
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setView__026aa750,local_c0);
    pcVar1 = local_a0;
    _objc_alloc_init();
    local_130 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setPageSheetConfig__026aa758,local_b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setHostViewController__026a58c8,local_b8);
    puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_150 = uVar32;
    local_148 = uVar30;
    local_140 = uVar31;
    local_138 = dVar34;
    (*(code *)PTR__objc_msgSend_02578628)
              ((long)(dVar34 * DAT_02323f60),local_130,PTR_s_setContentHeight__026aa760);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR_WCRChatToolbarAccessCopyTarget_026ceaa0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRChatToolbarAccessCopyTarget_026ceaa0,PTR_s_new_0269d288);
    local_158 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setSample__026aa768,local_88);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setSheet__026aa770,local_130);
    _objc_setAssociatedObject(local_128,"wcr.toolbar.access.copyTarget",local_158,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_128,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_158,
               PTR_s_copyTapped_026aa778,0x40);
    pcVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_showWithAnimated__0269e5a8);
    local_69 = ((ulong)pcVar1 & 1) != 0;
    if ((bool)local_69) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_showWithAnimated__0269e5a8,1);
    }
    local_a4 = 1;
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_69 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

