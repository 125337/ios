// filterChipPackRels @ 01b64f68

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonLibraryViewController::filterChipPackRels(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_140;
  undefined *local_138;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  _memset(auStack_108,0,0x40);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_filterChipOptions_026a1030);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != (undefined *)0x0) {
    lVar3 = *local_f8;
    local_140 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar3,puVar1);
        }
        uVar4 = *(ulong *)(local_100 + (long)local_140 * 8);
        local_c8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_110 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((((uVar4 & 1) != 0) &&
             (uVar4 = local_110,
             (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0), uVar4 != 0)) &&
            (uVar4 = local_110,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_isEqualToString__0269ccc8,&cf___new__), (uVar4 & 1) == 0)) &&
           (uVar4 = local_110,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_110,PTR_s_isEqualToString__0269ccc8,&cf___manage__), (uVar4 & 1) == 0))
        {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_110);
        }
        _objc_storeStrong(&local_110,0);
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_140 = (undefined *)0x0;
    } while (local_138 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

