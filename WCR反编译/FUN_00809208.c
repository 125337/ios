// FUN_00809208 @ 00809208

void FUN_00809208(void)

{
  ulong uVar1;
  long lVar2;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_f0 [8];
  long local_e8;
  long *local_e0;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028ccf68,PTR_s_makeObjectsPerformSelector__0269f220,
             PTR_s_removeFromSuperview_026ca800);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf68,PTR_s_removeAllObjects_0269d508);
  _memset(auStack_f0,0,0x40);
  uVar1 = DAT_028ccf50;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf50,PTR_s_allValues_0269dae8);
  _objc_retainAutoreleasedReturnValue();
  local_128 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_128 != 0) {
    lVar2 = *local_e0;
    local_130 = 0;
    do {
      do {
        if (*local_e0 - lVar2 != 0) {
          _objc_enumerationMutation(*local_e0 - lVar2,uVar1);
        }
        local_b0 = *(undefined8 *)(local_e8 + local_130 * 8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_makeObjectsPerformSelector__0269f220,
                   PTR_s_removeFromSuperview_026ca800);
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f0,auStack_a8,0x10);
      local_130 = 0;
    } while (local_128 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf50,PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf58,PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf60,PTR_s_removeAllObjects_0269d508);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

