// FUN_004fd234 @ 004fd234

void FUN_004fd234(double param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  dispatch_time_t dVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *local_438;
  undefined *local_430;
  undefined *local_3f8;
  undefined *local_3f0;
  undefined *local_3b8;
  uint local_344;
  uint local_334;
  undefined *local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  code *local_2f8;
  undefined *local_2f0;
  ulong local_2e8;
  ulong local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined **local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  ulong local_2b0;
  ulong local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  undefined1 auStack_290 [8];
  long local_288;
  long *local_280;
  ulong local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  byte local_1d9;
  undefined *local_1d8;
  byte local_1c9;
  ulong local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  undefined *local_1b0;
  ulong local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  double local_190;
  double local_188;
  byte local_179;
  undefined8 local_178;
  undefined8 ****local_170;
  ulong local_168;
  undefined *local_160;
  ulong local_158;
  byte local_149;
  ulong local_148;
  ulong local_140;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_2);
  FUN_004fc19c();
  if (local_130 == 0) {
    local_134 = 1;
    goto LAB_004fe358;
  }
  if ((DAT_028caf11 & 1) != 0) {
    FUN_004fedb0(local_130);
  }
  if ((DAT_028caf10 & 1) == 0) {
    local_134 = 1;
    goto LAB_004fe358;
  }
  uVar12 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_130;
  local_140 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_sender);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = local_130;
  local_148 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_isSelfSent);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar12);
  local_149 = (byte)uVar1;
  uVar12 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
  uVar1 = local_130;
  local_158 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageType);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_typeKeyForMessageType_content__026a41a0,uVar12,local_158);
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_160;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_134 = 1;
  }
  else {
    uVar12 = local_158;
    FUN_00500168(local_158,local_148);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar3 = (undefined8 *****)PTR_WCRefineMessageSyncRule_026ce708;
    local_168 = uVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_displayContentForTypeKey_rawCont_026a44b8,
               local_160,local_158,local_148);
    _objc_retainAutoreleasedReturnValue();
    local_170 = pppppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pppppuVar3,PTR_s_length_0269cca0);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pppppuVar3 = &local_170;
      _objc_storeStrong(pppppuVar3,local_168);
    }
    if ((local_149 & 1) == 0) {
LAB_004fd618:
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar12 = local_130;
      local_188 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_createTime);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar12;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar12);
      puVar2 = PTR__OBJC_CLASS___NSCalendar_026ce070;
      local_190 = (double)(long)uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_components_fromDate__026a44c0,0x60);
      _objc_retainAutoreleasedReturnValue();
      local_198 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_hour_026a44c8);
      puVar6 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_minute_026a44d0);
      local_1a0 = puVar6 + (long)puVar2 * 0x3c;
      uVar12 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar12;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar12);
      local_3b8 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_1b9 = 0;
      local_1c9 = 0;
      local_1d9 = 0;
      local_1a8 = uVar1;
      if ((long)uVar1 < 1) {
        uVar12 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_svrID);
        _objc_retainAutoreleasedReturnValue();
        local_1c9 = 1;
        local_1c8 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_stringWithFormat__0269cca8,&cf_s_lld);
        _objc_retainAutoreleasedReturnValue();
        local_1d9 = 1;
        local_1d8 = local_3b8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_l____lld
                  );
        _objc_retainAutoreleasedReturnValue();
        local_1b9 = 1;
        local_1b8 = local_3b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = local_3b8;
      if ((local_1d9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1d8);
      }
      if ((local_1c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1c8);
      }
      if ((local_1b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1b8);
      }
      _memset(auStack_228,0,0x40);
      puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_rules_026a44d8);
      _objc_retainAutoreleasedReturnValue();
      local_3f0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3f0 != (undefined *)0x0) {
        lVar10 = *local_218;
        local_3f8 = (undefined *)0x0;
        do {
          do {
            if (*local_218 - lVar10 != 0) {
              _objc_enumerationMutation(*local_218 - lVar10,puVar2);
            }
            local_1e8 = *(ulong *)(local_220 + (long)local_3f8 * 8);
            puVar6 = PTR_WCRefineMessageSyncRule_026ce708;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_isRuleEnabled__026a44e0,local_1e8)
            ;
            if (((ulong)puVar6 & 1) != 0) {
              puVar6 = PTR_WCRefineMessageSyncRule_026ce708;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMessageSyncRule_026ce708,
                         PTR_s_stringArrayInRule_forKey__026a44e8,local_1e8,
                         _kWCRMessageSyncRuleKeySourceGroups);
              _objc_retainAutoreleasedReturnValue();
              local_230 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_count_0269cfe0);
              if ((puVar6 == (undefined *)0x0) ||
                 (puVar6 = local_230,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_230,PTR_s_containsObject__0269cbb8,local_140),
                 ((ulong)puVar6 & 1) != 0)) {
                uVar12 = local_1e8;
                FUN_005005cc(local_1e8,local_148,local_149 & 1);
                if ((uVar12 & 1) == 0) {
                  local_134 = 3;
                }
                else {
                  puVar6 = PTR_WCRefineMessageSyncRule_026ce708;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineMessageSyncRule_026ce708,
                             PTR_s_stringArrayInRule_forKey__026a44e8,local_1e8,
                             _kWCRMessageSyncRuleKeyTypes);
                  _objc_retainAutoreleasedReturnValue();
                  local_238 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_count_0269cfe0);
                  if ((puVar6 == (undefined *)0x0) ||
                     (puVar6 = local_238,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_238,PTR_s_containsObject__0269cbb8,local_160),
                     ((ulong)puVar6 & 1) != 0)) {
                    uVar12 = local_1e8;
                    FUN_005008b8(local_1e8,local_170);
                    if ((uVar12 & 1) == 0) {
                      local_134 = 3;
                    }
                    else {
                      puVar6 = PTR_WCRefineMessageSyncRule_026ce708;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineMessageSyncRule_026ce708,
                                 PTR_s_integerInRule_forKey__026a44f0,local_1e8,
                                 _kWCRMessageSyncRuleKeyWithinMinutes);
                      local_240 = puVar6;
                      if ((((long)puVar6 < 1) || (local_190 <= 0.0)) ||
                         (local_188 - local_190 <= (double)(long)puVar6 * 60.0)) {
                        puVar6 = PTR_WCRefineMessageSyncRule_026ce708;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineMessageSyncRule_026ce708,
                                   PTR_s_rule_allowsMinuteOfDay__026a44f8,local_1e8,local_1a0);
                        if (((ulong)puVar6 & 1) == 0) {
                          local_134 = 3;
                        }
                        else {
                          puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158)
                          ;
                          _objc_retainAutoreleasedReturnValue();
                          local_248 = puVar6;
                          _memset(auStack_290,0,0x40);
                          puVar6 = PTR_WCRefineMessageSyncRule_026ce708;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR_WCRefineMessageSyncRule_026ce708,
                                     PTR_s_stringArrayInRule_forKey__026a44e8,local_1e8,
                                     _kWCRMessageSyncRuleKeyTargets);
                          _objc_retainAutoreleasedReturnValue();
                          local_430 = puVar6;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          if (local_430 != (undefined *)0x0) {
                            lVar11 = *local_280;
                            local_438 = (undefined *)0x0;
                            do {
                              do {
                                if (*local_280 - lVar11 != 0) {
                                  _objc_enumerationMutation(*local_280 - lVar11,puVar6);
                                }
                                uVar12 = *(ulong *)(local_288 + (long)local_438 * 8);
                                local_250 = uVar12;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (uVar12,PTR_s_isEqualToString__0269ccc8,local_140);
                                if ((uVar12 & 1) == 0) {
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_248,PTR_s_addObject__0269d180,local_250);
                                }
                                local_438 = local_438 + 1;
                              } while (local_438 < local_430);
                              local_430 = puVar6;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                         auStack_290,auStack_128,0x10);
                              local_438 = (undefined *)0x0;
                            } while (local_430 != (undefined *)0x0);
                          }
                          (*(code *)PTR__objc_release_02578630)(puVar6);
                          puVar6 = local_248;
                          (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0);
                          if (puVar6 == (undefined *)0x0) {
                            local_134 = 3;
                          }
                          else {
                            puVar6 = PTR_WCRefineMessageSyncRule_026ce708;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_ruleID__026a4500,
                                       local_1e8);
                            _objc_retainAutoreleasedReturnValue();
                            puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                            local_298 = puVar6;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSString_026cdfe8,
                                       PTR_s_stringWithFormat__0269cca8,&cf______);
                            _objc_retainAutoreleasedReturnValue();
                            puVar6 = puVar7;
                            FUN_00500d14();
                            (*(code *)PTR__objc_release_02578630)(puVar7);
                            if (((ulong)puVar6 & 1) == 0) {
                              local_134 = 3;
                            }
                            else {
                              puVar6 = PTR_WCRefineMessageSyncRule_026ce708;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR_WCRefineMessageSyncRule_026ce708,
                                         PTR_s_integerInRule_forKey__026a44f0,local_1e8,
                                         _kWCRMessageSyncRuleKeyDelaySeconds);
                              uVar12 = local_1e8;
                              local_2a0 = puVar6;
                              (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_copy_0269d150);
                              uVar1 = local_130;
                              local_2a8 = uVar12;
                              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
                              puVar6 = local_248;
                              local_2b0 = uVar1;
                              (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_copy_0269d150);
                              puVar7 = local_160;
                              local_2b8 = puVar6;
                              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_copy_0269d150);
                              uVar1 = local_2a8;
                              ppuVar8 = &local_308;
                              local_308 = PTR___NSConcreteStackBlock_02578660;
                              local_300 = 0xc2000000;
                              local_2fc = 0;
                              local_2f8 = FUN_00501200;
                              local_2f0 = &DAT_0257d718;
                              local_2c0 = puVar7;
                              (*(code *)PTR__objc_retain_02578638)();
                              uVar12 = local_2b0;
                              local_2e8 = uVar1;
                              (*(code *)PTR__objc_retain_02578638)();
                              puVar7 = local_2b8;
                              local_2e0 = uVar12;
                              (*(code *)PTR__objc_retain_02578638)();
                              puVar6 = local_2c0;
                              local_2d8 = puVar7;
                              (*(code *)PTR__objc_retain_02578638)();
                              local_2d0 = puVar6;
                              _objc_retainBlock();
                              local_2c8 = ppuVar8;
                              if ((long)local_2a0 < 1) {
                                (*(code *)ppuVar8[2])();
                              }
                              else {
                                dVar9 = _dispatch_time(0,(long)local_2a0 * 1000000000);
                                puVar6 = PTR___dispatch_main_q_02578680;
                                _objc_retainAutoreleaseReturnValue();
                                _objc_retainAutoreleasedReturnValue();
                                _dispatch_after(dVar9,puVar6,local_2c8);
                                (*(code *)PTR__objc_release_02578630)(puVar6);
                              }
                              _objc_storeStrong(&local_2c8);
                              _objc_storeStrong(&local_2d0,0);
                              _objc_storeStrong(&local_2d8,0);
                              _objc_storeStrong(&local_2e0,0);
                              _objc_storeStrong(&local_2e8,0);
                              _objc_storeStrong(&local_2c0,0);
                              _objc_storeStrong(&local_2b8,0);
                              _objc_storeStrong(&local_2b0,0);
                              _objc_storeStrong(&local_2a8,0);
                              local_134 = 0;
                            }
                            _objc_storeStrong(&local_298,0);
                          }
                          _objc_storeStrong(&local_248,0);
                        }
                      }
                      else {
                        local_134 = 3;
                      }
                    }
                  }
                  else {
                    local_134 = 3;
                  }
                  _objc_storeStrong(&local_238,0);
                }
              }
              else {
                local_134 = 3;
              }
              _objc_storeStrong(&local_230,0);
            }
            local_3f8 = local_3f8 + 1;
          } while (local_3f8 < local_3f0);
          local_3f0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,
                     0x10);
          local_3f8 = (undefined *)0x0;
        } while (local_3f0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_1b0);
      _objc_storeStrong(&local_198,0);
      local_134 = 0;
    }
    else {
      FUN_00500394();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar4 = pppppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_179 = 0;
      local_334 = 1;
      if (((ulong)pppppuVar4 & 1) == 0) {
        pppppuVar4 = (undefined8 *****)local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
        uVar5 = 0;
        local_344 = 0;
        if (pppppuVar4 != (undefined8 *****)0x0) {
          FUN_00500394(pppppuVar4);
          _objc_retainAutoreleasedReturnValue();
          local_179 = 1;
          local_178 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_344 = (uint)uVar5;
        }
        local_334 = local_344;
      }
      if ((local_179 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_178);
      }
      (*(code *)PTR__objc_release_02578630)(pppppuVar3);
      if ((local_334 & 1) == 0) {
        uVar12 = local_140;
        FUN_00500408();
        if ((uVar12 & 1) == 0) goto LAB_004fd618;
        local_134 = 1;
      }
      else {
        local_134 = 1;
      }
    }
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
LAB_004fe358:
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

