// FUN_00336b14 @ 00336b14

void FUN_00336b14(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0 [3];
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_valueForKey__0269d128,&cf_m_arrKeys);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_b0;
  local_b8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_valueForKey__0269d128,&cf_m_dicRoomMembers);
  _objc_retainAutoreleasedReturnValue();
  local_d0[0] = uVar4;
  if (local_b8 != 0) {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
    local_d8 = uVar1;
    while (local_d8 = local_d8 - 1, -1 < (long)local_d8) {
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_d8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_e0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar1 & 1) != 0) && (uVar1 = local_e0, FUN_00337e5c(), (uVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_removeObjectAtIndex__0269d530,local_d8)
        ;
      }
      _objc_storeStrong(&local_e0,0);
    }
  }
  if (local_d0[0] != 0) {
    uVar1 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar1;
    _memset(auStack_130,0,0x40);
    uVar1 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_190 != 0) {
      lVar3 = *local_120;
      local_198 = 0;
      do {
        do {
          if (*local_120 - lVar3 != 0) {
            _objc_enumerationMutation(*local_120 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_128 + local_198 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_f0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar4 & 1) != 0) && (uVar4 = local_f0, FUN_00337e5c(), (uVar4 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0[0],PTR_s_removeObjectForKey__0269d700,local_f0);
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(local_d0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

