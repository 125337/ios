// setupFloatBars @ 01c3b25c

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateLibraryViewController::setupFloatBars(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  ID IVar12;
  undefined *puVar13;
  undefined *puVar14;
  ID IVar15;
  ID IVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *local_90;
  ID local_88;
  undefined *local_80;
  SEL local_78;
  ID local_70;
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
  local_78 = param_2;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_makeCapsuleBarTag_height_width__026c1ac8,0x24f703);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFloatBar__026c1ad0);
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_026ce068;
  _objc_alloc_init();
  local_80 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,&DAT_00002329);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAxis__0269cf78);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setDistribution__026aa640);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAlignment__026ca858,0);
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_80;
  local_48 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_80;
  local_40 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  IVar11 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  IVar12 = IVar11;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = local_80;
  local_38 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  IVar15 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  IVar16 = IVar15;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)(puVar14,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar17;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
  (*(code *)PTR__objc_release_02578630)(puVar18);
  (*(code *)PTR__objc_release_02578630)(puVar17);
  (*(code *)PTR__objc_release_02578630)(IVar16);
  (*(code *)PTR__objc_release_02578630)(IVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(IVar12);
  (*(code *)PTR__objc_release_02578630)(IVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_floatAccentColor_026c1ad8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_80;
  IVar4 = local_70;
  local_88 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_iconTitleButton_icon_fallback_co_026c1ae0,&cf_d__,
             &cf_icons_outlined_search,&cf_magnifyingglass,IVar2,PTR_s_toggleSearch_026ba428);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar1 = local_80;
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_iconTitleButton_icon_fallback_co_026c1ae0,&cf_Y,&cf_checkmark_circle,
             &cf_checkmark_circle,local_88,PTR_s_enterMultiSelect_026c1ae8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_80;
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_iconTitleButton_icon_fallback_co_026c1ae0,&cf_d_O,
             &cf_dot_3_circle_regular,&cf_ellipsis_circle,local_88,PTR_s_moreButtonTapped_026bf8a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_70;
  IVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x406b800000000000,IVar2,PTR_s_setBar_width__026c1af0);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x404f000000000000,local_70,PTR_s_makeCapsuleBarTag_height_width__026c1ac8,0x24f704);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setSelectBar__026ba768);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UIStackView_026ce068;
  _objc_alloc_init();
  local_90 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,&DAT_0000232a);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setAxis__0269cf78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setDistribution__026aa640,1);
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,puVar3,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_90;
  local_68 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc024000000000000,puVar6,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_90;
  local_60 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  IVar11 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  IVar12 = IVar11;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = local_90;
  local_58 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  IVar15 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  IVar16 = IVar15;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)(puVar14,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar17;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
  (*(code *)PTR__objc_release_02578630)(puVar18);
  (*(code *)PTR__objc_release_02578630)(puVar17);
  (*(code *)PTR__objc_release_02578630)(IVar16);
  (*(code *)PTR__objc_release_02578630)(IVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(IVar12);
  (*(code *)PTR__objc_release_02578630)(IVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = local_90;
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_iconTitleButton_icon_fallback_co_026c1ae0,&cf_hQ,&cf_checkmark_circle,
             &cf_checkmark_circle,local_88,PTR_s_selectAllTapped_026bf8a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_90;
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_iconTitleButton_icon_fallback_co_026c1ae0,&cf__Q,
             &cf_icons_outlined_share,&cf_square_and_arrow_up,local_88,PTR_s_exportSelected_026c1af8
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_70;
  puVar1 = local_90;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_iconTitleButton_icon_fallback_co_026c1ae0,&cf_Rd,&cf_trash_on_filled,
             &cf_trash,puVar3,PTR_s_deleteSelected_026bb5b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = local_90;
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_iconTitleButton_icon_fallback_co_026c1ae0,&cf__b,
             &cf_checkmark_circle_filled,&cf_checkmark_circle_fill,local_88,
             PTR_s_exitMultiSelect_026c1aa8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_70;
  IVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4071800000000000,IVar2,PTR_s_setBar_width__026c1af0);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

