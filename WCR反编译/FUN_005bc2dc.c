// FUN_005bc2dc @ 005bc2dc

byte FUN_005bc2dc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_a9 = 0;
    local_bc = 1;
    goto LAB_005bc714;
  }
  uVar4 = local_b8;
  FUN_005bc778();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,&cf_6e);
  if ((uVar4 & 1) == 0) {
LAB_005bc4a8:
    _memset(auStack_120,0,0x40);
    uVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_178 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_178 != 0) {
      lVar3 = *local_110;
      local_180 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_118 + local_180 * 8);
          local_e0 = uVar4;
          FUN_005bc2dc();
          if ((uVar4 & 1) != 0) {
            local_a9 = 1;
            local_bc = 1;
            goto LAB_005bc6b8;
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    local_bc = 0;
LAB_005bc6b8:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_bc == 0) {
      local_a9 = 0;
      local_bc = 1;
    }
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_onTaped_026a5928);
    uVar4 = local_b8;
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIControl_026ce2d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar4 & 1) == 0) goto LAB_005bc4a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_sendActionsForControlEvents__026a4650,0x40);
      local_a9 = 1;
      local_bc = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_onTaped_026a5928);
      local_a9 = 1;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
LAB_005bc714:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

