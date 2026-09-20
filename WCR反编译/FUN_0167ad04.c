// FUN_0167ad04 @ 0167ad04

void FUN_0167ad04(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_168;
  ulong local_160;
  cfstringStruct *local_140;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined *local_d0;
  uint local_c4;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar6 = param_1 + 0x30;
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_loadWeakRetained();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_c0 = lVar6;
  if (lVar6 == 0) {
    local_c4 = 1;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar2;
    _memset(auStack_118,0,0x40);
    uVar3 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_results_026b2740);
    _objc_retainAutoreleasedReturnValue();
    local_160 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_160 != 0) {
      lVar6 = *local_108;
      local_168 = 0;
      do {
        do {
          if (*local_108 - lVar6 != 0) {
            _objc_enumerationMutation(*local_108 - lVar6,uVar3);
          }
          lVar7 = *(long *)(local_110 + local_168 * 8);
          local_d8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_topCandidates__026b2748,1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_120 = lVar4;
          (*(code *)PTR__objc_release_02578630)(lVar7);
          lVar4 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_string_0269cc38);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar4);
          if (lVar7 != 0) {
            puVar2 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
            if (puVar2 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_appendString__0269ccb0,&cf_newline_s_);
            }
            puVar2 = local_d0;
            lVar4 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_string_0269cc38);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(lVar4);
          }
          _objc_storeStrong(&local_120,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    if (puVar2 != (undefined *)0x0) {
      puVar5 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTranslateResultText__026b26d0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_presentExtractedTranslateText__026b2730,local_d0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_R0ReW_);
    }
    local_c4 = (uint)(puVar2 == (undefined *)0x0);
    _objc_storeStrong(&local_d0,0);
  }
  else {
    pcVar1 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_140 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_140 = &cf_cS1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,local_140);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_c4 = 1;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

