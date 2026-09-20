// replaceCurrentHomeSessionObjects: @ 01a95bf8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineGroupDataProvider::replaceCurrentHomeSessionObjects_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  char *pcVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  long lVar33;
  ulong uVar34;
  uint local_574;
  ulong local_558;
  ulong local_550;
  char *local_500;
  char *local_4f8;
  undefined *local_4b8;
  undefined *local_4b0;
  ID local_398;
  ID local_390;
  ID local_388;
  ID local_380;
  ID local_378;
  undefined1 auStack_370 [8];
  long local_368;
  long *local_360;
  undefined8 local_330;
  ID local_328;
  ID local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  undefined8 local_2d8;
  undefined *local_2d0;
  char *local_2c8;
  char *local_2c0;
  ID local_2b8;
  undefined4 local_2ac;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  ulong local_268;
  byte local_259;
  undefined *local_258;
  undefined *local_250;
  ulong local_248;
  SEL local_240;
  ID local_238;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined1 auStack_1c0 [128];
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_248 = 0;
  local_240 = param_2;
  local_238 = param_1;
  _objc_storeStrong(&local_248,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_250 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_250;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_250;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_250;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_250;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_250;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_250;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_250;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_259 = 0;
  local_258 = puVar1;
  _memset(auStack_2a8,0,0x40);
  puVar1 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_4b0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_a8,0x10);
  if (local_4b0 != (undefined *)0x0) {
    lVar33 = *local_298;
    local_4b8 = (undefined *)0x0;
    do {
      do {
        if (*local_298 - lVar33 != 0) {
          _objc_enumerationMutation(*local_298 - lVar33,puVar2);
        }
        uVar34 = *(ulong *)(local_2a0 + (long)local_4b8 * 8);
        local_268 = uVar34;
        (*(code *)PTR__objc_msgSend_02578628)(uVar34,PTR_s_disabled_026a2c20);
        if ((((uVar34 & 1) == 0) &&
            (uVar34 = local_268,
            (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_kind_026a27e8), uVar34 == 3)) &&
           (uVar34 = local_268,
           (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_scope_0269ea90), uVar34 == 0x20)) {
          local_259 = 1;
          local_2ac = 2;
          goto LAB_01a96318;
        }
        local_4b8 = local_4b8 + 1;
      } while (local_4b8 < local_4b0);
      local_4b0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_a8,0x10)
      ;
      local_4b8 = (undefined *)0x0;
    } while (local_4b0 != (undefined *)0x0);
  }
  local_2ac = 0;
