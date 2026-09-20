// wcrAvatarRefreshAllUserNames: @ 01a6a5ec

/* Function Stack Size: 0x18 bytes */

ID WCRefineGeneralFunctionViewController::wcrAvatarRefreshAllUserNames_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *local_6c0;
  undefined *local_690;
  undefined *local_688;
  undefined *local_638;
  undefined *local_630;
  ulong local_5d8;
  ulong local_5d0;
  undefined *local_570;
  undefined *local_568;
  undefined *local_530;
  undefined *local_528;
  undefined1 auStack_498 [8];
  long local_490;
  long *local_488;
  ulong local_458;
  undefined *local_450;
  undefined1 auStack_448 [8];
  long local_440;
  long *local_438;
  ulong local_408;
  undefined *local_400;
  ulong local_3f8;
  undefined1 auStack_3f0 [8];
  long local_3e8;
  long *local_3e0;
  ulong local_3b0;
  undefined4 local_3a4;
  ulong local_3a0;
  undefined1 auStack_398 [8];
  long local_390;
  long *local_388;
  undefined8 local_358;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  ulong local_310;
  undefined *local_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2f0;
  ulong local_2e8;
  SEL local_2e0;
  ID local_2d8;
  undefined1 auStack_2d0 [128];
  undefined1 auStack_250 [128];
  undefined1 auStack_1d0 [128];
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [128];
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2e8 = 0;
  local_2e0 = param_2;
  local_2d8 = param_1;
  _objc_storeStrong(&local_2e8,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_2f8 = PTR_s_getContactList_contactType__026a2fc8;
  local_2f0 = puVar1;
  if ((local_2e8 != 0) &&
     (uVar11 = local_2e8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_2e8,PTR_s_respondsToSelector__026ca818,
                PTR_s_getContactList_contactType__026a2fc8), (uVar11 & 1) != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_300 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_308 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_350,0,0x40);
    puVar1 = local_300;
    (*(code *)PTR__objc_retain_02578638)();
    local_528 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_d0,0x10);
    if (local_528 != (undefined *)0x0) {
      lVar7 = *local_340;
      local_530 = (undefined *)0x0;
      do {
        do {
          if (*local_340 - lVar7 != 0) {
            _objc_enumerationMutation(*local_340 - lVar7,puVar1);
          }
          local_310 = *(ulong *)(local_348 + (long)local_530 * 8);
          _memset(auStack_398,0,0x40);
          puVar2 = local_308;
          (*(code *)PTR__objc_retain_02578638)();
          local_568 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,auStack_150,
                     0x10);
          if (local_568 != (undefined *)0x0) {
            lVar8 = *local_388;
            local_570 = (undefined *)0x0;
            do {
              do {
                if (*local_388 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_388 - lVar8,puVar2);
                }
                uVar11 = local_2e8;
                puVar3 = local_2f8;
                local_358 = *(undefined8 *)(local_390 + (long)local_570 * 8);
                uVar10 = local_310;
                (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_unsignedIntValue_0269db10);
                uVar5 = local_358;
                (*(code *)PTR__objc_msgSend_02578628)(local_358,PTR_s_unsignedIntValue_0269db10);
                (*(code *)PTR__objc_msgSend_02578628)(uVar11,puVar3,uVar10 & 0xffffffff,uVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_3a0 = uVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
                if ((uVar11 & 1) == 0) {
                  local_3a4 = 5;
                }
                else {
                  _memset(auStack_3f0,0,0x40);
                  uVar11 = local_3a0;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_5d0 = uVar11;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f0,
                             auStack_1d0,0x10);
                  if (local_5d0 != 0) {
                    lVar9 = *local_3e0;
                    local_5d8 = 0;
                    do {
                      do {
                        if (*local_3e0 - lVar9 != 0) {
                          _objc_enumerationMutation(*local_3e0 - lVar9,uVar11);
                        }
                        uVar10 = *(ulong *)(local_3e8 + local_5d8 * 8);
                        local_3f8 = 0;
                        local_3b0 = uVar10;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar10,PTR_s_respondsToSelector__026ca818,
                                   PTR_s_m_nsUsrName_0269d638);
                        if ((uVar10 & 1) != 0) {
                          uVar6 = local_3b0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_3b0,PTR_s_m_nsUsrName_0269d638);
                          _objc_retainAutoreleasedReturnValue();
                          uVar10 = local_3f8;
                          local_3f8 = uVar6;
                          (*(code *)PTR__objc_release_02578630)(uVar10);
                        }
                        uVar10 = local_3f8;
                        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar10,PTR_s_isKindOfClass__0269cd68,puVar3);
                        if (((uVar10 & 1) == 0) ||
                           (uVar10 = local_3f8,
                           (*(code *)PTR__objc_msgSend_02578628)(local_3f8,PTR_s_length_0269cca0),
                           uVar10 == 0)) {
                          local_3a4 = 7;
                        }
                        else {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_2f0,PTR_s_addObject__0269d180,local_3f8);
                          local_3a4 = 0;
                        }
                        _objc_storeStrong(&local_3f8,0);
                        local_5d8 = local_5d8 + 1;
                      } while (local_5d8 < local_5d0);
                      local_5d0 = uVar11;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f0,
                                 auStack_1d0,0x10);
                      local_5d8 = 0;
                    } while (local_5d0 != 0);
                  }
                  (*(code *)PTR__objc_release_02578630)(uVar11);
                  local_3a4 = 0;
                }
                _objc_storeStrong(&local_3a0,0);
                local_570 = local_570 + 1;
              } while (local_570 < local_568);
              local_568 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,
                         auStack_150,0x10);
              local_570 = (undefined *)0x0;
            } while (local_568 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_530 = local_530 + 1;
        } while (local_530 < local_528);
        local_528 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_d0,
                   0x10);
        local_530 = (undefined *)0x0;
      } while (local_528 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_308);
    _objc_storeStrong(&local_300,0);
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_400 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_400;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    _memset(auStack_448,0,0x40);
    puVar1 = local_400;
    (*(code *)PTR__objc_retain_02578638)();
    local_630 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448,auStack_250,0x10);
    if (local_630 != (undefined *)0x0) {
      lVar7 = *local_438;
      local_638 = (undefined *)0x0;
      do {
        do {
          if (*local_438 - lVar7 != 0) {
            _objc_enumerationMutation(*local_438 - lVar7,puVar1);
          }
          uVar11 = *(ulong *)(local_440 + (long)local_638 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_408 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar11 & 1) != 0) &&
             (uVar11 = local_408,
             (*(code *)PTR__objc_msgSend_02578628)(local_408,PTR_s_length_0269cca0), uVar11 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_addObject__0269d180,local_408);
          }
          local_638 = local_638 + 1;
        } while (local_638 < local_630);
        local_630 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448,auStack_250,
                   0x10);
        local_638 = (undefined *)0x0;
      } while (local_630 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_450 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_450;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    _memset(auStack_498,0,0x40);
    puVar1 = local_450;
    (*(code *)PTR__objc_retain_02578638)();
    local_688 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_498,auStack_2d0,0x10);
    if (local_688 != (undefined *)0x0) {
      lVar7 = *local_488;
      local_690 = (undefined *)0x0;
      do {
        do {
          if (*local_488 - lVar7 != 0) {
            _objc_enumerationMutation(*local_488 - lVar7,puVar1);
          }
          uVar11 = *(ulong *)(local_490 + (long)local_690 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_458 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar11 & 1) != 0) &&
             (uVar11 = local_458,
             (*(code *)PTR__objc_msgSend_02578628)(local_458,PTR_s_length_0269cca0), uVar11 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_addObject__0269d180,local_458);
          }
          local_690 = local_690 + 1;
        } while (local_690 < local_688);
        local_688 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_498,auStack_2d0,
                   0x10);
        local_690 = (undefined *)0x0;
      } while (local_688 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_2f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_6c0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_6c0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_3a4 = 1;
  _objc_storeStrong(&local_450);
  _objc_storeStrong(&local_400,0);
  _objc_storeStrong(&local_2f0,0);
  _objc_storeStrong(&local_2e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_6c0;
}

