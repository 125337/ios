// FUN_0084bcc0 @ 0084bcc0

void FUN_0084bcc0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_190;
  ulong local_188;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0 [3];
  ulong local_c8;
  undefined4 local_bc;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if (local_b8 == 0) {
    local_bc = 1;
  }
  else {
    uVar1 = local_b8;
    FUN_0084c170();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_b8;
    local_c8 = uVar1;
    FUN_0084c4f8();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_b8;
    local_e0[0] = uVar2;
    FUN_0084cb28();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_b8;
    local_e8 = uVar1;
    FUN_0084ce38();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar2;
    FUN_0084d148(local_b8,0);
    FUN_0084d494(local_b8,0);
    FUN_0084d604(local_c8,0,DAT_026f48a8);
    FUN_0084d604(local_e0[0],0,DAT_026f48b0);
    FUN_0084d910(local_b0,local_b8);
    FUN_008563f0(local_b8);
    FUN_0084f998(local_b8);
    _memset(auStack_138,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_188 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != 0) {
      lVar3 = *local_128;
      local_190 = 0;
      do {
        do {
          if (*local_128 - lVar3 != 0) {
            _objc_enumerationMutation(*local_128 - lVar3,uVar1);
          }
          local_f8 = *(ulong *)(local_130 + local_190 * 8);
          if ((local_f8 != local_e8) && (local_f8 != local_f0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setHidden__026ca970,0);
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setBackgroundColor__026ca888,0);
    _objc_setAssociatedObject(local_b8,DAT_026f48a0,0,1);
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(local_e0,0);
    _objc_storeStrong(&local_c8,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