LAB_01a96318:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_238;
  (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_contactManager_026ab1d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = "MainSessionMgr";
  local_2b8 = IVar4;
  _objc_getClass();
  FUN_01a91a80();
  _objc_retainAutoreleasedReturnValue();
  local_2c0 = pcVar5;
  FUN_01a97410();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_2c8 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_2c8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_2d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar5 & 1) != 0) {
    _memset(auStack_318,0,0x40);
    pcVar5 = local_2c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_4f8 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_128,0x10);
    if (local_4f8 != (char *)0x0) {
      lVar33 = *local_308;
      local_500 = (char *)0x0;
      do {
        do {
          if (*local_308 - lVar33 != 0) {
            _objc_enumerationMutation(*local_308 - lVar33,pcVar5);
          }
          local_2d8 = *(undefined8 *)(local_310 + (long)local_500 * 8);
          IVar4 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_238,PTR_s_nativeSessionFromObject__026a2c00,local_2d8);
          _objc_retainAutoreleasedReturnValue();
          local_140 = &cf_m_nsUserName;
          local_138 = &cf_userName;
          local_130 = &cf_username;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_320 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_140,3);
          _objc_retainAutoreleasedReturnValue();
          FUN_01a93950();
          _objc_retainAutoreleasedReturnValue();
          local_328 = IVar4;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          IVar4 = local_328;
          (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_length_0269cca0);
          if (IVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_addObject__0269d180,local_328);
          }
          _objc_storeStrong(&local_328);
          _objc_storeStrong(&local_320,0);
          local_500 = local_500 + 1;
        } while (local_500 < local_4f8);
        local_4f8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_128,
                   0x10);
        local_500 = (char *)0x0;
      } while (local_4f8 != (char *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
  }
  _memset(auStack_370,0,0x40);
  uVar34 = local_248;
  (*(code *)PTR__objc_retain_02578638)();
  local_550 = uVar34;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar34,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,auStack_1c0,0x10);
  if (local_550 != 0) {
    lVar33 = *local_360;
    local_558 = 0;
    do {
      do {
        if (*local_360 - lVar33 != 0) {
          _objc_enumerationMutation(*local_360 - lVar33,uVar34);
        }
        local_330 = *(undefined8 *)(local_368 + local_558 * 8);
        IVar4 = local_238;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_238,PTR_s_nativeSessionFromObject__026a2c00,local_330);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = local_238;
        local_378 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_238,PTR_s_usernameForNativeObject__026a2c08,IVar4);
        _objc_retainAutoreleasedReturnValue();
        local_380 = IVar6;
        if (((local_378 == 0) ||
            ((*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_length_0269cca0), IVar6 == 0)) ||
           (puVar1 = local_258,
           (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_containsObject__0269cbb8,local_380)
           , ((ulong)puVar1 & 1) != 0)) {
          local_2ac = 7;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_addObject__0269d180,local_380);
          IVar4 = local_378;
          FUN_01a91e98(local_378,PTR_s_m_contact_026a0b68);
          _objc_retainAutoreleasedReturnValue();
          local_388 = IVar4;
          if (IVar4 == 0) {
            IVar6 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_238,PTR_s_contactForUserName_manager__026bd9d0,local_380,local_2b8);
            _objc_retainAutoreleasedReturnValue();
            IVar4 = local_388;
            local_388 = IVar6;
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          IVar4 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_238,PTR_s_scopeForContact_username__026bd9d8,local_388,local_380);
          local_390 = IVar4;
          if (IVar4 == 0) {
            local_390 = 8;
          }
          IVar4 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_238,PTR_s_memberForContact_username_scope__026bda40,local_388,local_380,
                     local_390);
          _objc_retainAutoreleasedReturnValue();
          local_398 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setNativeSession__026bda48,local_378);
          puVar1 = local_250;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     local_390);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          IVar4 = local_378;
          FUN_01a93084(local_378,PTR_s_m_bIsTop_026bda50);
          local_574 = 1;
          if ((IVar4 & 1) == 0) {
            puVar1 = local_2d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2d0,PTR_s_containsObject__0269cbb8,local_380);
            local_574 = (uint)puVar1;
          }
          puVar1 = local_250;
          if ((local_574 & 1) != 0) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,0x20);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKeyedSubscript__0269d098);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          if ((((local_259 & 1) != 0) || ((local_574 & 1) == 0)) &&
             (IVar4 = local_238,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_238,PTR_s_shouldCollectNativeSessionInUnre_026a2e40,local_378),
             puVar1 = local_250, (IVar4 & 1) != 0)) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,0x40);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKeyedSubscript__0269d098);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          _objc_storeStrong(&local_398);
          _objc_storeStrong(&local_388,0);
          local_2ac = 0;
        }
        _objc_storeStrong(&local_380);
        _objc_storeStrong(&local_378,0);
        local_558 = local_558 + 1;
      } while (local_558 < local_550);
      local_550 = uVar34;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar34,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,auStack_1c0,0x10
                );
      local_558 = 0;
    } while (local_550 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar34);
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_250;
  puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_230 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_1f8 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_250;
  puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_228 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_1f0 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_250;
  puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_220 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_1e8 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = local_250;
  puVar17 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_218 = puVar16;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar18,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar20 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_1e0 = puVar19;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = local_250;
  puVar21 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_210 = puVar20;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar22,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar24 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_1d8 = puVar23;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = local_250;
  puVar25 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_208 = puVar24;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar26,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar28 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_1d0 = puVar27;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = local_250;
  puVar29 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_200 = puVar28;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar30,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar30;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar32 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_1c8 = puVar31;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_1f8,&local_230,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setCurrentHomeSessionBuckets__026bda58);
  (*(code *)PTR__objc_release_02578630)(puVar32);
  (*(code *)PTR__objc_release_02578630)(puVar31);
  (*(code *)PTR__objc_release_02578630)(puVar30);
  (*(code *)PTR__objc_release_02578630)(puVar29);
  (*(code *)PTR__objc_release_02578630)(puVar28);
  (*(code *)PTR__objc_release_02578630)(puVar27);
  (*(code *)PTR__objc_release_02578630)(puVar26);
  (*(code *)PTR__objc_release_02578630)(puVar25);
  (*(code *)PTR__objc_release_02578630)(puVar24);
  (*(code *)PTR__objc_release_02578630)(puVar23);
  (*(code *)PTR__objc_release_02578630)(puVar22);
  (*(code *)PTR__objc_release_02578630)(puVar21);
  (*(code *)PTR__objc_release_02578630)(puVar20);
  (*(code *)PTR__objc_release_02578630)(puVar19);
  (*(code *)PTR__objc_release_02578630)(puVar18);
  (*(code *)PTR__objc_release_02578630)(puVar17);
  (*(code *)PTR__objc_release_02578630)(puVar16);
  (*(code *)PTR__objc_release_02578630)(puVar15);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  _objc_storeStrong(&local_2d0);
  _objc_storeStrong(&local_2c8,0);
  _objc_storeStrong(&local_2c0,0);
  _objc_storeStrong(&local_2b8,0);
  _objc_storeStrong(&local_258,0);
  _objc_storeStrong(&local_250,0);
  _objc_storeStrong(&local_248,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

