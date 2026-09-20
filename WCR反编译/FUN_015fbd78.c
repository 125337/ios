// FUN_015fbd78 @ 015fbd78

void FUN_015fbd78(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *local_990;
  undefined1 *local_988;
  undefined1 *local_950;
  undefined1 *local_948;
  undefined1 *local_8f8;
  undefined1 *local_8f0;
  undefined1 *local_8b8;
  undefined1 *local_8b0;
  undefined1 *local_888;
  undefined1 *local_868;
  undefined1 *local_860;
  char *local_798;
  char *local_790;
  ulong local_740;
  ulong local_738;
  undefined *local_6e8;
  undefined1 auStack_6e0 [8];
  long local_6d8;
  long *local_6d0;
  undefined8 local_6a0;
  undefined1 auStack_698 [8];
  long local_690;
  long *local_688;
  undefined8 local_658;
  undefined *local_650;
  undefined4 local_644;
  cfstringStruct *local_638;
  ulong local_630;
  undefined1 auStack_628 [8];
  long local_620;
  long *local_618;
  undefined8 local_5e8;
  undefined1 auStack_5e0 [8];
  long local_5d8;
  long *local_5d0;
  undefined8 local_5a0;
  undefined1 *local_598;
  undefined1 auStack_590 [8];
  long local_588;
  long *local_580;
  undefined8 local_550;
  undefined *local_548;
  undefined4 local_540;
  undefined4 local_53c;
  code *local_538;
  undefined *local_530;
  undefined *local_528;
  undefined *local_520;
  byte local_518;
  undefined **local_510;
  undefined *local_508;
  byte local_4f9;
  undefined *local_4f8;
  undefined *local_4f0;
  undefined1 *local_4e8;
  undefined *local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  code *local_4d0;
  undefined *local_4c8;
  undefined *local_4c0;
  undefined *local_4b8;
  undefined **local_4b0;
  undefined *local_4a8;
  undefined *local_4a0;
  long local_498;
  undefined1 auStack_490 [8];
  long local_488;
  long *local_480;
  long local_450;
  char *local_440;
  char *local_438;
  undefined1 auStack_430 [8];
  long local_428;
  long *local_420;
  ulong local_3f0;
  ulong local_3d0;
  undefined1 *local_3c8;
  byte local_3ba;
  byte local_3b9;
  ulong local_3b8;
  undefined *local_3b0;
  undefined1 auStack_3a8 [128];
  undefined1 auStack_328 [128];
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_3b0 = (undefined1 *)0x0;
  _objc_storeStrong(&local_3b0,param_1);
  local_3b8 = 0;
  _objc_storeStrong(&local_3b8,param_2);
  puVar3 = local_3b0;
  local_3b9 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatDisplayMode_026b16c8);
  local_3ba = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_3d0 = 0;
  local_3c8 = puVar3;
  if ((local_3b8 != 0) &&
     (uVar4 = local_3b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_3b8,PTR_s_respondsToSelector__026ca818,
                PTR_s_GetUserNamesOnSessionList_0269f7e8), (uVar4 & 1) != 0)) {
    uVar11 = local_3b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_GetUserNamesOnSessionList_0269f7e8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_3d0;
    local_3d0 = uVar11;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  uVar4 = local_3d0;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) != 0) {
    _memset(auStack_430,0,0x40);
    uVar4 = local_3d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_738 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,auStack_a8,0x10);
    if (local_738 != 0) {
      lVar10 = *local_420;
      local_740 = 0;
      do {
        do {
          if (*local_420 - lVar10 != 0) {
            _objc_enumerationMutation(*local_420 - lVar10,uVar4);
          }
          uVar11 = *(ulong *)(local_428 + local_740 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_3f0 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar11 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_addObject__0269d180,local_3f0);
          }
          local_740 = local_740 + 1;
        } while (local_740 < local_738);
        local_738 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,auStack_a8,0x10
                  );
        local_740 = 0;
      } while (local_738 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  puVar3 = local_3b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatIncludeFoldedGroups_026b17c8);
  if (((ulong)puVar3 & 1) != 0) {
    pcVar5 = "ChatBoxMgr";
    _objc_getClass();
    FUN_015f9a60();
    _objc_retainAutoreleasedReturnValue();
    local_440 = (char *)0x0;
    local_438 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_valueForKey__0269d128,&cf_chatBoxSessions);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_440;
    local_440 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar5 = local_440;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar5 & 1) != 0) {
      _memset(auStack_490,0,0x40);
      pcVar5 = local_440;
      (*(code *)PTR__objc_retain_02578638)();
      local_790 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_490,auStack_128,0x10
                );
      if (local_790 != (char *)0x0) {
        lVar10 = *local_480;
        local_798 = (char *)0x0;
        do {
          do {
            if (*local_480 - lVar10 != 0) {
              _objc_enumerationMutation(*local_480 - lVar10,pcVar5);
            }
            lVar12 = *(long *)(local_488 + (long)local_798 * 8);
            local_450 = lVar12;
            FUN_01605314();
            _objc_retainAutoreleasedReturnValue();
            local_498 = lVar12;
            (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_length_0269cca0);
            if (lVar12 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_addObject__0269d180,local_498);
            }
            _objc_storeStrong(&local_498,0);
            local_798 = local_798 + 1;
          } while (local_798 < local_790);
          local_790 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_490,auStack_128,
                     0x10);
          local_798 = (char *)0x0;
        } while (local_790 != (char *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    _objc_storeStrong(&local_440);
    _objc_storeStrong(&local_438,0);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_4a0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &local_4e0;
  local_4e0 = PTR___NSConcreteStackBlock_02578660;
  local_4d8 = 0xc2000000;
  local_4d4 = 0;
  local_4d0 = FUN_0160591c;
  local_4c8 = &DAT_0257cbd8;
  local_4a8 = puVar6;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_4a0;
  local_4c0 = puVar6;
  (*(code *)PTR__objc_retain_02578638)();
  local_4b8 = puVar3;
  _objc_retainBlock();
  local_4b0 = ppuVar7;
  if ((local_3ba & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_3c8);
    _objc_retainAutoreleasedReturnValue();
    local_650 = puVar3;
    _memset(auStack_698,0,0x40);
    puVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatTopUsernames_026b15f0);
    _objc_retainAutoreleasedReturnValue();
    local_948 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_948 != (undefined1 *)0x0) {
      lVar10 = *local_688;
      local_950 = (undefined1 *)0x0;
      do {
        do {
          if (*local_688 - lVar10 != 0) {
            _objc_enumerationMutation(*local_688 - lVar10,puVar3);
          }
          local_658 = *(undefined8 *)(local_690 + (long)local_950 * 8);
          puVar6 = local_650;
          (*(code *)PTR__objc_msgSend_02578628)(local_650,PTR_s_containsObject__0269cbb8,local_658);
          if (((ulong)puVar6 & 1) != 0) {
            (*(code *)local_4b0[2])(local_4b0,local_658);
          }
          local_950 = local_950 + 1;
        } while (local_950 < local_948);
        local_948 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_698,auStack_328,
                   0x10);
        local_950 = (undefined1 *)0x0;
      } while (local_948 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_6e0,0,0x40);
    puVar1 = local_3c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_988 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6e0,auStack_3a8,0x10);
    if (local_988 != (undefined1 *)0x0) {
      lVar10 = *local_6d0;
      local_990 = (undefined1 *)0x0;
      do {
        do {
          if (*local_6d0 - lVar10 != 0) {
            _objc_enumerationMutation(*local_6d0 - lVar10,puVar1);
          }
          local_6a0 = *(undefined8 *)(local_6d8 + (long)local_990 * 8);
          (*(code *)local_4b0[2])(local_4b0,local_6a0);
          local_990 = local_990 + 1;
        } while (local_990 < local_988);
        local_988 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6e0,auStack_3a8,
                   0x10);
        local_990 = (undefined1 *)0x0;
      } while (local_988 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_650,0);
  }
  else {
    puVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatPinnedUsernames_026b17f0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_4e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
    puVar8 = local_3b0;
    local_4f0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatTopUsernames_026b15f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_4f8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar8);
    puVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatCustomListedOnly_026b17f8);
    local_4f9 = (byte)puVar3;
    puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_3c8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_4f0;
    ppuVar7 = &local_548;
    local_548 = PTR___NSConcreteStackBlock_02578660;
    local_540 = 0xc2000000;
    local_53c = 0;
    local_538 = FUN_016059fc;
    local_530 = &DAT_02587608;
    local_508 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_508;
    local_528 = puVar6;
    local_518 = local_4f9 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_520 = puVar3;
    _objc_retainBlock();
    local_510 = ppuVar7;
    _memset(auStack_590,0,0x40);
    puVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatTopUsernames_026b15f0);
    _objc_retainAutoreleasedReturnValue();
    local_860 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_860 != (undefined1 *)0x0) {
      lVar10 = *local_580;
      local_868 = (undefined1 *)0x0;
      do {
        do {
          if (*local_580 - lVar10 != 0) {
            _objc_enumerationMutation(*local_580 - lVar10,puVar3);
          }
          local_550 = *(undefined8 *)(local_588 + (long)local_868 * 8);
          ppuVar7 = local_510;
          (*(code *)local_510[2])(local_510,local_550);
          if (((ulong)ppuVar7 & 1) != 0) {
            (*(code *)local_4b0[2])(local_4b0,local_550);
          }
          local_868 = local_868 + 1;
        } while (local_868 < local_860);
        local_860 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_590,auStack_1a8,
                   0x10);
        local_868 = (undefined1 *)0x0;
      } while (local_860 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatCustomFixedOrder_026b1800);
    if (((ulong)puVar3 & 1) == 0) {
      local_888 = local_3c8;
    }
    else {
      local_888 = local_4e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_598 = local_888;
    _memset(auStack_5e0,0,0x40);
    puVar1 = local_598;
    (*(code *)PTR__objc_retain_02578638)();
    local_8b0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5e0,auStack_228,0x10);
    if (local_8b0 != (undefined1 *)0x0) {
      lVar10 = *local_5d0;
      local_8b8 = (undefined1 *)0x0;
      do {
        do {
          if (*local_5d0 - lVar10 != 0) {
            _objc_enumerationMutation(*local_5d0 - lVar10,puVar1);
          }
          local_5a0 = *(undefined8 *)(local_5d8 + (long)local_8b8 * 8);
          ppuVar7 = local_510;
          (*(code *)local_510[2])(local_510,local_5a0);
          if ((((ulong)ppuVar7 & 1) != 0) &&
             (puVar3 = local_4f8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_4f8,PTR_s_containsObject__0269cbb8,local_5a0),
             ((ulong)puVar3 & 1) == 0)) {
            (*(code *)local_4b0[2])(local_4b0,local_5a0);
          }
          local_8b8 = local_8b8 + 1;
        } while (local_8b8 < local_8b0);
        local_8b0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5e0,auStack_228,
                   0x10);
        local_8b8 = (undefined1 *)0x0;
      } while (local_8b0 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_4f9 & 1) == 0) {
      _memset(auStack_628,0,0x40);
      puVar1 = local_4e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_8f0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_628,auStack_2a8,0x10
                );
      if (local_8f0 != (undefined1 *)0x0) {
        lVar10 = *local_618;
        local_8f8 = (undefined1 *)0x0;
        do {
          do {
            if (*local_618 - lVar10 != 0) {
              _objc_enumerationMutation(*local_618 - lVar10,puVar1);
            }
            local_5e8 = *(undefined8 *)(local_620 + (long)local_8f8 * 8);
            puVar3 = local_508;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_508,PTR_s_containsObject__0269cbb8,local_5e8);
            if ((((ulong)puVar3 & 1) == 0) &&
               (uVar4 = local_3b8, FUN_015fa900(local_3b8,local_5e8), (uVar4 & 1) == 0)) {
              local_630 = 0;
              pcVar9 = &cf_GetSessionByUserName_;
              _NSSelectorFromString();
              local_638 = pcVar9;
              if ((local_3b8 != 0) &&
                 (uVar4 = local_3b8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_3b8,PTR_s_respondsToSelector__026ca818,pcVar9), (uVar4 & 1) != 0))
              {
                uVar11 = local_3b8;
                (*(code *)PTR__objc_msgSend_02578628)(local_3b8,local_638,local_5e8);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = local_630;
                local_630 = uVar11;
                (*(code *)PTR__objc_release_02578630)(uVar4);
              }
              if (local_630 == 0) {
                (*(code *)local_4b0[2])(local_4b0,local_5e8);
                local_644 = 0;
              }
              else {
                local_644 = 0xd;
              }
              _objc_storeStrong(&local_630,0);
            }
            local_8f8 = local_8f8 + 1;
          } while (local_8f8 < local_8f0);
          local_8f0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_628,auStack_2a8,
                     0x10);
          local_8f8 = (undefined1 *)0x0;
        } while (local_8f0 != (undefined1 *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_598);
    _objc_storeStrong(&local_510,0);
    _objc_storeStrong(&local_520,0);
    _objc_storeStrong(&local_528,0);
    _objc_storeStrong(&local_508,0);
    _objc_storeStrong(&local_4f8,0);
    _objc_storeStrong(&local_4f0,0);
    _objc_storeStrong(&local_4e8,0);
  }
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  puVar6 = local_3b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatTopUsernames_026b15f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_6e8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  if (((local_3b9 & 1) != 0) &&
     (puVar3 = local_3b0,
     (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_quickChatUnreadFirst_026b1808),
     ((ulong)puVar3 & 1) != 0)) {
    FUN_01605af4(local_4a0,local_6e8);
  }
  puVar3 = local_4a0;
  (*(code *)PTR__objc_retain_02578638)();
  local_644 = 1;
  _objc_storeStrong(&local_6e8);
  _objc_storeStrong(&local_4b0,0);
  _objc_storeStrong(&local_4b8,0);
  _objc_storeStrong(&local_4c0,0);
  _objc_storeStrong(&local_4a8,0);
  _objc_storeStrong(&local_4a0,0);
  _objc_storeStrong(&local_3d0,0);
  _objc_storeStrong(&local_3c8,0);
  _objc_storeStrong(&local_3b8,0);
  _objc_storeStrong(&local_3b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

