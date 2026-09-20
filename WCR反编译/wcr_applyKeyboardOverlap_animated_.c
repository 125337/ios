// wcr_applyKeyboardOverlap:animated: @ 009d6f7c

/* Function Stack Size: 0x1c bytes */

void WCRAnonAtSheetKeyboardBinder::wcr_applyKeyboardOverlap_animated_
               (ID param_1,SEL param_2,double param_3,bool param_4)

{
  ID IVar1;
  undefined **ppuVar2;
  undefined8 in_d1;
  double in_d2;
  undefined8 in_d3;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  ID local_90;
  double local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 uStack_70;
  undefined **local_68;
  double local_60;
  undefined8 uStack_58;
  double local_50;
  undefined8 uStack_48;
  undefined4 local_3c;
  ID local_38;
  byte local_29;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_29 = (byte)param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_baseInset_026aaff0);
    local_98 = local_38;
    local_50 = in_d2;
    if (1.0 < local_28) {
      local_50 = in_d2 + local_28 + 12.0;
    }
    ppuVar2 = &local_b8;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_009d7158;
    local_a0 = &DAT_02581698;
    local_60 = param_3;
    uStack_58 = in_d1;
    uStack_48 = in_d3;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_18;
    uStack_80 = uStack_58;
    local_88 = local_60;
    uStack_70 = uStack_48;
    local_78 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = IVar1;
    _objc_retainBlock();
    local_68 = ppuVar2;
    if ((local_29 & 1) == 0) {
      (*(code *)ppuVar2[2])();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fd0000000000000,PTR__OBJC_CLASS___UIView_026cdfd8,
                 PTR_s_animateWithDuration_animations__026ca4e0,ppuVar2);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_98,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

