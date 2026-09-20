// FUN_001a8580 @ 001a8580

void FUN_001a8580(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  dword *pdVar16;
  ulong uVar17;
  ulong local_8f0;
  ulong local_8e8;
  ulong local_868;
  ulong local_860;
  undefined *local_7d0;
  undefined *local_7c8;
  char *local_750;
  char *local_748;
  undefined *local_6b8;
  undefined *local_6b0;
  undefined *local_640;
  undefined *local_638;
  undefined1 auStack_5a8 [8];
  long local_5a0;
  long *local_598;
  ulong local_568;
  undefined8 local_560;
  undefined1 auStack_558 [8];
  long local_550;
  long *local_548;
  undefined8 local_518;
  ulong local_510;
  ulong local_508 [2];
  ulong local_4f8;
  undefined1 auStack_4f0 [8];
  long local_4e8;
  long *local_4e0;
  ulong local_4b0;
  cfstringStruct *local_4a8;
  undefined *local_4a0;
  undefined *local_498;
  ulong local_490;
  undefined1 auStack_488 [8];
  long local_480;
  long *local_478;
  ulong local_448;
  char *local_438;
  undefined1 auStack_430 [8];
  long local_428;
  long *local_420;
  ulong local_3f0;
  undefined1 auStack_3e8 [8];
  long local_3e0;
  long *local_3d8;
  ulong local_3a8;
  undefined *local_3a0;
  undefined *local_398;
  cfstringStruct *local_390;
  char *local_388;
  int local_380;
  char *local_370;
  char *local_368;
  char *local_360;
  undefined *local_358;
  undefined1 auStack_350 [128];
  undefined1 auStack_2d0 [128];
  undefined1 auStack_250 [128];
  undefined1 auStack_1d0 [128];
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_138 [128];
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = "CContactMgr";
  local_360 = pcVar1;
  _objc_getClass();
  local_368 = pcVar2;
  if (((local_360 == (char *)0x0) || (pcVar2 == (char *)0x0)) ||
     (pcVar1 = local_360,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_360,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar1 & 1) == 0)) {
    puVar3 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_358 = puVar3;
  }
  else {
    pcVar1 = local_360;
    (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_370 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
      puVar3 = *(undefined **)PTR____NSDictionary0___02578288;
      (*(code *)PTR__objc_retain_02578638)();
      local_380 = 1;
      local_358 = puVar3;
    }
    else {
      pcVar1 = local_370;
      (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_getService__0269d170,local_368);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = &cf_getContactList_contactType_;
      local_388 = pcVar1;
      _NSSelectorFromString();
      local_390 = pcVar4;
      if ((local_388 == (char *)0x0) ||
         (pcVar1 = local_388,
         (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_respondsToSelector__026ca818,pcVar4),
         ((ulong)pcVar1 & 1) == 0)) {
        puVar3 = *(undefined **)PTR____NSDictionary0___02578288;
        (*(code *)PTR__objc_retain_02578638)();
        local_380 = 1;
        local_358 = puVar3;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        local_398 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_3a0 = puVar5;
        _memset(auStack_3e8,0,0x40);
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_b0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_b8,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_638 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e8,auStack_a8,
                   0x10);
        if (local_638 != (undefined *)0x0) {
          lVar11 = *local_3d8;
          local_640 = (undefined *)0x0;
          do {
            do {
              if (*local_3d8 - lVar11 != 0) {
                _objc_enumerationMutation(*local_3d8 - lVar11,puVar6);
              }
              local_3a8 = *(ulong *)(local_3e0 + (long)local_640 * 8);
              _memset(auStack_430,0,0x40);
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_150 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_148 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              local_140 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_150,3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              local_6b0 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,
                         auStack_138,0x10);
              if (local_6b0 != (undefined *)0x0) {
                lVar12 = *local_420;
                local_6b8 = (undefined *)0x0;
                do {
                  do {
                    if (*local_420 - lVar12 != 0) {
                      _objc_enumerationMutation(*local_420 - lVar12,puVar8);
                    }
                    pcVar2 = local_388;
                    pcVar4 = local_390;
                    local_3f0 = *(ulong *)(local_428 + (long)local_6b8 * 8);
                    local_438 = (char *)0x0;
                    uVar14 = local_3a8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_unsignedIntValue_0269db10)
                    ;
                    uVar9 = local_3f0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_unsignedIntValue_0269db10)
                    ;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar2,pcVar4,uVar14 & 0xffffffff,uVar9 & 0xffffffff);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar1 = local_438;
                    local_438 = pcVar2;
                    (*(code *)PTR__objc_release_02578630)(pcVar1);
                    pcVar1 = local_438;
                    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
                    if (((ulong)pcVar1 & 1) == 0) {
                      local_380 = 5;
                    }
                    else {
                      _memset(auStack_488,0,0x40);
                      pcVar1 = local_438;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_748 = pcVar1;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_488,
                                 auStack_1d0,0x10);
                      if (local_748 != (char *)0x0) {
                        lVar13 = *local_478;
                        local_750 = (char *)0x0;
                        do {
                          do {
                            if (*local_478 - lVar13 != 0) {
                              _objc_enumerationMutation(*local_478 - lVar13,pcVar1);
                            }
                            uVar14 = *(ulong *)(local_480 + (long)local_750 * 8);
                            local_448 = uVar14;
                            FUN_001a9e0c(uVar14,&cf_m_nsUsrName);
                            _objc_retainAutoreleasedReturnValue();
                            local_490 = uVar14;
                            FUN_001aa038();
                            if (((uVar14 & 1) == 0) ||
                               (puVar3 = local_3a0,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_3a0,PTR_s_containsObject__0269cbb8,local_490),
                               ((ulong)puVar3 & 1) != 0)) {
                              local_380 = 8;
                            }
                            else {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_3a0,PTR_s_addObject__0269d180,local_490);
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_398,PTR_s_addObject__0269d180,local_448);
                              local_380 = 0;
                            }
                            _objc_storeStrong(&local_490,0);
                            local_750 = local_750 + 1;
                          } while (local_750 < local_748);
                          local_748 = pcVar1;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                     auStack_488,auStack_1d0,0x10);
                          local_750 = (char *)0x0;
                        } while (local_748 != (char *)0x0);
                      }
                      (*(code *)PTR__objc_release_02578630)(pcVar1);
                      local_380 = 0;
                    }
                    _objc_storeStrong(&local_438,0);
                    local_6b8 = local_6b8 + 1;
                  } while (local_6b8 < local_6b0);
                  local_6b0 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,
                             auStack_138,0x10);
                  local_6b8 = (undefined *)0x0;
                } while (local_6b0 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar8);
              local_640 = local_640 + 1;
            } while (local_640 < local_638);
            local_638 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e8,auStack_a8
                       ,0x10);
            local_640 = (undefined *)0x0;
          } while (local_638 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar6);
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        local_498 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf___);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = &cf_tryLoadExtInfoForContact_;
        local_4a0 = puVar5;
        _NSSelectorFromString();
        local_4a8 = pcVar4;
        _memset(auStack_4f0,0,0x40);
        puVar3 = local_398;
        (*(code *)PTR__objc_retain_02578638)();
        local_7c8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f0,auStack_250,
                   0x10);
        if (local_7c8 != (undefined *)0x0) {
          lVar11 = *local_4e0;
          local_7d0 = (undefined *)0x0;
          do {
            do {
              if (*local_4e0 - lVar11 != 0) {
                _objc_enumerationMutation(*local_4e0 - lVar11,puVar3);
              }
              local_4b0 = *(ulong *)(local_4e8 + (long)local_7d0 * 8);
              puVar5 = local_498;
              (*(code *)PTR__objc_msgSend_02578628)(local_498,PTR_s_count_0269cfe0);
              if (&UNK_0001869f < puVar5) {
                local_380 = 9;
                goto LAB_001a9c14;
              }
              uVar14 = local_4b0;
              FUN_001a9e0c(puVar5 + -100000,local_4b0,&cf_m_nsChatRoomMemList);
              _objc_retainAutoreleasedReturnValue();
              local_4f8 = uVar14;
              (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_length_0269cca0);
              if ((uVar14 == 0) &&
                 (pcVar1 = local_388,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_388,PTR_s_respondsToSelector__026ca818,local_4a8),
                 ((ulong)pcVar1 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_388,local_4a8,local_4b0);
                uVar9 = local_4b0;
                FUN_001a9e0c(local_4b0,&cf_m_nsChatRoomMemList);
                _objc_retainAutoreleasedReturnValue();
                uVar14 = local_4f8;
                local_4f8 = uVar9;
                (*(code *)PTR__objc_release_02578630)(uVar14);
              }
              uVar14 = local_4b0;
              FUN_001aa170(local_4b0,&cf_m_ChatRoomData);
              _objc_retainAutoreleasedReturnValue();
              local_508[0] = uVar14;
              FUN_001aa170(uVar14,&cf_m_dicData);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_510 = uVar14;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_isKindOfClass__0269cd68,puVar5);
              if ((uVar14 & 1) == 0) {
                _objc_storeStrong(&local_510,0);
              }
              _memset(auStack_558,0,0x40);
              uVar14 = local_4f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_4f8,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_4a0);
              _objc_retainAutoreleasedReturnValue();
              local_860 = uVar14;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_860 != 0) {
                lVar12 = *local_548;
                local_868 = 0;
                do {
                  do {
                    if (*local_548 - lVar12 != 0) {
                      _objc_enumerationMutation(*local_548 - lVar12,uVar14);
                    }
                    uVar15 = *(undefined8 *)(local_550 + local_868 * 8);
                    local_518 = uVar15;
                    FUN_001a81d4();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = local_498;
                    uVar9 = local_4b0;
                    uVar10 = local_510;
                    local_560 = uVar15;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_510,PTR_s_objectForKey__0269e048,uVar15);
                    _objc_retainAutoreleasedReturnValue();
                    FUN_001aa374(puVar5,uVar15,uVar9);
                    (*(code *)PTR__objc_release_02578630)(uVar10);
                    puVar5 = local_498;
                    (*(code *)PTR__objc_msgSend_02578628)(local_498,PTR_s_count_0269cfe0);
                    pdVar16 = (dword *)(puVar5 + -100000);
                    if (puVar5 < &DAT_000186a0) {
                      local_380 = 0;
                    }
                    else {
                      pdVar16 = &MACH_HEADER.filetype;
                      local_380 = 0xc;
                    }
                    _objc_storeStrong(pdVar16,&local_560,0);
                    if (local_380 != 0) goto LAB_001a9820;
                    local_868 = local_868 + 1;
                  } while (local_868 < local_860);
                  local_860 = uVar14;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar14,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_558,
                             auStack_2d0,0x10);
                  local_868 = 0;
                } while (local_860 != 0);
              }
              local_380 = 0;
