// replaceAllSearchMatches @ 0196ace8

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::replaceAllSearchMatches(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *local_158;
  cfstringStruct *local_138;
  cfstringStruct *local_100;
  cfstringStruct *local_c0;
  cfstringStruct *pcStack_b8;
  long local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  uint local_88;
  undefined1 local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  SEL local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_70 = param_2;
  local_68 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchField_026ad308);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_100 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_100 = &::cf___;
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = local_100;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  local_81 = 0;
  bVar2 = true;
  uVar1 = pcVar3 != (cfstringStruct *)0x0;
  if ((bool)uVar1) {
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = pcVar3 == (cfstringStruct *)0x0;
    local_81 = uVar1;
    local_80 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar1 = local_81;
  }
  local_81 = uVar1;
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQd__vQ_);
    local_88 = 1;
  }
  else {
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_replaceField_026b9df8);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_138 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_138 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_138;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_158 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_158 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_158;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcStack_b8 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_mutableCopy_0269d8a0);
    local_a8 = 0;
    local_a0 = pcStack_b8;
    (*(code *)PTR__objc_msgSend_02578628)(pcStack_b8,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_c0 = (cfstringStruct *)0x0;
    local_40 = pcStack_b8;
    local_28 = pcStack_b8;
    while ((pcVar3 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0)
           , local_c0 < pcVar3 &&
           (pcVar3 = local_a0, puVar4 = PTR_s_rangeOfString_options_range__0269d130,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_a0,PTR_s_rangeOfString_options_range__0269d130,local_78,1,local_c0,
                      pcStack_b8), pcVar3 != (cfstringStruct *)0x7fffffffffffffff))) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_replaceCharactersInRange_withStr_0269ef70,pcVar3,puVar4,local_90);
      local_a8 = local_a8 + 1;
      pcVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      local_c0 = (cfstringStruct *)((long)&pcVar5->field0_0x0 + (long)&pcVar3->field0_0x0);
      pcVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      if (pcVar3 <= local_c0) break;
      pcStack_b8 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      pcStack_b8 = (cfstringStruct *)((long)pcStack_b8 - (long)local_c0);
      local_60 = pcStack_b8;
      local_58 = local_c0;
      local_50 = local_c0;
      local_48 = pcStack_b8;
    }
    if (local_a8 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setSearchHighlightRanges__026b9e08,
                 *(undefined8 *)PTR____NSArray0___02578280);
      pcVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_copy_0269d150);
      pcVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_recolorEditor_026b9e38);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_refreshSearchMatches_026b9d30);
      puVar4 = PTR_WCRefineHelper_026ce000;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__fbc);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0RSfbcvQ_);
    }
    local_88 = (uint)(local_a8 == 0);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_78,0);
  return;
}

