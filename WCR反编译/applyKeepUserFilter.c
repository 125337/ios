// applyKeepUserFilter @ 01be0f88

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsCacheKeepUsersViewController::applyKeepUserFilter(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *local_1b8;
  ulong local_190;
  ulong local_188;
  undefined *local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  undefined *local_d8;
  ID local_d0;
  SEL local_c8;
  ID local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = param_2;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchBar_026a2698);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar4;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    IVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_allUsernames_026c0920);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setFilteredUsernames__026c0950);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    IVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_allUsernames_026c0920);
    _objc_retainAutoreleasedReturnValue();
    local_188 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != 0) {
      lVar6 = *local_110;
      local_190 = 0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,IVar1);
          }
          local_e0 = *(cfstringStruct **)(local_118 + local_190 * 8);
          local_b8 = &cf_username;
          local_1b8 = local_e0;
          if (local_e0 == (cfstringStruct *)0x0) {
            local_1b8 = &::cf___;
          }
          local_b0 = local_1b8;
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          FUN_01bc7c2c();
          _objc_retainAutoreleasedReturnValue();
          local_128 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_130 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_rangeOfString__0269d838,local_d0);
          if (puVar2 != (undefined *)0x7fffffffffffffff) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          _objc_storeStrong(&local_130);
          _objc_storeStrong(&local_128,0);
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setFilteredUsernames__026c0950,local_d8);
    _objc_storeStrong(&local_d8,0);
  }
  IVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

