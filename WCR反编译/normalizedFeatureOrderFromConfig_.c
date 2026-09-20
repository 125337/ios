// normalizedFeatureOrderFromConfig: @ 01c8d558

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginFeatureManagementViewController::normalizedFeatureOrderFromConfig_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_ac8;
  ulong local_ac0;
  ulong local_a78;
  ulong local_a70;
  ulong local_a28;
  ulong local_a20;
  ulong local_9d8;
  ulong local_9d0;
  ulong local_988;
  ulong local_980;
  undefined *local_958;
  ulong local_928;
  ulong local_920;
  ulong local_8d0;
  ulong local_8c8;
  ulong local_888;
  ulong local_880;
  uint local_84c;
  ulong local_828;
  ulong local_820;
  undefined1 auStack_7f0 [8];
  long local_7e8;
  long *local_7e0;
  ulong local_7b0;
  byte local_7a1;
  undefined *local_7a0;
  undefined *local_798;
  undefined1 auStack_790 [8];
  long local_788;
  long *local_780;
  ulong local_750;
  byte local_741;
  undefined *local_740;
  undefined *local_738;
  undefined1 auStack_730 [8];
  long local_728;
  long *local_720;
  ulong local_6f0;
  byte local_6e1;
  undefined *local_6e0;
  undefined *local_6d8;
  undefined1 auStack_6d0 [8];
  long local_6c8;
  long *local_6c0;
  ulong local_690;
  byte local_681;
  undefined *local_680;
  undefined *local_678;
  undefined1 auStack_670 [8];
  long local_668;
  long *local_660;
  ulong local_630;
  byte local_621;
  undefined *local_620;
  undefined1 auStack_618 [8];
  long local_610;
  long *local_608;
  ulong local_5d8;
  byte local_5cd;
  undefined4 local_5cc;
  undefined1 auStack_5c8 [8];
  long local_5c0;
  long *local_5b8;
  ulong local_588;
  byte local_579;
  undefined *local_578;
  undefined1 auStack_570 [8];
  long local_568;
  long *local_560;
  undefined8 local_530;
  ID local_528;
  undefined1 auStack_520 [8];
  long local_518;
  long *local_510;
  ulong local_4e0;
  undefined *local_4d8;
  ulong local_4d0;
  ID local_4c8;
  ulong local_4c0;
  SEL local_4b8;
  ID local_4b0;
  undefined1 auStack_4a8 [128];
  undefined1 auStack_428 [128];
  undefined1 auStack_3a8 [128];
  undefined1 auStack_328 [128];
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_4c0 = 0;
  local_4b8 = param_2;
  local_4b0 = param_1;
  _objc_storeStrong(&local_4c0,param_3);
  IVar1 = local_4b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4b0,PTR_s_featureEntryMapFromConfig__026c2a78,local_4c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_4c0;
  local_4c8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_4c0,PTR_s_pluginFeatureOrder_026c2a80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_4d0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_4d8 = puVar3;
  _memset(auStack_520,0,0x40);
  uVar2 = local_4d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_820 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_520,auStack_a8,0x10);
  if (local_820 != 0) {
    lVar6 = *local_510;
    local_828 = 0;
    do {
      do {
        if (*local_510 - lVar6 != 0) {
          _objc_enumerationMutation(*local_510 - lVar6,uVar2);
        }
        uVar7 = *(ulong *)(local_518 + local_828 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_4e0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar7 & 1) != 0) {
          IVar1 = local_4b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4b0,PTR_s_normalizedLegacyFeatureID__026c2a88,local_4e0);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_4c8;
          local_528 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4c8,PTR_s_objectForKeyedSubscript__0269d098,IVar1);
          _objc_retainAutoreleasedReturnValue();
          local_84c = 0;
          if (IVar4 != 0) {
            puVar3 = local_4d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_4d8,PTR_s_containsObject__0269cbb8,local_528);
            local_84c = (uint)puVar3 ^ 1;
          }
          (*(code *)PTR__objc_release_02578630)(IVar4);
          if ((local_84c & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_addObject__0269d180,local_528);
          }
          _objc_storeStrong(&local_528,0);
        }
        local_828 = local_828 + 1;
      } while (local_828 < local_820);
      local_820 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_520,auStack_a8,0x10);
      local_828 = 0;
    } while (local_820 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _memset(auStack_570,0,0x40);
  IVar1 = local_4b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4b0,PTR_s_defaultFeatureOrderFromConfig__026c2a90,local_4c0);
  _objc_retainAutoreleasedReturnValue();
  local_880 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_880 != 0) {
    lVar6 = *local_560;
    local_888 = 0;
    do {
      do {
        if (*local_560 - lVar6 != 0) {
          _objc_enumerationMutation(*local_560 - lVar6,IVar1);
        }
        local_530 = *(undefined8 *)(local_568 + local_888 * 8);
        puVar3 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_containsObject__0269cbb8,local_530);
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_addObject__0269d180,local_530);
        }
        local_888 = local_888 + 1;
      } while (local_888 < local_880);
      local_880 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_570,auStack_128,0x10)
      ;
      local_888 = 0;
    } while (local_880 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = local_4d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_containsObject__0269cbb8,&cf_red_envelop);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = local_4d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_indexOfObject__0269e870,&cf_red_envelop);
    puVar5 = local_4d8;
    local_578 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_4d8,PTR_s_containsObject__0269cbb8,&cf_auto_function);
    if (((ulong)puVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_replaceObjectAtIndex_withObject__026a38a0,local_578,
                 &cf_auto_function);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_removeObject__0269d678,&cf_red_envelop);
    }
  }
  IVar1 = local_4c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_aggregate_search);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    local_579 = 0;
    _memset(auStack_5c8,0,0x40);
    uVar2 = local_4d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_8c8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5c8,auStack_1a8,0x10);
    if (local_8c8 != 0) {
      lVar6 = *local_5b8;
      local_8d0 = 0;
      do {
        do {
          if (*local_5b8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_5b8 - lVar6,uVar2);
          }
          uVar7 = *(ulong *)(local_5c0 + local_8d0 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_588 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = local_588,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_588,PTR_s_isEqualToString__0269ccc8,&cf_aggregate_search),
             (uVar7 & 1) != 0)) {
            local_579 = 1;
            local_5cc = 6;
            goto LAB_01c8dc94;
          }
          local_8d0 = local_8d0 + 1;
        } while (local_8d0 < local_8c8);
        local_8c8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5c8,auStack_1a8,
                   0x10);
        local_8d0 = 0;
      } while (local_8c8 != 0);
    }
    local_5cc = 0;
