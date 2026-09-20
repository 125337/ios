// newRuleWithSerialNumber: @ 010aa9e4

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageSyncRule::newRuleWithSerialNumber_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong local_208;
  ulong local_1c8;
  ulong local_1c0;
  long local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  long local_140;
  undefined *local_138;
  unsigned_long_long local_130;
  SEL local_128;
  ID local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  ulong local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  _memset(auStack_180,0,0x40);
  IVar2 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_rules_026a44d8);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1c0 != 0) {
    lVar11 = *local_170;
    local_1c8 = 0;
    do {
      do {
        if (*local_170 - lVar11 != 0) {
          _objc_enumerationMutation(*local_170 - lVar11,IVar2);
        }
        lVar12 = *(long *)(local_178 + local_1c8 * 8);
        local_140 = lVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar12;
        FUN_010aaf58();
        _objc_retainAutoreleasedReturnValue();
        local_188 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar12);
        lVar3 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
        if (lVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_188);
        }
        _objc_storeStrong(&local_188,0);
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
      local_1c8 = 0;
    } while (local_1c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_120;
  local_118 = &cf_id;
  puVar1 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_110 = &cf_name;
  if (local_130 < 2) {
    local_208 = 1;
  }
  else {
    local_208 = local_130;
  }
  local_e0 = puVar4;
  FUN_010ab0c8(local_208,local_138);
  _objc_retainAutoreleasedReturnValue();
  local_108 = &cf_enabled;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d8 = local_208;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  local_100 = &cf_senderMode;
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = &cf_sendMode;
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = &cf_format;
  IVar8 = local_120;
  local_c0 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_defaultFormat_026ca5e8);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = &cf_withinMinutes;
  puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_b8 = IVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,10);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_b0 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_e0,&local_118,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_normalizedRule__026ae5c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(local_208);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

