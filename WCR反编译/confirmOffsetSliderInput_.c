// confirmOffsetSliderInput: @ 019f08b8

/* Function Stack Size: 0x18 bytes */

void WCRefineFontConvertViewController::confirmOffsetSliderInput_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_98;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ID local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_39 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_98 = &::cf___;
  }
  else {
    local_98 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_98;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_98;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar3 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  local_50 = (cfstringStruct *)0x0;
  local_58 = (cfstringStruct *)0x0;
  local_48 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_offsetLimitsForTag_min_max__026bb2a8,IVar7,&local_50,&local_58);
  local_d8 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if ((long)local_58 < (long)local_d8) {
    local_d8 = local_58;
  }
  if ((long)local_50 < (long)local_d8) {
    local_e0 = local_d8;
  }
  else {
    local_e0 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setOffsetValue_forTag__026bb2d8,local_e0,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

