// allItemIDs @ 01bb6a18

/* Function Stack Size: 0x10 bytes */

ID WCRMessageSyncMultiSelectViewController::allItemIDs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong local_248;
  ulong local_240;
  ulong local_228;
  ulong local_200;
  ulong local_1f8;
  ulong local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  _memset(auStack_188,0,0x40);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_sections_026a7b70);
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1f8 != 0) {
    lVar3 = *local_178;
    local_200 = 0;
    do {
      do {
        if (*local_178 - lVar3 != 0) {
          _objc_enumerationMutation(*local_178 - lVar3,IVar2);
        }
        local_148 = *(ulong *)(local_180 + local_200 * 8);
        _memset(auStack_1d0,0,0x40);
        uVar5 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_items);
        _objc_retainAutoreleasedReturnValue();
        local_228 = uVar5;
        if (uVar5 == 0) {
          local_228 = *(ulong *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_240 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_228,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128
                   ,0x10);
        if (local_240 != 0) {
          lVar4 = *local_1c0;
          local_248 = 0;
          do {
            do {
              if (*local_1c0 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1c0 - lVar4,local_228);
              }
              uVar5 = *(ulong *)(local_1c8 + local_248 * 8);
              local_190 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_1d8 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((uVar5 & 1) != 0) &&
                 (uVar5 = local_1d8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0), uVar5 != 0)
                 ) {
                (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_1d8)
                ;
              }
              _objc_storeStrong(&local_1d8,0);
              local_248 = local_248 + 1;
            } while (local_248 < local_240);
            local_240 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_228,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,
                       auStack_128,0x10);
            local_248 = 0;
          } while (local_240 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(local_228);
        local_200 = local_200 + 1;
      } while (local_200 < local_1f8);
      local_1f8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_200 = 0;
    } while (local_1f8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

