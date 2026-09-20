// WCREG_commitOrderedGroups: @ 00f2d9a0

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonGroupStore::WCREG_commitOrderedGroups_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_198;
  ulong local_190;
  long local_158;
  long local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_108;
  long local_100;
  undefined *local_f8;
  ulong local_f0;
  SEL local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  uVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_100 = 0;
  local_f8 = puVar2;
  _memset(auStack_148,0,0x40);
  uVar1 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_190 != 0) {
    lVar6 = *local_138;
    local_198 = 0;
    do {
      do {
        if (*local_138 - lVar6 != 0) {
          _objc_enumerationMutation(*local_138 - lVar6,uVar1);
        }
        lVar7 = *(long *)(local_140 + local_198 * 8);
        local_108 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        FUN_00f29cf4();
        _objc_retainAutoreleasedReturnValue();
        local_150 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar7);
        lVar3 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        FUN_00f29cf4();
        _objc_retainAutoreleasedReturnValue();
        local_158 = lVar7;
        (*(code *)PTR__objc_release_02578630)(lVar3);
        lVar3 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
        if ((lVar3 != 0) &&
           (lVar3 = local_158,
           (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0), puVar2 = local_f8
           , lVar3 != 0)) {
          local_d8 = &cf_id;
          local_c0 = local_150;
          local_d0 = &cf_name;
          local_b8 = local_158;
          local_c8 = &cf_order;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_100
                    );
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_b0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_100 = local_100 + 1;
        }
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_150,0);
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setGroups__026abf30,local_f8);
  FUN_00f2c2e0();
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

