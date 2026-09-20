// setMessageSyncRules: @ 01fe9078

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setMessageSyncRules_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  SEL SVar2;
  bool bVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_498;
  undefined *local_438;
  undefined *local_3f0;
  undefined *local_378;
  undefined *local_348;
  undefined *local_340;
  undefined4 local_30c;
  ulong local_298;
  ulong local_290;
  bool local_269;
  undefined *local_268;
  undefined *local_260;
  bool local_251;
  undefined *local_250;
  undefined *local_248;
  bool local_239;
  undefined *local_238;
  undefined *local_230;
  bool local_221;
  undefined *local_220;
  undefined *local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  undefined *local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined *local_158;
  undefined1 *local_150;
  ID local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  IVar4 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_148 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar5;
  _memset(auStack_198,0,0x40);
  uVar1 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_290 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_290 != 0) {
    lVar8 = *local_188;
    local_298 = 0;
    do {
      do {
        if (*local_188 - lVar8 != 0) {
          _objc_enumerationMutation(*local_188 - lVar8,uVar1);
        }
        puVar9 = *(undefined **)(local_190 + local_298 * 8);
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_158 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_isKindOfClass__0269cd68,puVar5);
        puVar5 = local_158;
        if (((ulong)puVar9 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_1a0 = puVar5;
          puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = local_1a0;
          local_1a8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar9;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar9);
          puVar5 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
          if (puVar5 == (undefined *)0x0) {
            puVar9 = PTR__OBJC_CLASS___NSUUID_026ce668;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = local_1b0;
            local_1b0 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar9);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b0,&cf_id);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_name);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          puVar9 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1b9 = 0;
          if (((ulong)puVar6 & 1) == 0) {
            local_30c = 1;
          }
          else {
            puVar6 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
            _objc_retainAutoreleasedReturnValue();
            local_1b9 = 1;
            local_1b8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_30c = SUB84(puVar6,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInt__0269d810,local_30c);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_enabled);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if ((local_1b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b8);
          }
          (*(code *)PTR__objc_release_02578630)(puVar9);
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = puVar5;
          _memset(auStack_210,0,0x40);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_sourceGroups);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd1d24();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_340 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,
                     0x10);
          if (local_340 != (undefined *)0x0) {
            lVar10 = *local_200;
            local_348 = (undefined *)0x0;
            do {
              do {
                if (*local_200 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_200 - lVar10,puVar9);
                }
                uVar11 = *(ulong *)(local_208 + (long)local_348 * 8);
                local_1d0 = uVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar11,PTR_s_hasSuffix__0269d018,&cf__chatroom);
                if ((uVar11 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c8,PTR_s_addObject__0269d180,local_1d0);
                }
                local_348 = local_348 + 1;
              } while (local_348 < local_340);
              local_340 = puVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                         auStack_128,0x10);
              local_348 = (undefined *)0x0;
            } while (local_340 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar9);
          puVar5 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_sourceGroups);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderMode);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_221 = ((ulong)puVar9 & 1) == 0;
          if (local_221) {
            local_378 = (undefined *)0x0;
          }
          else {
            local_220 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderMode);
            _objc_retainAutoreleasedReturnValue();
            local_378 = local_220;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_221 = !local_221;
          if (local_221) {
            (*(code *)PTR__objc_release_02578630)(local_220);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_218 = local_378;
          if (((long)local_378 < 0) || (3 < (long)local_378)) {
            local_218 = (undefined *)0x0;
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_218
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_senderMode);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd1d24();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_senderUsers);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd1d24();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_targets);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd1d24();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_types);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendMode);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_239 = ((ulong)puVar9 & 1) == 0;
          if (local_239) {
            local_3f0 = (undefined *)0x0;
          }
          else {
            local_238 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendMode);
            _objc_retainAutoreleasedReturnValue();
            local_3f0 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_239 = !local_239;
          if (local_239) {
            (*(code *)PTR__objc_release_02578630)(local_238);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_230 = local_3f0;
          if (((long)local_3f0 < 0) || (3 < (long)local_3f0)) {
            local_230 = (undefined *)0x0;
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_230
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_sendMode);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_format);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_withinMinutes);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_251 = ((ulong)puVar9 & 1) == 0;
          if (local_251) {
            local_438 = (undefined *)0x0;
          }
          else {
            local_250 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_withinMinutes);
            _objc_retainAutoreleasedReturnValue();
            local_438 = local_250;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_251 = !local_251;
          if (local_251) {
            (*(code *)PTR__objc_release_02578630)(local_250);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_248 = local_438;
          if ((long)local_438 < 0) {
            local_248 = (undefined *)0x0;
          }
          if (0x2760 < (long)local_248) {
            local_248 = &DAT_00002760;
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_248
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_withinMinutes)
          ;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_dailyStart);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,&cf_dailyEnd);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_delaySeconds);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_269 = ((ulong)puVar9 & 1) == 0;
          if (local_269) {
            local_498 = (undefined *)0x0;
          }
          else {
            local_268 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_delaySeconds);
            _objc_retainAutoreleasedReturnValue();
            local_498 = local_268;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          local_269 = !local_269;
          if (local_269) {
            (*(code *)PTR__objc_release_02578630)(local_268);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_260 = local_498;
          if ((long)local_498 < 0) {
            local_260 = (undefined *)0x0;
          }
          if (300 < (long)local_260) {
            local_260 = (undefined *)((long)&section_00000108.addr + 4);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_260
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_delaySeconds);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd1d24();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                     &cf_includeKeywords);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          FUN_01fd1d24();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                     &cf_excludeKeywords);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar7 = local_150;
          puVar5 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar7 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
          bVar3 = segment_command_00000020.segname + 10 <= puVar7;
          puVar7 = puVar7 + -0x32;
          if (bVar3) {
            puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
          }
          _objc_storeStrong(puVar7,&local_1c8);
          _objc_storeStrong(&local_1b0,0);
          _objc_storeStrong(&local_1a8,0);
          _objc_storeStrong(&local_1a0,0);
          if (bVar3) goto LAB_01fea330;
        }
        local_298 = local_298 + 1;
      } while (local_298 < local_290);
      local_290 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_298 = 0;
    } while (local_290 != 0);
  }
LAB_01fea330:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar7 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
  SVar2 = local_138;
  IVar4 = local_148;
  if (puVar7 == (undefined1 *)0x0) {
    FUN_01fd95c0(0,local_148,local_138,0);
  }
  else {
    puVar7 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
    FUN_01fd95c0(IVar4,SVar2);
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_01fe8ca8();
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

