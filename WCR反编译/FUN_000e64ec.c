// FUN_000e64ec @ 000e64ec

void FUN_000e64ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  long local_d0;
  undefined4 local_c8;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_c8 = 1;
  }
  else {
    lVar4 = local_b0;
    FUN_000e3bcc();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = lVar4;
    _memset(auStack_118,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar4 = *local_108;
      local_170 = 0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,uVar2);
          }
          local_d8 = *(long *)(local_110 + local_170 * 8);
          if ((local_d8 != 0) &&
             (lVar3 = local_d0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_d0,PTR_s_indexOfObjectIdenticalTo__0269e160,local_d8),
             lVar3 == 0x7fffffffffffffff)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_d0,0);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

