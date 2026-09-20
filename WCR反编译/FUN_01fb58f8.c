// FUN_01fb58f8 @ 01fb58f8

long FUN_01fb58f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_178;
  undefined *local_170;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithArray__0269eab8,local_b8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithCapacity__0269e038,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = 0;
    local_d8 = puVar1;
    _memset(auStack_128,0,0x40);
    puVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_170 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_178 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar1);
          }
          lVar5 = *(long *)(local_120 + (long)local_178 * 8);
          local_e8 = lVar5;
          FUN_01fb5d5c();
          _objc_retainAutoreleasedReturnValue();
          local_130 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if ((lVar5 == 0) ||
             (puVar3 = local_d8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_d8,PTR_s_containsObject__0269cbb8,local_130), ((ulong)puVar3 & 1) != 0
             )) {
            local_c4 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_130);
            if (local_c0 != 0) {
              (**(code **)(local_c0 + 0x10))(local_c0,local_e8,local_130);
            }
            local_e0 = local_e0 + 1;
            local_c4 = 0;
          }
          _objc_storeStrong(&local_130,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_178 = (undefined *)0x0;
      } while (local_170 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_b0 = local_e0;
    local_c4 = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

