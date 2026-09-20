// normalizedEntriesForListKind:includingHidden: @ 0186dee4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x1c bytes */

ID WCRefineBottomBarLongPressActionSelector::normalizedEntriesForListKind_includingHidden_
             (ID param_1,SEL param_2,long_long param_3,bool param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *local_6e0;
  undefined *local_6b8;
  undefined *local_6b0;
  undefined *local_688;
  undefined *local_648;
  undefined *local_640;
  ulong local_5d0;
  ulong local_5c8;
  uint local_594;
  undefined *local_570;
  undefined *local_568;
  ulong local_518;
  ulong local_510;
  undefined *local_4e0;
  undefined *local_4d0;
  undefined *local_4c0;
  undefined *local_4b8;
  undefined4 local_4ac;
  undefined *local_4a8;
  undefined1 auStack_4a0 [8];
  long local_498;
  long *local_490;
  ulong local_460;
  undefined *local_458;
  bool local_449;
  undefined *local_448;
  undefined *local_440;
  undefined1 auStack_438 [8];
  long local_430;
  long *local_428;
  ulong local_3f8;
  undefined *local_3f0;
  undefined1 auStack_3e8 [8];
  long local_3e0;
  long *local_3d8;
  undefined8 local_3a8;
  ulong local_3a0;
  undefined1 auStack_398 [8];
  long local_390;
  long *local_388;
  ulong local_358;
  undefined *local_350;
  undefined *local_348;
  undefined1 auStack_340 [8];
  long local_338;
  long *local_330;
  undefined8 local_300;
  undefined *local_2f8;
  ID local_2f0;
  byte local_2e1;
  long_long local_2e0;
  SEL local_2d8;
  undefined *local_2d0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  undefined *local_2b8;
  ulong local_2b0;
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2e1 = (byte)param_4;
  local_2e0 = param_3;
  local_2d8 = param_2;
  local_2d0 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultEntriesForListKind__026b6c40,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_2f0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_2f8 = puVar5;
  _memset(auStack_340,0,0x40);
  IVar4 = local_2f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_510 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_340,auStack_a8,0x10);
  if (local_510 != 0) {
    lVar9 = *local_330;
    local_518 = 0;
    do {
      do {
        if (*local_330 - lVar9 != 0) {
          _objc_enumerationMutation(*local_330 - lVar9,IVar4);
        }
        puVar5 = local_2f8;
        uVar10 = *(undefined8 *)(local_338 + local_518 * 8);
        uVar12 = uVar10;
        local_300 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_setObject_forKeyedSubscript__0269d248,uVar10);
        (*(code *)PTR__objc_release_02578630)(uVar12);
        local_518 = local_518 + 1;
      } while (local_518 < local_510);
      local_510 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_340,auStack_a8,0x10);
      local_518 = 0;
    } while (local_510 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar5 = local_2d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_savedConfigForListKind__026b6c48,local_2e0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_348 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_350 = puVar6;
  _memset(auStack_398,0,0x40);
  puVar5 = local_348;
  (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_objectForKeyedSubscript__0269d098,&cf_order)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_568 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_568 != (undefined *)0x0) {
    lVar9 = *local_388;
    local_570 = (undefined *)0x0;
    do {
      do {
        if (*local_388 - lVar9 != 0) {
          _objc_enumerationMutation(*local_388 - lVar9,puVar5);
        }
        uVar11 = *(ulong *)(local_390 + (long)local_570 * 8);
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_358 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar6);
        if ((uVar11 & 1) != 0) {
          uVar11 = local_358;
          FUN_0186efec();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_2f8;
          local_3a0 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,uVar11);
          _objc_retainAutoreleasedReturnValue();
          local_594 = 0;
          if (puVar6 != (undefined *)0x0) {
            puVar7 = local_350;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_350,PTR_s_containsObject__0269cbb8,local_3a0);
            local_594 = (uint)puVar7 ^ 1;
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          if ((local_594 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_addObject__0269d180,local_3a0);
          }
          _objc_storeStrong(&local_3a0,0);
        }
        local_570 = local_570 + 1;
      } while (local_570 < local_568);
      local_568 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,auStack_128,0x10
                );
      local_570 = (undefined *)0x0;
    } while (local_568 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _memset(auStack_3e8,0,0x40);
  IVar4 = local_2f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_5c8 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e8,auStack_1a8,0x10);
  if (local_5c8 != 0) {
    lVar9 = *local_3d8;
    local_5d0 = 0;
    do {
      do {
        if (*local_3d8 - lVar9 != 0) {
          _objc_enumerationMutation(*local_3d8 - lVar9,IVar4);
        }
        puVar5 = local_350;
        uVar12 = *(undefined8 *)(local_3e0 + local_5d0 * 8);
        local_3a8 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar12);
        puVar6 = local_350;
        if (((ulong)puVar5 & 1) == 0) {
          uVar12 = local_3a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar12);
        }
        local_5d0 = local_5d0 + 1;
      } while (local_5d0 < local_5c8);
      local_5c8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e8,auStack_1a8,0x10)
      ;
      local_5d0 = 0;
    } while (local_5c8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_348;
  local_3f0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_348,PTR_s_objectForKeyedSubscript__0269d098,&cf_hidden);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  if (((ulong)puVar7 & 1) != 0) {
    _memset(auStack_438,0,0x40);
    puVar5 = local_348;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_348,PTR_s_objectForKeyedSubscript__0269d098,&cf_hidden);
    _objc_retainAutoreleasedReturnValue();
    local_640 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_640 != (undefined *)0x0) {
      lVar9 = *local_428;
      local_648 = (undefined *)0x0;
      do {
        do {
          if (*local_428 - lVar9 != 0) {
            _objc_enumerationMutation(*local_428 - lVar9,puVar5);
          }
          uVar11 = *(ulong *)(local_430 + (long)local_648 * 8);
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_3f8 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar6);
          puVar6 = local_3f0;
          if ((uVar11 & 1) != 0) {
            uVar11 = local_3f8;
            FUN_0186efec();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(uVar11);
          }
          local_648 = local_648 + 1;
        } while (local_648 < local_640);
        local_640 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_438,auStack_228,
                   0x10);
        local_648 = (undefined *)0x0;
      } while (local_640 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  puVar5 = local_348;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_348,PTR_s_objectForKeyedSubscript__0269d098,&cf_titles);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  puVar7 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
  local_449 = false;
  bVar1 = ((ulong)puVar7 & 1) == 0;
  if (bVar1) {
    local_688 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  else {
    local_688 = local_348;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_348,PTR_s_objectForKeyedSubscript__0269d098,&cf_titles);
    _objc_retainAutoreleasedReturnValue();
    local_448 = local_688;
  }
  local_449 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_440 = local_688;
  if ((local_449 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_448);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_458 = puVar5;
  _memset(auStack_4a0,0,0x40);
  puVar5 = local_350;
  (*(code *)PTR__objc_retain_02578638)();
  local_6b0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a0,auStack_2a8,0x10);
  if (local_6b0 != (undefined *)0x0) {
    lVar9 = *local_490;
    local_6b8 = (undefined *)0x0;
    do {
      do {
        if (*local_490 - lVar9 != 0) {
          _objc_enumerationMutation(*local_490 - lVar9,puVar5);
        }
        local_460 = *(ulong *)(local_498 + (long)local_6b8 * 8);
        puVar6 = local_2f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,local_460);
        _objc_retainAutoreleasedReturnValue();
        local_4a8 = puVar6;
        if ((puVar6 == (undefined *)0x0) ||
           (((local_2e1 & 1) == 0 &&
            (puVar6 = local_3f0,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3f0,PTR_s_containsObject__0269cbb8,local_460), ((ulong)puVar6 & 1) != 0
            )))) {
          local_4ac = 0xb;
        }
        else {
          puVar6 = local_440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_440,PTR_s_objectForKeyedSubscript__0269d098,local_460);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          puVar8 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
          bVar3 = false;
          bVar2 = false;
          bVar1 = false;
          if (((ulong)puVar8 & 1) == 0) {
LAB_0186ec88:
            local_6e0 = local_4a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_4a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            local_4e0 = local_6e0;
          }
          else {
            local_4c0 = local_440;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_440,PTR_s_objectForKeyedSubscript__0269d098,local_460);
            _objc_retainAutoreleasedReturnValue();
            bVar3 = true;
            puVar7 = local_4c0;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (puVar7 == (undefined *)0x0) goto LAB_0186ec88;
            local_6e0 = local_440;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_440,PTR_s_objectForKeyedSubscript__0269d098,local_460);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            local_4d0 = local_6e0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_4b8 = local_6e0;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_4e0);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_4d0);
          }
          if (bVar3) {
            (*(code *)PTR__objc_release_02578630)(local_4c0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar11 = local_460;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_460,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTogglePrivateFriend);
          if (((uVar11 & 1) != 0) ||
             (uVar11 = local_460,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_460,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTogglePluginHub),
             (uVar11 & 1) != 0)) {
            puVar7 = local_2d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2d0,PTR_s_displayNameForStoredAction__026b6be8,local_460);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_4b8;
            local_4b8 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          puVar6 = local_458;
          local_2c8 = &cf_title;
          local_2b8 = local_4b8;
          local_2c0 = &cf_value;
          local_2b0 = local_460;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_2b8,&local_2c8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          _objc_storeStrong(&local_4b8,0);
          local_4ac = 0;
        }
        _objc_storeStrong(&local_4a8,0);
        local_6b8 = local_6b8 + 1;
      } while (local_6b8 < local_6b0);
      local_6b0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a0,auStack_2a8,0x10
                );
      local_6b8 = (undefined *)0x0;
    } while (local_6b0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_458;
  (*(code *)PTR__objc_retain_02578638)();
  local_4ac = 1;
  _objc_storeStrong(&local_458);
  _objc_storeStrong(&local_440,0);
  _objc_storeStrong(&local_3f0,0);
  _objc_storeStrong(&local_350,0);
  _objc_storeStrong(&local_348,0);
  _objc_storeStrong(&local_2f8,0);
  _objc_storeStrong(&local_2f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar5;
}

