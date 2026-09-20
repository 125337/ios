// FUN_000c4a98 @ 000c4a98

void FUN_000c4a98(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_178;
  ulong local_170;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0 [3];
  char *local_c8;
  int local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    pcVar1 = "BaseMsgContentViewController";
    _objc_getClass();
    local_c8 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_b0 = 0;
      local_bc = 1;
    }
    else {
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_e0[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = uVar2;
      _memset(auStack_130,0,0x40);
      uVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_reverseObjectEnumerator_0269d220);
      _objc_retainAutoreleasedReturnValue();
      local_170 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_170 != 0) {
        lVar4 = *local_120;
        local_178 = 0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_128 + local_178 * 8);
            local_f0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,local_c8);
            uVar3 = local_f0;
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar3;
              local_bc = 1;
              goto LAB_000c4d78;
            }
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_178 = 0;
        } while (local_170 != 0);
      }
      local_bc = 0;
LAB_000c4d78:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_bc == 0) {
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        local_138 = uVar2;
        while (local_138 != 0) {
          uVar3 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isKindOfClass__0269cd68,local_c8);
          uVar2 = local_138;
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
            goto LAB_000c4ea4;
          }
          uVar3 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_nextResponder_0269d0d8);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_138;
          local_138 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        local_b0 = 0;
LAB_000c4ea4:
        local_bc = 1;
        _objc_storeStrong(&local_138,0);
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(local_e0,0);
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

