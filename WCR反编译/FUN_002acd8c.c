// FUN_002acd8c @ 002acd8c

void FUN_002acd8c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = param_2;
  _memset(auStack_108,0,0x40);
  uVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != 0) {
    lVar4 = *local_f8;
    local_150 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,uVar3);
        }
        lVar5 = *(long *)(local_100 + local_150 * 8);
        local_c8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_tag_026cab98);
        lVar2 = local_c8;
        if (lVar5 == local_c0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = lVar2;
          bVar1 = true;
          goto LAB_002acfb0;
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  bVar1 = false;
LAB_002acfb0:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

