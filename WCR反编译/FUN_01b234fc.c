// FUN_01b234fc @ 01b234fc

void FUN_01b234fc(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  long lVar11;
  undefined *local_480;
  undefined *local_478;
  undefined *local_3e0;
  undefined *local_3d8;
  cfstringStruct *local_3a0;
  cfstringStruct *local_398;
  cfstringStruct *local_330;
  undefined8 local_328;
  cfstringStruct *local_320;
  cfstringStruct *local_318;
  undefined8 local_310;
  cfstringStruct *local_308;
  long local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  long *local_2e8;
  undefined8 local_2b8;
  undefined *local_2b0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  cfstringStruct *local_218;
  undefined *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  int local_1ec;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [128];
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1e8,param_1);
  pcVar2 = local_1e8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = &cf___;
    local_1ec = 1;
  }
  else {
    pcVar2 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01b2a7d8();
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_1e0 = &cf___;
      local_1ec = 1;
    }
    else {
      pcVar2 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_01b1fc40();
      _objc_retainAutoreleasedReturnValue();
      local_200 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderUserName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_01b1fc40();
      _objc_retainAutoreleasedReturnValue();
      local_208 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_1e8;
      local_210 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderName);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b2c020(puVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      FUN_01b2c020(local_210,local_208);
      pcVar2 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_length_0269cca0);
      if ((pcVar2 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_208, (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0)
         , pcVar2 != (cfstringStruct *)0x0)) {
        pcVar3 = local_200;
        FUN_01b32b04(pcVar2,local_200,local_208);
        _objc_retainAutoreleasedReturnValue();
        local_218 = pcVar3;
        _memset(auStack_260,0,0x40);
        pcVar2 = local_218;
        (*(code *)PTR__objc_retain_02578638)();
        local_398 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,
                   0x10);
        if (local_398 != (cfstringStruct *)0x0) {
          lVar10 = *local_250;
          local_3a0 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_250 - lVar10 != 0) {
                _objc_enumerationMutation(*local_250 - lVar10,pcVar2);
              }
              local_220 = *(undefined8 *)(local_258 + (long)local_3a0 * 8);
              FUN_01b2c020(local_210,local_220);
              local_3a0 = (cfstringStruct *)((long)&local_3a0->field0_0x0 + 1);
            } while (local_3a0 < local_398);
            local_398 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8
                       ,0x10);
            local_3a0 = (cfstringStruct *)0x0;
          } while (local_398 != (cfstringStruct *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        _objc_storeStrong(&local_218,0);
      }
      _memset(auStack_2a8,0,0x40);
      puVar1 = local_210;
      (*(code *)PTR__objc_retain_02578638)();
      local_3d8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_128,0x10
                );
      if (local_3d8 != (undefined *)0x0) {
        lVar10 = *local_298;
        local_3e0 = (undefined *)0x0;
        do {
          do {
            if (*local_298 - lVar10 != 0) {
              _objc_enumerationMutation(*local_298 - lVar10,puVar1);
            }
            local_268 = *(undefined8 *)(local_2a0 + (long)local_3e0 * 8);
            pcVar2 = local_1f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f8,PTR_s_isEqualToString__0269ccc8,local_268);
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            if (((ulong)pcVar2 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1e0 = &cf___;
              local_1ec = 1;
              goto LAB_01b23f5c;
            }
            puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                       PTR_s_escapedPatternForString__0269ef40,local_268);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
            puVar6 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
            local_138 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                       PTR_s_escapedPatternForString__0269ef40,local_268);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_stringWithFormat__0269cca8,&cf_____s__n_);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_130 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_138,2);
            _objc_retainAutoreleasedReturnValue();
            local_2b0 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _memset(auStack_2f8,0,0x40);
            puVar5 = local_2b0;
            (*(code *)PTR__objc_retain_02578638)();
            local_478 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,
                       auStack_1b8,0x10);
            if (local_478 != (undefined *)0x0) {
              lVar11 = *local_2e8;
              local_480 = (undefined *)0x0;
              do {
                do {
                  if (*local_2e8 - lVar11 != 0) {
                    _objc_enumerationMutation(*local_2e8 - lVar11,puVar5);
                  }
                  local_2b8 = *(undefined8 *)(local_2f0 + (long)local_480 * 8);
                  local_300 = 0;
                  local_310 = 0;
                  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                             PTR_s_regularExpressionWithPattern_opt_0269ef10,local_2b8,1,&local_310)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  _objc_storeStrong(&local_300,local_310);
                  pcVar2 = local_1f8;
                  local_308 = pcVar3;
                  if ((local_300 == 0) && (pcVar3 != (cfstringStruct *)0x0)) {
                    pcVar9 = local_1f8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_length_0269cca0);
                    local_1d0 = 0;
                    local_1c8 = 0;
                    local_328 = 0;
                    local_320 = pcVar9;
                    local_1d8 = pcVar9;
                    local_1c0 = pcVar9;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar3,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar2,0,0,
                               pcVar9,&cf___);
                    _objc_retainAutoreleasedReturnValue();
                    local_318 = pcVar3;
                    FUN_01b2a7d8();
                    _objc_retainAutoreleasedReturnValue();
                    local_330 = pcVar3;
                    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
                    if ((pcVar3 == (cfstringStruct *)0x0) ||
                       (pcVar3 = local_330,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_330,PTR_s_isEqualToString__0269ccc8,local_1f8),
                       pcVar2 = local_330, ((ulong)pcVar3 & 1) != 0)) {
                      local_1ec = 0;
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_1e0 = pcVar2;
                      local_1ec = 1;
                    }
                    _objc_storeStrong(&local_330);
                    _objc_storeStrong(&local_318,0);
                  }
                  else {
                    local_1ec = 7;
                  }
                  _objc_storeStrong(&local_308);
                  _objc_storeStrong(&local_300,0);
                  if ((local_1ec != 0) && (local_1ec != 7)) goto LAB_01b23eb4;
                  local_480 = local_480 + 1;
                } while (local_480 < local_478);
                local_478 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,
                           auStack_1b8,0x10);
                local_480 = (undefined *)0x0;
              } while (local_478 != (undefined *)0x0);
            }
            local_1ec = 0;
LAB_01b23eb4:
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (local_1ec == 0) {
              local_1ec = 0;
            }
            _objc_storeStrong(&local_2b0,0);
            if (local_1ec != 0) goto LAB_01b23f5c;
            local_3e0 = local_3e0 + 1;
          } while (local_3e0 < local_3d8);
          local_3d8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_128,
                     0x10);
          local_3e0 = (undefined *)0x0;
        } while (local_3d8 != (undefined *)0x0);
      }
      local_1ec = 0;
LAB_01b23f5c:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      pcVar2 = local_1f8;
      if (local_1ec == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_1e0 = pcVar2;
        local_1ec = 1;
      }
      _objc_storeStrong(&local_210);
      _objc_storeStrong(&local_208,0);
      _objc_storeStrong(&local_200,0);
    }
    _objc_storeStrong(&local_1f8,0);
  }
  _objc_storeStrong(&local_1e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

