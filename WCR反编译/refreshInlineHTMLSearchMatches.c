// refreshInlineHTMLSearchMatches @ 01efdec8

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::refreshInlineHTMLSearchMatches
               (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *local_138;
  cfstringStruct *local_108;
  cfstringStruct *local_a0;
  cfstringStruct *pcStack_98;
  undefined *local_90;
  cfstringStruct *local_88;
  undefined4 local_7c;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlTextView_026c7f70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_inlineHTMLSearchQuery_026c8138);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setHtmlSearchMatchRanges__026c8120,
                 *(undefined8 *)PTR____NSArray0___02578280);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setHtmlSearchMatchIndex__026c8128,0xffffffffffffffff);
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_htmlSearchCountLabel_026c8068);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_applyInlineHTMLHighlightPreservi_026c7fa8);
      local_7c = 1;
    }
    else {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_108 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_108 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_108;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      pcStack_98 = local_88;
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_a0 = (cfstringStruct *)0x0;
      local_40 = pcStack_98;
      local_28 = pcStack_98;
      while ((pcVar1 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
             local_a0 < pcVar1 &&
             (pcVar1 = local_88, local_138 = PTR_s_rangeOfString_options_range__0269d130,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_88,PTR_s_rangeOfString_options_range__0269d130,local_78,1,local_a0,
                        pcStack_98), puVar3 = local_90,
             pcVar1 != (cfstringStruct *)0x7fffffffffffffff))) {
        puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,pcVar1,
                   local_138);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (local_138 == (undefined1 *)0x0) {
          local_138 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        }
        local_a0 = (cfstringStruct *)(local_138 + (long)&pcVar1->field0_0x0);
        pcVar1 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (pcVar1 <= local_a0) break;
        pcStack_98 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        pcStack_98 = (cfstringStruct *)((long)pcStack_98 - (long)local_a0);
        local_60 = pcStack_98;
        local_58 = local_a0;
        local_50 = local_a0;
        local_48 = pcStack_98;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setHtmlSearchMatchRanges__026c8120,local_90);
      puVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setHtmlSearchMatchIndex__026c8128,
                 (long)(int)-(uint)(puVar3 == (undefined *)0x0));
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_updateInlineHTMLSearchCountLabel_026c8140);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_applyInlineHTMLHighlightPreservi_026c7fa8);
      pcVar1 = local_68;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_htmlSearchMatchIndex_026c8148);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_scrollToInlineHTMLSearchMatchAtI_026c8150,pcVar2);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
      local_7c = 0;
    }
    _objc_storeStrong(&local_78,0);
  }
  return;
}

