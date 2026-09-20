// textField:shouldChangeCharactersInRange:replacementString: @ 01d7a828

/* Function Stack Size: 0x30 bytes */

bool __thiscall
WCRefineSearchSettingsViewController::textField_shouldChangeCharactersInRange_replacementString_
          (WCRefineSearchSettingsViewController *this,ID param_1,SEL param_2,ID param_3,
          _NSRange param_4,ID param_5)

{
  long lVar1;
  long local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  unsigned_long_long local_28;
  unsigned_long_long local_20;
  byte local_11;
  
  local_20 = param_4.field1_0x8;
  local_28 = param_4.field0_0x0;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if ((local_48 == 0) ||
     (lVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 1;
  }
  else {
    lVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&::cf_newline_s_);
    if (lVar1 == 0x7fffffffffffffff) {
      local_11 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_wcRefine_triggerSearchAndDismiss_026c4ad8,local_40);
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_11 & 1;
}

