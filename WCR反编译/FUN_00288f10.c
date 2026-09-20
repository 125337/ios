// FUN_00288f10 @ 00288f10

void FUN_00288f10(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_120,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar4 = *local_110;
    local_168 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,uVar1);
        }
        uVar5 = *(ulong *)(local_118 + local_168 * 8);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_e0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar5 & 1) != 0) &&
           (uVar5 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
           uVar5 != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e0);
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  puVar2 = local_b8;
  local_b0 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
  }
  else {
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_componentsJoinedByString__0269d140,&cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

