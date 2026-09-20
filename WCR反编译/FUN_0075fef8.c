// FUN_0075fef8 @ 0075fef8

void FUN_0075fef8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_150;
  ulong local_148;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  ulong local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
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
  _memset(auStack_100,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != 0) {
    lVar3 = *local_f0;
    local_150 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,uVar2);
        }
        uVar4 = *(ulong *)(local_f8 + local_150 * 8);
        puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        local_c0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,local_c0);
        }
        puVar1 = local_b8;
        uVar4 = local_c0;
        FUN_0075fef8();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_b0;
  puVar1 = local_b8;
  local_128 = PTR___NSConcreteGlobalBlock_02578658;
  local_120 = 0xd0800000;
  local_11c = 0;
  local_118 = FUN_007633ec;
  local_110 = &DAT_0257fa58;
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_sortUsingComparator__0269d168,&local_128);
  puVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

