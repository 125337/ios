// FUN_00823d48 @ 00823d48

void FUN_00823d48(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_190;
  ulong local_188;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  long local_d0;
  undefined4 local_c8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_b0;
  (*(code *)PTR__objc_release_02578630)();
  uVar5 = local_b0;
  if (uVar1 == uVar3) {
    puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar5 & 1) == 0) {
      local_d0 = 0;
      _memset(auStack_118,0,0x40);
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_188 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_188 != 0) {
        lVar4 = *local_108;
        local_190 = 0;
        do {
          do {
            if (*local_108 - lVar4 != 0) {
              _objc_enumerationMutation(*local_108 - lVar4,uVar3);
            }
            uVar5 = *(ulong *)(local_110 + local_190 * 8);
            local_d8 = uVar5;
            FUN_0082e90c(uVar5,local_b8);
            if ((uVar5 & 1) == 0) {
              _objc_storeStrong(&local_d0,local_d8);
              local_c8 = 2;
              goto LAB_00824030;
            }
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_190 = 0;
        } while (local_188 != 0);
      }
      local_c8 = 0;
LAB_00824030:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_d0 == 0) {
        uVar5 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_b8;
        (*(code *)PTR__objc_release_02578630)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if (uVar1 != uVar3) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_bringSubviewToFront__026ca550,local_b8);
        }
      }
      else {
        uVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (((uVar1 == 0x7fffffffffffffff) || (uVar5 == 0x7fffffffffffffff)) || (uVar1 + 1 != uVar5)
           ) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_insertSubview_belowSubview__0269e078,local_b8,local_d0);
        }
      }
      _objc_storeStrong(&local_d0,0);
      local_c8 = 0;
    }
    else {
      local_c8 = 1;
    }
  }
  else {
    local_c8 = 1;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

