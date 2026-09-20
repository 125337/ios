// messageItemsForItem: @ 010a646c

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageRepositoryStore::messageItemsForItem_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  ulong local_d0;
  SEL local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [128];
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  _objc_storeStrong(&local_d0,param_3);
  uVar1 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d4 = 1;
    local_b8 = puVar2;
  }
  else {
    IVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isCompositeItem__0269d720,local_d0);
    if ((IVar3 & 1) == 0) {
      local_30 = local_d0;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_d4 = 1;
      local_b8 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar2;
      _memset(auStack_128,0,0x40);
      uVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_messages);
      _objc_retainAutoreleasedReturnValue();
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_158 != 0) {
        lVar4 = *local_118;
        local_160 = 0;
        do {
          do {
            if (*local_118 - lVar4 != 0) {
              _objc_enumerationMutation(*local_118 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_120 + local_160 * 8);
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_e8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
            }
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b0,
                     0x10);
          local_160 = 0;
        } while (local_158 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
      local_d4 = 1;
      local_b8 = puVar2;
      _objc_storeStrong(&local_e0,0);
    }
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

