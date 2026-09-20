// FUN_001d6d38 @ 001d6d38

void FUN_001d6d38(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_1c0;
  undefined *local_1b8;
  ulong local_150;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  ulong local_e8;
  undefined *local_e0;
  ulong local_d8 [3];
  cfstringStruct *local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    pcVar1 = &cf_WCPuzzleImageView;
    _NSClassFromString();
    uVar2 = local_b0;
    local_c0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if ((uVar2 & 1) == 0) {
      local_150 = 0;
    }
    else {
      local_150 = local_b0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d8[0] = local_150;
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_e8 = 0;
    while (puVar3 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0),
          puVar3 != (undefined *)0x0 && local_e8 < 0x50) {
      puVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_removeObjectAtIndex__0269d530,0);
      local_e8 = local_e8 + 1;
      puVar3 = local_f0;
      FUN_001d2ddc();
      if ((((ulong)puVar3 & 1) != 0) ||
         ((local_d8[0] != 0 &&
          (puVar3 = local_f0, FUN_001da12c(local_f0,local_d8[0]), ((ulong)puVar3 & 1) != 0)))) {
        FUN_001d6720(local_f0);
      }
      _memset(auStack_138,0,0x40);
      puVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1b8 != (undefined *)0x0) {
        lVar4 = *local_128;
        local_1c0 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,puVar3);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_1c0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_f8);
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1c0 = (undefined *)0x0;
        } while (local_1b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(local_d8,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

