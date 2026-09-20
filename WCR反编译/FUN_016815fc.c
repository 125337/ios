// FUN_016815fc @ 016815fc

void FUN_016815fc(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong local_198;
  ulong local_190;
  cfstringStruct *local_170;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined1 *local_d0;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar8 = param_1 + 0x30;
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_loadWeakRetained();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_c0 = lVar8;
  if (lVar8 == 0) {
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
    local_190 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != 0) {
      lVar8 = *local_108;
      local_198 = 0;
      do {
        do {
          if (*local_108 - lVar8 != 0) {
            _objc_enumerationMutation(*local_108 - lVar8,uVar3);
          }
          lVar9 = *(long *)(local_110 + local_198 * 8);
          local_d8 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_topCandidates__026b2748,1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_120 = lVar4;
          (*(code *)PTR__objc_release_02578630)(lVar9);
          lVar4 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_string_0269cc38);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar4);
          if (lVar9 != 0) {
            puVar5 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
            if (puVar5 != (undefined1 *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_appendString__0269ccb0,&cf_newline_s_);
            }
            puVar5 = local_d0;
            lVar4 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_string_0269cc38);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(lVar4);
          }
          _objc_storeStrong(&local_120,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    puVar5 = local_d0;
    if (puVar6 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_R0ReW_);
      local_c4 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      if (&section_000002e8.reloff < puVar5) {
        puVar6 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_substringToIndex__0269d6c0,800);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_128;
        local_128 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar6 = local_d0;
      puVar5 = local_128;
      puVar2 = PTR_WCRefineHelper_026ce000;
      local_150 = PTR___NSConcreteStackBlock_02578660;
      local_148 = 0xc2000000;
      local_144 = 0;
      local_140 = FUN_01681c74;
      local_138 = &DAT_0257a770;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_O,puVar5,&cf_Y6R,
                 &local_150,&cf_sQ);
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__R_b_Y6R0RjR4_g);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
      local_c4 = 0;
    }
    _objc_storeStrong(&local_d0,0);
  }
  else {
    pcVar1 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_170 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_170 = &cf_O;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,local_170);
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

