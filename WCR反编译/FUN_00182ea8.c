// FUN_00182ea8 @ 00182ea8

void FUN_00182ea8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_120,0,0x40);
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar4 = *local_110;
    local_168 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,uVar3);
        }
        puVar2 = local_c8;
        uVar1 = *(undefined8 *)(local_118 + local_168 * 8);
        local_e0 = uVar1;
        FUN_0018320c();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIMenu_026ce388;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIMenu_026ce388,PTR_s_menuWithTitle_children__0269fb28,&cf___,
             local_c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

