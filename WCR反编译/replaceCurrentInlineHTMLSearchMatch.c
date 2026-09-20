// replaceCurrentInlineHTMLSearchMatch @ 01eff3f0

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::replaceCurrentInlineHTMLSearchMatch
               (ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_190;
  cfstringStruct *local_158;
  cfstringStruct *local_138;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  int local_94;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined4 local_7c;
  cfstringStruct *local_78;
  undefined1 local_69;
  cfstringStruct *local_68;
  SEL local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_60 = param_2;
  local_58 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refreshInlineHTMLSearchMatches_026c8118);
  }
  pcVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_htmlSearchMatchRanges_026c8130);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_69 = 0;
  bVar2 = true;
  uVar1 = pcVar5 != (cfstringStruct *)0x0;
  if ((bool)uVar1) {
    pcVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = pcVar5 == (cfstringStruct *)0x0;
    local_69 = uVar1;
    local_68 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    uVar1 = local_69;
  }
  local_69 = uVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0RSfbcvQ_);
  }
  else {
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_inlineHTMLSearchQuery_026c8138);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_7c = 1;
    }
    else {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_htmlSearchMatchRanges_026c8130);
      _objc_retainAutoreleasedReturnValue();
      local_94 = 0;
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_htmlSearchMatchIndex_026c8148);
      local_138 = pcVar5;
      if ((long)pcVar5 <= (long)local_94) {
        local_138 = (cfstringStruct *)(long)local_94;
      }
      local_a8 = local_138;
      pcVar6 = pcVar4;
      local_a0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_objectAtIndexedSubscript__0269cc78,local_138);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar6;
      puVar7 = PTR_s_rangeValue_026ba098;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = pcVar5;
      local_88 = puVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_158 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_158 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_158;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      local_30 = local_90;
      local_28 = local_88;
      pcVar4 = (cfstringStruct *)(local_88 + (long)&local_90->field0_0x0);
      pcVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      local_b9 = 0;
      bVar2 = true;
      if (pcVar4 <= pcVar5) {
        pcVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_substringWithRange__0269d138,local_90,local_88);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 1;
        puVar7 = PTR_s_rangeOfString_options__0269d118;
        local_b8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar2 = pcVar4 == (cfstringStruct *)0x7fffffffffffffff;
        local_d0 = pcVar4;
        local_c8 = puVar7;
      }
      if ((local_b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      if (bVar2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_refreshInlineHTMLSearchMatches_026c8118);
        local_7c = 1;
      }
      else {
        pcVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_htmlReplaceField_026c8058);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_190 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_190 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = local_190;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_mutableCopy_0269d8a0);
        local_e0 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_replaceCharactersInRange_withStr_0269ef70,local_90,local_88,local_d8
                  );
        pcVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_90;
        pcVar5 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
        local_48 = (undefined *)((long)&pcVar5->field0_0x0 + (long)&pcVar4->field0_0x0);
        local_50 = 0;
        local_38 = 0;
        pcVar4 = local_58;
        local_40 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_htmlTextView_026c7f70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_htmlEditorTextDidChangeScheduleW_026c80e0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_refreshInlineHTMLSearchMatches_026c8118);
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
        local_7c = 0;
      }
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  return;
}

