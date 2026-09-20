// FUN_010ebdf0 @ 010ebdf0

void FUN_010ebdf0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  ulong local_c8;
  ulong local_c0;
  uint local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar3 = local_b0;
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_b0;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = uVar4;
      while (local_c0 != 0) {
        uVar3 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_c8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_containsString__0269d0b0,&cf_MsgContentViewController);
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadData_0269e400);
        }
        local_b4 = (uint)bVar1;
        _objc_storeStrong(&local_c8,0);
        if (local_b4 != 0) goto LAB_010ebf8c;
        uVar4 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_c0;
        local_c0 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_b4 = 2;
LAB_010ebf8c:
      _objc_storeStrong(&local_c0,0);
      if (local_b4 != 2) goto LAB_010ec0f8;
    }
    _memset(auStack_110,0,0x40);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar5 = *local_100;
      local_148 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,uVar3);
          }
          local_d0 = *(undefined8 *)(local_108 + local_148 * 8);
          FUN_010ebdf0(local_d0);
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_b4 = 0;
  }
LAB_010ec0f8:
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

