// moveTargetOptions @ 00f30770

/* Function Stack Size: 0x10 bytes */

ID WCRefineEmoticonGroupStore::moveTargetOptions(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  SEL local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e8 = param_2;
  local_e0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar2;
  _memset(auStack_138,0,0x40);
  IVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  local_158 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_158 != 0) {
    lVar6 = *local_128;
    local_160 = 0;
    do {
      do {
        if (*local_128 - lVar6 != 0) {
          _objc_enumerationMutation(*local_128 - lVar6,IVar3);
        }
        local_f8 = *(undefined8 *)(local_130 + local_160 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_f8);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = local_f0;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_d8 = &cf_id;
  local_c0 = &cf___ungrouped__;
  local_d0 = &cf_name;
  IVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_ungroupedDisplayName_026a1040);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_y0R_);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = &cf_order;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLong__026abf88,0x7fffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_b0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_c0,&local_d8,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

