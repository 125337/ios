// FUN_01b1d7b0 @ 01b1d7b0

void FUN_01b1d7b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_1e8;
  undefined *local_1b8;
  undefined *local_1b0;
  long local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_108;
  undefined1 local_f9;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_selectedIndexes_026b2a08);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = PTR___NSConcreteGlobalBlock_02578658;
  local_f0 = 0xd0800000;
  local_ec = 0;
  local_e8 = FUN_01b1dd18;
  local_e0 = &DAT_0258b278;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_c8;
  local_d8 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_enumerateIndexesUsingBlock__026a2090,&local_f8);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_f9 = (undefined1)uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSuppressRecordsChangeReload__026beba0,1);
  _memset(auStack_148,0,0x40);
  puVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_1b0 != (undefined *)0x0) {
    lVar7 = *local_138;
    local_1b8 = (undefined *)0x0;
    do {
      do {
        if (*local_138 - lVar7 != 0) {
          _objc_enumerationMutation(*local_138 - lVar7,puVar2);
        }
        local_108 = *(long *)(local_140 + (long)local_1b8 * 8);
        lVar5 = *(long *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_engine_026be8d0);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = lVar6;
        if (lVar6 == 0) {
          local_1e8 = local_108;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = local_1e8;
        (*(code *)PTR__objc_release_02578630)(lVar6);
        (*(code *)PTR__objc_release_02578630)(lVar5);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_engine_026be8d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _objc_storeStrong(&local_150,0);
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < local_1b0);
      local_1b0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      local_1b8 = (undefined *)0x0;
    } while (local_1b0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSuppressRecordsChangeReload__026beba0,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_exitMultiSelectMode_026bade0);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_reloadData_0269e400);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__Rd);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

