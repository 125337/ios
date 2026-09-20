// FUN_00749a00 @ 00749a00

void FUN_00749a00(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  ulong local_2c8;
  ulong local_2c0;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0 [3];
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = param_1;
  local_138 = param_1;
  local_130 = param_1;
  FUN_0074a168();
  _objc_retainAutoreleasedReturnValue();
  local_140 = uVar1;
  _memset(auStack_188,0,0x40);
  uVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_228 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_228 != 0) {
    lVar3 = *local_178;
    local_230 = 0;
    do {
      do {
        if (*local_178 - lVar3 != 0) {
          _objc_enumerationMutation(*local_178 - lVar3,uVar2);
        }
        local_148 = *(undefined8 *)(local_180 + local_230 * 8);
        dVar4 = *(double *)(param_1 + 0x20);
        uVar1 = local_140;
        dVar5 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_objectForKeyedSubscript__0269d098,local_148);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (30.0 < dVar4 - dVar5) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_removeObjectForKey__0269d700,local_148);
        }
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_230 = 0;
    } while (local_228 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_140;
  FUN_0074a1dc(local_140,0x200,&PTR___NSConcreteGlobalBlock_0257f6a8);
  FUN_0074a654();
  _objc_retainAutoreleasedReturnValue();
  local_1a0[0] = uVar1;
  FUN_0074a6c8(*(undefined8 *)(param_1 + 0x20));
  if ((0.0 < DAT_028cc758) && (DAT_028cc758 <= *(double *)(param_1 + 0x20))) {
    DAT_028cc758 = 0.0;
  }
  FUN_0074a88c();
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = uVar1;
  FUN_0074a6c8(*(undefined8 *)(param_1 + 0x20));
  FUN_0074a900();
  _objc_retainAutoreleasedReturnValue();
  local_1b0 = uVar1;
  _memset(auStack_1f8,0,0x40);
  uVar1 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_2c0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10);
  if (local_2c0 != 0) {
    lVar3 = *local_1e8;
    local_2c8 = 0;
    do {
      do {
        if (*local_1e8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1e8 - lVar3,uVar2);
        }
        local_1b8 = *(undefined8 *)(local_1f0 + local_2c8 * 8);
        dVar4 = *(double *)(param_1 + 0x20);
        uVar1 = local_1b0;
        dVar5 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,local_1b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (2.0 <= dVar4 - dVar5) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_removeObjectForKey__0269d700,local_1b8);
        }
        local_2c8 = local_2c8 + 1;
      } while (local_2c8 < local_2c0);
      local_2c0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10)
      ;
      local_2c8 = 0;
    } while (local_2c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_1b0);
  _objc_storeStrong(&local_1a8,0);
  _objc_storeStrong(local_1a0,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

