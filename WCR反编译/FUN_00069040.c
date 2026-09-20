// FUN_00069040 @ 00069040

void FUN_00069040(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    FUN_00069244(local_b0);
  }
  _memset(auStack_f8,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_120 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_120 != 0) {
    lVar3 = *local_e8;
    local_128 = 0;
    do {
      do {
        if (*local_e8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar3,uVar2);
        }
        local_b8 = *(undefined8 *)(local_f0 + local_128 * 8);
        FUN_00069040(local_b8);
        local_128 = local_128 + 1;
      } while (local_128 < local_120);
      local_120 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_128 = 0;
    } while (local_120 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

