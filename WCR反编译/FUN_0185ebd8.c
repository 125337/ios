// FUN_0185ebd8 @ 0185ebd8

void FUN_0185ebd8(long param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong local_158;
  ulong local_150;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined4 local_d4;
  cfstringStruct *local_d0;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_b8 = param_1;
  local_b0 = param_1;
  FUN_0185ee7c(uVar1,&cf_m_selectView);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  FUN_0185efc4();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_switchSelect_atIndexPath_source_;
  local_c8 = uVar1;
  _NSSelectorFromString();
  uVar1 = local_c0;
  local_d0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_respondsToSelector__026ca818,pcVar2);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_c8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     (uVar1 & 1) == 0)) {
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar1 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar4 = *local_110;
      local_158 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + local_158 * 8);
          uVar3 = local_c8;
          FUN_0185efe4(local_c8,local_e0);
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar3;
          if (uVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,local_d0,uVar3,0,0);
          }
          _objc_storeStrong(&local_128,0);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

