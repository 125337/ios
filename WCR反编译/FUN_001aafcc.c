// FUN_001aafcc @ 001aafcc

void FUN_001aafcc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  int local_d0;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  FUN_001ac0f0(local_b8,"m_tableView");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar3 = local_c0;
  if ((uVar1 & 1) == 0) {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar3;
    _memset(auStack_120,0,0x40);
    uVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar4 = *local_110;
      local_178 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar3);
          }
          uVar5 = *(ulong *)(local_118 + local_178 * 8);
          puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
          local_e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar1 = local_e0;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar1;
            local_d0 = 1;
            goto LAB_001ab300;
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_d0 = 0;
LAB_001ab300:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_d0 == 0) {
      local_b0 = 0;
      local_d0 = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar3;
    local_d0 = 1;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

