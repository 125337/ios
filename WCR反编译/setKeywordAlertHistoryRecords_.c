// setKeywordAlertHistoryRecords: @ 01fe4104

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setKeywordAlertHistoryRecords_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  SEL SVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2a8;
  ulong local_1e0;
  ulong local_1d8;
  undefined *local_1b8;
  undefined4 local_1ac;
  long local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  undefined *local_d0;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  _memset(auStack_118,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_1d8 != 0) {
    lVar7 = *local_108;
    local_1e0 = 0;
    do {
      do {
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,uVar1);
        }
        pcVar8 = *(cfstringStruct **)(local_110 + local_1e0 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d8 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar8 & 1) != 0) {
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_keyword);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_120 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_keywords);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd1d24();
          _objc_retainAutoreleasedReturnValue();
          local_128 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_content);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_130 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_timeText);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_138 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_sessionUserName);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_140 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_sessionName);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_148 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_senderUserName);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_150 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_senderName);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_158 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_dedupKey);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_160 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_messageIdentityKey);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_168 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_miniProgramTitle);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_170 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_miniProgramContent);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fd868c();
          _objc_retainAutoreleasedReturnValue();
          local_178 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_time);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_d8;
          local_180 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_messageType);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar4;
          FUN_01fe53e4();
          _objc_retainAutoreleasedReturnValue();
          local_188 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_localID);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fe53e4();
          _objc_retainAutoreleasedReturnValue();
          local_190 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_mesSvrID);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar8;
          FUN_01fe5568();
          _objc_retainAutoreleasedReturnValue();
          local_198 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          (*(code *)PTR__objc_retain_02578638)();
          pcVar8 = local_180;
          local_1a0 = &::cf___;
          local_1a8 = 0;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
          pcVar4 = local_180;
          if (((ulong)pcVar8 & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)pcVar4 & 1) != 0) {
              _objc_storeStrong(&local_1a8,local_180);
            }
          }
          else {
            FUN_01fd868c();
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_1a0;
            local_1a0 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
          }
          pcVar8 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
          if ((pcVar8 == (cfstringStruct *)0x0) &&
             (pcVar8 = local_128,
             (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0),
             pcVar8 != (cfstringStruct *)0x0)) {
            pcVar8 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            local_2a8 = pcVar8;
            if (pcVar8 == (cfstringStruct *)0x0) {
              local_2a8 = &::cf___;
            }
            _objc_storeStrong(&local_120,local_2a8);
            (*(code *)PTR__objc_release_02578630)(pcVar8);
          }
          pcVar8 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
          if ((((((pcVar8 == (cfstringStruct *)0x0) &&
                 (pcVar8 = local_128,
                 (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0),
                 pcVar8 == (cfstringStruct *)0x0)) &&
                (pcVar8 = local_130,
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
                pcVar8 == (cfstringStruct *)0x0)) &&
               ((pcVar8 = local_138,
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
                pcVar8 == (cfstringStruct *)0x0 &&
                (pcVar8 = local_1a0,
                (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0),
                pcVar8 == (cfstringStruct *)0x0)))) &&
              (((local_1a8 == 0 &&
                ((pcVar8 = local_140,
                 (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0),
                 pcVar8 == (cfstringStruct *)0x0 &&
                 (pcVar8 = local_148,
                 (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
                 pcVar8 == (cfstringStruct *)0x0)))) &&
               (pcVar8 = local_150,
               (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
               pcVar8 == (cfstringStruct *)0x0)))) &&
             ((((pcVar8 = local_158,
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0),
                pcVar8 == (cfstringStruct *)0x0 &&
                (pcVar8 = local_160,
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
                pcVar8 == (cfstringStruct *)0x0)) &&
               (pcVar8 = local_168,
               (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0),
               pcVar8 == (cfstringStruct *)0x0)) &&
              (((pcVar8 = local_170,
                (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0),
                pcVar8 == (cfstringStruct *)0x0 &&
                (pcVar8 = local_178,
                (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
                pcVar8 == (cfstringStruct *)0x0)) &&
               ((local_188 == (cfstringStruct *)0x0 &&
                ((local_190 == (cfstringStruct *)0x0 && (local_198 == (cfstringStruct *)0x0)))))))))
             ) {
            local_1ac = 3;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_120;
            local_1b8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_120,&cf_keyword);
            }
            pcVar8 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_128,&cf_keywords);
            }
            pcVar8 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_130,&cf_content);
            }
            if (local_1a8 == 0) {
              pcVar8 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
              if (pcVar8 != (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_1a0,&cf_time);
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_1a8,&cf_time);
            }
            pcVar8 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_138,&cf_timeText);
            }
            pcVar8 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_140,&cf_sessionUserName);
            }
            pcVar8 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_148,&cf_sessionName);
            }
            pcVar8 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_150,&cf_senderUserName);
            }
            pcVar8 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_158,&cf_senderName);
            }
            pcVar8 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_160,&cf_dedupKey);
            }
            pcVar8 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
            if (pcVar8 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_168,&cf_messageIdentityKey
                        );
            }
            pcVar8 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
            if ((pcVar8 != (cfstringStruct *)0x0) ||
               (pcVar8 = local_178,
               (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
               pcVar8 != (cfstringStruct *)0x0)) {
              if (local_170 == (cfstringStruct *)0x0) {
                local_2c0 = &::cf___;
              }
              else {
                local_2c0 = local_170;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_2c0,&cf_miniProgramTitle);
              if (local_178 == (cfstringStruct *)0x0) {
                local_2d8 = &::cf___;
              }
              else {
                local_2d8 = local_178;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_2d8,&cf_miniProgramContent
                        );
            }
            if (local_188 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_188,&cf_messageType);
            }
            if (local_190 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_190,&cf_localID);
            }
            if (local_198 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_setObject_forKey__026ca9e8,local_198,&cf_mesSvrID);
            }
            puVar3 = local_d0;
            puVar5 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            _objc_storeStrong(&local_1b8,0);
            local_1ac = 0;
          }
          _objc_storeStrong(&local_1a8);
          _objc_storeStrong(&local_1a0,0);
          _objc_storeStrong(&local_198,0);
          _objc_storeStrong(&local_190,0);
          _objc_storeStrong(&local_188,0);
          _objc_storeStrong(&local_180,0);
          _objc_storeStrong(&local_178,0);
          _objc_storeStrong(&local_170,0);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_160,0);
          _objc_storeStrong(&local_158,0);
          _objc_storeStrong(&local_150,0);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_140,0);
          _objc_storeStrong(&local_138,0);
          _objc_storeStrong(&local_130,0);
          _objc_storeStrong(&local_128,0);
          _objc_storeStrong(&local_120,0);
        }
        local_1e0 = local_1e0 + 1;
      } while (local_1e0 < local_1d8);
      local_1d8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_1e0 = 0;
    } while (local_1d8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  IVar2 = local_c8;
  if (puVar3 == (undefined *)0x0) {
    SVar6 = local_b8;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(SVar6);
  }
  else {
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    SVar6 = local_b8;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar3);
    (*(code *)PTR__objc_release_02578630)(SVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

