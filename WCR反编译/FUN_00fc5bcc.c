// FUN_00fc5bcc @ 00fc5bcc

void FUN_00fc5bcc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  ulong local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if (local_b0 != 0) {
    _objc_storeWeak(&DAT_028e2ee8,local_b0);
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (puVar3 == (undefined *)0x0) {
    local_c8 = 0;
    _os_unfair_lock_lock(&DAT_028e2ef0);
    if ((DAT_028e2ef4 & 1) == 0) {
      DAT_028e2ef4 = 1;
      uVar4 = DAT_028e2ee0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2ee0,PTR_s_copy_0269d150);
      uVar1 = local_c8;
      local_c8 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(&DAT_028e2ee0,0);
      _os_unfair_lock_unlock(&DAT_028e2ef0);
      _memset(auStack_110,0,0x40);
      uVar1 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      if (local_158 != 0) {
        lVar5 = *local_100;
        local_160 = 0;
        do {
          do {
            if (*local_100 - lVar5 != 0) {
              _objc_enumerationMutation(*local_100 - lVar5,uVar1);
            }
            local_d0 = *(long *)(local_108 + local_160 * 8);
            if (local_d0 != 0) {
              (**(code **)(local_d0 + 0x10))(local_d0,local_b0);
            }
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                     0x10);
          local_160 = 0;
        } while (local_158 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_bc = 0;
    }
    else {
      _os_unfair_lock_unlock(&DAT_028e2ef0);
      local_bc = 1;
    }
    _objc_storeStrong(&local_c8,0);
  }
  else {
    FUN_00fc5f28();
    local_bc = 1;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

