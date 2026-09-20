// FUN_0087667c @ 0087667c

void FUN_0087667c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *local_158;
  void *local_150;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined4 local_d0;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar1 = local_b8;
  FUN_00872b3c();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  if (uVar1 == 0) {
    local_d0 = 1;
  }
  else {
    pvVar2 = _memset(auStack_118,0,0x40);
    FUN_00876f7c();
    _objc_retainAutoreleasedReturnValue();
    local_150 = pvVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != (void *)0x0) {
      lVar3 = *local_108;
      local_158 = (void *)0x0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,pvVar2);
          }
          local_d8 = *(undefined8 *)(local_110 + (long)local_158 * 8);
          uVar1 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_containsString__0269d0b0,local_d8);
          if ((uVar1 & 1) != 0) {
            FUN_00876528(local_b0,local_d8);
          }
          local_158 = (void *)((long)local_158 + 1);
        } while (local_158 < local_150);
        local_150 = pvVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_158 = (void *)0x0;
      } while (local_150 != (void *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pvVar2);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

