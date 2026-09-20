// FUN_01ac9510 @ 01ac9510

void FUN_01ac9510(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_298;
  ulong local_270;
  ulong local_268;
  ulong local_250;
  ulong local_220;
  ulong local_218;
  ulong local_200;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  byte local_191;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar2;
  _memset(auStack_188,0,0x40);
  if (local_130 == 0) {
    local_200 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_200 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_218 = local_200;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_200,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_218 != 0) {
    lVar3 = *local_178;
    local_220 = 0;
    do {
      do {
        if (*local_178 - lVar3 != 0) {
          _objc_enumerationMutation(*local_178 - lVar3,local_200);
        }
        uVar4 = *(ulong *)(local_180 + local_220 * 8);
        local_148 = uVar4;
        FUN_01ace5c4();
        local_191 = 0;
        bVar1 = false;
        if ((uVar4 & 1) == 0) {
          uVar4 = local_148;
          FUN_01a9eff8();
          _objc_retainAutoreleasedReturnValue();
          local_191 = 1;
          local_190 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = uVar4 != 0;
        }
        if ((local_191 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_190);
        }
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_148);
        }
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_200,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                 0x10);
      local_220 = 0;
    } while (local_218 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_200);
  _memset(auStack_1e0,0,0x40);
  if (local_138 == 0) {
    local_250 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_250 = local_138;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_268 = local_250;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_250,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10)
  ;
  if (local_268 != 0) {
    lVar3 = *local_1d0;
    local_270 = 0;
    do {
      do {
        if (*local_1d0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar3,local_250);
        }
        uVar4 = *(ulong *)(local_1d8 + local_270 * 8);
        local_1a0 = uVar4;
        FUN_01ace5c4();
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_1a0);
        }
        local_270 = local_270 + 1;
      } while (local_270 < local_268);
      local_268 = local_250;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_250,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                 0x10);
      local_270 = 0;
    } while (local_268 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_250);
  puVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_298 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_298 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_298);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

