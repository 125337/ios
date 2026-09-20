// FUN_01ccb3b8 @ 01ccb3b8

void FUN_01ccb3b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  long local_d0;
  undefined8 local_c8;
  ulong local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  uVar4 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_d0 = param_1;
  local_c8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar2 = local_c0;
  if ((uVar4 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar1;
      _memset(auStack_128,0,0x40);
      uVar2 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_170 != 0) {
        lVar3 = *local_118;
        local_178 = 0;
        do {
          do {
            if (*local_118 - lVar3 != 0) {
              _objc_enumerationMutation(*local_118 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_120 + local_178 * 8);
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_e8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            if (((uVar4 & 1) != 0) &&
               (uVar4 = local_e8,
               (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0), uVar4 != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
            }
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_178 = 0;
        } while (local_170 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
      if (puVar1 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,
                   local_e0,local_b8);
      }
      _objc_storeStrong(&local_e0,0);
      local_d4 = 0;
      goto LAB_01ccb6f4;
    }
  }
  local_d4 = 1;
LAB_01ccb6f4:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

