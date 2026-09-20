// FUN_00ebf3fc @ 00ebf3fc

void FUN_00ebf3fc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong local_130;
  ulong local_128;
  long local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  _memset(auStack_100,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_128 != 0) {
    lVar3 = *local_f0;
    local_130 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,uVar1);
        }
        lVar4 = *(long *)(local_f8 + local_130 * 8);
        local_c0 = lVar4;
        FUN_00ec135c();
        _objc_retainAutoreleasedReturnValue();
        local_108 = lVar4;
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,lVar4);
        }
        _objc_storeStrong(&local_108,0);
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_130 = 0;
    } while (local_128 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

