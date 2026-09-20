// wcr_rebuildNormalFloatStack @ 01f72db8

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::wcr_rebuildNormalFloatStack(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  int iVar19;
  double local_270;
  ID local_78;
  undefined *local_70;
  ID local_68;
  byte local_59;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_50;
  local_59 = 1 < IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    iVar19 = 300;
    if ((local_59 & 1) == 0) {
      iVar19 = 0xf0;
    }
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x404f000000000000,(double)iVar19,local_50,
               PTR_s_wcr_makeCapsuleBarWithTag_height_026c98d8,0x2c651);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFloatBar__026c1ad0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_removeFromSuperview_026ca800);
  puVar3 = PTR__OBJC_CLASS___UIStackView_026ce068;
  _objc_alloc_init();
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,&DAT_00002329);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setAxis__0269cf78);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDistribution__026aa640,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setAlignment__026ca858,0);
  (*(code *)PTR__objc_msgSend_02578628)(0x4000000000000000,local_70,PTR_s_setSpacing__0269cf80);
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_70;
  local_48 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc024000000000000,puVar6,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_70;
  local_40 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  IVar11 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  IVar12 = IVar11;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = local_70;
  local_38 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  IVar15 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_floatBar_026c1a88);
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
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_activateConstraints__0269ce58);
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
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_wcr_floatAccentColor_026c98e0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  local_78 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_directory_026ba278);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = local_70;
  if ((local_59 & 1) != 0) {
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf_V,
               &cf_icons_outlined_back,&cf_chevron_left,local_78,
               PTR_s_wcr_floatBarBackFromManager_026c98e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addArrangedSubview__026b9d98);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  puVar3 = local_70;
  if (IVar1 == 0) {
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&::cf___,
               &cf_icons_outlined_time,&cf_clock,local_78,PTR_s_wcr_floatBarRecent_026c98f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addArrangedSubview__026b9d98);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = local_70;
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf_6e,&cf_star_regular,
               &cf_star,local_78,PTR_s_wcr_floatBarFavorite_026c9900);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addArrangedSubview__026b9d98);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  puVar3 = local_70;
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf_d_O,
             &cf_dot_3_circle_regular,&cf_ellipsis_circle,local_78,PTR_s_showActionMenu_026b9d58);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = local_70;
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf__,
             &cf_icons_outlined_pencil,&cf_pencil,local_78,PTR_s_wcr_floatBarEdit_026c9908);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = local_70;
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf_c_,&cf_icons_outlined_sort
             ,&cf_arrow_up_arrow_down,local_78,PTR_s_chooseSort_026c9910);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addArrangedSubview__026b9d98);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_arrangedSubviews_026a0268);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar1 = local_50;
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_floatBar_026c1a88);
  _objc_retainAutoreleasedReturnValue();
  local_270 = (double)(long)puVar4 * 56.0 + 28.0;
  if (local_270 <= 200.0) {
    local_270 = 200.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_270,IVar1,PTR_s_wcr_setCapsuleBar_width__026c9918,IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

