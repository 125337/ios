// confirmCustomFunctionInput: @ 01df6588

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatActionPickerViewController::confirmCustomFunctionInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *local_258;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b0;
  bool local_191;
  cfstringStruct *local_190;
  cfstringStruct *local_180;
  cfstringStruct *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  cfstringStruct *local_120;
  long local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  bool local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  bool local_e1;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  local_b8 = param_2;
  local_b0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c0,param_3);
  pcVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_customAlert_026b70d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d1 = 0;
  local_e1 = false;
  bVar3 = ((ulong)pcVar5 & 1) == 0;
  if (bVar3) {
    local_1b0 = local_c0;
  }
  else {
    local_1b0 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_customAlert_026b70d8);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_1b0;
  }
  local_e1 = !bVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_1b0;
  if ((local_e1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_f9 = false;
  bVar3 = ((ulong)pcVar4 & 1) == 0;
  if (bVar3) {
    local_1c8 = &::cf___;
  }
  else {
    local_1c8 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_1c8;
  }
  local_f9 = !bVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = local_1c8;
  if ((local_f9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPendingCustomKind__026b70a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCustomAlert__026b70c0,0);
  local_108 = (cfstringStruct *)0x0;
  local_110 = (cfstringStruct *)0x0;
  local_118 = 0;
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_120 = pcVar4;
  _memset(auStack_168,0,0x40);
  local_1e8 = local_f0;
  if (local_f0 == (cfstringStruct *)0x0) {
    local_1e8 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1e8,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  local_200 = local_1e8;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_200 != (cfstringStruct *)0x0) {
    lVar7 = *local_158;
    local_208 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_158 - lVar7 != 0) {
          _objc_enumerationMutation(*local_158 - lVar7,local_1e8);
        }
        pcVar4 = local_120;
        uVar8 = *(undefined8 *)(local_160 + (long)local_208 * 8);
        puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        local_128 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar8);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_208 = (cfstringStruct *)((long)&local_208->field0_0x0 + 1);
      } while (local_208 < local_200);
      local_200 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,
                 0x10);
      local_208 = (cfstringStruct *)0x0;
    } while (local_200 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_1e8);
  pcVar4 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
  bVar2 = false;
  bVar1 = false;
  bVar3 = true;
  if ((cfstringStruct *)((long)&MACH_HEADER.magic + 1) < pcVar4) {
    pcVar4 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
    bVar3 = true;
    if (pcVar4 < &MACH_HEADER.cputype) {
      local_170 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      pcVar4 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar3 = true;
      if (pcVar4 != (cfstringStruct *)0x0) {
        local_180 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        pcVar4 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar3 = pcVar4 == (cfstringStruct *)0x0;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_180);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  if (bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cRTy_);
  }
  else {
    pcVar5 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_108;
    local_108 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar5 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_110;
    local_110 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
    local_191 = pcVar4 < (cfstringStruct *)((long)&MACH_HEADER.magic + 3);
    if (local_191) {
      local_258 = &cf_icons_outlined_more_circle;
    }
    else {
      local_258 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectAtIndexedSubscript__0269cc78,2);
      _objc_retainAutoreleasedReturnValue();
      local_190 = local_258;
    }
    local_191 = !local_191;
    _objc_storeStrong(&local_118,local_258);
    if (local_191) {
      (*(code *)PTR__objc_release_02578630)(local_190);
    }
    pcVar4 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
    if (((cfstringStruct *)((long)&MACH_HEADER.magic + 2) < pcVar4) &&
       (lVar7 = local_118, (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
       lVar7 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_RTy0Qpe_);
    }
    else {
      pcVar4 = local_108;
      _WCRSuperFloatAddCustomAction(local_108,local_110,local_118);
      if (((ulong)pcVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_mR1Y_);
      }
      else {
        pcVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectionHandler_026b8278);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (pcVar4 != (cfstringStruct *)0x0) {
          pcVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectionHandler_026b8278);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)pcVar4->field2_0x10)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__mR);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
      }
    }
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

