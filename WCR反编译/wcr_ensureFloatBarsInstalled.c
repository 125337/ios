// wcr_ensureFloatBarsInstalled @ 01f93648

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::wcr_ensureFloatBarsInstalled(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ID IVar13;
  undefined *puVar14;
  undefined *puVar15;
  ID local_80;
  undefined *local_78;
  ID local_70;
  undefined1 local_61;
  ID local_60;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_61 = 1 < IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_wcr_rebuildNormalFloatStack__026c9c50,1 < IVar4);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 == 0) {
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x404f000000000000,0x4076800000000000,local_50,
               PTR_s_wcr_makeCapsuleBarWithTag_height_026c98d8,0x2c652);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSelectBar__026ba768,IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setHidden__026ca970,1);
    puVar5 = PTR__OBJC_CLASS___UIStackView_026ce068;
    _objc_alloc_init();
    local_78 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTag__026caa80,&DAT_0000232a);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAxis__0269cf78);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setDistribution__026aa640,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAlignment__026ca858,0);
    (*(code *)PTR__objc_msgSend_02578628)(0x4000000000000000,local_78,PTR_s_setSpacing__0269cf80);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_78);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar6 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4024000000000000,puVar6,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = local_78;
    local_48 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc024000000000000,puVar8,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = local_78;
    local_40 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = local_78;
    local_38 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    IVar13 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(IVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_wcr_floatAccentColor_026c98e0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_78;
    IVar3 = local_50;
    local_80 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf_hQ,&cf_checkmark_circle,
               &cf_checkmark_circle,IVar2,PTR_s_floatBarSelectAll_026c9c58);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addArrangedSubview__026b9d98);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar5 = local_78;
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf_n_v,
               &cf_icons_outlined_top,&cf_pin,local_80,PTR_s_floatBarPin_026c9c60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addArrangedSubview__026b9d98);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar5 = local_78;
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf_yR,
               &cf_icons_filled_folder,&cf_folder,local_80,PTR_s_floatBarMove_026c9c68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addArrangedSubview__026b9d98);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar5 = local_78;
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf__TT,
               &cf_icons_outlined_pencil,&cf_character_cursor_ibeam,local_80,
               PTR_s_floatBarRename_026c9c70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addArrangedSubview__026b9d98);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_50;
    puVar5 = local_78;
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf_Rd,&cf_trash_on_filled,
               &cf_trash,puVar6,PTR_s_floatBarDelete_026c9c78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addArrangedSubview__026b9d98);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = local_78;
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_wcr_iconTitleButton_icon_fallbac_026c98f0,&cf__b,
               &cf_checkmark_circle_filled,&cf_checkmark_circle_fill,local_80,
               PTR_s_floatBarDoneSelecting_026c9bf8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addArrangedSubview__026b9d98);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableBottomToFloatConstraint_026c9888);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (IVar2 != 0) {
    IVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableBottomToFloatConstraint_026c9888);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar4 != local_60;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableBottomToFloatConstraint_026c9888);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar13 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTableBottomToFloatConstraint__026c9880);
    (*(code *)PTR__objc_release_02578630)(IVar13);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableBottomToFloatConstraint_026c9888);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

