// FUN_0082435c @ 0082435c

void FUN_0082435c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8 [3];
  undefined4 local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar5 = local_b0;
  if (local_b0 == 0) {
    local_bc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_backgroundView_026a0320);
      _objc_retainAutoreleasedReturnValue();
      local_d8[0] = uVar5;
      if ((uVar5 != local_b8) &&
         ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_tag_026cab98), uVar5 == 0x24f6e7)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundView__026a2060,0);
      }
      _objc_storeStrong(local_d8,0);
    }
    _memset(auStack_120,0,0x40);
    uVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_180 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar4 = *local_110;
      local_188 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_118 + local_188 * 8);
          local_e0 = uVar5;
          if ((uVar5 != local_b8) &&
             ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_tag_026cab98), uVar3 = local_e0,
             uVar5 == 0x24f6e7)) {
            puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_removeFromSuperview_026ca800);
            }
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

