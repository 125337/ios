// keywordsFromInput: @ 01bbaf70

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageSyncRuleViewController::keywordsFromInput_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_128;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  _memset(auStack_110,0,0x40);
  if (local_c0 == (cfstringStruct *)0x0) {
    local_128 = &::cf___;
  }
  else {
    local_128 = local_c0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_128,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  local_140 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != (cfstringStruct *)0x0) {
    lVar2 = *local_100;
    local_148 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_100 - lVar2 != 0) {
          _objc_enumerationMutation(*local_100 - lVar2,local_128);
        }
        lVar3 = *(long *)(local_108 + (long)local_148 * 8);
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        local_d0 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_118 = lVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        lVar3 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
        if ((lVar3 != 0) &&
           (puVar1 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsObject__0269cbb8,local_118),
           ((ulong)puVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
        }
        _objc_storeStrong(&local_118,0);
        local_148 = (cfstringStruct *)((long)&local_148->field0_0x0 + 1);
      } while (local_148 < local_140);
      local_140 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                 0x10);
      local_148 = (cfstringStruct *)0x0;
    } while (local_140 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_128);
  puVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

