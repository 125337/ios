// handleContactsEarliestAddedSectionCountInput: @ 01a68130

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::handleContactsEarliestAddedSectionCountInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  cfstringStruct *local_70;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_70;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_40 = (cfstringStruct *)0xa;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_decimalDigitCharacterSet_026a5190);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfCharacterFromSet__0269db68,local_48)
    ;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
      local_40 = pcVar2;
      if ((long)pcVar2 < 1) {
        local_40 = (cfstringStruct *)0x1;
      }
      puVar5 = (undefined1 *)((long)&local_40[-0x10].field1_0x8 + 4);
      if (puVar5 != (undefined1 *)0x0 && 499 < (long)local_40) {
        puVar5 = (undefined1 *)0x1f4;
        local_40 = (cfstringStruct *)0x1f4;
      }
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQpeW_Yuzzb_Y);
      puVar5 = (undefined1 *)0x1;
      bVar1 = true;
    }
    _objc_storeStrong(puVar5,&local_48,0);
    if (bVar1) goto LAB_01a684e0;
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__n__N);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(puVar4);
LAB_01a684e0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

