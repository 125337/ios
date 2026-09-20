// wcr_addManageButtonToThemePickSheet: @ 01730b54

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_addManageButtonToThemePickSheet_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *local_80;
  undefined8 local_78;
  ID local_70;
  ID local_68;
  uint local_60;
  undefined1 local_59;
  long local_58;
  long local_50;
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
  local_59 = 0;
  bVar2 = true;
  uVar1 = local_50 != 0;
  if ((bool)uVar1) {
    lVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hostViewController_026a5b30);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 == 0;
    local_59 = uVar1;
    local_58 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_59;
  }
  local_59 = uVar1;
  IVar5 = local_40;
  if (bVar2) {
    local_60 = 1;
  }
  else {
    lVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hostViewController_026a5b30);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_wcr_findPageSheetProviderViewInV_026b3cb8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (local_68 == 0) {
      local_60 = 1;
    }
    else {
      local_70 = 0;
      IVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_navigationBar_0269ea30);
      if ((IVar5 & 1) != 0) {
        IVar6 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_performSelector__026ca7b8,PTR_s_navigationBar_0269ea30);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_70;
        local_70 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar5);
      }
      bVar2 = local_70 != 0;
      if (bVar2) {
        local_78 = 0x16379;
        IVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewWithTag__026cabe0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar5);
        puVar7 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setTag__026caa80,local_78);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTitle_forState__026caab8,&cf__t);
        puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe3333333333333,DAT_02323d00,0x3fe3333333333333,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        puVar7 = local_80;
        puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_setTitleColor_forState__026caac0,puVar8,0);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        puVar7 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        uVar14 = 0x4018000000000000;
        uVar16 = 0x4028000000000000;
        uVar13 = 0x4028000000000000;
        uVar15 = uVar14;
        FUN_017312e0();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar14,uVar13,uVar15,uVar16,local_80,PTR_s_setContentEdgeInsets__0269ebd0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
                   PTR_s_wcr_openThemeBoxAirDropSettings_026b3cc0,0x40);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_80);
        puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
        puVar8 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_trailingAnchor_0269cf88);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0xc02e000000000000,puVar8,PTR_s_constraintEqualToAnchor_constant_0269ce18);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = local_80;
        local_38 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_centerYAnchor_0269ce10);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_centerYAnchor_0269ce10);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_constraintEqualToAnchor__0269ce08);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_38,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_activateConstraints__0269ce58);
        (*(code *)PTR__objc_release_02578630)(puVar12);
        (*(code *)PTR__objc_release_02578630)(puVar11);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        _objc_storeStrong(&local_80,0);
      }
      local_60 = (uint)!bVar2;
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