LAB_01c8dc94:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_579 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_removeObject__0269d678);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_aggregate_search,0);
    }
  }
  IVar1 = local_4c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_ai_assistant);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    local_5cd = 0;
    _memset(auStack_618,0,0x40);
    uVar2 = local_4d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_920 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_618,auStack_228,0x10);
    if (local_920 != 0) {
      lVar6 = *local_608;
      local_928 = 0;
      do {
        do {
          if (*local_608 - lVar6 != 0) {
            _objc_enumerationMutation(*local_608 - lVar6,uVar2);
          }
          uVar7 = *(ulong *)(local_610 + local_928 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_5d8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = local_5d8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_5d8,PTR_s_isEqualToString__0269ccc8,&cf_ai_assistant),
             (uVar7 & 1) != 0)) {
            local_5cd = 1;
            local_5cc = 8;
            goto LAB_01c8df00;
          }
          local_928 = local_928 + 1;
        } while (local_928 < local_920);
        local_920 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_618,auStack_228,
                   0x10);
        local_928 = 0;
      } while (local_920 != 0);
    }
    local_5cc = 0;
LAB_01c8df00:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_5cd & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_removeObject__0269d678,&cf_ai_assistant)
      ;
      puVar3 = local_4d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_indexOfObject__0269e870,&cf_aggregate_search);
      if (puVar3 == (undefined *)0x7fffffffffffffff) {
        local_958 = (undefined *)0x0;
      }
      else {
        local_958 = puVar3 + 1;
      }
      local_620 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_ai_assistant,local_958);
    }
  }
  IVar1 = local_4c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_voice_function);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    local_621 = 0;
    _memset(auStack_670,0,0x40);
    uVar2 = local_4d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_980 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_670,auStack_2a8,0x10);
    if (local_980 != 0) {
      lVar6 = *local_660;
      local_988 = 0;
      do {
        do {
          if (*local_660 - lVar6 != 0) {
            _objc_enumerationMutation(*local_660 - lVar6,uVar2);
          }
          uVar7 = *(ulong *)(local_668 + local_988 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_630 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = local_630,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_630,PTR_s_isEqualToString__0269ccc8,&cf_voice_function),
             (uVar7 & 1) != 0)) {
            local_621 = 1;
            local_5cc = 10;
            goto LAB_01c8e1c8;
          }
          local_988 = local_988 + 1;
        } while (local_988 < local_980);
        local_980 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_670,auStack_2a8,
                   0x10);
        local_988 = 0;
      } while (local_980 != 0);
    }
    local_5cc = 0;
