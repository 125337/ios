// FUN_0069c1ac @ 0069c1ac

void FUN_0069c1ac(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_150;
  ulong local_148;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  uint local_c4;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    uVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_dataSource_0269e800);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar5;
    FUN_0069bf70();
    uVar3 = local_c0;
    bVar1 = (uVar5 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar3;
    }
    local_c4 = (uint)bVar1;
    _objc_storeStrong(&local_c0,0);
    if (local_c4 != 0) goto LAB_0069c46c;
  }
  _memset(auStack_110,0,0x40);
  uVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != 0) {
    lVar4 = *local_100;
    local_150 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,uVar3);
        }
        uVar5 = *(ulong *)(local_108 + local_150 * 8);
        local_d0 = uVar5;
        FUN_0069c1ac();
        _objc_retainAutoreleasedReturnValue();
        local_118 = uVar5;
        if (uVar5 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar5;
        }
        local_c4 = (uint)(uVar5 != 0);
        _objc_storeStrong(&local_118,0);
        if (local_c4 != 0) goto LAB_0069c43c;
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  local_c4 = 0;
LAB_0069c43c:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_c4 == 0) {
    local_b0 = 0;
    local_c4 = 1;
  }
LAB_0069c46c:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

