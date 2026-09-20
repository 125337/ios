// ensureProfilesInitialized @ 0160a758

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatProfileStore::ensureProfilesInitialized(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_168;
  ID local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  cfstringStruct *local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined4 local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined1 auStack_b0 [128];
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_superFloatProfiles_026b1848);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if (pcVar1 == (cfstringStruct *)0x0) {
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_defaultProfileDictionary_026b1840);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setSuperFloatProfiles__026b1850);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_setSuperFloatCurrentProfileId__026b1858,&cf_default);
    local_d4 = 1;
  }
  else {
    pcVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 0;
    pcVar1 = local_c8;
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superFloatCurrentProfileId_026b1860);
    _objc_retainAutoreleasedReturnValue();
    local_168 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_168 = &cf_default;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_168;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _memset(auStack_138,0,0x40);
    pcVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_b0,0x10);
    if (local_190 != (cfstringStruct *)0x0) {
      lVar6 = *local_128;
      local_198 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,pcVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + (long)local_198 * 8);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_mergedProfile__026b1868,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_140 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,IVar3);
          IVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
          if ((IVar4 & 1) != 0) {
            local_e1 = 1;
          }
          _objc_storeStrong(&local_140,0);
          local_198 = (cfstringStruct *)((long)&local_198->field0_0x0 + 1);
        } while (local_198 < local_190);
        local_190 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_b0,
                   0x10);
        local_198 = (cfstringStruct *)0x0;
      } while (local_190 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (((local_e1 & 1) == 0) &&
       (puVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0),
       puVar2 != (undefined *)0x0)) {
      puVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setSuperFloatCurrentProfileId__026b1858);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToArray__0269e9b0,local_d0);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setSuperFloatProfiles__026b1850,local_e0)
      ;
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

