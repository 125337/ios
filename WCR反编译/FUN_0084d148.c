// FUN_0084d148 @ 0084d148

void FUN_0084d148(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined4 local_b8;
  byte local_b1;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b1 = param_2;
  if (local_b0 == 0) {
    local_b8 = 1;
  }
  else {
    _memset(auStack_100,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_138 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_138 != 0) {
      lVar2 = *local_f0;
      local_140 = 0;
      do {
        do {
          if (*local_f0 - lVar2 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar2,uVar1);
          }
          uVar3 = *(ulong *)(local_f8 + local_140 * 8);
          local_c0 = uVar3;
          FUN_00821054();
          if (((uVar3 & 1) != 0) ||
             (uVar3 = local_c0, FUN_00858008(local_c0,local_b0), (uVar3 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setHidden__026ca970,local_b1 & 1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_c0,PTR_s_setAlpha__026ca860);
            uVar3 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(0x3f800000);
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_b8 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

