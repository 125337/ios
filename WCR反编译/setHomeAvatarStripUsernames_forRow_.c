// setHomeAvatarStripUsernames:forRow: @ 0215b304

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineConfig::setHomeAvatarStripUsernames_forRow_
          (WCRefineConfig *this,ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  long_long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 in_d0;
  undefined1 *local_5f8;
  undefined1 *local_5b0;
  undefined1 *local_590;
  undefined8 local_540;
  undefined1 *local_4f0;
  undefined1 *local_4e8;
  undefined1 *local_490;
  undefined1 *local_488;
  undefined8 local_418;
  undefined1 *local_400;
  long_long local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined1 *local_380;
  long local_378;
  undefined1 *local_370;
  undefined *local_368;
  byte local_359;
  undefined1 *local_358;
  byte local_349;
  undefined1 *local_348;
  undefined1 *local_340;
  undefined1 *local_338;
  long local_330;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  ulong local_2e8;
  undefined *local_2e0;
  undefined1 *local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  ulong local_290;
  undefined *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  long_long local_270;
  undefined *local_268;
  undefined4 local_25c;
  undefined1 *local_258;
  undefined8 local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  long local_220;
  undefined *local_218;
  undefined *local_210;
  long local_208;
  long_long local_200;
  long_long local_1f8;
  undefined4 local_1ec;
  long local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  int local_1c4;
  undefined1 *local_1c0;
  int local_1b4;
  undefined1 *local_1b0;
  long_long local_1a8;
  long local_1a0;
  SEL local_198;
  undefined1 *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined *local_160;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1a0 = 0;
  local_198 = param_2;
  local_190 = (undefined1 *)param_1;
  _objc_storeStrong(&local_1a0,param_3);
  local_1b4 = 1;
  local_1c4 = 7;
  puVar3 = local_190;
  local_1a8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_homeAvatarStripPerRowCount_026a23e0);
  local_3a8 = puVar3;
  if ((long)local_1c4 < (long)puVar3) {
    local_3a8 = (undefined1 *)(long)local_1c4;
  }
  local_1d8 = local_3a8;
  local_1c0 = local_3a8;
  if ((long)local_1b4 < (long)local_3a8) {
    local_3b0 = local_3a8;
  }
  else {
    local_3b0 = (undefined1 *)(long)local_1b4;
  }
  local_1e0 = local_3b0;
  local_1b0 = local_3b0;
  local_1ec = 0;
  local_1f8 = local_1a8;
  if ((long)local_1a8 < 1) {
    local_3b8 = 0;
  }
  else {
    local_3b8 = local_1a8;
  }
  local_200 = local_3b8;
  local_1e8 = (3 - local_3b8) * (long)local_3b0;
  lVar11 = local_1a0;
  local_1d0 = puVar3;
  FUN_02159270(local_1a0,local_1e8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_208 = lVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_210 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_218 = puVar5;
  for (local_220 = 0; lVar11 = local_220, lVar6 = local_208,
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0), puVar5 = local_210,
      puVar4 = local_218, lVar11 < lVar6; local_220 = local_220 + 1) {
    if (local_220 < (long)local_1b0) {
      lVar11 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_208,PTR_s_objectAtIndexedSubscript__0269cc78,local_220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(lVar11);
    }
    else {
      lVar11 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_208,PTR_s_objectAtIndexedSubscript__0269cc78,local_220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(lVar11);
    }
  }
  puVar3 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_homeAvatarStripRowCount_026a23d8);
  lVar11 = local_1a8 + 1;
  puVar4 = local_218;
  local_230 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0);
  local_238 = (undefined1 *)(lVar11 + (int)(uint)(puVar4 != (undefined *)0x0));
  local_400 = local_238;
  if ((long)local_238 <= (long)local_230) {
    local_400 = local_230;
  }
  local_240 = local_400;
  local_228 = local_400;
  if (3 < (long)local_400) {
    local_228 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
  }
  puVar3 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_homeAvatarStripRowCount_026a23d8);
  if ((long)puVar3 < (long)local_228) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR_s_setHomeAvatarStripRowCount__026be480,local_228);
  }
  puVar3 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_homeAvatarStripMutableRowConfigs_026ca448);
  _objc_retainAutoreleasedReturnValue();
  local_248 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_homeAvatarStripRowSpacing_026ca438);
  local_250 = in_d0;
  while (puVar3 = local_248, (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0),
        lVar2 = local_1a8, (long)puVar3 < (long)local_228) {
    puVar10 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0);
    puVar3 = local_248;
    local_58 = &cf_usernames;
    local_40 = *(undefined8 *)PTR____NSArray0___02578280;
    local_50 = &cf_topSpacing;
    if ((long)puVar10 < 1) {
      local_418 = 0;
    }
    else {
      local_418 = local_250;
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_258 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_418,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = &cf_bottomSpacing;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  if (((long)local_1a8 < 0) ||
     (puVar3 = local_248, (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0),
     (long)puVar3 <= (long)lVar2)) {
    local_25c = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_setWithArray__0269d9a0,local_208);
    _objc_retainAutoreleasedReturnValue();
    local_268 = puVar4;
    for (local_270 = 0; lVar2 = local_270, puVar3 = local_248,
        (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0),
        (long)lVar2 < (long)puVar3; local_270 = local_270 + 1) {
      puVar3 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_248,PTR_s_objectAtIndexedSubscript__0269cc78,local_270);
      _objc_retainAutoreleasedReturnValue();
      local_278 = puVar3;
      if (local_270 == local_1a8) {
        puVar4 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_278,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_usernames);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else if ((long)local_270 < (long)local_1a8) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_280 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)puVar3 & 1) == 0) {
          _objc_storeStrong(&local_280,*(undefined8 *)PTR____NSArray0___02578280);
        }
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_288 = puVar4;
        _memset(auStack_2d0,0,0x40);
        puVar3 = local_280;
        (*(code *)PTR__objc_retain_02578638)();
        local_488 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_d8,
                   0x10);
        if (local_488 != (undefined1 *)0x0) {
          lVar11 = *local_2c0;
          local_490 = (undefined1 *)0x0;
          do {
            do {
              if (*local_2c0 - lVar11 != 0) {
                _objc_enumerationMutation(*local_2c0 - lVar11,puVar3);
              }
              uVar12 = *(ulong *)(local_2c8 + (long)local_490 * 8);
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_290 = uVar12;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((((uVar12 & 1) != 0) &&
                  (uVar12 = local_290,
                  (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_length_0269cca0),
                  uVar12 != 0)) &&
                 (puVar4 = local_268,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_268,PTR_s_containsObject__0269cbb8,local_290),
                 ((ulong)puVar4 & 1) == 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_addObject__0269d180,local_290)
                ;
              }
              local_490 = local_490 + 1;
            } while (local_490 < local_488);
            local_488 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_d8
                       ,0x10);
            local_490 = (undefined1 *)0x0;
          } while (local_488 != (undefined1 *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_278,PTR_s_setObject_forKeyedSubscript__0269d248,local_288,&cf_usernames);
        _objc_storeStrong(&local_288);
        _objc_storeStrong(&local_280,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_2d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)puVar3 & 1) == 0) {
          _objc_storeStrong(&local_2d8,*(undefined8 *)PTR____NSArray0___02578280);
        }
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_2e0 = puVar4;
        _memset(auStack_328,0,0x40);
        puVar3 = local_2d8;
        (*(code *)PTR__objc_retain_02578638)();
        local_4e8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_158,
                   0x10);
        if (local_4e8 != (undefined1 *)0x0) {
          lVar11 = *local_318;
          local_4f0 = (undefined1 *)0x0;
          do {
            do {
              if (*local_318 - lVar11 != 0) {
                _objc_enumerationMutation(*local_318 - lVar11,puVar3);
              }
              uVar12 = *(ulong *)(local_320 + (long)local_4f0 * 8);
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_2e8 = uVar12;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((((uVar12 & 1) != 0) &&
                  (uVar12 = local_2e8,
                  (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_length_0269cca0),
                  uVar12 != 0)) &&
                 (puVar4 = local_268,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_268,PTR_s_containsObject__0269cbb8,local_2e8),
                 ((ulong)puVar4 & 1) == 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_addObject__0269d180,local_2e8)
                ;
              }
              local_4f0 = local_4f0 + 1;
            } while (local_4f0 < local_4e8);
            local_4e8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,
                       auStack_158,0x10);
            local_4f0 = (undefined1 *)0x0;
          } while (local_4e8 != (undefined1 *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_278,PTR_s_setObject_forKeyedSubscript__0269d248,local_2e0,&cf_usernames);
        _objc_storeStrong(&local_2e0);
        _objc_storeStrong(&local_2d8,0);
      }
      _objc_storeStrong(&local_278,0);
    }
    local_330 = local_1a8 + 1;
    while (puVar4 = local_218, (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0)
          , puVar4 != (undefined *)0x0 && local_330 < 3) {
      while (puVar3 = local_248,
            (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0),
            (long)puVar3 <= local_330) {
        puVar10 = local_248;
        (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0);
        puVar3 = local_248;
        local_188 = &cf_usernames;
        local_170 = *(undefined8 *)PTR____NSArray0___02578280;
        local_180 = &cf_topSpacing;
        if ((long)puVar10 < 1) {
          local_540 = 0;
        }
        else {
          local_540 = local_250;
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_338 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_540,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_178 = &cf_bottomSpacing;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_168 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_160 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_170,&local_188,3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar3 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_248,PTR_s_objectAtIndexedSubscript__0269cc78,local_330);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_349 = 0;
      local_590 = puVar9;
      if (puVar9 == (undefined1 *)0x0) {
        local_590 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_348 = local_590;
      }
      local_349 = puVar9 == (undefined1 *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_340 = local_590;
      if ((local_349 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_348);
      }
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_340;
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_340;
        (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_mutableCopy_0269d8a0);
        local_359 = 0;
        local_5b0 = puVar3;
        if (puVar3 == (undefined1 *)0x0) {
          local_5b0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_358 = local_5b0;
        }
        local_359 = puVar3 == (undefined1 *)0x0;
        _objc_storeStrong(&local_340,local_5b0);
        if ((local_359 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_358);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      while( true ) {
        puVar4 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0);
        bVar1 = false;
        if (puVar4 != (undefined *)0x0) {
          puVar3 = local_340;
          (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_count_0269cfe0);
          bVar1 = (long)puVar3 < (long)local_1b0;
        }
        if (!bVar1) break;
        puVar4 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_368 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_removeObjectAtIndex__0269d530,0);
        puVar3 = local_340;
        (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_containsObject__0269cbb8,local_368);
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_addObject__0269d180,local_368);
        }
        _objc_storeStrong(&local_368,0);
      }
      puVar3 = local_340;
      (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_copy_0269d150);
      puVar10 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_248,PTR_s_objectAtIndexedSubscript__0269cc78,local_330);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_330 = local_330 + 1;
      _objc_storeStrong(&local_340,0);
    }
    puVar3 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_homeAvatarStripRowCount_026a23d8);
    puVar10 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0);
    if ((long)puVar3 < (long)puVar10) {
      puVar3 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_homeAvatarStripRowCount_026a23d8);
      local_370 = puVar3;
      for (local_378 = 0; lVar11 = local_378, puVar10 = local_248,
          (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0), puVar3 = local_370,
          lVar11 < (long)puVar10; local_378 = local_378 + 1) {
        puVar3 = local_248;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_248,PTR_s_objectAtIndexedSubscript__0269cc78,local_378);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_380 = puVar10;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_380;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((((ulong)puVar3 & 1) != 0) &&
           (puVar3 = local_380,
           (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_count_0269cfe0),
           puVar3 != (undefined1 *)0x0)) {
          local_5f8 = (undefined1 *)(local_378 + 1);
          if ((long)local_5f8 <= (long)local_370) {
            local_5f8 = local_370;
          }
          local_370 = local_5f8;
        }
        _objc_storeStrong(&local_380,0);
      }
      puVar10 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_homeAvatarStripRowCount_026a23d8);
      if ((long)puVar10 < (long)puVar3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_setHomeAvatarStripRowCount__026be480,local_370);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR_s_setHomeAvatarStripRowConfigs__026ca440,local_248);
    _objc_storeStrong(&local_268,0);
    local_25c = 0;
  }
  _objc_storeStrong(&local_248);
  _objc_storeStrong(&local_218,0);
  _objc_storeStrong(&local_210,0);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_1a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

