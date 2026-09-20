// closeThemeSwipeOverlayAnimated: @ 01fc0094

/* Function Stack Size: 0x14 bytes */

void __thiscall
WCRefineWechatThemeManagerViewController::closeThemeSwipeOverlayAnimated_
          (WCRefineWechatThemeManagerViewController *this,ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined **ppuVar6;
  undefined8 in_d0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined **local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  ID local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined **local_60;
  undefined4 local_54;
  undefined8 local_50;
  ID local_48;
  ID local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_swipeOpenCell_026ca040);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeSwipeOverlayOnCell__026ca080,param_1);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  IVar5 = local_28;
  local_48 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_swipeOpenThemeName_026ca090);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_themeSwipeMenuWidthForName__026ca098);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  local_50 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSwipeOpenCell__026ca0a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSwipeOpenThemeName__026ca0a8,0);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setThemeSwipeDragOffset__026ca0b0);
  IVar3 = local_48;
  if (local_48 == 0) {
    local_54 = 1;
  }
  else {
    ppuVar6 = &local_88;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01fc03fc;
    local_70 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar3;
    _objc_retainBlock();
    IVar3 = local_28;
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_60 = ppuVar6;
    if ((local_31 & 1) == 0) {
      (*(code *)ppuVar6[2])();
    }
    else {
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_01fc043c;
      local_a8 = &DAT_0257a740;
      (*(code *)PTR__objc_retain_02578638)();
      IVar4 = local_48;
      local_a0 = IVar3;
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar6 = local_60;
      local_98 = IVar4;
      local_90 = local_50;
      local_e8 = puVar1;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_01fc048c;
      local_d0 = &DAT_0257ca98;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = ppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323ec8,0,puVar2,PTR_s_animateWithDuration_delay_option_026ca4f0,0x20000,
                 &local_c0,&local_e8);
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_a0,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

