// FUN_0042ba80 @ 0042ba80

void FUN_0042ba80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_180;
  undefined *local_178;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar2;
  _memset(auStack_138,0,0x40);
  local_c8 = &cf_m_nsDes;
  local_c0 = &cf_m_nsInitialDes;
  local_b8 = &cf_verifyContent;
  local_b0 = &cf_m_nsContent;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4);
  _objc_retainAutoreleasedReturnValue();
  local_178 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_178 != (undefined *)0x0) {
    lVar6 = *local_128;
    local_180 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar6 != 0) {
          _objc_enumerationMutation(*local_128 - lVar6,puVar2);
        }
        puVar1 = local_e0;
        local_f8 = *(undefined8 *)(local_130 + (long)local_180 * 8);
        uVar3 = local_d0;
        FUN_00422aac(local_d0,local_f8);
        _objc_retainAutoreleasedReturnValue();
        FUN_0042bf98(puVar1);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_180 = (undefined *)0x0;
    } while (local_178 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_140 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  puVar2 = local_e0;
  if (uVar4 != 0) {
    uVar4 = local_140;
    FUN_0042c0cc(local_140,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    FUN_0042bf98(puVar2);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_140;
    FUN_0040f778();
    if ((uVar4 & 1) == 0) {
      FUN_0042bf98(local_e0,local_140);
    }
  }
  puVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

