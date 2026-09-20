// homeAvatarStripMutableRowConfigsForEditing @ 0215aa88

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::homeAvatarStripMutableRowConfigsForEditing(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_148;
  ulong local_140;
  ID local_120;
  undefined *local_118;
  ID local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
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
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_homeAvatarStripNormalizedRowConf_026be298);
  _objc_retainAutoreleasedReturnValue();
  local_140 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != 0) {
    lVar5 = *local_f8;
    local_148 = 0;
    do {
      do {
        if (*local_f8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar5,IVar2);
        }
        puVar1 = local_c0;
        uVar6 = *(undefined8 *)(local_100 + local_148 * 8);
        local_c8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_mutableCopy_0269d8a0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_homeAvatarStripRowConfigs_026ca430);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_c0;
  local_110 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  for (local_118 = puVar1; puVar1 = local_118, IVar2 = local_110,
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0), puVar4 = local_c0,
      (long)puVar1 < (long)IVar2 && (long)local_118 < 3; local_118 = local_118 + 1) {
    IVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_110,PTR_s_objectAtIndexedSubscript__0269cc78,local_118);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar3 & 1) != 0) {
      IVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_objectAtIndexedSubscript__0269cc78,local_118);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_120 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_setObject_forKeyedSubscript__0269d248,
                   *(undefined8 *)PTR____NSArray0___02578280,&cf_usernames);
      }
      IVar2 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_topSpacing);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar3 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_topSpacing);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      IVar2 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_bottomSpacing);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar3 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_bottomSpacing);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_120);
      _objc_storeStrong(&local_120,0);
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar4;
}

