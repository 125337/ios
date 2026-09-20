// homeAvatarStripRebalanceRowsByPerRowCount @ 021595e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineConfig::homeAvatarStripRebalanceRowsByPerRowCount
          (WCRefineConfig *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_d0;
  undefined *local_5c0;
  undefined *local_5b0;
  undefined *local_560;
  undefined *local_548;
  ID local_540;
  ID local_538;
  ID local_508;
  ID local_500;
  ID local_4f8;
  ID local_4f0;
  ID local_4e8;
  ID local_4e0;
  undefined8 local_488;
  undefined8 local_470;
  ulong local_438;
  ulong local_430;
  ID local_400;
  ID local_3d8;
  ID local_3d0;
  undefined *local_3b8;
  undefined *local_3a8;
  undefined *local_398;
  undefined *local_388;
  undefined *local_378;
  undefined *local_368;
  undefined *local_360;
  bool local_351;
  undefined *local_350;
  long local_348;
  ID local_340;
  undefined *local_338;
  ID local_330;
  ID local_328;
  ID local_320;
  int local_314;
  ID local_310;
  ID local_308;
  ID local_300;
  long local_2f8;
  long local_2f0;
  undefined *local_2e8;
  ID local_2e0;
  ID local_2d8;
  ID local_2d0;
  ID local_2c8;
  ID local_2c0;
  int local_2b4;
  ID local_2b0;
  int local_2a4;
  ID local_2a0;
  ID local_298;
  ID local_290;
  ID local_288;
  ID local_280;
  ID local_278;
  undefined4 local_26c;
  ID local_268;
  undefined4 local_25c;
  ID local_258;
  byte local_249;
  ID local_248;
  undefined8 local_240;
  byte local_231;
  ID local_230;
  undefined8 local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  ID local_1d8;
  byte local_1c9;
  ID local_1c8;
  byte local_1b9;
  ID local_1b8;
  ID local_1b0;
  long local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  ID local_188;
  ID local_180;
  ID local_178;
  ID local_170;
  int local_164;
  ID local_160;
  int local_154;
  ID local_150;
  SEL local_148;
  ID local_140;
  ID local_138;
  long local_130;
  long local_128;
  ID local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = param_2;
  local_140 = param_1;
  if ((DAT_028e4961 & 1) == 0) {
    DAT_028e4961 = 1;
    local_154 = 1;
    local_164 = 7;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_homeAvatarStripPerRowCount_026a23e0);
    local_3d0 = param_1;
    if ((long)local_164 < (long)param_1) {
      local_3d0 = (ID)local_164;
    }
    local_178 = local_3d0;
    local_160 = local_3d0;
    if ((long)local_154 < (long)local_3d0) {
      local_3d8 = local_3d0;
    }
    else {
      local_3d8 = (ID)local_154;
    }
    local_180 = local_3d8;
    local_150 = local_3d8;
    IVar1 = local_140;
    local_170 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_homeAvatarStripRowConfigs_026ca430);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_188 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_198 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = puVar2;
    for (local_1a8 = 0; lVar7 = local_1a8, local_1a8 < 3; local_1a8 = local_1a8 + 1) {
      IVar1 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
      local_1b9 = 0;
      local_1c9 = 0;
      if (lVar7 < (long)IVar1) {
        IVar1 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_188,PTR_s_objectAtIndexedSubscript__0269cc78,local_1a8);
        _objc_retainAutoreleasedReturnValue();
        local_1b9 = 1;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_1b8 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((IVar1 & 1) == 0) goto LAB_021598ec;
        local_400 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_188,PTR_s_objectAtIndexedSubscript__0269cc78,local_1a8);
        _objc_retainAutoreleasedReturnValue();
        local_1c9 = 1;
        local_1c8 = local_400;
      }
      else {
LAB_021598ec:
        local_400 = 0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = local_400;
      if ((local_1c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1c8);
      }
      if ((local_1b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1b8);
      }
      IVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_1d8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((IVar1 & 1) == 0) {
        _objc_storeStrong(&local_1d8,*(undefined8 *)PTR____NSArray0___02578280);
      }
      _memset(auStack_220,0,0x40);
      IVar1 = local_1d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_430 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10);
      if (local_430 != 0) {
        lVar7 = *local_210;
        local_438 = 0;
        do {
          do {
            if (*local_210 - lVar7 != 0) {
              _objc_enumerationMutation(*local_210 - lVar7,IVar1);
            }
            uVar8 = *(ulong *)(local_218 + local_438 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1e0 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((((uVar8 & 1) != 0) &&
                (uVar8 = local_1e0,
                (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0), uVar8 != 0))
               && (puVar2 = local_198,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_198,PTR_s_containsObject__0269cbb8,local_1e0),
                  ((ulong)puVar2 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_addObject__0269d180,local_1e0);
              (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_addObject__0269d180,local_1e0);
            }
            local_438 = local_438 + 1;
          } while (local_438 < local_430);
          local_430 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,
                     0x10);
          local_438 = 0;
        } while (local_430 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_topSpacing);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_231 = 0;
      if ((IVar4 & 1) == 0) {
        local_470 = 0;
      }
      else {
        IVar4 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_topSpacing);
        _objc_retainAutoreleasedReturnValue();
        local_231 = 1;
        local_230 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_470 = in_d0;
      }
      if ((local_231 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_230);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_228 = local_470;
      IVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_bottomSpacing);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_249 = 0;
      if ((IVar4 & 1) == 0) {
        local_488 = 0;
      }
      else {
        IVar4 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_bottomSpacing);
        _objc_retainAutoreleasedReturnValue();
        local_249 = 1;
        local_248 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_488 = local_470;
      }
      if ((local_249 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_248);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = local_1a0;
      local_240 = local_488;
      local_c8 = &cf_topSpacing;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_228,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = &cf_bottomSpacing;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      in_d0 = local_240;
      local_b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_b0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_1d8);
      _objc_storeStrong(&local_1b0,0);
    }
    puVar2 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_4e0 = 1;
    }
    else {
      puVar2 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_count_0269cfe0);
      local_4e0 = 0;
      if (local_150 != 0) {
        local_4e0 = (long)(puVar2 + (local_150 - 1)) / (long)local_150;
      }
    }
    local_25c = 1;
    local_26c = 3;
    local_278 = local_4e0;
    if ((long)local_4e0 < 4) {
      local_4e8 = local_4e0;
    }
    else {
      local_4e8 = 3;
    }
    local_280 = local_4e8;
    local_268 = local_4e8;
    if ((long)local_4e8 < 2) {
      local_4f0 = 1;
    }
    else {
      local_4f0 = local_4e8;
    }
    local_288 = local_4f0;
    local_258 = local_4f0;
    local_298 = local_4f0;
    local_2a4 = 1;
    local_2b4 = 3;
    IVar1 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_homeAvatarStripRowCount_026a23d8);
    local_4f8 = IVar1;
    if ((long)local_2b4 < (long)IVar1) {
      local_4f8 = (long)local_2b4;
    }
    local_2c8 = local_4f8;
    local_2b0 = local_4f8;
    if ((long)local_2a4 < (long)local_4f8) {
      local_500 = local_4f8;
    }
    else {
      local_500 = (ID)local_2a4;
    }
    local_2d0 = local_500;
    local_2a0 = local_500;
    if ((long)local_298 < (long)local_500) {
      local_508 = local_500;
    }
    else {
      local_508 = local_298;
    }
    local_2d8 = local_508;
    local_290 = local_508;
    IVar4 = local_140;
    local_2c0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_homeAvatarStripRowCount_026a23d8);
    if (local_508 != IVar4) {
      IVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_2e0 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_290);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_homeAvatarStripRowCount);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_2e0,0);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_2f0 = 0;
    local_2e8 = puVar2;
    for (local_2f8 = 0; local_2f8 < (long)local_290; local_2f8 = local_2f8 + 1) {
      local_308 = local_150;
      local_314 = 0;
      puVar2 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_count_0269cfe0);
      local_320 = (long)puVar2 - local_2f0;
      local_538 = local_320;
      if ((long)local_320 <= (long)local_314) {
        local_538 = (long)local_314;
      }
      local_328 = local_538;
      local_310 = local_538;
      if ((long)local_308 < (long)local_538) {
        local_540 = local_308;
      }
      else {
        local_540 = local_538;
      }
      local_330 = local_540;
      local_300 = local_540;
      local_351 = false;
      if ((long)local_540 < 1) {
        local_548 = *(undefined **)PTR____NSArray0___02578280;
      }
      else {
        local_130 = local_2f0;
        local_138 = local_540;
        local_128 = local_2f0;
        local_120 = local_540;
        local_348 = local_2f0;
        local_340 = local_540;
        local_548 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_subarrayWithRange__0269d848,local_2f0,local_540);
        _objc_retainAutoreleasedReturnValue();
        local_350 = local_548;
      }
      local_351 = (long)local_540 >= 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_338 = local_548;
      if ((local_351 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_350);
      }
      lVar7 = local_2f8;
      local_2f0 = local_2f0 + local_300;
      puVar2 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0);
      if ((long)puVar2 <= lVar7) {
        local_e8 = &cf_topSpacing;
        local_378 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = &cf_bottomSpacing;
        local_388 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_d8 = local_378;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        local_560 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d0 = local_388;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
        _objc_retainAutoreleasedReturnValue();
        local_398 = local_560;
      }
      else {
        local_560 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_objectAtIndexedSubscript__0269cc78,local_2f8);
        _objc_retainAutoreleasedReturnValue();
        local_368 = local_560;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_360 = local_560;
      if ((long)puVar2 <= lVar7) {
        (*(code *)PTR__objc_release_02578630)(local_398);
        (*(code *)PTR__objc_release_02578630)(local_388);
        (*(code *)PTR__objc_release_02578630)(local_378);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_368);
      }
      puVar2 = local_2e8;
      local_118 = &cf_usernames;
      local_100 = local_338;
      local_110 = &cf_topSpacing;
      puVar3 = local_360;
      (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_5b0 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_3a8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        local_5b0 = local_3a8;
      }
      local_f8 = local_5b0;
      local_108 = &cf_bottomSpacing;
      puVar5 = local_360;
      (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_5c0 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        local_3b8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        local_5c0 = local_3b8;
      }
      local_f0 = local_5c0;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_100,&local_118,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (puVar5 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_3b8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_3a8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_360);
      _objc_storeStrong(&local_338,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_setHomeAvatarStripRowConfigs__026ca440,local_2e8);
    DAT_028e4961 = 0;
    _objc_storeStrong(&local_2e8);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_188,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

