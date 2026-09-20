// FUN_008d048c @ 008d048c

byte FUN_008d048c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  uint local_d4;
  ulong local_d0 [3];
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar6 = local_b8;
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0[0] = uVar6;
    while (local_d0[0] != 0) {
      uVar3 = local_d0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_tag_026cab98);
      if (uVar3 == 0x2c63c) {
        local_a9 = 1;
        local_d4 = 1;
        goto LAB_008d0618;
      }
      uVar6 = local_d0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_d0[0];
      local_d0[0] = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_d4 = 2;
LAB_008d0618:
    _objc_storeStrong(local_d0,0);
    uVar4 = local_d4 - 2;
    if (local_d4 - 2 == 0) {
      local_a9 = 0;
      local_d4 = 1;
      uVar4 = 1;
    }
    goto LAB_008d09b4;
  }
  uVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
  if ((uVar3 & 1) != 0) {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar3;
    FUN_008d048c();
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      local_a9 = 1;
    }
    local_d4 = (uint)bVar1;
    _objc_storeStrong(&local_e0,0);
    uVar4 = local_d4;
    if (local_d4 != 0) goto LAB_008d09b4;
  }
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar6 = local_b8;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar6 & 1) != 0) goto LAB_008d07e0;
  }
  else {
LAB_008d07e0:
    _memset(auStack_128,0,0x40);
    uVar3 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1c0 != 0) {
      lVar5 = *local_118;
      local_1c8 = 0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_120 + local_1c8 * 8);
          local_e8 = uVar6;
          FUN_008d048c();
          if ((uVar6 & 1) != 0) {
            local_a9 = 1;
            local_d4 = 1;
            goto LAB_008d0974;
          }
          local_1c8 = local_1c8 + 1;
        } while (local_1c8 < local_1c0);
        local_1c0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1c8 = 0;
      } while (local_1c0 != 0);
    }
    local_d4 = 0;
LAB_008d0974:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar4 = local_d4;
    if (local_d4 != 0) goto LAB_008d09b4;
  }
  uVar4 = 1;
  local_a9 = 0;
  local_d4 = 1;
LAB_008d09b4:
  _objc_storeStrong(uVar4,&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

