// setSelectedIndex:animated: @ 01fb7534

/* Function Stack Size: 0x1c bytes */

void WCRefineThemeRolePillControl::setSelectedIndex_animated_
               (ID param_1,SEL param_2,long_long param_3,bool param_4)

{
  long_long lVar1;
  ID IVar2;
  ID IVar3;
  undefined **ppuVar4;
  long_long local_c0;
  long_long local_b8;
  long_long local_a0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  undefined **local_68;
  long_long local_60;
  long_long local_58;
  long_long local_50;
  undefined4 local_44;
  long_long local_40;
  long_long local_38;
  byte local_29;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_29 = (byte)param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_titles_026b44d8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (IVar2 == 0) {
    local_c0 = 0;
  }
  else {
    local_40 = local_28;
    local_44 = 0;
    if ((long)local_28 < 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = local_28;
    }
    local_50 = local_a0;
    local_38 = local_a0;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_titles_026b44d8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar1 = IVar3 - 1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_b8 = lVar1;
    if ((long)local_38 < (long)lVar1) {
      local_b8 = local_38;
    }
    local_60 = local_b8;
    local_c0 = local_b8;
    local_58 = lVar1;
  }
  *(long_long *)(local_18 + (long)_selectedIndex) = local_c0;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_18;
  ppuVar4 = &local_90;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_01fb7788;
  local_78 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = IVar2;
  _objc_retainBlock();
  local_68 = ppuVar4;
  if ((local_29 & 1) == 0) {
    (*(code *)ppuVar4[2])();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d58,0,PTR__OBJC_CLASS___UIView_026cdfd8,
               PTR_s_animateWithDuration_delay_option_026ca4f0,0,ppuVar4,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_70,0);
  return;
}

