// _WCRefineBatchDeleteFriendRemoveHistoryItemWithID @ 0185231c

void _WCRefineBatchDeleteFriendRemoveHistoryItemWithID(undefined8 param_1)

{
  undefined *puVar1;
  void *pvVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_170;
  void *local_148;
  void *local_140;
  bool local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined4 local_b4;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  lVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_b4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    pvVar2 = _memset(auStack_108,0,0x40);
    _WCRefineBatchDeleteFriendHistoryItems();
    _objc_retainAutoreleasedReturnValue();
    local_140 = pvVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != (void *)0x0) {
      lVar4 = *local_f8;
      local_148 = (void *)0x0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,pvVar2);
          }
          pcVar5 = *(cfstringStruct **)(local_100 + (long)local_148 * 8);
          local_c8 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar3 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
          local_119 = ((ulong)pcVar3 & 1) == 0;
          if (local_119) {
            local_170 = &cf___;
          }
          else {
            local_170 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_118 = local_170;
          }
          local_119 = !local_119;
          (*(code *)PTR__objc_retain_02578638)();
          local_110 = local_170;
          if (local_119) {
            (*(code *)PTR__objc_release_02578630)(local_118);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar3 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_isEqualToString__0269ccc8,local_b0);
          if (((ulong)pcVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_c8);
          }
          _objc_storeStrong(&local_110,0);
          local_148 = (void *)((long)local_148 + 1);
        } while (local_148 < local_140);
        local_140 = pvVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                   0x10);
        local_148 = (void *)0x0;
      } while (local_140 != (void *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pvVar2);
    _WCRefineBatchDeleteFriendSaveHistoryItems(local_c0);
    _objc_storeStrong(&local_c0,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

