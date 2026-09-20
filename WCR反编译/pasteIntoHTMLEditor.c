// pasteIntoHTMLEditor @ 01efae48

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::pasteIntoHTMLEditor(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_d8;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined4 local_5c;
  undefined *local_58;
  SEL local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  local_50 = param_2;
  local_48 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_jR4_glge_g);
    local_5c = 1;
  }
  else {
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    puVar1 = PTR_s_selectedRange_026a43a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = pcVar4;
    local_68 = puVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_d8 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithString__026a7e40,local_d8);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar3 = local_70;
    pcVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (pcVar4 < pcVar3) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_replaceCharactersInRange_withStr_0269ef70,local_70,local_68,local_58
                );
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_70;
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      local_38 = puVar1 + (long)&pcVar3->field0_0x0;
      local_40 = 0;
      local_28 = 0;
      pcVar3 = local_48;
      local_30 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_htmlEditorTextDidChangeScheduleW_026c80e0);
    _objc_storeStrong(&local_78,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58,0);
  return;
}

