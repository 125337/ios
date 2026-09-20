// FUN_00ec599c @ 00ec599c

void FUN_00ec599c(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_240;
  undefined1 *local_238;
  ulong local_200;
  ulong local_1f8;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  long local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  long local_140;
  undefined1 *local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  puVar3 = PTR__OBJC_CLASS___NSCountedSet_026ceb28;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSCountedSet_026ceb28,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar3;
  _memset(auStack_180,0,0x40);
  uVar2 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  local_1f8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_1f8 != 0) {
    lVar5 = *local_170;
    local_200 = 0;
    do {
      do {
        if (*local_170 - lVar5 != 0) {
          _objc_enumerationMutation(*local_170 - lVar5,uVar2);
        }
        lVar6 = *(long *)(local_178 + local_200 * 8);
        local_140 = lVar6;
        FUN_00ecb38c();
        _objc_retainAutoreleasedReturnValue();
        local_188 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
        if (lVar6 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_188);
        }
        _objc_storeStrong(&local_188,0);
        local_200 = local_200 + 1;
      } while (local_200 < local_1f8);
      local_1f8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
      local_200 = 0;
    } while (local_1f8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar3;
  _memset(auStack_1d8,0,0x40);
  puVar1 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_238 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10);
  if (local_238 != (undefined1 *)0x0) {
    lVar5 = *local_1c8;
    local_240 = (undefined1 *)0x0;
    do {
      do {
        if (*local_1c8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar5,puVar1);
        }
        local_198 = *(undefined8 *)(local_1d0 + (long)local_240 * 8);
        puVar4 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_countForObject__026ab538,local_198);
        if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar4) {
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_addObject__0269d180,local_198);
        }
        local_240 = local_240 + 1;
      } while (local_240 < local_238);
      local_238 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10
                );
      local_240 = (undefined1 *)0x0;
    } while (local_238 != (undefined1 *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar3 = local_190;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

