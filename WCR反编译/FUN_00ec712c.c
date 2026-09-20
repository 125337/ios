// FUN_00ec712c @ 00ec712c

void FUN_00ec712c(undefined8 param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *local_130;
  void *local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  int local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  lVar1 = local_b8;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_b8;
  local_b8 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar4);
  lVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    pvVar2 = _memset(auStack_108,0,0x40);
    FUN_00ebdc88();
    _objc_retainAutoreleasedReturnValue();
    local_128 = pvVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_128 != (void *)0x0) {
      lVar4 = *local_f8;
      local_130 = (void *)0x0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,pvVar2);
          }
          uVar5 = *(ulong *)(local_100 + (long)local_130 * 8);
          local_c8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar5 = local_c8;
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar5;
            local_bc = 1;
            goto LAB_00ec7360;
          }
          local_130 = (void *)((long)local_130 + 1);
        } while (local_130 < local_128);
        local_128 = pvVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                   0x10);
        local_130 = (void *)0x0;
      } while (local_128 != (void *)0x0);
    }
    local_bc = 0;
LAB_00ec7360:
    (*(code *)PTR__objc_release_02578630)(pvVar2);
    if (local_bc == 0) {
      local_b0 = 0;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

