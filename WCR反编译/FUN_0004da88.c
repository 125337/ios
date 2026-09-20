// FUN_0004da88 @ 0004da88

void FUN_0004da88(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_378;
  undefined *local_370;
  ulong local_2b0;
  ulong local_2a8;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined *local_1f8;
  long local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  long local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined4 local_190;
  ulong local_180;
  ulong local_178;
  undefined *local_170;
  undefined1 auStack_168 [128];
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  long local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_178 = 0;
  _objc_storeStrong(&local_178,param_1);
  local_180 = 0;
  _objc_storeStrong(&local_180,param_2);
  uVar1 = local_178;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_178, (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = 1;
    local_170 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_198 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = puVar3;
    _memset(auStack_1e8,0,0x40);
    uVar1 = local_178;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10);
    if (local_2a8 != 0) {
      lVar6 = *local_1d8;
      local_2b0 = 0;
      do {
        do {
          if (*local_1d8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar6,uVar1);
          }
          lVar7 = *(long *)(local_1e0 + local_2b0 * 8);
          local_c8 = &cf_m_nsUsrName;
          local_c0 = &cf_m_nsUserName;
          local_b8 = &cf_username;
          local_b0 = &cf_userName;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_1a8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_c8,4);
          _objc_retainAutoreleasedReturnValue();
          FUN_0004f1c4();
          _objc_retainAutoreleasedReturnValue();
          local_1f0 = lVar7;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          lVar7 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
          if ((lVar7 == 0) ||
             (puVar2 = local_1a0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1a0,PTR_s_containsObject__0269cbb8,local_1f0),
             ((ulong)puVar2 & 1) != 0)) {
            local_190 = 3;
          }
          else if ((local_180 == 0) ||
                  (uVar4 = local_180, (**(code **)(local_180 + 0x10))(local_180,local_1f0),
                  (uVar4 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_addObject__0269d180,local_1f0);
            puVar3 = local_198;
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_e8 = &cf_userName;
            local_d8 = local_1f0;
            local_e0 = &cf_lastTime;
            lVar7 = local_1a8;
            FUN_0004f5e0();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_numberWithUnsignedLongLong__0269d7f8,lVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_d0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_190 = 0;
          }
          else {
            local_190 = 3;
          }
          _objc_storeStrong(&local_1f0,0);
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10
                  );
        local_2b0 = 0;
      } while (local_2a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_198,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02579660);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    puVar3 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = puVar2;
    _memset(auStack_240,0,0x40);
    puVar2 = local_198;
    (*(code *)PTR__objc_retain_02578638)();
    local_370 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_168,0x10);
    if (local_370 != (undefined *)0x0) {
      lVar6 = *local_230;
      local_378 = (undefined *)0x0;
      do {
        do {
          if (*local_230 - lVar6 != 0) {
            _objc_enumerationMutation(*local_230 - lVar6,puVar2);
          }
          puVar3 = local_1f8;
          uVar8 = *(undefined8 *)(local_238 + (long)local_378 * 8);
          local_200 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar8);
          local_378 = local_378 + 1;
        } while (local_378 < local_370);
        local_370 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_168,
                   0x10);
        local_378 = (undefined *)0x0;
      } while (local_370 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar2;
    local_190 = 1;
    _objc_storeStrong(&local_1f8);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_198,0);
  }
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_178,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_170);
  return;
}

