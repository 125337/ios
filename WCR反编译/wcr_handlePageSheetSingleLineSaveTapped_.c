// wcr_handlePageSheetSingleLineSaveTapped: @ 00fc3ad8

/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::wcr_handlePageSheetSingleLineSaveTapped_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_e8;
  cfstringStruct *local_98;
  cfstringStruct *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  undefined1 local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar3 = local_38;
  _objc_getAssociatedObject(local_38,&DAT_028e2fcb);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_multilineSaveHandler_026ad068);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  bVar2 = false;
  uVar1 = pcVar3 != (cfstringStruct *)0x0;
  if ((bool)uVar1) {
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = pcVar4 != (cfstringStruct *)0x0;
    local_49 = uVar1;
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    uVar1 = local_49;
  }
  local_49 = uVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (bVar2) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_98 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_multilineSaveHandler_026ad068);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_58;
    pcVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_sheet_026aa728);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)pcVar4->field2_0x10)(pcVar4,pcVar3,pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_5c = 1;
    _objc_storeStrong(&local_58,0);
  }
  else {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_saveHandler_026ad070);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_5c = 1;
    }
    else {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textField_026ad078);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_e8 = &::cf___;
      }
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_e8;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_saveHandler_026ad070);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_68;
      pcVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_sheet_026aa728);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textField_026ad078);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)pcVar4->field2_0x10)(pcVar4,pcVar3,pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      _objc_storeStrong(&local_68,0);
      local_5c = 0;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

