// controllerSuggestionsForPageName: @ 01ccc9e8

/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileCardActionConfigViewController::controllerSuggestionsForPageName_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *local_3f8;
  undefined *local_3f0;
  ulong local_3b0;
  ulong local_3a8;
  ulong local_358;
  ulong local_350;
  ID local_308;
  undefined1 auStack_300 [8];
  long local_2f8;
  long *local_2f0;
  undefined8 local_2c0;
  undefined *local_2b8;
  ulong local_2b0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  ulong local_268;
  undefined *local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  ulong local_218;
  undefined *local_210;
  ID local_208;
  ID local_200;
  ulong local_1f8;
  undefined4 local_1ec;
  ulong local_1e8;
  ID local_1e0;
  ulong local_1d8;
  SEL local_1d0;
  ID local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1b8 [128];
  undefined1 auStack_138 [128];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1d8 = 0;
  local_1d0 = param_2;
  local_1c8 = param_1;
  _objc_storeStrong(&local_1d8,param_3);
  IVar1 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_1d8;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_1e0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = uVar6;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar6 = local_1e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0);
  if (uVar6 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1ec = 1;
    local_1c0 = puVar2;
  }
  else {
    uVar6 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_1e8;
    local_1f8 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_containsString__0269d0b0,&cf_WCRefine);
    if (((uVar3 & 1) == 0) &&
       (uVar6 = local_1f8,
       (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_containsString__0269d0b0,&cf_wcrefine),
       (uVar6 & 1) == 0)) {
      uVar6 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_containsString__0269d0b0,&cf___);
      if ((((uVar6 & 1) == 0) &&
          (uVar6 = local_1f8,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f8,PTR_s_containsString__0269d0b0,&cf_xxuegao), (uVar6 & 1) == 0)) &&
         (uVar6 = local_1f8,
         (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_containsString__0269d0b0,&cf_xuegao),
         (uVar6 & 1) == 0)) {
        uVar6 = local_1e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_containsString__0269d0b0,&cf_mo_O__);
        if (((uVar6 & 1) == 0) &&
           (uVar6 = local_1f8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1f8,PTR_s_containsString__0269d0b0,&cf_msgfilt), (uVar6 & 1) == 0)) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_260 = puVar2;
          _memset(auStack_2a8,0,0x40);
          IVar1 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_allKeys_0269ef58);
          _objc_retainAutoreleasedReturnValue();
          local_3a8 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_3a8 != 0) {
            lVar5 = *local_298;
            local_3b0 = 0;
            do {
              do {
                if (*local_298 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_298 - lVar5,IVar1);
                }
                uVar6 = *(ulong *)(local_2a0 + local_3b0 * 8);
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_268 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
                if ((uVar6 & 1) != 0) {
                  uVar6 = local_268;
                  (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_lowercaseString_0269d9c0);
                  _objc_retainAutoreleasedReturnValue();
                  local_2b0 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_isEqualToString__0269ccc8,local_1f8);
                  if ((uVar6 & 1) == 0) {
                    uVar6 = local_2b0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2b0,PTR_s_containsString__0269d0b0,local_1f8);
                    if (((uVar6 & 1) != 0) ||
                       (uVar6 = local_1f8,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_1f8,PTR_s_containsString__0269d0b0,local_2b0),
                       (uVar6 & 1) != 0)) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_260,PTR_s_addObject__0269d180,local_268);
                    }
                    local_1ec = 0;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_260,PTR_s_insertObject_atIndex__0269eac0,local_268,0);
                    local_1ec = 5;
                  }
                  _objc_storeStrong(&local_2b0,0);
                }
                local_3b0 = local_3b0 + 1;
              } while (local_3b0 < local_3a8);
              local_3a8 = IVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,
                         auStack_138,0x10);
              local_3b0 = 0;
            } while (local_3a8 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(IVar1);
          puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
          _objc_retainAutoreleasedReturnValue();
          local_2b8 = puVar2;
          _memset(auStack_300,0,0x40);
          puVar2 = local_260;
          (*(code *)PTR__objc_retain_02578638)();
          local_3f0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_1b8,
                     0x10);
          if (local_3f0 != (undefined *)0x0) {
            lVar5 = *local_2f0;
            local_3f8 = (undefined *)0x0;
            do {
              do {
                if (*local_2f0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_2f0 - lVar5,puVar2);
                }
                IVar1 = local_1c8;
                uVar7 = *(undefined8 *)(local_2f8 + (long)local_3f8 * 8);
                IVar4 = local_1e0;
                local_2c0 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,uVar7);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar1,PTR_s_preferredMainControllerForPlugin_026c2bd0,uVar7);
                _objc_retainAutoreleasedReturnValue();
                local_308 = IVar1;
                (*(code *)PTR__objc_release_02578630)(IVar4);
                IVar1 = local_308;
                (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_length_0269cca0);
                if (IVar1 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2b8,PTR_s_addObject__0269d180,local_308);
                }
                _objc_storeStrong(&local_308,0);
                local_3f8 = local_3f8 + 1;
              } while (local_3f8 < local_3f0);
              local_3f0 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,
                         auStack_1b8,0x10);
              local_3f8 = (undefined *)0x0;
            } while (local_3f0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_2b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0);
          if ((puVar2 == (undefined *)0x0) &&
             (uVar6 = local_1e8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1e8,PTR_s_rangeOfString_options__0269d118,&cf_Controller,1),
             uVar6 != 0x7fffffffffffffff)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_addObject__0269d180,local_1e8);
          }
          puVar2 = local_2b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_1ec = 1;
          local_1c0 = puVar2;
          _objc_storeStrong(&local_2b8);
          _objc_storeStrong(&local_260,0);
        }
        else {
          local_b8 = &cf_MsgFiltViewController;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_b8,1);
          _objc_retainAutoreleasedReturnValue();
          local_1ec = 1;
          local_1c0 = puVar2;
        }
      }
      else {
        local_b0 = &cf_xxuegaoSettingsViewController;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_b0,1);
        _objc_retainAutoreleasedReturnValue();
        local_1ec = 1;
        local_1c0 = puVar2;
      }
    }
    else {
      IVar1 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_200 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRefine);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      local_208 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      local_210 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_addObject__0269d180,&cf_WCRefineRootViewController);
      _memset(auStack_258,0,0x40);
      IVar1 = local_208;
      (*(code *)PTR__objc_retain_02578638)();
      local_350 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10);
      if (local_350 != 0) {
        lVar5 = *local_248;
        local_358 = 0;
        do {
          do {
            if (*local_248 - lVar5 != 0) {
              _objc_enumerationMutation(*local_248 - lVar5,IVar1);
            }
            uVar6 = *(ulong *)(local_250 + local_358 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_218 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar6 & 1) != 0) &&
               (uVar6 = local_218,
               (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_length_0269cca0), uVar6 != 0))
            {
              (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,local_218);
            }
            local_358 = local_358 + 1;
          } while (local_358 < local_350);
          local_350 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                     0x10);
          local_358 = 0;
        } while (local_350 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1ec = 1;
      local_1c0 = puVar2;
      _objc_storeStrong(&local_210);
      _objc_storeStrong(&local_208,0);
      _objc_storeStrong(&local_200,0);
    }
    _objc_storeStrong(&local_1f8,0);
  }
  _objc_storeStrong(&local_1e8);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_1c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

