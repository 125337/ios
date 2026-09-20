// FUN_0076eca8 @ 0076eca8

void FUN_0076eca8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_148;
  ulong local_140;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,local_b0);
  _memset(auStack_110,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_140 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != 0) {
    lVar3 = *local_100;
    local_148 = 0;
    do {
      do {
        if (*local_100 - lVar3 != 0) {
          _objc_enumerationMutation(*local_100 - lVar3,uVar2);
        }
        uVar4 = *(undefined8 *)(local_108 + local_148 * 8);
        local_d0 = uVar4;
        FUN_0076eca8();
        _objc_retainAutoreleasedReturnValue();
        local_118 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObjectsFromArray__0269d540,uVar4);
        _objc_storeStrong(&local_118,0);
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

