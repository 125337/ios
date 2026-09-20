// logActionExport @ 00928510

/* Function Stack Size: 0x10 bytes */

void WCRefineCrashMonitorViewController::logActionExport(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 uVar7;
  undefined8 in_d3;
  undefined8 uVar8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1b0;
  undefined *local_140;
  uint local_134;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  bool local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_logPlainText_026aa678);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c9 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1b0 = &::cf___;
  }
  else {
    local_1b0 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_logPlainText_026aa678);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_1b0;
  }
  local_c9 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_1b0;
  if ((local_c9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_c0;
  local_d8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  puVar3 = (undefined *)0x0;
  if (pcVar1 != (cfstringStruct *)0x0) {
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_c0);
  }
  _WCRefineCrashReporterLogDirectory();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar3;
  _memset(auStack_128,0,0x40);
  pcVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_filteredCrashFileNames_026aa688);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1d8 != (cfstringStruct *)0x0) {
    lVar5 = *local_118;
    local_1e0 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,pcVar1);
        }
        puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
        local_e8 = *(undefined8 *)(local_120 + (long)local_1e0 * 8);
        puVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,local_e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fileURLWithPath__0269f540);
        _objc_retainAutoreleasedReturnValue();
        local_130 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (local_130 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_130);
        }
        _objc_storeStrong(&local_130,0);
        local_1e0 = (cfstringStruct *)((long)&local_1e0->field0_0x0 + 1);
      } while (local_1e0 < local_1d8);
      local_1d8 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_1e0 = (cfstringStruct *)0x0;
    } while (local_1d8 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar3 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIActivityViewController_026cea70;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar1 = local_b0;
    local_140 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_logPanel_026aa690);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_popoverPresentationController_0269fdf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_logPanel_026aa690);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetMidX(in_d0,in_d1,in_d2,in_d3);
    uVar6 = 0x4044000000000000;
    uVar8 = 0x3ff0000000000000;
    uVar7 = 0x3ff0000000000000;
    FUN_00925994();
    puVar4 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_popoverPresentationController_0269fdf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,uVar6,uVar7,uVar8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,local_140,1);
    _objc_storeStrong(&local_140,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feS_Qv__ne_);
  }
  local_134 = (uint)(puVar3 == (undefined *)0x0);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

