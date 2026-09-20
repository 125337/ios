// FUN_005854b8 @ 005854b8

void FUN_005854b8(undefined8 param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *local_150;
  void *local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_d0;
  long local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  lVar4 = local_b8;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_b0 = 0;
    local_d0 = 1;
  }
  else {
    pvVar1 = _memset(auStack_118,0,0x40);
    FUN_0057bc48();
    _objc_retainAutoreleasedReturnValue();
    local_148 = pvVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != (void *)0x0) {
      lVar4 = *local_108;
      local_150 = (void *)0x0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,pvVar1);
          }
          uVar5 = *(ulong *)(local_110 + (long)local_150 * 8);
          local_d8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar5;
          FUN_0057a910();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar2 = local_d8;
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
            local_d0 = 1;
            goto LAB_005857c0;
          }
          local_150 = (void *)((long)local_150 + 1);
        } while (local_150 < local_148);
        local_148 = pvVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_150 = (void *)0x0;
      } while (local_148 != (void *)0x0);
    }
    local_d0 = 0;
LAB_005857c0:
    (*(code *)PTR__objc_release_02578630)(pvVar1);
    if (local_d0 == 0) {
      local_b0 = 0;
      local_d0 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

