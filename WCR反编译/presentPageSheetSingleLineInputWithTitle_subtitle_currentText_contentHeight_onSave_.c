// presentPageSheetSingleLineInputWithTitle:subtitle:currentText:contentHeight:onSave: @ 00fc2168

/* Function Stack Size: 0x38 bytes */

ID WCRefineHelper::
   presentPageSheetSingleLineInputWithTitle_subtitle_currentText_contentHeight_onSave_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,double param_6,ID param_7,
             undefined4 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
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
  double local_2e8;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  char *local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined *local_120;
  double local_118;
  char *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  SEL local_80;
  ID local_78;
  char *local_70;
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
  local_98 = 0;
  _objc_storeStrong(&local_98,param_5);
  local_a8 = 0;
  local_a0 = param_6;
  _objc_storeStrong(&local_a8,param_7);
  lVar1 = local_88;
  FUN_00fc2f88();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_90;
  local_b0 = lVar1;
  FUN_00fc2f88();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_98;
  local_b8 = uVar2;
  FUN_00fc2f88();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_b0;
  local_c0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_a8 == 0)) {
    local_70 = (char *)0x0;
    local_c4 = 1;
  }
  else {
    pcVar4 = "MMPageSheetConfig";
    _objc_getClass();
    pcVar5 = "MMPageSheetAdapter";
    local_d0 = pcVar4;
    _objc_getClass();
    local_d8 = pcVar5;
    if ((local_d0 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
      local_70 = (char *)0x0;
      local_c4 = 1;
    }
    else {
      pcVar4 = local_d0;
      _objc_alloc_init();
      local_e0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTitle__0269cef0,local_b0);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setNavLeftStyle__026aa730,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setEnableDragToClose__026aa740,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
      FUN_00f952d4(local_e0);
      puVar6 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      _objc_alloc_init();
      puVar7 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_e8 = puVar6;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_f0 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc_init();
      local_f8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemBackgroundColor_026ca848);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addSubview__026ca4c0,local_f8);
      puVar6 = PTR__OBJC_CLASS___UITextField_026ce2a0;
      _objc_alloc_init();
      local_100 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setText__026caa88,local_c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setClearButtonMode__026a64e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setReturnKeyType__0269e9d0,9);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setAutocorrectionType__026ac820,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setAutocapitalizationType__026ac818,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addSubview__026ca4c0,local_100);
      puVar7 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_safeAreaLayoutGuide_0269cf90);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      puVar8 = local_f8;
      local_108 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,puVar8,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_f8;
      local_68 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,puVar10,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = local_f8;
      local_60 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc030000000000000,puVar13,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = local_f8;
      local_58 = puVar15;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar16;
      (*(code *)PTR__objc_msgSend_02578628)(0x4046000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = local_100;
      local_50 = puVar17;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,puVar18,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = local_100;
      local_48 = puVar20;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar21;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc020000000000000,puVar21,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = local_100;
      local_40 = puVar23;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar24;
      (*(code *)PTR__objc_msgSend_02578628)(puVar24,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = local_100;
      local_38 = puVar26;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar27;
      (*(code *)PTR__objc_msgSend_02578628)(puVar27,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar29;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68
                 ,8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_activateConstraints__0269ce58);
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
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setView__026aa750,local_f0);
      pcVar4 = local_d8;
      _objc_alloc_init();
      local_110 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setPageSheetConfig__026aa758,local_e0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_setHostViewController__026a58c8,local_e8);
      if (local_a0 <= 0.0) {
        local_2e8 = 180.0;
      }
      else {
        local_2e8 = local_a0;
      }
      local_118 = local_2e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2e8,local_110,PTR_s_setContentHeight__026aa760);
      puVar6 = PTR_WCRPageSheetSaveContext_026cec08;
      _objc_alloc_init();
      local_120 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setSheet__026aa770,local_110);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setTextField__026ad058,local_100);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setSaveHandler__026ad060,local_a8);
      _objc_setAssociatedObject(local_110,&DAT_028e2fca,local_100);
      _objc_setAssociatedObject(local_110,&DAT_028e2fcb,local_120,1);
      FUN_00f957f0(local_118,local_110,local_100);
      puVar7 = local_100;
      pcVar4 = local_110;
      local_158 = PTR___NSConcreteStackBlock_02578660;
      local_150 = 0xc2000000;
      local_14c = 0;
      local_148 = FUN_00fc3318;
      local_140 = &DAT_025839b0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_b8;
      local_138 = pcVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar6 = local_120;
      local_130 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = puVar6;
      FUN_00fc31ec(pcVar4,puVar7,&local_158);
      pcVar4 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = pcVar4;
      local_c4 = 1;
      _objc_storeStrong(&local_128);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_70;
}

