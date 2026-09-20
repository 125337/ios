// FUN_003c395c @ 003c395c

void FUN_003c395c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_2a0;
  ulong local_278;
  ulong local_270;
  ulong local_240;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  ulong local_148;
  undefined4 local_13c;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  uVar2 = local_138;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar5 = local_138;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_138;
    if ((uVar5 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSOrderedSet_026ce618;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSOrderedSet_026ce618,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      local_130 = local_138;
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_13c = 1;
      }
      else {
        local_198 = 0;
        _memset(auStack_1e0,0,0x40);
        uVar2 = local_138;
        (*(code *)PTR__objc_retain_02578638)();
        local_270 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                   0x10);
        if (local_270 != 0) {
          lVar4 = *local_1d0;
          local_278 = 0;
          do {
            do {
              if (*local_1d0 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1d0 - lVar4,uVar2);
              }
              uVar5 = *(ulong *)(local_1d8 + local_278 * 8);
              local_1a0 = uVar5;
              FUN_003c375c();
              if ((uVar5 & 1) != 0) {
                if (local_198 == 0) {
                  uVar3 = local_138;
                  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_mutableCopy_0269d8a0);
                  uVar5 = local_198;
                  local_198 = uVar3;
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_removeObject__0269d678,local_1a0);
              }
              local_278 = local_278 + 1;
            } while (local_278 < local_270);
            local_270 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128
                       ,0x10);
            local_278 = 0;
          } while (local_270 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_198 == 0) {
          local_2a0 = local_138;
        }
        else {
          local_2a0 = local_198;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = local_2a0;
        local_13c = 1;
        _objc_storeStrong(&local_198,0);
      }
    }
    else {
      local_148 = 0;
      _memset(auStack_190,0,0x40);
      uVar2 = local_138;
      (*(code *)PTR__objc_retain_02578638)();
      local_210 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
      if (local_210 != 0) {
        lVar4 = *local_180;
        local_218 = 0;
        do {
          do {
            if (*local_180 - lVar4 != 0) {
              _objc_enumerationMutation(*local_180 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_188 + local_218 * 8);
            local_150 = uVar5;
            FUN_003c375c();
            if ((uVar5 & 1) != 0) {
              if (local_148 == 0) {
                uVar3 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_mutableCopy_0269d8a0);
                uVar5 = local_148;
                local_148 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_148,PTR_s_removeObject__0269d678,local_150);
            }
            local_218 = local_218 + 1;
          } while (local_218 < local_210);
          local_210 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                     0x10);
          local_218 = 0;
        } while (local_210 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_148 == 0) {
        local_240 = local_138;
      }
      else {
        local_240 = local_148;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = local_240;
      local_13c = 1;
      _objc_storeStrong(&local_148,0);
    }
  }
  else {
    uVar2 = local_138;
    FUN_003c3340();
    _objc_retainAutoreleasedReturnValue();
    local_13c = 1;
    local_130 = uVar2;
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

