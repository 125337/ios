// FUN_01567bf0 @ 01567bf0

byte FUN_01567bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined4 local_c4;
  long local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined1 *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if ((local_b8 == (undefined1 *)0x0) || (local_c0 == 0)) {
    local_a9 = 0;
    local_c4 = 1;
    goto LAB_01567f98;
  }
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_viewControllers_0269e348);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8,local_c0);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar2 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
     puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088,
     puVar2 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,puVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    _memset(auStack_120,0,0x40);
    puVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_158 != (undefined1 *)0x0) {
      lVar4 = *local_110;
      local_160 = (undefined1 *)0x0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,puVar2);
          }
          local_e0 = *(long *)(local_118 + (long)local_160 * 8);
          if (local_e0 != local_c0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_160 = (undefined1 *)0x0;
      } while (local_158 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined1 *)0x0) {
LAB_01567f18:
      local_a9 = 0;
    }
    else {
      puVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
      puVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      if (puVar2 == puVar3) goto LAB_01567f18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_setViewControllers_animated__026b05c0,local_d8,0);
      local_a9 = 1;
    }
    local_c4 = 1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_d0,0);
LAB_01567f98:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

