// syncMembersForGroupWithId:added:removed: @ 01ad8ab8

/* Function Stack Size: 0x28 bytes */

long_long WCRefineGroupManager::syncMembersForGroupWithId_added_removed_
                    (ID param_1,SEL param_2,ID param_3,long_long *param_4,long_long *param_5)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_758;
  undefined *local_750;
  uint local_72c;
  undefined *local_708;
  undefined *local_700;
  ID local_6d8;
  ulong local_6a0;
  ulong local_698;
  ulong local_658;
  ulong local_650;
  ulong local_610;
  ulong local_608;
  ulong local_5c8;
  ulong local_5c0;
  ID local_598;
  ID local_580;
  ID local_560;
  undefined1 auStack_558 [8];
  long local_550;
  long *local_548;
  undefined8 local_518;
  long_long local_510;
  byte local_501;
  ulong local_500;
  undefined1 auStack_4f8 [8];
  long local_4f0;
  long *local_4e8;
  ulong local_4b8;
  long_long local_4b0;
  undefined *local_4a8;
  undefined1 auStack_4a0 [8];
  long local_498;
  long *local_490;
  ulong local_460;
  undefined1 auStack_458 [8];
  long local_450;
  long *local_448;
  ulong local_418;
  undefined1 auStack_410 [8];
  long local_408;
  long *local_400;
  ulong local_3d0;
  undefined1 auStack_3c8 [8];
  long local_3c0;
  long *local_3b8;
  ulong local_388;
  undefined *local_380;
  ID local_378;
  ID local_370;
  undefined4 local_364;
  ID local_360;
  long_long *local_358;
  long_long *local_350;
  undefined8 local_348;
  SEL local_340;
  ID local_338;
  long_long local_330;
  undefined1 auStack_328 [128];
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_348 = 0;
  local_340 = param_2;
  local_338 = param_1;
  _objc_storeStrong(&local_348,param_3);
  if (param_4 != (long_long *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (long_long *)0x0) {
    *param_5 = 0;
  }
  IVar1 = local_338;
  local_358 = param_5;
  local_350 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_groupForId__026a27e0,local_348);
  _objc_retainAutoreleasedReturnValue();
  local_360 = IVar1;
  if ((IVar1 == 0) || ((*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_kind_026a27e8), IVar1 != 0)
     ) {
    local_330 = 0xffffffffffffffff;
    local_364 = 1;
  }
  else {
    IVar1 = local_360;
    (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_memberSyncChatRooms_026bdb48);
    _objc_retainAutoreleasedReturnValue();
    local_580 = IVar1;
    if (IVar1 == 0) {
      local_580 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_370 = local_580;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_360;
    (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_memberSyncTags_026bdb50);
    _objc_retainAutoreleasedReturnValue();
    local_598 = IVar1;
    if (IVar1 == 0) {
      local_598 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_378 = local_598;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_370;
    (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_count_0269cfe0);
    if ((IVar1 == 0) &&
       (IVar1 = local_378, (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_count_0269cfe0),
       IVar1 == 0)) {
      local_330 = 0xffffffffffffffff;
      local_364 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_380 = puVar2;
      _memset(auStack_3c8,0,0x40);
      IVar1 = local_378;
      (*(code *)PTR__objc_retain_02578638)();
      local_5c0 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c8,auStack_a8,0x10);
      if (local_5c0 != 0) {
        lVar5 = *local_3b8;
        local_5c8 = 0;
        do {
          do {
            if (*local_3b8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_3b8 - lVar5,IVar1);
            }
            uVar6 = *(ulong *)(local_3c0 + local_5c8 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_388 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar6 & 1) != 0) &&
               (uVar6 = local_388,
               (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_length_0269cca0), uVar6 != 0))
            {
              _memset(auStack_410,0,0x40);
              uVar6 = local_388;
              FUN_01ad9a18();
              _objc_retainAutoreleasedReturnValue();
              local_608 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_608 != 0) {
                lVar7 = *local_400;
                local_610 = 0;
                do {
                  do {
                    if (*local_400 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_400 - lVar7,uVar6);
                    }
                    uVar8 = *(ulong *)(local_408 + local_610 * 8);
                    IVar3 = local_360;
                    local_3d0 = uVar8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_scope_0269ea90);
                    FUN_01ad9e98(uVar8,IVar3);
                    if ((uVar8 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_380,PTR_s_addObject__0269d180,local_3d0);
                    }
                    local_610 = local_610 + 1;
                  } while (local_610 < local_608);
                  local_608 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_410,
                             auStack_128,0x10);
                  local_610 = 0;
                } while (local_608 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            local_5c8 = local_5c8 + 1;
          } while (local_5c8 < local_5c0);
          local_5c0 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c8,auStack_a8,
                     0x10);
          local_5c8 = 0;
        } while (local_5c0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      _memset(auStack_458,0,0x40);
      IVar1 = local_370;
      (*(code *)PTR__objc_retain_02578638)();
      local_650 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_458,auStack_1a8,0x10)
      ;
      if (local_650 != 0) {
        lVar5 = *local_448;
        local_658 = 0;
        do {
          do {
            if (*local_448 - lVar5 != 0) {
              _objc_enumerationMutation(*local_448 - lVar5,IVar1);
            }
            uVar6 = *(ulong *)(local_450 + local_658 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_418 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar6 & 1) != 0) &&
               (uVar6 = local_418,
               (*(code *)PTR__objc_msgSend_02578628)(local_418,PTR_s_length_0269cca0), uVar6 != 0))
            {
              _memset(auStack_4a0,0,0x40);
              uVar6 = local_418;
              FUN_01ada098();
              _objc_retainAutoreleasedReturnValue();
              local_698 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_698 != 0) {
                lVar7 = *local_490;
                local_6a0 = 0;
                do {
                  do {
                    if (*local_490 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_490 - lVar7,uVar6);
                    }
                    uVar8 = *(ulong *)(local_498 + local_6a0 * 8);
                    IVar3 = local_360;
                    local_460 = uVar8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_scope_0269ea90);
                    FUN_01ad9e98(uVar8,IVar3);
                    if ((uVar8 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_380,PTR_s_addObject__0269d180,local_460);
                    }
                    local_6a0 = local_6a0 + 1;
                  } while (local_6a0 < local_698);
                  local_698 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a0,
                             auStack_228,0x10);
                  local_6a0 = 0;
                } while (local_698 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            local_658 = local_658 + 1;
          } while (local_658 < local_650);
          local_650 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_458,auStack_1a8,
                     0x10);
          local_658 = 0;
        } while (local_650 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      IVar1 = local_360;
      (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_members_0269ea98);
      _objc_retainAutoreleasedReturnValue();
      local_6d8 = IVar1;
      if (IVar1 == 0) {
        local_6d8 = *(ID *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_orderedSetWithArray__026a4b80,local_6d8);
      _objc_retainAutoreleasedReturnValue();
      local_4a8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_4b0 = 0;
      _memset(auStack_4f8,0,0x40);
      puVar2 = local_4a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_4a8,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_700 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f8,auStack_2a8,0x10
                );
      if (local_700 != (undefined *)0x0) {
        lVar5 = *local_4e8;
        local_708 = (undefined *)0x0;
        do {
          do {
            if (*local_4e8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_4e8 - lVar5,puVar4);
            }
            uVar6 = *(ulong *)(local_4f0 + (long)local_708 * 8);
            IVar1 = local_360;
            local_4b8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_scope_0269ea90);
            FUN_01ad9e98(uVar6,IVar1);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_4b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_4b8,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              local_500 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_hasSuffix__0269d018,&cf__chatroom);
              local_72c = 1;
              if ((uVar6 & 1) == 0) {
                uVar6 = local_500;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_500,PTR_s_hasSuffix__0269d018,&cf__im_chatroom);
                local_72c = (uint)uVar6;
              }
              local_501 = (byte)local_72c & 1;
              if ((local_72c & 1) == 0) {
                puVar2 = local_380;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_380,PTR_s_containsObject__0269cbb8,local_4b8);
                if (((ulong)puVar2 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4a8,PTR_s_removeObject__0269d678,local_4b8);
                  local_4b0 = local_4b0 + 1;
                  local_364 = 0;
                }
                else {
                  local_364 = 0xb;
                }
              }
              else {
                local_364 = 0xb;
              }
              _objc_storeStrong(&local_500,0);
            }
            local_708 = local_708 + 1;
          } while (local_708 < local_700);
          local_700 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f8,auStack_2a8,
                     0x10);
          local_708 = (undefined *)0x0;
        } while (local_700 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_510 = 0;
      _memset(auStack_558,0,0x40);
      puVar2 = local_380;
      (*(code *)PTR__objc_retain_02578638)();
      local_750 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_558,auStack_328,0x10
                );
      if (local_750 != (undefined *)0x0) {
        lVar5 = *local_548;
        local_758 = (undefined *)0x0;
        do {
          do {
            if (*local_548 - lVar5 != 0) {
              _objc_enumerationMutation(*local_548 - lVar5,puVar2);
            }
            local_518 = *(undefined8 *)(local_550 + (long)local_758 * 8);
            puVar4 = local_4a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_4a8,PTR_s_containsObject__0269cbb8,local_518);
            if (((ulong)puVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_4a8,PTR_s_addObject__0269d180,local_518);
              local_510 = local_510 + 1;
            }
            local_758 = local_758 + 1;
          } while (local_758 < local_750);
          local_750 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_558,auStack_328,
                     0x10);
          local_758 = (undefined *)0x0;
        } while (local_750 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_358 != (long_long *)0x0) {
        *local_358 = local_4b0;
      }
      if (local_350 != (long_long *)0x0) {
        *local_350 = local_510;
      }
      if ((local_510 == 0) && (local_4b0 == 0)) {
        local_330 = 0;
        local_364 = 1;
      }
      else {
        IVar1 = local_360;
        (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_copy_0269d150);
        puVar2 = local_4a8;
        local_560 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_4a8,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_560,PTR_s_setMembers__026b00e0);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        IVar1 = local_338;
        (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_updateGroup__026a2db0,local_560);
        if ((IVar1 & 1) == 0) {
          if (local_350 != (long_long *)0x0) {
            *local_350 = 0;
          }
          if (local_358 != (long_long *)0x0) {
            *local_358 = 0;
          }
          local_330 = 0xffffffffffffffff;
        }
        else {
          local_330 = 1;
        }
        local_364 = 1;
        _objc_storeStrong(&local_560,0);
      }
      _objc_storeStrong(&local_4a8);
      _objc_storeStrong(&local_380,0);
    }
    _objc_storeStrong(&local_378);
    _objc_storeStrong(&local_370,0);
  }
  _objc_storeStrong(&local_360);
  _objc_storeStrong(&local_348,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_330;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

