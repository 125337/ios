// addSaveButtonToProfileInputNavigationBar: @ 01cd9738

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardBeautifyViewController::addSaveButtonToProfileInputNavigationBar_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *local_78;
  ID local_70;
  ID local_68;
  ulong local_60;
  uint local_54;
  ulong local_50;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  if ((local_50 == 0) ||
     (uVar1 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_hostViewController_026a5b30),
     (uVar1 & 1) == 0)) {
    local_54 = 1;
  }
  else {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hostViewController_026a5b30);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_60 = uVar1;
    if (uVar1 == 0) {
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_findPageSheetProviderViewInView__026b3fa8);
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((local_68 == 0) ||
         (IVar2 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_navigationBar_0269ea30),
         (IVar2 & 1) == 0)) {
        local_54 = 1;
      }
      else {
        IVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationBar_0269ea30);
        _objc_retainAutoreleasedReturnValue();
        local_70 = IVar2;
        if (IVar2 != 0) {
          puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitle_forState__026caab8,&cf_OX_);
          puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_titleLabel_026caba0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3fe3333333333333,DAT_02323d00,0x3fe3333333333333,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_78;
          puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_setTitleColor_forState__026caac0,puVar4,0);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar3 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar12 = 0x4018000000000000;
          uVar14 = 0x4028000000000000;
          uVar11 = 0x4028000000000000;
          uVar13 = uVar12;
          FUN_01cd9de0();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,uVar11,uVar13,uVar14,local_78,PTR_s_setContentEdgeInsets__0269ebd0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
                     PTR_s_handleProfileInputSheetSave__026c3868,0x40);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_78);
          puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
          puVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_trailingAnchor_0269cf88);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_trailingAnchor_0269cf88);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0xc02e000000000000,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = local_78;
          local_38 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_centerYAnchor_0269ce10);
          _objc_retainAutoreleasedReturnValue();
          IVar8 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_centerYAnchor_0269ce10);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_constraintEqualToAnchor__0269ce08);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_30 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_38,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_activateConstraints__0269ce58);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(IVar8);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(IVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_78,0);
        }
        local_54 = (uint)(IVar2 == 0);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

