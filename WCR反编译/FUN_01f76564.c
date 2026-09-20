// FUN_01f76564 @ 01f76564

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01f76564(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  cfstringStruct *local_238;
  cfstringStruct *local_228;
  ulong local_1a0;
  ulong local_198;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  undefined *local_140;
  cfstringStruct *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  ulong local_d0;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  lVar8 = local_b8;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (lVar8 == 0) {
    local_c4 = 1;
  }
  else {
    local_d0 = 0;
    local_d8 = (cfstringStruct *)0x0;
    _memset(auStack_120,0,0x40);
    uVar4 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_198 != 0) {
      lVar8 = *local_110;
      local_1a0 = 0;
      do {
        do {
          if (*local_110 - lVar8 != 0) {
            _objc_enumerationMutation(*local_110 - lVar8,uVar4);
          }
          local_e0 = *(undefined8 *)(local_118 + local_1a0 * 8);
          local_128 = 0;
          local_130 = 0;
          puVar5 = PTR_WCRefineVoicePackStore_026cea20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineVoicePackStore_026cea20,
                     PTR_s_moveItemAtPath_toDirectory_error_026c9988,local_e0,local_b8,&local_130);
          _objc_retainAutoreleasedReturnValue();
          _objc_storeStrong(&local_128,local_130);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if (puVar5 == (undefined *)0x0) {
            _objc_storeStrong(&local_d8,local_128);
          }
          else {
            local_d0 = local_d0 + 1;
          }
          _objc_storeStrong(&local_128,0);
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    lVar8 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar6 = lVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar6);
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
    uVar4 = local_d0;
    local_228 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    if (local_d0 == 0) {
      local_160 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_238 = local_160;
      if (local_160 == (cfstringStruct *)0x0) {
        local_238 = &cf_yR1Y_;
      }
      local_228 = local_238;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_count_0269cfe0);
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      bVar3 = uVar4 < uVar7;
      if (bVar3) {
        (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_140 = puVar5;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_stringWithFormat__0269cca8,&cf__yR);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_150 = local_228;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = local_228;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_160);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_140);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_138);
    _objc_storeStrong(&local_138);
    _objc_storeStrong(&local_d8,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

