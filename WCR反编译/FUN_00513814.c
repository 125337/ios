// FUN_00513814 @ 00513814

byte FUN_00513814(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_190;
  ulong local_188;
  int local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  int local_d0;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar4 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if ((lVar4 == 0) ||
     (uVar1 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_commentUsers_026a4730),
     (uVar1 & 1) == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_commentUsers_026a4730);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
    else {
      _memset(auStack_120,0,0x40);
      uVar1 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_188 != 0) {
        lVar4 = *local_110;
        local_190 = 0;
        do {
          do {
            if (*local_110 - lVar4 != 0) {
              _objc_enumerationMutation(*local_110 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_118 + local_190 * 8);
            local_124 = 0;
            local_e0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_type_0269e6f8);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_type_0269e6f8);
              local_124 = (int)uVar5;
            }
            if (local_124 == 2) {
              uVar5 = local_e0;
              FUN_0050e284(0,local_e0,&cf_username);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar5);
              if ((uVar3 & 1) != 0) {
                local_a9 = 1;
                local_d0 = 1;
                goto LAB_00513c08;
              }
            }
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_190 = 0;
        } while (local_188 != 0);
      }
      local_d0 = 0;
LAB_00513c08:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_d0 == 0) {
        local_a9 = 0;
        local_d0 = 1;
      }
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

