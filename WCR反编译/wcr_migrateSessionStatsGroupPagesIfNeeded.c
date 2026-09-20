// wcr_migrateSessionStatsGroupPagesIfNeeded @ 0212ffe4

/* Function Stack Size: 0x10 bytes */

void WCRefineConfig::wcr_migrateSessionStatsGroupPagesIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong local_dc8;
  ulong local_dc0;
  ID local_d68;
  ulong local_d10;
  ulong local_d08;
  undefined *local_cc8;
  undefined *local_cc0;
  ulong local_c60;
  ulong local_c58;
  undefined *local_c18;
  undefined *local_c10;
  ID local_bd0;
  ulong local_b78;
  ulong local_b70;
  undefined *local_b30;
  undefined *local_b28;
  long local_ac8;
  undefined *local_aa0;
  undefined *local_a90;
  ulong local_a60;
  ulong local_a58;
  ulong local_9e8;
  ulong local_9e0;
  ulong local_990;
  ulong local_988;
  undefined1 auStack_958 [8];
  long local_950;
  long *local_948;
  ulong local_918;
  undefined *local_910;
  undefined *local_908;
  ID local_900;
  ID local_8f8;
  ID local_8f0;
  ID local_8e8;
  undefined1 auStack_8e0 [8];
  long local_8d8;
  long *local_8d0;
  ulong local_8a0;
  undefined *local_898;
  ID local_890;
  undefined1 auStack_888 [8];
  long local_880;
  long *local_878;
  undefined8 local_848;
  undefined1 auStack_840 [8];
  long local_838;
  long *local_830;
  ulong local_800;
  undefined *local_7f8;
  ID local_7f0;
  undefined1 auStack_7e8 [8];
  long local_7e0;
  long *local_7d8;
  undefined8 local_7a8;
  ID local_7a0;
  ID local_798;
  ID local_790;
  undefined1 auStack_788 [8];
  long local_780;
  long *local_778;
  ulong local_748;
  undefined *local_740;
  undefined4 local_734;
  ID local_730;
  undefined1 auStack_728 [8];
  long local_720;
  long *local_718;
  ulong local_6e8;
  undefined *local_6e0;
  ID local_6d8;
  ID local_6d0;
  ID local_6c8;
  undefined *local_6c0;
  undefined *local_6b8;
  undefined *local_6b0;
  undefined1 auStack_6a8 [8];
  long local_6a0;
  long *local_698;
  ulong local_668;
  undefined *local_660;
  ID local_658;
  undefined1 auStack_650 [8];
  long local_648;
  long *local_640;
  ulong local_610;
  undefined *local_608;
  ID local_600;
  undefined1 auStack_5f8 [8];
  long local_5f0;
  long *local_5e8;
  ulong local_5b8;
  undefined *local_5b0;
  ID local_5a8;
  ID local_5a0;
  SEL local_598;
  ID local_590;
  undefined1 auStack_588 [128];
  undefined1 auStack_508 [128];
  cfstringStruct *local_488;
  cfstringStruct *local_480;
  cfstringStruct *local_478;
  undefined1 auStack_470 [128];
  undefined1 auStack_3f0 [128];
  cfstringStruct *local_370;
  cfstringStruct *local_368;
  cfstringStruct *local_360;
  undefined1 auStack_358 [128];
  undefined1 auStack_2d8 [128];
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  undefined1 auStack_240 [128];
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_598 = param_2;
  local_590 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_configDictionary_0269f958);
  _objc_retainAutoreleasedReturnValue();
  local_5a0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupPagesV2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    IVar1 = local_5a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupBoardPages);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_5a8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((IVar1 & 1) != 0) &&
        (IVar1 = local_5a8, (*(code *)PTR__objc_msgSend_02578628)(local_5a8,PTR_s_count_0269cfe0),
        IVar1 != 0)) &&
       (IVar1 = local_5a8,
       (*(code *)PTR__objc_msgSend_02578628)(local_5a8,PTR_s_containsObject__0269cbb8,&cf_summary),
       (IVar1 & 1) == 0)) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                 &cf_summary);
      _objc_retainAutoreleasedReturnValue();
      local_5b0 = puVar2;
      _memset(auStack_5f8,0,0x40);
      IVar1 = local_5a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_988 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5f8,auStack_a8,0x10);
      if (local_988 != 0) {
        lVar4 = *local_5e8;
        local_990 = 0;
        do {
          do {
            if (*local_5e8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_5e8 - lVar4,IVar1);
            }
            uVar5 = *(ulong *)(local_5f0 + local_990 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_5b8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar5 & 1) != 0) &&
               (uVar5 = local_5b8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_5b8,PTR_s_isEqualToString__0269ccc8,&cf_summary), (uVar5 & 1) == 0))
            {
              (*(code *)PTR__objc_msgSend_02578628)(local_5b0,PTR_s_addObject__0269d180,local_5b8);
            }
            local_990 = local_990 + 1;
          } while (local_990 < local_988);
          local_988 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5f8,auStack_a8,
                     0x10);
          local_990 = 0;
        } while (local_988 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_5b0,
                 &cf_sessionStatsGroupBoardPages);
      _objc_storeStrong(&local_5b0,0);
    }
    IVar1 = local_5a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsPrivateBoardPages);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_600 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((IVar1 & 1) != 0) &&
        (IVar1 = local_600, (*(code *)PTR__objc_msgSend_02578628)(local_600,PTR_s_count_0269cfe0),
        IVar1 != 0)) &&
       (IVar1 = local_600,
       (*(code *)PTR__objc_msgSend_02578628)(local_600,PTR_s_containsObject__0269cbb8,&cf_summary),
       (IVar1 & 1) == 0)) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                 &cf_summary);
      _objc_retainAutoreleasedReturnValue();
      local_608 = puVar2;
      _memset(auStack_650,0,0x40);
      IVar1 = local_600;
      (*(code *)PTR__objc_retain_02578638)();
      local_9e0 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_650,auStack_128,0x10)
      ;
      if (local_9e0 != 0) {
        lVar4 = *local_640;
        local_9e8 = 0;
        do {
          do {
            if (*local_640 - lVar4 != 0) {
              _objc_enumerationMutation(*local_640 - lVar4,IVar1);
            }
            uVar5 = *(ulong *)(local_648 + local_9e8 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_610 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar5 & 1) != 0) &&
               (uVar5 = local_610,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_610,PTR_s_isEqualToString__0269ccc8,&cf_summary), (uVar5 & 1) == 0))
            {
              (*(code *)PTR__objc_msgSend_02578628)(local_608,PTR_s_addObject__0269d180,local_610);
            }
            local_9e8 = local_9e8 + 1;
          } while (local_9e8 < local_9e0);
          local_9e0 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_650,auStack_128,
                     0x10);
          local_9e8 = 0;
        } while (local_9e0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_608,
                 &cf_sessionStatsPrivateBoardPages);
      _objc_storeStrong(&local_608,0);
    }
    IVar1 = local_5a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_sessionStatsGroupPagesV2);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_600);
    _objc_storeStrong(&local_5a8,0);
  }
  IVar1 = local_5a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupPagesV3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    IVar1 = local_5a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupBoardPages);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_658 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((IVar1 & 1) != 0) &&
       (IVar1 = local_658, (*(code *)PTR__objc_msgSend_02578628)(local_658,PTR_s_count_0269cfe0),
       IVar1 != 0)) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_660 = puVar2;
      _memset(auStack_6a8,0,0x40);
      IVar1 = local_658;
      (*(code *)PTR__objc_retain_02578638)();
      local_a58 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6a8,auStack_1a8,0x10)
      ;
      if (local_a58 != 0) {
        lVar4 = *local_698;
        local_a60 = 0;
        do {
          do {
            if (*local_698 - lVar4 != 0) {
              _objc_enumerationMutation(*local_698 - lVar4,IVar1);
            }
            uVar5 = *(ulong *)(local_6a0 + local_a60 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_668 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((((uVar5 & 1) != 0) &&
                (uVar5 = local_668,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_668,PTR_s_isEqualToString__0269ccc8,&cf_summary), (uVar5 & 1) == 0)
                ) && (uVar5 = local_668,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_668,PTR_s_isEqualToString__0269ccc8,&cf_types),
                     (uVar5 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_660,PTR_s_addObject__0269d180,local_668);
            }
            local_a60 = local_a60 + 1;
          } while (local_a60 < local_a58);
          local_a58 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6a8,auStack_1a8,
                     0x10);
          local_a60 = 0;
        } while (local_a58 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObjects__026af658,
                 &cf_summary);
      _objc_retainAutoreleasedReturnValue();
      local_6b0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540,local_660);
      puVar2 = local_6b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_containsObject__0269cbb8,&cf_roles);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_6b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_indexOfObject__0269e870,&cf_region);
        local_6b8 = puVar2;
        if (puVar2 == (undefined *)0x7fffffffffffffff) {
          puVar2 = local_6b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_indexOfObject__0269e870,&cf_gender);
          local_6b8 = puVar2;
        }
        if (local_6b8 == (undefined *)0x7fffffffffffffff) {
          local_a90 = (undefined *)((long)&MACH_HEADER.magic + 2);
        }
        else {
          local_a90 = local_6b8 + 1;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_6b0,PTR_s_insertObject_atIndex__0269eac0,&cf_roles,local_a90);
      }
      puVar2 = local_6b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_containsObject__0269cbb8,&cf_words);
      if (((ulong)puVar2 & 1) == 0) {
        local_aa0 = local_6b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_indexOfObject__0269e870,&cf_speakers);
        puVar2 = local_6b0;
        local_6c0 = local_aa0;
        if (local_aa0 == (undefined *)0x7fffffffffffffff) {
          local_aa0 = local_6b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_6b0,PTR_s_count_0269cfe0);
        }
        else {
          local_aa0 = local_aa0 + 1;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_insertObject_atIndex__0269eac0,&cf_words,local_aa0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_6b0,
                 &cf_sessionStatsGroupBoardPages);
      _objc_storeStrong(&local_6b0);
      _objc_storeStrong(&local_660,0);
    }
    IVar1 = local_5a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsPrivateBoardPages);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_6c8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((IVar1 & 1) != 0) &&
        (IVar1 = local_6c8, (*(code *)PTR__objc_msgSend_02578628)(local_6c8,PTR_s_count_0269cfe0),
        IVar1 != 0)) &&
       (IVar1 = local_6c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_6c8,PTR_s_containsObject__0269cbb8,&cf_words),
       (IVar1 & 1) == 0)) {
      IVar1 = local_6c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_6c8,PTR_s_mutableCopy_0269d8a0);
      local_6d0 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_indexOfObject__0269e870,&cf_types);
      if (IVar1 == 0x7fffffffffffffff) {
        local_ac8 = 1;
      }
      else {
        local_ac8 = IVar1 + 1;
      }
      local_6d8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_6d0,PTR_s_insertObject_atIndex__0269eac0,&cf_words,local_ac8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_6d0,
                 &cf_sessionStatsPrivateBoardPages);
      _objc_storeStrong(&local_6d0,0);
    }
    IVar1 = local_5a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_sessionStatsGroupPagesV3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_6c8);
    _objc_storeStrong(&local_658,0);
  }
  IVar1 = local_5a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupPagesV4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    local_1c0 = &cf_roles;
    local_1b8 = &cf_late;
    local_1b0 = &cf_overnight;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_6e0 = puVar2;
    _memset(auStack_728,0,0x40);
    local_258 = &cf_sessionStatsGroupBoardPages;
    local_250 = &cf_sessionStatsPrivateBoardPages;
    local_248 = &cf_sessionStatsBoardPages;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_258,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_b28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_b28 != (undefined *)0x0) {
      lVar4 = *local_718;
      local_b30 = (undefined *)0x0;
      do {
        do {
          if (*local_718 - lVar4 != 0) {
            _objc_enumerationMutation(*local_718 - lVar4,puVar2);
          }
          local_6e8 = *(ulong *)(local_720 + (long)local_b30 * 8);
          IVar1 = local_5a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_5a0,PTR_s_objectForKey__0269e048,local_6e8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_730 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((IVar1 & 1) == 0) ||
             (IVar1 = local_730,
             (*(code *)PTR__objc_msgSend_02578628)(local_730,PTR_s_count_0269cfe0), IVar1 == 0)) {
            local_734 = 9;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_740 = puVar3;
            _memset(auStack_788,0,0x40);
            IVar1 = local_730;
            (*(code *)PTR__objc_retain_02578638)();
            local_b70 = IVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_788,auStack_2d8
                       ,0x10);
            if (local_b70 != 0) {
              lVar6 = *local_778;
              local_b78 = 0;
              do {
                do {
                  if (*local_778 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_778 - lVar6,IVar1);
                  }
                  uVar5 = *(ulong *)(local_780 + local_b78 * 8);
                  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_748 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
                  if (((uVar5 & 1) != 0) &&
                     (puVar3 = local_6e0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_6e0,PTR_s_containsObject__0269cbb8,local_748),
                     ((ulong)puVar3 & 1) == 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_740,PTR_s_addObject__0269d180,local_748);
                  }
                  local_b78 = local_b78 + 1;
                } while (local_b78 < local_b70);
                local_b70 = IVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_788,
                           auStack_2d8,0x10);
                local_b78 = 0;
              } while (local_b70 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(IVar1);
            uVar5 = local_6e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_6e8,PTR_s_isEqualToString__0269ccc8,&cf_sessionStatsGroupBoardPages);
            if (((uVar5 & 1) != 0) &&
               (puVar3 = local_740,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_740,PTR_s_containsObject__0269cbb8,&cf_ai), ((ulong)puVar3 & 1) == 0
               )) {
              (*(code *)PTR__objc_msgSend_02578628)(local_740,PTR_s_addObject__0269d180,&cf_ai);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_740,local_6e8);
            _objc_storeStrong(&local_740,0);
            local_734 = 0;
          }
          _objc_storeStrong(&local_730,0);
          local_b30 = local_b30 + 1;
        } while (local_b30 < local_b28);
        local_b28 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_728,auStack_240,
                   0x10);
        local_b30 = (undefined *)0x0;
      } while (local_b28 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_5a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_sessionStatsGroupPagesV4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_6e0,0);
  }
  IVar1 = local_5a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupPagesV5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    IVar1 = local_5a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupBoardPages);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_790 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((IVar1 & 1) != 0) &&
        (IVar1 = local_790, (*(code *)PTR__objc_msgSend_02578628)(local_790,PTR_s_count_0269cfe0),
        IVar1 != 0)) &&
       (IVar1 = local_790,
       (*(code *)PTR__objc_msgSend_02578628)(local_790,PTR_s_containsObject__0269cbb8,&cf_activity),
       (IVar1 & 1) == 0)) {
      local_bd0 = local_790;
      (*(code *)PTR__objc_msgSend_02578628)(local_790,PTR_s_mutableCopy_0269d8a0);
      local_798 = local_bd0;
      (*(code *)PTR__objc_msgSend_02578628)(local_bd0,PTR_s_indexOfObject__0269e870,&cf_speakers);
      IVar1 = local_798;
      local_7a0 = local_bd0;
      if (local_bd0 == 0x7fffffffffffffff) {
        local_bd0 = local_798;
        (*(code *)PTR__objc_msgSend_02578628)(local_798,PTR_s_count_0269cfe0);
      }
      else {
        local_bd0 = local_bd0 + 1;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_insertObject_atIndex__0269eac0,&cf_activity,local_bd0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_798,
                 &cf_sessionStatsGroupBoardPages);
      _objc_storeStrong(&local_798,0);
    }
    IVar1 = local_5a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_sessionStatsGroupPagesV5);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_790,0);
  }
  IVar1 = local_5a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupPagesV6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    _memset(auStack_7e8,0,0x40);
    local_370 = &cf_sessionStatsGroupBoardPages;
    local_368 = &cf_sessionStatsPrivateBoardPages;
    local_360 = &cf_sessionStatsBoardPages;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_370,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_c10 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_c10 != (undefined *)0x0) {
      lVar4 = *local_7d8;
      local_c18 = (undefined *)0x0;
      do {
        do {
          if (*local_7d8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_7d8 - lVar4,puVar2);
          }
          local_7a8 = *(undefined8 *)(local_7e0 + (long)local_c18 * 8);
          IVar1 = local_5a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_5a0,PTR_s_objectForKey__0269e048,local_7a8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_7f0 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((IVar1 & 1) == 0) ||
             (IVar1 = local_7f0,
             (*(code *)PTR__objc_msgSend_02578628)(local_7f0,PTR_s_count_0269cfe0), IVar1 == 0)) {
            local_734 = 0xd;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_7f8 = puVar3;
            _memset(auStack_840,0,0x40);
            IVar1 = local_7f0;
            (*(code *)PTR__objc_retain_02578638)();
            local_c58 = IVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_840,auStack_3f0
                       ,0x10);
            if (local_c58 != 0) {
              lVar6 = *local_830;
              local_c60 = 0;
              do {
                do {
                  if (*local_830 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_830 - lVar6,IVar1);
                  }
                  uVar5 = *(ulong *)(local_838 + local_c60 * 8);
                  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_800 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
                  if (((uVar5 & 1) != 0) &&
                     (uVar5 = local_800,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_800,PTR_s_isEqualToString__0269ccc8,&cf_activity),
                     (uVar5 & 1) == 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_7f8,PTR_s_addObject__0269d180,local_800);
                  }
                  local_c60 = local_c60 + 1;
                } while (local_c60 < local_c58);
                local_c58 = IVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_840,
                           auStack_3f0,0x10);
                local_c60 = 0;
              } while (local_c58 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(IVar1);
            puVar3 = local_7f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_7f8,PTR_s_containsObject__0269cbb8,&cf_qr);
            if (((ulong)puVar3 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_7f8,PTR_s_addObject__0269d180,&cf_qr);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_7f8,local_7a8);
            _objc_storeStrong(&local_7f8,0);
            local_734 = 0;
          }
          _objc_storeStrong(&local_7f0,0);
          local_c18 = local_c18 + 1;
        } while (local_c18 < local_c10);
        local_c10 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7e8,auStack_358,
                   0x10);
        local_c18 = (undefined *)0x0;
      } while (local_c10 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_5a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_sessionStatsGroupPagesV6);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  IVar1 = local_5a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupPagesV7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    _memset(auStack_888,0,0x40);
    local_488 = &cf_sessionStatsGroupBoardPages;
    local_480 = &cf_sessionStatsPrivateBoardPages;
    local_478 = &cf_sessionStatsBoardPages;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_488,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_cc0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_cc0 != (undefined *)0x0) {
      lVar4 = *local_878;
      local_cc8 = (undefined *)0x0;
      do {
        do {
          if (*local_878 - lVar4 != 0) {
            _objc_enumerationMutation(*local_878 - lVar4,puVar2);
          }
          local_848 = *(undefined8 *)(local_880 + (long)local_cc8 * 8);
          IVar1 = local_5a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_5a0,PTR_s_objectForKey__0269e048,local_848);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_890 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((IVar1 & 1) == 0) ||
             (IVar1 = local_890,
             (*(code *)PTR__objc_msgSend_02578628)(local_890,PTR_s_count_0269cfe0), IVar1 == 0)) {
            local_734 = 0x11;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_898 = puVar3;
            _memset(auStack_8e0,0,0x40);
            IVar1 = local_890;
            (*(code *)PTR__objc_retain_02578638)();
            local_d08 = IVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_8e0,auStack_508
                       ,0x10);
            if (local_d08 != 0) {
              lVar6 = *local_8d0;
              local_d10 = 0;
              do {
                do {
                  if (*local_8d0 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_8d0 - lVar6,IVar1);
                  }
                  uVar5 = *(ulong *)(local_8d8 + local_d10 * 8);
                  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_8a0 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
                  if (((uVar5 & 1) != 0) &&
                     (uVar5 = local_8a0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_8a0,PTR_s_isEqualToString__0269ccc8,&cf_qr), (uVar5 & 1) == 0)
                     ) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_898,PTR_s_addObject__0269d180,local_8a0);
                  }
                  local_d10 = local_d10 + 1;
                } while (local_d10 < local_d08);
                local_d08 = IVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_8e0,
                           auStack_508,0x10);
                local_d10 = 0;
              } while (local_d08 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(IVar1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_898,local_848);
            _objc_storeStrong(&local_898,0);
            local_734 = 0;
          }
          _objc_storeStrong(&local_890,0);
          local_cc8 = local_cc8 + 1;
        } while (local_cc8 < local_cc0);
        local_cc0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_888,auStack_470,
                   0x10);
        local_cc8 = (undefined *)0x0;
      } while (local_cc0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_5a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_sessionStatsGroupPagesV7);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  IVar1 = local_5a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupPagesV8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    IVar1 = local_5a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsBoardPages);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_8e8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((IVar1 & 1) != 0) &&
        (IVar1 = local_8e8, (*(code *)PTR__objc_msgSend_02578628)(local_8e8,PTR_s_count_0269cfe0),
        IVar1 != 0)) &&
       (IVar1 = local_8e8,
       (*(code *)PTR__objc_msgSend_02578628)(local_8e8,PTR_s_containsObject__0269cbb8,&cf_age),
       (IVar1 & 1) == 0)) {
      local_d68 = local_8e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_8e8,PTR_s_mutableCopy_0269d8a0);
      local_8f0 = local_d68;
      (*(code *)PTR__objc_msgSend_02578628)(local_d68,PTR_s_indexOfObject__0269e870,&cf_region);
      IVar1 = local_8f0;
      local_8f8 = local_d68;
      if (local_d68 == 0x7fffffffffffffff) {
        local_d68 = local_8f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_8f0,PTR_s_count_0269cfe0);
      }
      else {
        local_d68 = local_d68 + 1;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_insertObject_atIndex__0269eac0,&cf_age,local_d68);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_8f0,&cf_sessionStatsBoardPages);
      _objc_storeStrong(&local_8f0,0);
    }
    IVar1 = local_5a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_sessionStatsGroupPagesV8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_8e8,0);
  }
  IVar1 = local_5a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsGroupPagesV9);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    IVar1 = local_5a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_5a0,PTR_s_objectForKey__0269e048,&cf_sessionStatsBoardPages);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_900 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((IVar1 & 1) != 0) &&
       (IVar1 = local_900, (*(code *)PTR__objc_msgSend_02578628)(local_900,PTR_s_count_0269cfe0),
       IVar1 != 0)) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_908 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_910 = puVar3;
      _memset(auStack_958,0,0x40);
      IVar1 = local_900;
      (*(code *)PTR__objc_retain_02578638)();
      local_dc0 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_958,auStack_588,0x10)
      ;
      if (local_dc0 != 0) {
        lVar4 = *local_948;
        local_dc8 = 0;
        do {
          do {
            if (*local_948 - lVar4 != 0) {
              _objc_enumerationMutation(*local_948 - lVar4,IVar1);
            }
            uVar5 = *(ulong *)(local_950 + local_dc8 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_918 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar5 & 1) != 0) &&
               (uVar5 = local_918,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_918,PTR_s_isEqualToString__0269ccc8,&cf_age), (uVar5 & 1) == 0)) {
              uVar5 = local_918;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_918,PTR_s_isEqualToString__0269ccc8,&cf_gender);
              if (((uVar5 & 1) == 0) &&
                 (uVar5 = local_918,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_918,PTR_s_isEqualToString__0269ccc8,&cf_region), (uVar5 & 1) == 0)
                 ) {
                (*(code *)PTR__objc_msgSend_02578628)(local_908,PTR_s_addObject__0269d180,local_918)
                ;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_910,PTR_s_addObject__0269d180,local_918)
                ;
              }
            }
            local_dc8 = local_dc8 + 1;
          } while (local_dc8 < local_dc0);
          local_dc0 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_958,auStack_588,
                     0x10);
          local_dc8 = 0;
        } while (local_dc0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_908,PTR_s_addObjectsFromArray__0269d540,local_910)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_5a0,PTR_s_setObject_forKey__026ca9e8,local_908,&cf_sessionStatsBoardPages);
      _objc_storeStrong(&local_910);
      _objc_storeStrong(&local_908,0);
    }
    IVar1 = local_5a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_sessionStatsGroupPagesV9);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_900,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_590,PTR_s_saveConfigDictionary__0269f960,local_5a0);
  _objc_storeStrong(&local_5a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

