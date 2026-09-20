// FUN_019973b4 @ 019973b4

void FUN_019973b4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = 0;
  local_c8 = puVar1;
  _memset(auStack_118,0,0x40);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar5 = *local_108;
    local_148 = 0;
    do {
      do {
        if (*local_108 - lVar5 != 0) {
          _objc_enumerationMutation(*local_108 - lVar5,uVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + local_148 * 8);
        puVar1 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_removeItemAtPath_error__0269f910,local_d8,0);
        if (((ulong)puVar1 & 1) != 0) {
          local_d0 = local_d0 + 1;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Rd);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar4 & 1) != 0) {
    lVar5 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar5);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

