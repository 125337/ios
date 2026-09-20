// FUN_007ae544 @ 007ae544

byte FUN_007ae544(double param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if (local_b8 == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleCells_0269fc48);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != 0) {
      lVar4 = *local_f8;
      local_170 = 0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_100 + local_170 * 8);
          local_c8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_contentView_026ca5a8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          param_1 = ABS(param_1);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar5 = local_c8;
          if (1.0 < param_1) {
            local_a9 = 1;
            local_bc = 1;
            goto LAB_007ae8d0;
          }
          pcVar2 = &cf_isMenuHidden;
          _NSSelectorFromString();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_respondsToSelector__026ca818,pcVar2);
          uVar3 = local_c8;
          if ((uVar5 & 1) != 0) {
            pcVar2 = &cf_isMenuHidden;
            _NSSelectorFromString();
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar2);
            if ((uVar3 & 1) == 0) {
              local_a9 = 1;
              local_bc = 1;
              goto LAB_007ae8d0;
            }
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_bc = 0;
LAB_007ae8d0:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_bc == 0) {
      local_a9 = 0;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

