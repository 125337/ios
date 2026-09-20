// FUN_01ccb7b4 @ 01ccb7b4

void FUN_01ccb7b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_178;
  ulong local_170;
  long local_150;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  long local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  lVar2 = *(long *)(param_1 + 0x20);
  local_d0 = param_1;
  local_c8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectForKeyedSubscript__0269d098,local_b8);
  _objc_retainAutoreleasedReturnValue();
  local_150 = lVar2;
  if (lVar2 == 0) {
    local_150 = *(long *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_orderedSetWithArray__026a4b80,local_150);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _memset(auStack_120,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_170 != 0) {
    lVar2 = *local_110;
    local_178 = 0;
    do {
      do {
        if (*local_110 - lVar2 != 0) {
          _objc_enumerationMutation(*local_110 - lVar2,uVar1);
        }
        uVar5 = *(ulong *)(local_118 + local_178 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_e0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((((uVar5 & 1) != 0) &&
            (uVar5 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0)
            , uVar5 != 0)) &&
           (puVar3 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,local_e0),
           ((ulong)puVar3 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_insertObject_atIndex__0269eac0,local_e0,0);
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
             local_b8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

