// FUN_005183dc @ 005183dc

void FUN_005183dc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_190;
  undefined *local_188;
  undefined *local_158;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  bool local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_d1 = false;
  bVar1 = DAT_028cb098 == (code *)0x0;
  local_c0 = param_2;
  if (bVar1) {
    local_158 = (undefined *)0x0;
  }
  else {
    local_158 = local_b8;
    (*DAT_028cb098)(local_b8,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = local_158;
  }
  local_d1 = !bVar1;
  puVar2 = local_158;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_158;
  if ((local_d1 & 1U) != 0) {
    puVar2 = local_d0;
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_0051890c();
  puVar3 = local_c8;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_d8 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_c8;
    local_e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_conformsToProtocol__026a48c0,PTR_NSFastEnumeration_026cdf30);
    if (((ulong)puVar2 & 1) != 0) {
      _memset(auStack_128,0,0x40);
      puVar2 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_188 != (undefined *)0x0) {
        lVar5 = *local_118;
        local_190 = (undefined *)0x0;
        do {
          do {
            if (*local_118 - lVar5 != 0) {
              _objc_enumerationMutation(*local_118 - lVar5,puVar2);
            }
            uVar6 = *(ulong *)(local_120 + (long)local_190 * 8);
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_e8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((uVar6 & 1) != 0) &&
               (uVar6 = local_e8,
               (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0), uVar6 != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
            }
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_190 = (undefined *)0x0;
        } while (local_188 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)();
    }
    FUN_0051a448();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    _objc_sync_enter();
    puVar3 = local_e0;
    FUN_0051a448();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_unionSet__026a2cb0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_sync_exit(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

