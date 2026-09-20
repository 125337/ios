// replaceAllInlineHTMLSearchMatches @ 01effb08

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::replaceAllInlineHTMLSearchMatches
               (ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_168;
  cfstringStruct *local_140;
  undefined *local_d0;
  undefined *puStack_c8;
  long local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  uint local_a8;
  undefined1 local_a1;
  cfstringStruct *local_a0;
  ID local_98;
  SEL local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_90 = param_2;
  local_88 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_inlineHTMLSearchQuery_026c8138);
  _objc_retainAutoreleasedReturnValue();
  local_98 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  local_a1 = 0;
  bVar2 = true;
  uVar1 = param_1 != 0;
  if ((bool)uVar1) {
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = pcVar3 == (cfstringStruct *)0x0;
    local_a1 = uVar1;
    local_a0 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar1 = local_a1;
  }
  local_a1 = uVar1;
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQd__vQ_);
    local_a8 = 1;
  }
  else {
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_htmlReplaceField_026c8058);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_140 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_140 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_140;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_168 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_168 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithString__026a7e40,local_168);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_c0 = 0;
    puStack_c8 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_d0 = (undefined *)0x0;
    local_40 = puStack_c8;
    local_28 = puStack_c8;
    while ((puVar5 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0)
           , local_d0 < puVar5 &&
           (puVar5 = local_b8, puVar6 = PTR_s_rangeOfString_options_range__0269d130,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_b8,PTR_s_rangeOfString_options_range__0269d130,local_98,1,local_d0,
                      puStack_c8), puVar5 != (undefined *)0x7fffffffffffffff))) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_replaceCharactersInRange_withStr_0269ef70,puVar5,puVar6,local_b0);
      local_c0 = local_c0 + 1;
      pcVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      local_d0 = puVar5 + (long)pcVar3;
      puVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
      if (puVar5 <= local_d0) break;
      puStack_c8 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
      puStack_c8 = puStack_c8 + -(long)local_d0;
      local_60 = puStack_c8;
      local_58 = local_d0;
      local_50 = local_d0;
      local_48 = puStack_c8;
    }
    if (local_c0 != 0) {
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_78 = 0;
      local_80 = 0;
      local_70 = 0;
      local_68 = 0;
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_htmlEditorTextDidChangeScheduleW_026c80e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_refreshInlineHTMLSearchMatches_026c8118);
      puVar5 = PTR_WCRefineHelper_026ce000;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__fbc);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0RSfbcvQ_);
    }
    local_a8 = (uint)(local_c0 == 0);
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_98,0);
  return;
}

