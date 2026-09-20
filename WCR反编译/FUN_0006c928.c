// FUN_0006c928 @ 0006c928

void FUN_0006c928(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  ulong local_d0 [3];
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    uVar1 = local_b0;
    _WCRNameplateViewIsProtected();
    uVar3 = local_b0;
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) != 0) {
        FUN_0006cdb4(local_b0);
      }
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_d0[0] = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _memset(auStack_118,0,0x40);
      uVar3 = local_d0[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      if (local_170 != 0) {
        lVar4 = *local_108;
        local_178 = 0;
        do {
          do {
            if (*local_108 - lVar4 != 0) {
              _objc_enumerationMutation(*local_108 - lVar4,uVar3);
            }
            local_d8 = *(undefined8 *)(local_110 + local_178 * 8);
            FUN_0006c928(local_d8);
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_178 = 0;
        } while (local_170 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(local_d0,0);
      local_b4 = 0;
    }
    else {
      local_b4 = 1;
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