LAB_001a9820:
              (*(code *)PTR__objc_release_02578630)(uVar14);
              puVar5 = local_498;
              (*(code *)PTR__objc_msgSend_02578628)(local_498,PTR_s_count_0269cfe0);
              if (puVar5 < &DAT_000186a0) {
                _memset(auStack_5a8,0,0x40);
                uVar14 = local_510;
                (*(code *)PTR__objc_msgSend_02578628)(local_510,PTR_s_allKeys_0269ef58);
                _objc_retainAutoreleasedReturnValue();
                local_8e8 = uVar14;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (local_8e8 != 0) {
                  lVar12 = *local_598;
                  local_8f0 = 0;
                  do {
                    do {
                      if (*local_598 - lVar12 != 0) {
                        _objc_enumerationMutation(*local_598 - lVar12,uVar14);
                      }
                      uVar17 = *(ulong *)(local_5a0 + local_8f0 * 8);
                      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      local_568 = uVar17;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar17,PTR_s_isKindOfClass__0269cd68,puVar5);
                      puVar5 = local_498;
                      uVar10 = local_4b0;
                      uVar9 = local_568;
                      if ((uVar17 & 1) != 0) {
                        uVar17 = local_510;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_510,PTR_s_objectForKey__0269e048,local_568);
                        _objc_retainAutoreleasedReturnValue();
                        FUN_001aa374(puVar5,uVar9,uVar10);
                        (*(code *)PTR__objc_release_02578630)(uVar17);
                        puVar5 = local_498;
                        (*(code *)PTR__objc_msgSend_02578628)(local_498,PTR_s_count_0269cfe0);
                        if (&UNK_0001869f < puVar5) {
                          local_380 = 0xe;
                          goto LAB_001a9b40;
                        }
                      }
                      local_8f0 = local_8f0 + 1;
                    } while (local_8f0 < local_8e8);
                    local_8e8 = uVar14;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar14,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5a8,
                               auStack_350,0x10);
                    local_8f0 = 0;
                  } while (local_8e8 != 0);
                }
                local_380 = 0;
LAB_001a9b40:
                (*(code *)PTR__objc_release_02578630)(uVar14);
                local_380 = 0;
              }
              else {
                local_380 = 9;
              }
              _objc_storeStrong(&local_510);
              _objc_storeStrong(local_508,0);
              _objc_storeStrong(&local_4f8,0);
              if (local_380 != 0) goto LAB_001a9c14;
              local_7d0 = local_7d0 + 1;
            } while (local_7d0 < local_7c8);
            local_7c8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f0,
                       auStack_250,0x10);
            local_7d0 = (undefined *)0x0;
          } while (local_7c8 != (undefined *)0x0);
        }
        local_380 = 0;
LAB_001a9c14:
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_498;
        (*(code *)PTR__objc_msgSend_02578628)(local_498,PTR_s_copy_0269d150);
        local_380 = 1;
        local_358 = puVar3;
        _objc_storeStrong(&local_4a0);
        _objc_storeStrong(&local_498,0);
        _objc_storeStrong(&local_3a0,0);
        _objc_storeStrong(&local_398,0);
      }
      _objc_storeStrong(&local_388,0);
    }
    _objc_storeStrong(&local_370,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_358);
  return;
}

