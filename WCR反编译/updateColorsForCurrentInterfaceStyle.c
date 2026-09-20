// updateColorsForCurrentInterfaceStyle @ 017610dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void ThemeProRedeemViewController::updateColorsForCurrentInterfaceStyle(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  ulong uVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  long lVar12;
  undefined8 uVar13;
  uint local_3dc;
  undefined *local_378;
  undefined *local_238;
  undefined *local_230;
  undefined *local_1d8;
  undefined *local_1c8;
  undefined *local_1b8;
  undefined *local_1a8;
  undefined *local_148;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  SEL local_c8;
  ID local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar3 = DAT_02324020;
  uVar2 = DAT_02323d00;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar4 = PTR_ThemeStyleManager_026ceef8;
  local_c8 = param_2;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_ThemeStyleManager_026ceef8,PTR_s_sharedManager_0269db78)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_themeProBackgroundColor_026b4320);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProBackgroundGradientColors_026b4328);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar4;
  _memset(auStack_128,0,0x40);
  puVar4 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_230 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_230 != (undefined *)0x0) {
    lVar12 = *local_118;
    local_238 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar12 != 0) {
          _objc_enumerationMutation(*local_118 - lVar12,puVar4);
        }
        puVar6 = local_e0;
        uVar13 = *(undefined8 *)(local_120 + (long)local_238 * 8);
        local_e8 = uVar13;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180,uVar13);
        local_238 = local_238 + 1;
      } while (local_238 < local_230);
      local_230 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_238 = (undefined *)0x0;
    } while (local_230 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_backgroundGradient_026b32f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProContainerBackgroundColor_026b4330);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_mainContainer_026b3318);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProTipsBackgroundColor_026b4338);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tipsView_026b3328);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProLabelTextColor_026b4340);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_wechatLabel_026b3600);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProLabelTextColor_026b4340);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_codeLabel_026b3348);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProTipsTitleColor_026b4348);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tipsTitle_026b3358);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProTipsTextColor_026b4350);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tip1_026b3368);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProTipsTextColor_026b4350);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tip2_026b3370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProTipsTextColor_026b4350);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tip3_026b3378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProTextFieldBackgroundColor_026b4358);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_wechatField_026b3620);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProTextFieldTextColor_026b4360);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_wechatField_026b3620);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProTextFieldBackgroundColor_026b4358);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_codeField_026b3630);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_themeProTextFieldTextColor_026b4360);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_codeField_026b3630);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isDarkMode_0269f410);
  bVar1 = ((ulong)puVar4 & 1) == 0;
  local_378 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    local_148 = local_378;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe3333333333333,0x3fe3333333333333,0x3fe3333333333333,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_138 = local_378;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_378;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_148);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  puVar4 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
  _objc_alloc();
  local_b8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
  local_b0 = local_130;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_b0,&local_b8,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithString_attributes__026a02b0,&::cf_eQ);
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_codeField_026b3630);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_redeemButton_026b32d8);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  uVar8 = IVar7 & 0xffffffff;
  if ((IVar7 & 1) != 0) {
    FUN_01762518();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_redeemButton_026b32d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(uVar8);
  }
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_resultLabel_026b32d0);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if ((IVar7 & 1) == 0) {
    IVar7 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_resultLabel_026b32d0);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar10 = IVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar10 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar9);
    (*(code *)PTR__objc_release_02578630)(IVar7);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  if (bVar1) {
    IVar5 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_resultLabel_026b32d0);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_isEqual__0269e9a8);
    local_3dc = 1;
    if ((IVar9 & 1) == 0) {
      IVar9 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_resultLabel_026b32d0);
      _objc_retainAutoreleasedReturnValue();
      IVar10 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,uVar2,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar10;
      (*(code *)PTR__objc_msgSend_02578628)(IVar10,PTR_s_isEqual__0269e9a8);
      local_3dc = (uint)IVar11;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(IVar10);
      (*(code *)PTR__objc_release_02578630)(IVar9);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    if ((local_3dc & 1) == 0) {
      puVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isDarkMode_0269f410);
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_1d8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        local_1c8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c60,uVar3,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
      }
      IVar5 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_resultLabel_026b32d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_1d8);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_1c8);
      }
    }
    else {
      puVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isDarkMode_0269f410);
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_1b8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        local_1a8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,uVar2,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
      }
      IVar5 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_resultLabel_026b32d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_1b8);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_1a8);
      }
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setNeedsStatusBarAppearanceUpdat_026a7e98);
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

