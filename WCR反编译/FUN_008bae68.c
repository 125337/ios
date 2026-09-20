// FUN_008bae68 @ 008bae68

void FUN_008bae68(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_168;
  undefined *local_160;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  long local_d8 [3];
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  FUN_008bd290(puVar3,local_b8);
  lVar5 = local_b8;
  FUN_008bcf38();
  _objc_retainAutoreleasedReturnValue();
  local_d8[0] = lVar5;
  if ((lVar5 != 0) && (lVar5 - local_b8 != 0)) {
    FUN_008bd290(lVar5 - local_b8,local_c0,lVar5);
  }
  _memset(auStack_120,0,0x40);
  puVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_160 != (undefined *)0x0) {
    lVar5 = *local_110;
    local_168 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,puVar3);
        }
        lVar6 = *(long *)(local_118 + (long)local_168 * 8);
        local_e0 = lVar6;
        FUN_008b5ddc(lVar6,PTR_s_getContactToForward_026a9ae0);
        _objc_retainAutoreleasedReturnValue();
        local_128 = lVar6;
        FUN_008bbaac();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar6);
        lVar6 = local_128;
        bVar2 = lVar4 != 0;
        if (bVar2) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = lVar6;
        }
        _objc_storeStrong(bVar2,&local_128,0);
        bVar1 = true;
        if (bVar2) goto LAB_008bb1ac;
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_168 = (undefined *)0x0;
    } while (local_160 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_008bb1ac:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(local_d8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

