// FUN_01f97f3c @ 01f97f3c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01f97f3c(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  cfstringStruct *local_268;
  cfstringStruct *local_258;
  ulong local_1d0;
  ulong local_1c8;
  cfstringStruct *local_168;
  cfstringStruct *local_158;
  undefined *local_148;
  cfstringStruct *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  cfstringStruct *local_e0;
  ulong local_d8;
  ulong local_d0;
  int local_c4;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  uVar7 = local_b8;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  uVar5 = local_b8;
  if (uVar7 == 0) {
    local_c4 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = uVar5;
    lVar8 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar4 = lVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar8);
    if ((uVar5 & 1) == 0) {
      local_d8 = 0;
      local_e0 = (cfstringStruct *)0x0;
      _memset(auStack_128,0,0x40);
      uVar5 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_1c8 != 0) {
        lVar8 = *local_118;
        local_1d0 = 0;
        do {
          do {
            if (*local_118 - lVar8 != 0) {
              _objc_enumerationMutation(*local_118 - lVar8,uVar5);
            }
            local_e8 = *(undefined8 *)(local_120 + local_1d0 * 8);
            local_130 = 0;
            local_138 = 0;
            puVar6 = PTR_WCRefineVoicePackStore_026cea20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineVoicePackStore_026cea20,
                       PTR_s_moveItemAtPath_toDirectory_error_026c9988,local_e8,local_d0,&local_138)
            ;
            _objc_retainAutoreleasedReturnValue();
            _objc_storeStrong(&local_130,local_138);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            if (puVar6 == (undefined *)0x0) {
              _objc_storeStrong(&local_e0,local_130);
            }
            else {
              local_d8 = local_d8 + 1;
            }
            _objc_storeStrong(&local_130,0);
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1d0 = 0;
        } while (local_1c8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar5);
      lVar8 = param_1 + 0x28;
      _objc_loadWeakRetained();
      lVar4 = lVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar8);
      lVar8 = param_1 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar8);
      lVar8 = param_1 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar8);
      lVar8 = param_1 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar8);
      uVar5 = local_d8;
      local_258 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      if ((long)local_d8 < 1) {
        local_168 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_localizedDescription_0269ced0);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_268 = local_168;
        if (local_168 == (cfstringStruct *)0x0) {
          local_268 = &cf_yR1Y_;
        }
        local_258 = local_268;
      }
      else {
        uVar7 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_count_0269cfe0);
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        bVar3 = uVar5 < uVar7;
        if (bVar3) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf__);
          _objc_retainAutoreleasedReturnValue();
          local_148 = puVar6;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_stringWithFormat__0269cca8,&cf__yR);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_158 = local_258;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_140 = local_258;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_168);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_148);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_140);
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_e0,0);
      local_c4 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___WS_MRvU_);
      local_c4 = 1;
    }
    _objc_storeStrong(&local_d0,0);
    if (local_c4 == 0) {
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

