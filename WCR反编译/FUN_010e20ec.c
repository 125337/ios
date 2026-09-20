// FUN_010e20ec @ 010e20ec

void FUN_010e20ec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = param_2;
  if ((local_b0 == 0) || (param_2 < 0)) {
    local_bc = 1;
  }
  else {
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tag_026cab98);
    if (uVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_CONTENT_TAG);
    }
    if (local_b8 == 0) {
      local_bc = 1;
    }
    else {
      _memset(auStack_108,0,0x40);
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_138 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_138 != 0) {
        lVar2 = *local_f8;
        local_140 = 0;
        do {
          do {
            if (*local_f8 - lVar2 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
            }
            local_c8 = *(undefined8 *)(local_100 + local_140 * 8);
            FUN_010e20ec(local_c8,local_b8 + -1);
            local_140 = local_140 + 1;
          } while (local_140 < local_138);
          local_138 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                     0x10);
          local_140 = 0;
        } while (local_138 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_bc = 0;
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

