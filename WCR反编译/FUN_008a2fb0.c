// FUN_008a2fb0 @ 008a2fb0

void FUN_008a2fb0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  void *local_2d0;
  void *local_2c8;
  undefined *local_258;
  undefined *local_250;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_150;
  undefined4 local_144;
  long local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = param_2;
  FUN_0088fb40();
  puVar3 = local_138;
  local_140 = param_2;
  if (param_2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar3;
    local_144 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_138;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_150 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      _memset(auStack_1a8,0,0x40);
      puVar3 = local_138;
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10)
      ;
      if (local_250 != (undefined *)0x0) {
        lVar5 = *local_198;
        local_258 = (undefined *)0x0;
        do {
          do {
            if (*local_198 - lVar5 != 0) {
              _objc_enumerationMutation(*local_198 - lVar5,puVar3);
            }
            uVar6 = *(ulong *)(local_1a0 + (long)local_258 * 8);
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_168 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              local_1b0 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
              if (uVar6 == 0) {
                local_144 = 3;
              }
              else if ((local_140 == 2) && (uVar6 = local_1b0, FUN_008a3668(0), (uVar6 & 1) != 0)) {
                local_144 = 3;
              }
              else {
                puVar1 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_containsObject__0269cbb8,local_1b0);
                if (((ulong)puVar1 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_addObject__0269d180,local_1b0);
                }
                local_144 = 0;
              }
              _objc_storeStrong(&local_1b0,0);
            }
            local_258 = local_258 + 1;
          } while (local_258 < local_250);
          local_250 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                     0x10);
          local_258 = (undefined *)0x0;
        } while (local_250 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (local_140 == 1) {
      pvVar4 = _memset(auStack_1f8,0,0x40);
      FUN_008a37f4();
      _objc_retainAutoreleasedReturnValue();
      local_2c8 = pvVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2c8 != (void *)0x0) {
        lVar5 = *local_1e8;
        local_2d0 = (void *)0x0;
        do {
          do {
            if (*local_1e8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar5,pvVar4);
            }
            local_1b8 = *(undefined8 *)(local_1f0 + (long)local_2d0 * 8);
            puVar3 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_containsObject__0269cbb8,local_1b8);
            if (((ulong)puVar3 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1b8);
            }
            local_2d0 = (void *)((long)local_2d0 + 1);
          } while (local_2d0 < local_2c8);
          local_2c8 = pvVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pvVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                     0x10);
          local_2d0 = (void *)0x0;
        } while (local_2c8 != (void *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pvVar4);
    }
    puVar3 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar3;
    local_144 = 1;
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

