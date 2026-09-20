// eventAutoReplyRepositorySummaryLabel: @ 01a1aba4

/* Function Stack Size: 0x18 bytes */

ID WCRefineGeneralFunctionViewController::eventAutoReplyRepositorySummaryLabel_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  undefined *local_198;
  undefined *local_190;
  undefined *local_168;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  byte local_131;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  cfstringStruct *local_e8;
  undefined *local_e0;
  int local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar7 = local_c8;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_length_0269cca0);
  if (pcVar7 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf___;
    local_d4 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_168 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_168;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_128,0,0x40);
    puVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar6 = *local_118;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,puVar1);
          }
          pcVar7 = *(cfstringStruct **)(local_120 + (long)local_198 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_e8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)pcVar7 & 1) != 0) {
            pcVar7 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar7;
            FUN_01a08fe8();
            _objc_retainAutoreleasedReturnValue();
            local_130 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            pcVar7 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            if (pcVar7 == (cfstringStruct *)0x0) {
              local_d4 = 3;
            }
            else {
              pcVar7 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_isEqualToString__0269ccc8,local_d0);
              local_131 = (byte)pcVar7;
              if ((((ulong)pcVar7 & 1) == 0) &&
                 (pcVar3 = local_130,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_130,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix)
                 , pcVar7 = local_130, ((ulong)pcVar3 & 1) != 0)) {
                uVar4 = _kWCRefineMessageRepositoryIDPrefix;
                (*(code *)PTR__objc_msgSend_02578628)
                          (_kWCRefineMessageRepositoryIDPrefix,PTR_s_length_0269cca0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar7,PTR_s_substringFromIndex__0269d120,uVar4);
                _objc_retainAutoreleasedReturnValue();
                local_140 = pcVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar7,PTR_s_isEqualToString__0269ccc8,local_d0);
                local_131 = (byte)pcVar7;
                _objc_storeStrong(&local_140,0);
              }
              if ((local_131 & 1) == 0) {
                local_d4 = 3;
              }
              else {
                pcVar7 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = pcVar7;
                FUN_01a08fe8();
                _objc_retainAutoreleasedReturnValue();
                local_148 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar7);
                pcVar7 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
                if (pcVar7 == (cfstringStruct *)0x0) {
                  pcVar3 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
                  pcVar7 = local_130;
                  if (pcVar3 < (cfstringStruct *)0x9) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_b0 = pcVar7;
                  }
                  else {
                    pcVar3 = local_130;
                    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar7,PTR_s_substringFromIndex__0269d120,&pcVar3[-1].field3_0x18);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar3 = &cf__;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (&cf__,PTR_s_stringByAppendingString__0269d398);
                    _objc_retainAutoreleasedReturnValue();
                    local_b0 = pcVar3;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                  }
                }
                else {
                  pcVar7 = local_148;
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
                  if ((cfstringStruct *)0xa < pcVar7) {
                    pcVar3 = local_148;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_148,PTR_s_substringToIndex__0269d6c0,10);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar5 = pcVar3;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_148;
                    local_148 = pcVar5;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                  }
                  pcVar7 = local_148;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = pcVar7;
                }
                local_d4 = 1;
                _objc_storeStrong(&local_148,0);
              }
            }
            _objc_storeStrong(&local_130,0);
            if (local_d4 != 3) goto LAB_01a1b218;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_01a1b218:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_d4 == 0) {
      pcVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      pcVar7 = local_d0;
      if (pcVar3 < (cfstringStruct *)0x9) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = pcVar7;
        local_d4 = 1;
      }
      else {
        pcVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar7,PTR_s_substringFromIndex__0269d120,&pcVar3[-1].field3_0x18);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf__;
        (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        local_d4 = 1;
      }
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

