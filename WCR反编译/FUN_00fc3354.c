// FUN_00fc3354 @ 00fc3354

void FUN_00fc3354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_3);
  if ((local_40 == 0) ||
     (uVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_hostViewController_026a5b30),
     (uVar1 & 1) == 0)) {
    local_54 = 1;
  }
  else {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hostViewController_026a5b30);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar1;
    if (uVar1 == 0) {
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_00fccb38();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((local_68 == 0) ||
         (uVar1 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_navigationBar_0269ea30),
         (uVar1 & 1) == 0)) {
        local_54 = 1;
      }
      else {
        uVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationBar_0269ea30);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar1;
        if (uVar1 == 0) {
          local_54 = 1;
        }
        else {
          FUN_00fccc88(uVar1,local_48);
          uVar1 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewWithTag__026cabe0,0xe1b56);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (uVar1 == 0) {
            puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
            _objc_retainAutoreleasedReturnValue();
            local_78 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,0xe1b56);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_setTitle_forState__026caab8,&cf_OX_);
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
            uVar10 = 0x4018000000000000;
            uVar12 = 0x4028000000000000;
            uVar9 = 0x4028000000000000;
            uVar11 = uVar10;
            FUN_00fc4f84();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar10,uVar9,uVar11,uVar12,local_78,PTR_s_setContentEdgeInsets__0269ebd0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
            _objc_setAssociatedObject(local_78,&DAT_028e2fcb,local_50,1);
            puVar3 = local_78;
            puVar4 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_addTarget_action_forControlEvent_026ca4c8,puVar4,
                       PTR_s_wcr_handlePageSheetSingleLineSav_026ad128,0x40);
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_78);
            puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
            puVar4 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_trailingAnchor_0269cf88);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_trailingAnchor_0269cf88);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0xc02e000000000000,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_78;
            local_38 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_centerYAnchor_0269ce10);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_centerYAnchor_0269ce10);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_constraintEqualToAnchor__0269ce08);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_30 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_38,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_activateConstraints__0269ce58);
            (*(code *)PTR__objc_release_02578630)(puVar8);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(uVar2);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(uVar1);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_storeStrong(&local_78,0);
            local_54 = 0;
          }
          else {
            local_54 = 1;
          }
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

