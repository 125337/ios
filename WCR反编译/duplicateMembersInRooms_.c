// duplicateMembersInRooms: @ 00edb978

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::duplicateMembersInRooms_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong local_3f0;
  ulong local_3e8;
  undefined1 *local_3a0;
  undefined1 *local_398;
  ulong local_348;
  ulong local_340;
  undefined *local_320;
  undefined4 local_318;
  undefined4 local_314;
  code *local_310;
  undefined *local_308;
  ID local_300;
  undefined *local_2f8;
  undefined *local_2f0;
  ID local_2e8;
  undefined *local_2e0;
  ID local_2d8;
  undefined *local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  undefined8 local_288;
  ID local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  undefined8 local_238;
  undefined *local_230;
  undefined *local_228;
  undefined4 local_21c;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  ulong local_1c8;
  SEL local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = puVar5;
  _memset(auStack_218,0,0x40);
  uVar2 = local_1c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_340 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10);
  if (local_340 != 0) {
    lVar7 = *local_208;
    local_348 = 0;
    do {
      do {
        if (*local_208 - lVar7 != 0) {
          _objc_enumerationMutation(*local_208 - lVar7,uVar2);
        }
        local_1d8 = *(undefined8 *)(local_210 + local_348 * 8);
        IVar3 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_isChatRoomID__0269ec68,local_1d8);
        if ((IVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_1d8);
        }
        local_348 = local_348 + 1;
      } while (local_348 < local_340);
      local_340 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10);
      local_348 = 0;
    } while (local_340 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar4 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0);
  if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_228 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_230 = puVar6;
    _memset(auStack_278,0,0x40);
    puVar4 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_398 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_398 != (undefined1 *)0x0) {
      lVar7 = *local_268;
      local_3a0 = (undefined1 *)0x0;
      do {
        do {
          if (*local_268 - lVar7 != 0) {
            _objc_enumerationMutation(*local_268 - lVar7,puVar4);
          }
          local_238 = *(undefined8 *)(local_270 + (long)local_3a0 * 8);
          IVar3 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_membersInRoom__0269ed78,local_238);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_280 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,IVar3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_230,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_238);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _memset(auStack_2c8,0,0x40);
          IVar3 = local_280;
          (*(code *)PTR__objc_retain_02578638)();
          local_3e8 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_1a8,
                     0x10);
          if (local_3e8 != 0) {
            lVar8 = *local_2b8;
            local_3f0 = 0;
            do {
              do {
                if (*local_2b8 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_2b8 - lVar8,IVar3);
                }
                local_288 = *(undefined8 *)(local_2c0 + local_3f0 * 8);
                puVar5 = local_228;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_228,PTR_s_objectForKeyedSubscript__0269d098,local_288);
                _objc_retainAutoreleasedReturnValue();
                local_2d0 = puVar5;
                if (puVar5 == (undefined *)0x0) {
                  puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = local_2d0;
                  local_2d0 = puVar6;
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_228,PTR_s_setObject_forKeyedSubscript__0269d248,local_2d0,
                             local_288);
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_addObject__0269d180,local_238)
                ;
                _objc_storeStrong(&local_2d0,0);
                local_3f0 = local_3f0 + 1;
              } while (local_3f0 < local_3e8);
              local_3e8 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,
                         auStack_1a8,0x10);
              local_3f0 = 0;
            } while (local_3e8 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(IVar3);
          _objc_storeStrong(&local_280,0);
          local_3a0 = local_3a0 + 1;
        } while (local_3a0 < local_398);
        local_398 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_128,
                   0x10);
        local_3a0 = (undefined1 *)0x0;
      } while (local_398 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_currentUserWxid_0269ec70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_2d8 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_228;
    IVar3 = local_2d8;
    local_320 = PTR___NSConcreteGlobalBlock_02578658;
    local_318 = 0xd0800000;
    local_314 = 0;
    local_310 = FUN_00edc218;
    local_308 = &DAT_02581e60;
    local_2e0 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_2e0;
    local_300 = IVar3;
    local_2e8 = local_1b8;
    (*(code *)PTR__objc_retain_02578638)();
    puVar6 = local_230;
    local_2f8 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_2f0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_320);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_2e0,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02581e80);
    puVar5 = local_2e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar5;
    local_21c = 1;
    _objc_storeStrong(&local_2f0);
    _objc_storeStrong(&local_2f8,0);
    _objc_storeStrong(&local_300,0);
    _objc_storeStrong(&local_2e0,0);
    _objc_storeStrong(&local_2d8,0);
    _objc_storeStrong(&local_230,0);
    _objc_storeStrong(&local_228,0);
  }
  else {
    puVar5 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_21c = 1;
    local_1b0 = puVar5;
  }
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

