// allFriendCandidates @ 00f75c80

/* Function Stack Size: 0x10 bytes */

ID WCRefineFriendRelationChecker::allFriendCandidates(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_228;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined8 local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  undefined *local_118 [4];
  ID local_f8;
  undefined *local_f0;
  undefined *local_e8;
  ID local_e0;
  SEL local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_00f75634();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = PTR_s_getContactList_contactType__026a2fc8;
  IVar2 = local_e0;
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_getContactList_contactType__026a2fc8)
  ;
  if ((IVar2 & 1) != 0) {
    IVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_f0,1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_f8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((IVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObjectsFromArray__0269d540,local_f8);
    }
    _objc_storeStrong(&local_f8,0);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_118[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar3;
  _memset(auStack_168,0,0x40);
  puVar1 = local_e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10);
  if (local_1c8 != (undefined *)0x0) {
    lVar5 = *local_158;
    local_1d0 = (undefined *)0x0;
    do {
      do {
        if (*local_158 - lVar5 != 0) {
          _objc_enumerationMutation(*local_158 - lVar5,puVar1);
        }
        uVar6 = *(undefined8 *)(local_160 + (long)local_1d0 * 8);
        local_128 = uVar6;
        FUN_00f75654();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_120;
        local_170 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_containsObject__0269cbb8,uVar6);
        if ((((ulong)puVar3 & 1) == 0) &&
           (IVar2 = local_e0, FUN_00f757d8(local_e0,local_170), (IVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_addObject__0269d180,local_170);
          puVar3 = local_118[0];
          local_c8 = &cf_userName;
          local_b8 = local_170;
          local_c0 = &cf_displayName;
          uVar6 = local_170;
          FUN_00f74490();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_b0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(uVar6);
        }
        _objc_storeStrong(&local_170,0);
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10)
      ;
      local_1d0 = (undefined *)0x0;
    } while (local_1c8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_118[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_copy_0269d150);
  local_228 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_228 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_120);
  _objc_storeStrong(local_118,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_228;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

