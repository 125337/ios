// FUN_005cc950 @ 005cc950

void FUN_005cc950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar2 = local_b0;
  local_c0 = 0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_b0;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      _objc_storeStrong(&local_c0,local_b0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringValue_0269ef08);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_c0;
    local_c0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _memset(auStack_118,0,0x40);
  uVar2 = local_c0;
  FUN_005ccce0();
  _objc_retainAutoreleasedReturnValue();
  local_180 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_180 != 0) {
    lVar4 = *local_108;
    local_188 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,uVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + local_188 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,local_d8);
        local_188 = local_188 + 1;
      } while (local_188 < local_180);
      local_180 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_188 = 0;
    } while (local_180 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

