// FUN_015451e4 @ 015451e4

void FUN_015451e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_130;
  undefined *local_128;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = (undefined *)0x0;
  local_b0 = puVar1;
  _memset(auStack_100,0,0x40);
  puVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_windows_0269dde0);
  _objc_retainAutoreleasedReturnValue();
  local_128 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_128 != (undefined *)0x0) {
    lVar4 = *local_f0;
    local_130 = (undefined *)0x0;
    do {
      do {
        if (*local_f0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar4,puVar1);
        }
        uVar5 = *(ulong *)(local_f8 + (long)local_130 * 8);
        local_c0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKeyWindow_0269cd70);
        if ((uVar5 & 1) != 0) {
          _objc_storeStrong(&local_b8,local_c0);
          goto LAB_01545398;
        }
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10)
      ;
      local_130 = (undefined *)0x0;
    } while (local_128 != (undefined *)0x0);
  }
LAB_01545398:
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_b8 == (undefined *)0x0) {
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_windows_0269dde0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_b8;
    local_b8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

