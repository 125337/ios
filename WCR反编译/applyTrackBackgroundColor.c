// applyTrackBackgroundColor @ 01fb64b8

/* Function Stack Size: 0x10 bytes */

void WCRefineThemeRolePillControl::applyTrackBackgroundColor(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined8 local_68;
  undefined8 local_40;
  undefined8 local_30;
  
  uVar2 = DAT_02324040;
  uVar1 = DAT_02323e00;
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_68 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (IVar4 != 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar2,DAT_02323ff8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,uVar1,DAT_02323d58,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_68;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setBackgroundColor__026ca888,local_68);
  if (IVar4 != 2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  return;
}

