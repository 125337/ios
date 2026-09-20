// FUN_003c3340 @ 003c3340

void FUN_003c3340(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1c0;
  undefined *local_180;
  undefined *local_178;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (undefined *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  puVar2 = local_d8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
     puVar2 == (undefined *)0x0)) {
    puVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = puVar2;
    local_dc = 1;
  }
  else {
    local_e8 = (undefined *)0x0;
    _memset(auStack_130,0,0x40);
    puVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_178 != (undefined *)0x0) {
      lVar5 = *local_120;
      local_180 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,puVar2);
          }
          uVar6 = *(ulong *)(local_128 + (long)local_180 * 8);
          local_f0 = uVar6;
          FUN_003c375c();
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          if ((uVar6 & 1) == 0) {
            if (local_e8 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f0);
            }
          }
          else if (local_e8 == (undefined *)0x0) {
            puVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_e8;
            local_e8 = puVar1;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_indexOfObjectIdenticalTo__0269e160,local_f0);
            puVar1 = local_e8;
            if ((puVar3 != (undefined *)0x7fffffffffffffff) && (puVar3 != (undefined *)0x0)) {
              local_c0 = 0;
              local_b8 = 0;
              puVar4 = local_d8;
              local_c8 = puVar3;
              local_b0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_subarrayWithRange__0269d848,0,puVar3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_180 = (undefined *)0x0;
      } while (local_178 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_e8 == (undefined *)0x0) {
      local_1c0 = local_d8;
    }
    else {
      local_1c0 = local_e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_1c0;
    local_dc = 1;
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