LAB_01c8e1c8:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_621 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_removeObject__0269d678,&cf_voice_function);
      puVar3 = local_4d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_indexOfObject__0269e870,&cf_moments);
      local_678 = puVar3;
      if (puVar3 == (undefined *)0x7fffffffffffffff) {
        puVar3 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_indexOfObject__0269e870,&cf_auto_function);
        local_680 = puVar3;
        if (puVar3 == (undefined *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4d8,PTR_s_addObject__0269d180,&cf_voice_function);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_voice_function,puVar3);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_voice_function,puVar3 + 1);
      }
    }
  }
  IVar1 = local_4c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_emoticon_function);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    local_681 = 0;
    _memset(auStack_6d0,0,0x40);
    uVar2 = local_4d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_9d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6d0,auStack_328,0x10);
    if (local_9d0 != 0) {
      lVar6 = *local_6c0;
      local_9d8 = 0;
      do {
        do {
          if (*local_6c0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_6c0 - lVar6,uVar2);
          }
          uVar7 = *(ulong *)(local_6c8 + local_9d8 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_690 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = local_690,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_690,PTR_s_isEqualToString__0269ccc8,&cf_emoticon_function),
             (uVar7 & 1) != 0)) {
            local_681 = 1;
            local_5cc = 0xc;
            goto LAB_01c8e4fc;
          }
          local_9d8 = local_9d8 + 1;
        } while (local_9d8 < local_9d0);
        local_9d0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6d0,auStack_328,
                   0x10);
        local_9d8 = 0;
      } while (local_9d0 != 0);
    }
    local_5cc = 0;
LAB_01c8e4fc:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_681 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_removeObject__0269d678,&cf_emoticon_function);
      puVar3 = local_4d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_indexOfObject__0269e870,&cf_voice_function);
      local_6d8 = puVar3;
      if (puVar3 == (undefined *)0x7fffffffffffffff) {
        puVar3 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_indexOfObject__0269e870,&cf_auto_function);
        local_6e0 = puVar3;
        if (puVar3 == (undefined *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4d8,PTR_s_addObject__0269d180,&cf_emoticon_function);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_emoticon_function,puVar3);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_emoticon_function,puVar3 + 1);
      }
    }
  }
  IVar1 = local_4c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_chat_room_function);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    local_6e1 = 0;
    _memset(auStack_730,0,0x40);
    uVar2 = local_4d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a20 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_730,auStack_3a8,0x10);
    if (local_a20 != 0) {
      lVar6 = *local_720;
      local_a28 = 0;
      do {
        do {
          if (*local_720 - lVar6 != 0) {
            _objc_enumerationMutation(*local_720 - lVar6,uVar2);
          }
          uVar7 = *(ulong *)(local_728 + local_a28 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_6f0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = local_6f0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_6f0,PTR_s_isEqualToString__0269ccc8,&cf_chat_room_function),
             (uVar7 & 1) != 0)) {
            local_6e1 = 1;
            local_5cc = 0xe;
            goto LAB_01c8e830;
          }
          local_a28 = local_a28 + 1;
        } while (local_a28 < local_a20);
        local_a20 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_730,auStack_3a8,
                   0x10);
        local_a28 = 0;
      } while (local_a20 != 0);
    }
    local_5cc = 0;
