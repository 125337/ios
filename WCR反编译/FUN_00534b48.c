// FUN_00534b48 @ 00534b48

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00534b48(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_2a8;
  ulong local_2a0;
  ulong local_250;
  ulong local_248;
  long local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  long local_1b0;
  long local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  long local_160;
  undefined *local_158 [3];
  undefined *local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_140 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_158[0] = puVar3;
  _memset(auStack_1a0,0,0x40);
  uVar1 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  local_248 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_248 != 0) {
    lVar4 = *local_190;
    local_250 = 0;
    do {
      do {
        if (*local_190 - lVar4 != 0) {
          _objc_enumerationMutation(*local_190 - lVar4,uVar1);
        }
        lVar5 = *(long *)(local_198 + local_250 * 8);
        local_160 = lVar5;
        FUN_00529d10();
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if (lVar5 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_addObject__0269d180,local_1a8);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_160);
        _objc_storeStrong(&local_1a8,0);
        local_250 = local_250 + 1;
      } while (local_250 < local_248);
      local_248 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_250 = 0;
    } while (local_248 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _memset(auStack_1f0,0,0x40);
  uVar1 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_2a0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10);
  if (local_2a0 != 0) {
    lVar4 = *local_1e0;
    local_2a8 = 0;
    do {
      do {
        if (*local_1e0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_1e0 - lVar4,uVar1);
        }
        lVar5 = *(long *)(local_1e8 + local_2a8 * 8);
        local_1b0 = lVar5;
        FUN_00529d10();
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if ((lVar5 == 0) ||
           (puVar2 = local_158[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_158[0],PTR_s_containsObject__0269cbb8,local_1f8),
           ((ulong)puVar2 & 1) == 0)) {
          lVar5 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_length_0269cca0);
          if (lVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_addObject__0269d180,local_1f8);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_1b0);
        }
        _objc_storeStrong(&local_1f8,0);
        local_2a8 = local_2a8 + 1;
      } while (local_2a8 < local_2a0);
      local_2a0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10)
      ;
      local_2a8 = 0;
    } while (local_2a0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  FUN_0052e290(local_140);
  puVar2 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_158);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

