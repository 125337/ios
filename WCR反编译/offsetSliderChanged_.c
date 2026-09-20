// offsetSliderChanged: @ 019f0264

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineFontConvertViewController::offsetSliderChanged_
          (WCRefineFontConvertViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  float in_s0;
  long local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_38 = 0;
  local_40 = 0;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_offsetLimitsForTag_min_max__026bb2a8,uVar1,&local_38,&local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  local_68 = (long)in_s0;
  local_50 = local_38;
  local_60 = local_40;
  local_88 = local_68;
  if (local_40 < local_68) {
    local_88 = local_40;
  }
  local_70 = local_88;
  local_58 = local_88;
  if (local_38 < local_88) {
    local_90 = local_88;
  }
  else {
    local_90 = local_38;
  }
  local_78 = local_90;
  local_48 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  if ((long)in_s0 != local_48) {
    (*(code *)PTR__objc_msgSend_02578628)((float)local_48,local_28,PTR_s_setValue__026a51b0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setOffsetValue_forTag__026bb2d8,local_48,local_30);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_80;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_offsetDisplayTextForTag_value__026bb2c8,local_30,local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTitle_forState__026caab8,IVar3,0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updatePreview_026bb2e0);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_28,0);
  return;
}

