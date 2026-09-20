// FUN_00533ab8 @ 00533ab8

void FUN_00533ab8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_210;
  undefined *local_1c0;
  undefined *local_1b8;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  undefined **ppuVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppuVar2 = &local_b8;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(ppuVar2,param_1);
  uVar1 = (uint)ppuVar2;
  FUN_00529c74();
  puVar4 = local_b8;
  if ((uVar1 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar4 & 1) != 0) &&
       (puVar4 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
       puVar4 != (undefined *)0x0)) {
      FUN_00529eb4();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
      puVar3 = local_b8;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar3;
        local_c8 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = puVar4;
        _memset(auStack_128,0,0x40);
        puVar4 = local_d8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1b8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        if (local_1b8 != (undefined *)0x0) {
          lVar5 = *local_118;
          local_1c0 = (undefined *)0x0;
          do {
            do {
              if (*local_118 - lVar5 != 0) {
                _objc_enumerationMutation(*local_118 - lVar5,puVar4);
              }
              lVar6 = *(long *)(local_120 + (long)local_1c0 * 8);
              local_e8 = lVar6;
              FUN_00529d10();
              _objc_retainAutoreleasedReturnValue();
              local_130 = lVar6;
              (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
              if ((lVar6 == 0) ||
                 (puVar3 = local_d0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_d0,PTR_s_containsObject__0269cbb8,local_130),
                 ((ulong)puVar3 & 1) == 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
                local_c8 = 0;
              }
              else {
                local_c8 = 3;
              }
              _objc_storeStrong(&local_130,0);
              local_1c0 = local_1c0 + 1;
            } while (local_1c0 < local_1b8);
            local_1b8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8
                       ,0x10);
            local_1c0 = (undefined *)0x0;
          } while (local_1b8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
        puVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
        if (puVar4 == puVar3) {
          local_210 = local_b8;
        }
        else {
          local_210 = local_e0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_210;
        local_c8 = 1;
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
      }
      _objc_storeStrong(&local_d0,0);
      goto LAB_00534024;
    }
  }
  puVar4 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = puVar4;
  local_c8 = 1;
LAB_00534024:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

