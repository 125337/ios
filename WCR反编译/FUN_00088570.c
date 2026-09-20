// FUN_00088570 @ 00088570

void FUN_00088570(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  undefined1 local_d9;
  ulong local_d8;
  ulong local_d0;
  undefined4 local_c8;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if (((local_b0 == 0) || (local_b8 == 0)) ||
     (uVar5 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isViewLoaded_0269cde0),
     (uVar5 & 1) == 0)) {
    local_c8 = 1;
  }
  else {
    uVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 0;
    bVar2 = true;
    uVar1 = uVar5 != 0;
    local_d0 = uVar5;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar5 == 0;
      local_d9 = uVar1;
      local_d8 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar1 = local_d9;
    }
    local_d9 = uVar1;
    if (bVar2) {
      local_c8 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar3;
      FUN_0007dc30(local_d0,local_d0,puVar3);
      _memset(auStack_130,0,0x40);
      puVar3 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10)
      ;
      if (local_190 != (undefined *)0x0) {
        lVar4 = *local_120;
        local_198 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,puVar3);
            }
            uVar5 = *(ulong *)(local_128 + (long)local_198 * 8);
            local_f0 = uVar5;
            if (((uVar5 != 0) && (uVar5 - local_b8 != 0)) &&
               (FUN_0007c508(uVar5 - local_b8), (uVar5 & 1) != 0)) {
              FUN_0007972c(local_f0);
            }
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_198 = (undefined *)0x0;
        } while (local_190 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_e8,0);
      local_c8 = 0;
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

