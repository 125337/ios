// FUN_000c1924 @ 000c1924

void FUN_000c1924(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1f8;
  undefined *local_190;
  undefined *local_188;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_b8;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_c8 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
    puVar2 = local_b8;
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_c8 = 1;
    }
    else {
      local_d8 = (undefined *)0x0;
      local_e0 = 0;
      _memset(auStack_128,0,0x40);
      puVar2 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_188 != (undefined *)0x0) {
        lVar4 = *local_118;
        local_190 = (undefined *)0x0;
        do {
          do {
            if (*local_118 - lVar4 != 0) {
              _objc_enumerationMutation(*local_118 - lVar4,puVar2);
            }
            uVar5 = *(ulong *)(local_120 + (long)local_190 * 8);
            local_e8 = uVar5;
            FUN_000c1e68();
            puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            if ((uVar5 & 1) == 0) {
              if (local_d8 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e8);
              }
            }
            else if (local_d8 == (undefined *)0x0) {
              puVar3 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,puVar3)
              ;
              _objc_retainAutoreleasedReturnValue();
              puVar3 = local_d8;
              local_d8 = puVar1;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              for (local_130 = 0; puVar1 = local_d8, local_130 < local_e0; local_130 = local_130 + 1
                  ) {
                puVar3 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_130);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
            }
            local_e0 = local_e0 + 1;
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_190 = (undefined *)0x0;
        } while (local_188 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_d8 == (undefined *)0x0) {
        local_1f8 = local_b8;
      }
      else {
        local_1f8 = local_d8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_1f8;
      local_c8 = 1;
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

