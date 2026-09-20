// allChatRoomUserNames @ 00ede7c4

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatRoomMuteHelper::allChatRoomUserNames(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined **ppuVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *local_670;
  ulong local_600;
  ulong local_5f8;
  undefined *local_578;
  undefined *local_570;
  undefined *local_500;
  undefined *local_4f8;
  ulong local_480;
  ulong local_478;
  undefined *local_430;
  undefined4 local_428;
  undefined4 local_424;
  code *local_420;
  undefined *local_418;
  undefined **local_410;
  ID local_408;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  undefined8 local_3c0;
  undefined4 local_3b4;
  ID local_3a8;
  undefined1 auStack_3a0 [8];
  long local_398;
  long *local_390;
  ulong local_360;
  undefined1 auStack_358 [8];
  long local_350;
  long *local_348;
  ulong local_318;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  undefined8 local_2d0;
  ID local_2b0;
  undefined *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  undefined *local_290;
  undefined *local_288;
  ID local_280;
  undefined **local_278;
  ID local_270;
  undefined *local_268;
  SEL local_260;
  ID local_258;
  undefined1 auStack_250 [128];
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1b8 [128];
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_260 = param_2;
  local_258 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_258;
  local_268 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_wcr_contactMgr_026ab088);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_268;
  ppuVar3 = &local_2a8;
  local_2a8 = PTR___NSConcreteStackBlock_02578660;
  local_2a0 = 0xc2000000;
  local_29c = 0;
  local_298 = FUN_00edf4f4;
  local_290 = &DAT_02581ea0;
  local_280 = local_258;
  local_270 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_288 = puVar1;
  _objc_retainBlock();
  local_278 = ppuVar3;
  if ((local_270 != 0) &&
     (IVar2 = local_270,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_270,PTR_s_respondsToSelector__026ca818,
                PTR_s_getAllContactUserNameFromCache_026ab758), (IVar2 & 1) != 0)) {
    local_2b0 = 0;
    IVar4 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_getAllContactUserNameFromCache_026ab758);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_2b0;
    local_2b0 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_2b0;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((IVar2 & 1) != 0) {
      _memset(auStack_310,0,0x40);
      IVar2 = local_2b0;
      (*(code *)PTR__objc_retain_02578638)();
      local_478 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_a8,0x10);
      if (local_478 != 0) {
        lVar11 = *local_300;
        local_480 = 0;
        do {
          do {
            if (*local_300 - lVar11 != 0) {
              _objc_enumerationMutation(*local_300 - lVar11,IVar2);
            }
            local_2d0 = *(undefined8 *)(local_308 + local_480 * 8);
            (*(code *)local_278[2])(local_278,local_2d0);
            local_480 = local_480 + 1;
          } while (local_480 < local_478);
          local_478 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_a8,
                     0x10);
          local_480 = 0;
        } while (local_478 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    _objc_storeStrong(&local_2b0,0);
  }
  puVar1 = local_268;
  (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_count_0269cfe0);
  if (((puVar1 == (undefined *)0x0) && (local_270 != 0)) &&
     (IVar2 = local_270,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_270,PTR_s_respondsToSelector__026ca818,
                PTR_s_getContactList_contactType__026a2fc8), (IVar2 & 1) != 0)) {
    _memset(auStack_358,0,0x40);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_138 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_130 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_138,
               2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_4f8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,auStack_128,0x10);
    if (local_4f8 != (undefined *)0x0) {
      lVar11 = *local_348;
      local_500 = (undefined *)0x0;
      do {
        do {
          if (*local_348 - lVar11 != 0) {
            _objc_enumerationMutation(*local_348 - lVar11,puVar6);
          }
          local_318 = *(ulong *)(local_350 + (long)local_500 * 8);
          _memset(auStack_3a0,0,0x40);
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_1d0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_1c8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_1c0 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_1d0,3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          local_570 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a0,auStack_1b8,
                     0x10);
          if (local_570 != (undefined *)0x0) {
            lVar12 = *local_390;
            local_578 = (undefined *)0x0;
            do {
              do {
                if (*local_390 - lVar12 != 0) {
                  _objc_enumerationMutation(*local_390 - lVar12,puVar8);
                }
                IVar4 = local_270;
                puVar1 = PTR_s_getContactList_contactType__026a2fc8;
                local_360 = *(ulong *)(local_398 + (long)local_578 * 8);
                local_3a8 = 0;
                uVar9 = local_318;
                (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_unsignedIntValue_0269db10);
                uVar10 = local_360;
                (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_unsignedIntValue_0269db10);
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar4,puVar1,uVar9 & 0xffffffff,uVar10 & 0xffffffff);
                _objc_retainAutoreleasedReturnValue();
                IVar2 = local_3a8;
                local_3a8 = IVar4;
                (*(code *)PTR__objc_release_02578630)(IVar2);
                IVar2 = local_3a8;
                puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
                if ((IVar2 & 1) == 0) {
                  local_3b4 = 8;
                }
                else {
                  _memset(auStack_400,0,0x40);
                  IVar2 = local_3a8;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_5f8 = IVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,
                             auStack_250,0x10);
                  if (local_5f8 != 0) {
                    lVar13 = *local_3f0;
                    local_600 = 0;
                    do {
                      do {
                        if (*local_3f0 - lVar13 != 0) {
                          _objc_enumerationMutation(*local_3f0 - lVar13,IVar2);
                        }
                        local_3c0 = *(undefined8 *)(local_3f8 + local_600 * 8);
                        (*(code *)local_278[2])(local_278,local_3c0);
                        local_600 = local_600 + 1;
                      } while (local_600 < local_5f8);
                      local_5f8 = IVar2;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,
                                 auStack_250,0x10);
                      local_600 = 0;
                    } while (local_5f8 != 0);
                  }
                  (*(code *)PTR__objc_release_02578630)(IVar2);
                  local_3b4 = 0;
                }
                _objc_storeStrong(&local_3a8,0);
                local_578 = local_578 + 1;
              } while (local_578 < local_570);
              local_570 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a0,
                         auStack_1b8,0x10);
              local_578 = (undefined *)0x0;
            } while (local_570 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar8);
          local_500 = local_500 + 1;
        } while (local_500 < local_4f8);
        local_4f8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,auStack_128,
                   0x10);
        local_500 = (undefined *)0x0;
      } while (local_4f8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  puVar1 = local_268;
  (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_count_0269cfe0);
  if ((puVar1 == (undefined *)0x0) && (local_270 != 0)) {
    IVar4 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_valueForKey__0269d128,&cf_m_dicContacts);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_408 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    ppuVar3 = local_278;
    IVar2 = local_408;
    if ((IVar4 & 1) != 0) {
      local_430 = PTR___NSConcreteGlobalBlock_02578658;
      local_428 = 0xd0800000;
      local_424 = 0;
      local_420 = FUN_00edf5c0;
      local_418 = &DAT_02579a30;
      (*(code *)PTR__objc_retain_02578638)();
      local_410 = ppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_430);
      _objc_storeStrong(&local_410,0);
    }
    _objc_storeStrong(&local_408,0);
  }
  puVar1 = local_268;
  (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_670 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_670 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_3b4 = 1;
  _objc_storeStrong(&local_278);
  _objc_storeStrong(&local_288,0);
  _objc_storeStrong(&local_270,0);
  _objc_storeStrong(&local_268,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_670;
}

