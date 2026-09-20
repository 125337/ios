// FUN_01f7d650 @ 01f7d650

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01f7d650(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *local_1c0;
  ulong local_180;
  ulong local_178;
  bool local_139;
  cfstringStruct *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined4 local_c4;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  uVar1 = local_b8;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_c4 = 1;
  }
  else {
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    local_d8 = 0;
    _memset(auStack_120,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_178 != 0) {
      lVar5 = *local_110;
      local_180 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + local_180 * 8);
          local_128 = 0;
          local_130 = 0;
          puVar3 = PTR_WCRefineVoicePackStore_026cea20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineVoicePackStore_026cea20,
                     PTR_s_importPath_toDirectory_error__026c9a90,local_e0,local_d0,&local_130);
          _objc_retainAutoreleasedReturnValue();
          _objc_storeStrong(&local_128,local_130);
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          lVar2 = 0;
          if (puVar4 != (undefined *)0x0) {
            lVar2 = local_d8 + 1;
            local_d8 = lVar2;
          }
          _objc_storeStrong(lVar2,&local_128,0);
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_139 = local_d8 < 1;
    if (local_139) {
      local_1c0 = &cf__eQ1Y_;
    }
    else {
      local_1c0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___eQ);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_1c0;
    }
    local_139 = !local_139;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,local_1c0);
    if (local_139) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

