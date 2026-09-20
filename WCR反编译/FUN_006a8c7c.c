// FUN_006a8c7c @ 006a8c7c

void FUN_006a8c7c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_148;
  ulong local_140;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  uint local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    uVar4 = local_b8;
    FUN_006a8bf8();
    uVar2 = local_b8;
    if ((uVar4 & 1) == 0) {
      _memset(auStack_108,0,0x40);
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_140 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_140 != 0) {
        lVar3 = *local_f8;
        local_148 = 0;
        do {
          do {
            if (*local_f8 - lVar3 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_100 + local_148 * 8);
            local_c8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_tag_026cab98);
            FUN_006a9020();
            if ((uVar4 & 1) == 0) {
              uVar4 = local_c8;
              FUN_006a8c7c();
              _objc_retainAutoreleasedReturnValue();
              local_110 = uVar4;
              if (uVar4 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar4;
              }
              local_bc = (uint)(uVar4 != 0);
              _objc_storeStrong(&local_110,0);
              if (local_bc != 0) goto LAB_006a8efc;
            }
            local_148 = local_148 + 1;
          } while (local_148 < local_140);
          local_140 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                     0x10);
          local_148 = 0;
        } while (local_140 != 0);
      }
      local_bc = 0;
LAB_006a8efc:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_bc == 0) {
        local_b0 = 0;
        local_bc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar2;
      local_bc = 1;
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

