// FUN_006d1f8c @ 006d1f8c

void FUN_006d1f8c(long param_1)

{
  undefined *puVar1;
  u_int32_t uVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar12;
  ulong uVar13;
  cfstringStruct *local_568;
  cfstringStruct *local_4e8;
  undefined1 *local_430;
  undefined1 *local_428;
  cfstringStruct *local_380;
  cfstringStruct *local_378;
  cfstringStruct *local_300;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  bool local_2b9;
  cfstringStruct *local_2b8;
  undefined *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  code *local_2a0;
  undefined *local_298;
  undefined8 local_290;
  byte local_288;
  byte local_281;
  cfstringStruct *local_280;
  undefined *local_278;
  undefined *local_270;
  cfstringStruct *local_268;
  byte local_259;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  byte local_1f1;
  ulong local_1f0;
  undefined1 *local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined1 *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined4 local_178;
  byte local_171;
  cfstringStruct *local_170;
  byte local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  long local_140;
  long local_138;
  undefined1 auStack_130 [128];
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  local_140 = param_1;
  local_138 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_isEffectivelyActive_0269d708);
  if (((ulong)puVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_redEnvelopAutoReplyCountMode_026a6ac0);
    local_151 = 0;
    local_171 = 0;
    if (lVar4 == 1) {
      pcVar5 = *(cfstringStruct **)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_redEnvelopAutoReplyMultiContent_026a6ac8);
      _objc_retainAutoreleasedReturnValue();
      local_151 = 1;
      local_2e0 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_2e0 = &cf___;
      }
      local_2e8 = local_2e0;
      local_150 = pcVar5;
    }
    else {
      pcVar5 = *(cfstringStruct **)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_redEnvelopAutoReplyContent_026a6ad0);
      _objc_retainAutoreleasedReturnValue();
      local_171 = 1;
      local_300 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_300 = &cf___;
      }
      local_2e8 = local_300;
      local_170 = pcVar5;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = local_2e8;
    if ((local_171 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_170);
    }
    if ((local_151 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    pcVar6 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
    pcVar5 = local_148;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_178 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_180 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar5 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_178 = 1;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_redEnvelopAutoReplyCountMode_026a6ac0);
        if (lVar4 == 1) {
          pcVar5 = local_180;
          FUN_006d32d8();
          _objc_retainAutoreleasedReturnValue();
          local_188 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_count_0269cfe0);
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_178 = 1;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_190 = puVar3;
            _memset(auStack_1d8,0,0x40);
            pcVar5 = local_188;
            (*(code *)PTR__objc_retain_02578638)();
            local_378 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8
                       ,0x10);
            if (local_378 != (cfstringStruct *)0x0) {
              lVar4 = *local_1c8;
              local_380 = (cfstringStruct *)0x0;
              do {
                do {
                  if (*local_1c8 - lVar4 != 0) {
                    _objc_enumerationMutation(*local_1c8 - lVar4,pcVar5);
                  }
                  uVar13 = *(ulong *)(local_1d0 + (long)local_380 * 8);
                  local_198 = uVar13;
                  FUN_006d382c(uVar13,*(undefined8 *)(param_1 + 0x20));
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_1e0 = uVar13;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_isKindOfClass__0269cd68,puVar3)
                  ;
                  if ((uVar13 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_190,PTR_s_addObject__0269d180,local_1e0);
                  }
                  _objc_storeStrong(&local_1e0,0);
                  local_380 = (cfstringStruct *)((long)&local_380->field0_0x0 + 1);
                } while (local_380 < local_378);
                local_378 = pcVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                           auStack_a8,0x10);
                local_380 = (cfstringStruct *)0x0;
              } while (local_378 != (cfstringStruct *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            puVar7 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_count_0269cfe0);
            puVar8 = local_190;
            if (puVar7 == (undefined1 *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                         &cf__g9SM0RgHemo___S);
              local_178 = 1;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_1e8 = puVar8;
              uVar13 = *(ulong *)(param_1 + 0x20);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar13,PTR_s_redEnvelopAutoReplyRandomOneFrom_026a6ad8);
              if (((uVar13 & 1) != 0) &&
                 (puVar8 = local_190,
                 (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_count_0269cfe0),
                 (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar8)) {
                puVar8 = local_190;
                (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_count_0269cfe0);
                uVar2 = _arc4random_uniform((u_int32_t)puVar8);
                local_1f0 = (ulong)uVar2;
                puVar7 = local_190;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_190,PTR_s_objectAtIndexedSubscript__0269cc78,local_1f0);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_b0 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_b0,1);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = local_1e8;
                local_1e8 = puVar3;
                (*(code *)PTR__objc_release_02578630)(puVar8);
                (*(code *)PTR__objc_release_02578630)(puVar7);
              }
              local_1f1 = 0;
              _memset(auStack_240,0,0x40);
              puVar8 = local_1e8;
              (*(code *)PTR__objc_retain_02578638)();
              local_428 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                         auStack_130,0x10);
              if (local_428 != (undefined1 *)0x0) {
                lVar4 = *local_230;
                local_430 = (undefined1 *)0x0;
                do {
                  do {
                    if (*local_230 - lVar4 != 0) {
                      _objc_enumerationMutation(*local_230 - lVar4,puVar8);
                    }
                    uVar13 = *(ulong *)(local_238 + (long)local_430 * 8);
                    uVar9 = *(undefined8 *)(param_1 + 0x28);
                    local_200 = uVar13;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_sessionUserName_026a6a48);
                    _objc_retainAutoreleasedReturnValue();
                    FUN_006d41d8(uVar13,uVar9,*(undefined8 *)(param_1 + 0x30),
                                 *(undefined8 *)(param_1 + 0x38));
                    (*(code *)PTR__objc_release_02578630)(uVar9);
                    if ((uVar13 & 1) != 0) {
                      local_1f1 = 1;
                    }
                    local_430 = local_430 + 1;
                  } while (local_430 < local_428);
                  local_428 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                             auStack_130,0x10);
                  local_430 = (undefined1 *)0x0;
                } while (local_428 != (undefined1 *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar8);
              if ((local_1f1 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                           &cf_N_mo__1YHebellS);
              }
              local_178 = 1;
              _objc_storeStrong(&local_1e8,0);
            }
            _objc_storeStrong(&local_190,0);
          }
          _objc_storeStrong(&local_188,0);
        }
        else {
          pcVar5 = local_180;
          FUN_006d382c(local_180,*(undefined8 *)(param_1 + 0x20));
          _objc_retainAutoreleasedReturnValue();
          local_248 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            pcVar5 = local_148;
            FUN_006d4ad4(local_148,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
            _objc_retainAutoreleasedReturnValue();
            local_250 = pcVar5;
            (*(code *)PTR__objc_retain_02578638)();
            puVar3 = PTR_WCRefineAIStore_026ce048;
            local_268 = pcVar5;
            local_258 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineAIStore_026ce048,PTR_s_eventReplyStripVoicePrefixFromTe_0269d770,
                       &local_268);
            _objc_storeStrong(&local_258,local_268);
            local_259 = (byte)puVar3;
            puVar10 = PTR_WCRefineAIStore_026ce048;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineAIStore_026ce048,PTR_s_eventReplyAIDirectiveFromText__0269d778,
                       local_258);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_250;
            puVar1 = PTR_WCRefineHelper_026ce000;
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_270 = puVar10;
            if (puVar10 == (undefined *)0x0) {
              uVar9 = *(undefined8 *)(param_1 + 0x28);
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_sessionUserName_026a6a48);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = *(long *)(param_1 + 0x38);
              (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
              if (lVar4 == 0) {
                local_568 = &cf___;
              }
              else {
                local_568 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf____);
                _objc_retainAutoreleasedReturnValue();
                local_2b8 = local_568;
              }
              local_2b9 = lVar4 != 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_sendOutgoingText_toContactUsrNam_0269d780,pcVar5,uVar9,
                         local_568);
              if (local_2b9) {
                (*(code *)PTR__objc_release_02578630)(local_2b8);
              }
              (*(code *)PTR__objc_release_02578630)(uVar9);
              local_178 = 0;
            }
            else {
              uVar12 = *(undefined8 *)(param_1 + 0x38);
              uVar9 = *(undefined8 *)(param_1 + 0x30);
              local_281 = 0;
              (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_length_0269cca0);
              if (puVar10 == (undefined *)0x0) {
                local_4e8 = &cf___;
              }
              else {
                local_4e8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf__INBl_);
                _objc_retainAutoreleasedReturnValue();
                local_281 = 1;
                local_280 = local_4e8;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_bRb0R);
              _objc_retainAutoreleasedReturnValue();
              local_278 = puVar3;
              if ((local_281 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_280);
              }
              puVar1 = local_278;
              puVar3 = PTR_WCRefineAIClient_026ce080;
              local_2b0 = PTR___NSConcreteStackBlock_02578660;
              local_2a8 = 0xc2000000;
              local_2a4 = 0;
              local_2a0 = FUN_006d4df8;
              local_298 = &DAT_025793d0;
              local_288 = local_259 & 1;
              uVar11 = *(undefined8 *)(param_1 + 0x28);
              (*(code *)PTR__objc_retain_02578638)();
              local_290 = uVar11;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_generateTextWithInstruction_sour_0269d0d0,&cf_9hnc_N_SNNub,
                         puVar1,0,&local_2b0,in_x6,in_x7,uVar12,uVar9,local_4e8);
              _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
              local_178 = 1;
              _objc_storeStrong(&local_290);
              _objc_storeStrong(&local_278,0);
            }
            _objc_storeStrong(&local_270);
            _objc_storeStrong(&local_258,0);
            _objc_storeStrong(&local_250,0);
          }
          else {
            uVar9 = *(undefined8 *)(param_1 + 0x28);
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_sessionUserName_026a6a48);
            _objc_retainAutoreleasedReturnValue();
            FUN_006d41d8(pcVar5,uVar9,*(undefined8 *)(param_1 + 0x30),
                         *(undefined8 *)(param_1 + 0x38));
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if (((ulong)pcVar5 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                         &cf_N_mo__1YHebellS);
              local_178 = 1;
            }
            else {
              local_178 = 1;
            }
          }
          _objc_storeStrong(&local_248,0);
        }
      }
      _objc_storeStrong(&local_180,0);
    }
    _objc_storeStrong(&local_148,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

