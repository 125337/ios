// applyCurrentTextColorToLabel: @ 01e7b974

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoCardView::applyCurrentTextColorToLabel_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  ID local_58;
  int local_4c;
  ulong local_48;
  SEL local_40;
  ID local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  uVar2 = local_48;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_4c = 1;
    goto LAB_01e7bc1c;
  }
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContentTextColor_026c6fe8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_58 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_attributedText_0269fcf8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_01e7bbd8:
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTextColor__026caa98,local_58);
    local_4c = 0;
  }
  else {
    uVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_28 = 0;
    local_20 = 0;
    local_70 = 0;
    uVar4 = local_60;
    local_68 = uVar2;
    local_30 = uVar2;
    local_18 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_attribute_atIndex_effectiveRange_026c6ff0,
               *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_02578098,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar4;
    if (uVar4 == 0) {
      local_4c = 0;
    }
    else {
      uVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_mutableCopy_0269d8a0);
      uVar5 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
      IVar3 = local_58;
      local_80 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c98,local_58,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_addAttribute_value_range__026a1d88,uVar5,IVar3,local_70,local_68);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAttributedText__026a0000,local_80);
      local_4c = 1;
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78,0);
    if (local_4c == 0) goto LAB_01e7bbd8;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
LAB_01e7bc1c:
  _objc_storeStrong(&local_48,0);
  return;
}

