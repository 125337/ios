// loadRecordsForWxid: @ 0150fef4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineSponsorSecureStore::loadRecordsForWxid_
          (WCRefineSponsorSecureStore *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  double in_d0;
  double dVar8;
  cfstringStruct *local_298;
  double local_228;
  undefined *local_1f0;
  undefined *local_1e8;
  bool local_199;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  ID local_188;
  byte local_179;
  cfstringStruct *local_178;
  double local_170;
  double local_168;
  cfstringStruct *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  cfstringStruct *local_118;
  byte local_109;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  ID local_f0;
  undefined *local_e8;
  ID local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_resolvedWxid__026a7de8,local_c8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_c8;
  local_c8 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_cc = 1;
    local_b0 = puVar3;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_b8;
    local_d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_recordsMaskedConfigKey_026b0088);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_d8;
    local_e0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,IVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
       puVar3 == (undefined *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_cc = 1;
      local_b0 = puVar3;
    }
    else {
      IVar2 = local_c8;
      FUN_01510c28(local_c8,&cf_WCRefineSponsor2024);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_e8;
      local_f0 = IVar2;
      FUN_01510e2c(local_e8,IVar2);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_cc = 1;
        local_b0 = puVar3;
      }
      else {
        puVar4 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_dataUsingEncoding__026a12e8,4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_JSONObjectWithData_options_error_026ca480,puVar4,1,0);
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar3 = local_100;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_cc = 1;
          local_b0 = puVar3;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_109 = 0;
          local_108 = puVar3;
          _memset(auStack_158,0,0x40);
          puVar3 = local_100;
          (*(code *)PTR__objc_retain_02578638)();
          local_1e8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          if (local_1e8 != (undefined *)0x0) {
            lVar6 = *local_148;
            local_1f0 = (undefined *)0x0;
            do {
              do {
                if (*local_148 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_148 - lVar6,puVar3);
                }
                pcVar7 = *(cfstringStruct **)(local_150 + (long)local_1f0 * 8);
                local_160 = (cfstringStruct *)0x0;
                puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
                local_118 = pcVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
                pcVar5 = local_118;
                if (((ulong)pcVar7 & 1) == 0) {
                  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4)
                  ;
                  if (((ulong)pcVar5 & 1) != 0) {
                    pcVar7 = local_118;
                    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_mutableCopy_0269d8a0);
                    pcVar5 = local_160;
                    local_160 = pcVar7;
                    (*(code *)PTR__objc_release_02578630)(pcVar5);
                    goto LAB_01510484;
                  }
                  local_cc = 3;
                }
                else {
                  _objc_storeStrong(&local_160,local_118);
LAB_01510484:
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b8,PTR_s_verifiedAmountForRecord__026a7e30,local_160);
                  pcVar5 = local_160;
                  local_168 = in_d0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar7 = pcVar5;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_179 = 0;
                  if (((ulong)pcVar7 & 1) == 0) {
                    local_228 = 0.0;
                  }
                  else {
                    pcVar7 = local_160;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
                    _objc_retainAutoreleasedReturnValue();
                    local_179 = 1;
                    local_178 = pcVar7;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_228 = in_d0;
                  }
                  if ((local_179 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_178);
                  }
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  IVar1 = local_b8;
                  IVar2 = local_c8;
                  in_d0 = local_168;
                  local_170 = local_228;
                  if ((0.0 < local_168) || (local_228 <= 0.0)) {
                    if (0.0 < local_168) {
                      pcVar5 = local_160;
                      dVar8 = local_168;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_timestamp);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (in_d0,dVar8,IVar1,PTR_s_recordSealForWxid_amount_timesta_026b0090,
                                 IVar2);
                      _objc_retainAutoreleasedReturnValue();
                      local_188 = IVar1;
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      pcVar5 = local_160;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_record_seal);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                      pcVar7 = pcVar5;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
                      local_199 = ((ulong)pcVar7 & 1) == 0;
                      if (local_199) {
                        local_298 = &::cf___;
                      }
                      else {
                        local_298 = local_160;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_record_seal
                                  );
                        _objc_retainAutoreleasedReturnValue();
                        local_198 = local_298;
                      }
                      local_199 = !local_199;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_190 = local_298;
                      if (local_199) {
                        (*(code *)PTR__objc_release_02578630)(local_198);
                      }
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      pcVar5 = local_190;
                      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
                      if (pcVar5 == (cfstringStruct *)0x0) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_188,
                                   &cf_record_seal);
                        local_109 = 1;
                      }
                      else {
                        IVar2 = local_188;
                        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
                        if ((IVar2 != 0) &&
                           (pcVar5 = local_190,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_190,PTR_s_isEqualToString__0269ccc8,local_188),
                           ((ulong)pcVar5 & 1) == 0)) {
                          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSNumber_026ce038,
                                     PTR_s_numberWithInt__0269d810);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                                     &cf_verified_amount);
                          (*(code *)PTR__objc_release_02578630)(puVar4);
                          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSNumber_026ce038,
                                     PTR_s_numberWithInt__0269d810,0);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                                     &cf_amount);
                          (*(code *)PTR__objc_release_02578630)(puVar4);
                          local_109 = 1;
                        }
                      }
                      _objc_storeStrong(&local_190);
                      _objc_storeStrong(&local_188,0);
                    }
                  }
                  else {
                    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_228,PTR__OBJC_CLASS___NSNumber_026ce038,
                               PTR_s_numberWithDouble__0269d6d0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                               &cf_verified_amount);
                    (*(code *)PTR__objc_release_02578630)(puVar4);
                    IVar1 = local_b8;
                    IVar2 = local_c8;
                    pcVar5 = local_160;
                    in_d0 = local_170;
                    pcVar7 = local_160;
                    dVar8 = local_170;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_timestamp);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (in_d0,dVar8,IVar1,PTR_s_sealRecordForPayment_amount_wxid_026a7e18,
                               pcVar5,IVar2);
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                    local_109 = 1;
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_108,PTR_s_addObject__0269d180,local_160);
                  local_cc = 0;
                }
                _objc_storeStrong(&local_160,0);
                local_1f0 = local_1f0 + 1;
              } while (local_1f0 < local_1e8);
              local_1e8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,
                         auStack_a8,0x10);
              local_1f0 = (undefined *)0x0;
            } while (local_1e8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if ((local_109 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_saveRecords_forWxid__026a7e50,local_108,local_c8);
          }
          puVar3 = local_108;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar3;
          local_cc = 1;
          _objc_storeStrong(&local_108,0);
        }
        _objc_storeStrong(&local_100,0);
      }
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