LAB_01c8e830:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_6e1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_removeObject__0269d678,&cf_chat_room_function);
      puVar3 = local_4d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_indexOfObject__0269e870,&cf_auto_function);
      local_738 = puVar3;
      if (puVar3 == (undefined *)0x7fffffffffffffff) {
        puVar3 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_indexOfObject__0269e870,&cf_text_replace);
        local_740 = puVar3;
        if (puVar3 == (undefined *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4d8,PTR_s_addObject__0269d180,&cf_chat_room_function);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_chat_room_function,puVar3);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_chat_room_function,puVar3 + 1)
        ;
      }
    }
  }
  IVar1 = local_4c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_ui_clean);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    local_741 = 0;
    _memset(auStack_790,0,0x40);
    uVar2 = local_4d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a70 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_790,auStack_428,0x10);
    if (local_a70 != 0) {
      lVar6 = *local_780;
      local_a78 = 0;
      do {
        do {
          if (*local_780 - lVar6 != 0) {
            _objc_enumerationMutation(*local_780 - lVar6,uVar2);
          }
          uVar7 = *(ulong *)(local_788 + local_a78 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_750 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = local_750,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_750,PTR_s_isEqualToString__0269ccc8,&cf_ui_clean), (uVar7 & 1) != 0))
          {
            local_741 = 1;
            local_5cc = 0x10;
            goto LAB_01c8eb64;
          }
          local_a78 = local_a78 + 1;
        } while (local_a78 < local_a70);
        local_a70 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_790,auStack_428,
                   0x10);
        local_a78 = 0;
      } while (local_a70 != 0);
    }
    local_5cc = 0;
LAB_01c8eb64:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_741 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_removeObject__0269d678,&cf_ui_clean);
      puVar3 = local_4d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_indexOfObject__0269e870,&cf_layout_function);
      local_798 = puVar3;
      if (puVar3 == (undefined *)0x7fffffffffffffff) {
        puVar3 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_indexOfObject__0269e870,&cf_ui_beautify);
        local_7a0 = puVar3;
        if (puVar3 == (undefined *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_addObject__0269d180,&cf_ui_clean);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_ui_clean,puVar3);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_ui_clean,puVar3 + 1);
      }
    }
  }
  IVar1 = local_4c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_super_float);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    local_7a1 = 0;
    _memset(auStack_7f0,0,0x40);
    uVar2 = local_4d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_ac0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7f0,auStack_4a8,0x10);
    if (local_ac0 != 0) {
      lVar6 = *local_7e0;
      local_ac8 = 0;
      do {
        do {
          if (*local_7e0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_7e0 - lVar6,uVar2);
          }
          uVar7 = *(ulong *)(local_7e8 + local_ac8 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_7b0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = local_7b0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_7b0,PTR_s_isEqualToString__0269ccc8,&cf_super_float), (uVar7 & 1) != 0
             )) {
            local_7a1 = 1;
            local_5cc = 0x12;
            goto LAB_01c8ee98;
          }
          local_ac8 = local_ac8 + 1;
        } while (local_ac8 < local_ac0);
        local_ac0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7f0,auStack_4a8,
                   0x10);
        local_ac8 = 0;
      } while (local_ac0 != 0);
    }
    local_5cc = 0;
LAB_01c8ee98:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_7a1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_removeObject__0269d678,&cf_super_float);
      puVar3 = local_4d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4d8,PTR_s_indexOfObject__0269e870,&cf_account_info);
      if (puVar3 == (undefined *)0x7fffffffffffffff) {
        puVar3 = local_4d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_indexOfObject__0269e870,&cf_general_function);
        if (puVar3 == (undefined *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_addObject__0269d180,&cf_super_float)
          ;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_super_float,puVar3);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_4d8,PTR_s_insertObject_atIndex__0269eac0,&cf_super_float,puVar3 + 1);
      }
    }
  }
  puVar3 = local_4d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_copy_0269d150);
  local_5cc = 1;
  _objc_storeStrong(&local_4d8);
  _objc_storeStrong(&local_4d0,0);
  _objc_storeStrong(&local_4c8,0);
  _objc_storeStrong(&local_4c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar3;
}

