// FUN_0039871c @ 0039871c

void FUN_0039871c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong local_b80;
  ulong local_b78;
  ulong local_b60;
  ulong local_b20;
  ulong local_b18;
  ulong local_b00;
  ulong local_ad8;
  ulong local_ad0;
  ulong local_ab8;
  ulong local_a50;
  ulong local_a48;
  ulong local_a30;
  ulong local_a08;
  ulong local_a00;
  ulong local_9e8;
  ulong local_9a0;
  ulong local_998;
  undefined *local_960;
  undefined *local_958;
  ulong local_938;
  ulong local_928;
  ulong local_918;
  undefined *local_900;
  ulong local_8e0;
  ulong local_8d8;
  ulong local_8c0;
  ulong local_848;
  ulong local_840;
  ulong local_828;
  undefined1 auStack_7e0 [8];
  long local_7d8;
  long *local_7d0;
  undefined8 local_7a0;
  undefined *local_798;
  undefined1 auStack_790 [8];
  long local_788;
  long *local_780;
  undefined8 local_750;
  undefined *local_748;
  undefined1 auStack_740 [8];
  long local_738;
  long *local_730;
  undefined8 local_700;
  undefined1 local_6f1;
  undefined *local_6f0;
  byte local_6e1;
  undefined *local_6e0;
  long local_6d8;
  undefined1 auStack_6d0 [8];
  long local_6c8;
  long *local_6c0;
  long local_690;
  undefined1 auStack_688 [8];
  long local_680;
  long *local_678;
  ulong local_648;
  long local_640;
  undefined1 auStack_638 [8];
  long local_630;
  long *local_628;
  long local_5f8;
  undefined1 auStack_5f0 [8];
  long local_5e8;
  long *local_5e0;
  ulong local_5b0;
  undefined *local_5a8;
  byte local_599;
  undefined *local_598;
  byte local_589;
  undefined *local_588;
  undefined *local_580;
  undefined1 auStack_578 [8];
  long local_570;
  long *local_568;
  undefined8 local_538;
  undefined1 auStack_530 [8];
  long local_528;
  long *local_520;
  ulong local_4f0;
  undefined *local_4e8;
  undefined4 local_4dc;
  undefined *local_4d8;
  ulong local_4d0;
  undefined *local_4c8;
  undefined1 auStack_4c0 [128];
  undefined1 auStack_440 [128];
  undefined1 auStack_3c0 [128];
  undefined1 auStack_340 [128];
  undefined1 auStack_2c0 [128];
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [128];
  ulong local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_4d0 = 0;
  _objc_storeStrong(&local_4d0,param_1);
  local_4d8 = (undefined *)0x0;
  _objc_storeStrong(&local_4d8,param_2);
  if ((local_4d0 == 0) ||
     (uVar3 = local_4d0,
     (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_budgetFallback_026a25d8),
     (uVar3 & 1) != 0)) {
    local_4c8 = (undefined *)0x0;
    local_4dc = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithCapacity__0269fc10,0x400);
    _objc_retainAutoreleasedReturnValue();
    local_4e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_builtForInlineMode_026a2f18);
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendFormat__0269d148,&cf_i_d_x___);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _memset(auStack_530,0,0x40);
    uVar3 = local_4d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    local_828 = uVar3;
    if (uVar3 == 0) {
      local_828 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_840 = local_828;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_828,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_530,auStack_a8,0x10
              );
    if (local_840 != 0) {
      lVar8 = *local_520;
      local_848 = 0;
      do {
        do {
          if (*local_520 - lVar8 != 0) {
            _objc_enumerationMutation(*local_520 - lVar8,local_828);
          }
          puVar4 = local_4e8;
          uVar9 = *(ulong *)(local_528 + local_848 * 8);
          local_4f0 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_4f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_4f0,PTR_s_items_0269e4b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(local_4f0,PTR_s_totalCount_026a3130);
          (*(code *)PTR__objc_msgSend_02578628)(local_4f0,PTR_s_unreadCount_026a3080);
          (*(code *)PTR__objc_msgSend_02578628)(local_4f0,PTR_s_hasRedDotUnread_026a3088);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf_G____lu__lu__llu__d_);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar9);
          _memset(auStack_578,0,0x40);
          uVar3 = local_4f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_4f0,PTR_s_items_0269e4b0);
          _objc_retainAutoreleasedReturnValue();
          local_8c0 = uVar3;
          if (uVar3 == 0) {
            local_8c0 = *(ulong *)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_8d8 = local_8c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_8c0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_578,
                     auStack_128,0x10);
          if (local_8d8 != 0) {
            lVar10 = *local_568;
            local_8e0 = 0;
            do {
              do {
                if (*local_568 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_568 - lVar10,local_8c0);
                }
                local_538 = *(undefined8 *)(local_570 + local_8e0 * 8);
                FUN_003d796c(local_4e8,local_538);
                local_8e0 = local_8e0 + 1;
              } while (local_8e0 < local_8d8);
              local_8d8 = local_8c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_8c0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_578,
                         auStack_128,0x10);
              local_8e0 = 0;
            } while (local_8d8 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(local_8c0);
          (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_appendString__0269ccb0,&cf__);
          local_848 = local_848 + 1;
        } while (local_848 < local_840);
        local_840 = local_828;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_828,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_530,auStack_a8,
                   0x10);
        local_848 = 0;
      } while (local_840 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_828);
    local_589 = 0;
    local_599 = 0;
    if (local_4d8 == (undefined *)0x0) {
      local_900 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_599 = 1;
      local_598 = local_900;
    }
    else {
      local_900 = local_4d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_mutableCopy_0269d8a0);
      local_589 = 1;
      local_588 = local_900;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_580 = local_900;
    if ((local_599 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_598);
    }
    if ((local_589 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_588);
    }
    puVar4 = local_580;
    (*(code *)PTR__objc_msgSend_02578628)(local_580,PTR_s_count_0269cfe0);
    if (puVar4 == (undefined *)0x0) {
      uVar3 = local_4d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_friendItems_026a31d0);
      _objc_retainAutoreleasedReturnValue();
      local_918 = uVar3;
      if (uVar3 == 0) {
        local_918 = *(ulong *)PTR____NSArray0___02578280;
      }
      local_140 = local_918;
      uVar9 = local_4d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_chatRoomItems_026a31d8);
      _objc_retainAutoreleasedReturnValue();
      local_928 = uVar9;
      if (uVar9 == 0) {
        local_928 = *(ulong *)PTR____NSArray0___02578280;
      }
      local_138 = local_928;
      uVar7 = local_4d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_otherItems_026a31e0);
      _objc_retainAutoreleasedReturnValue();
      local_938 = uVar7;
      if (uVar7 == 0) {
        local_938 = *(ulong *)PTR____NSArray0___02578280;
      }
      local_130 = local_938;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_140,3);
      _objc_retainAutoreleasedReturnValue();
      local_5a8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar9);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _memset(auStack_5f0,0,0x40);
      puVar4 = local_5a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_958 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5f0,auStack_1c0,0x10
                );
      if (local_958 != (undefined *)0x0) {
        lVar8 = *local_5e0;
        local_960 = (undefined *)0x0;
        do {
          do {
            if (*local_5e0 - lVar8 != 0) {
              _objc_enumerationMutation(*local_5e0 - lVar8,puVar4);
            }
            local_5b0 = *(ulong *)(local_5e8 + (long)local_960 * 8);
            _memset(auStack_638,0,0x40);
            uVar3 = local_5b0;
            (*(code *)PTR__objc_retain_02578638)();
            local_998 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_638,auStack_240
                       ,0x10);
            if (local_998 != 0) {
              lVar10 = *local_628;
              local_9a0 = 0;
              do {
                do {
                  if (*local_628 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_628 - lVar10,uVar3);
                  }
                  lVar11 = *(long *)(local_630 + local_9a0 * 8);
                  local_5f8 = lVar11;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_originalIndexPath_026a27d8);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = local_580;
                  lVar12 = local_5f8;
                  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_640 = lVar11;
                  if (lVar11 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_row_0269e210);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar5,PTR_s_numberWithInteger__0269e080,lVar11);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar6,PTR_s_setObject_forKeyedSubscript__0269d248,lVar12);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                  }
                  _objc_storeStrong(&local_640,0);
                  local_9a0 = local_9a0 + 1;
                } while (local_9a0 < local_998);
                local_998 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_638,
                           auStack_240,0x10);
                local_9a0 = 0;
              } while (local_998 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            local_960 = local_960 + 1;
          } while (local_960 < local_958);
          local_958 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5f0,auStack_1c0,
                     0x10);
          local_960 = (undefined *)0x0;
        } while (local_958 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _memset(auStack_688,0,0x40);
      uVar3 = local_4d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_entries_026a25d0);
      _objc_retainAutoreleasedReturnValue();
      local_9e8 = uVar3;
      if (uVar3 == 0) {
        local_9e8 = *(ulong *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_a00 = local_9e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_9e8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_688,auStack_2c0,
                 0x10);
      if (local_a00 != 0) {
        lVar8 = *local_678;
        local_a08 = 0;
        do {
          do {
            if (*local_678 - lVar8 != 0) {
              _objc_enumerationMutation(*local_678 - lVar8,local_9e8);
            }
            local_648 = *(ulong *)(local_680 + local_a08 * 8);
            _memset(auStack_6d0,0,0x40);
            uVar3 = local_648;
            (*(code *)PTR__objc_msgSend_02578628)(local_648,PTR_s_items_0269e4b0);
            _objc_retainAutoreleasedReturnValue();
            local_a30 = uVar3;
            if (uVar3 == 0) {
              local_a30 = *(ulong *)PTR____NSArray0___02578280;
            }
            (*(code *)PTR__objc_retain_02578638)();
            (*(code *)PTR__objc_release_02578630)(uVar3);
            local_a48 = local_a30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a30,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6d0,
                       auStack_340,0x10);
            if (local_a48 != 0) {
              lVar10 = *local_6c0;
              local_a50 = 0;
              do {
                do {
                  if (*local_6c0 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_6c0 - lVar10,local_a30);
                  }
                  lVar12 = *(long *)(local_6c8 + local_a50 * 8);
                  local_690 = lVar12;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_originalIndexPath_026a27d8);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = local_580;
                  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_6e1 = 0;
                  local_6f1 = 0;
                  bVar2 = false;
                  uVar1 = lVar12 != 0;
                  local_6d8 = lVar12;
                  if ((bool)uVar1) {
                    (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_row_0269e210);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar4,PTR_s_numberWithInteger__0269e080,lVar12);
                    _objc_retainAutoreleasedReturnValue();
                    local_6e1 = 1;
                    local_6e0 = puVar4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar5,PTR_s_objectForKeyedSubscript__0269d098);
                    _objc_retainAutoreleasedReturnValue();
                    bVar2 = puVar5 == (undefined *)0x0;
                    local_6f1 = uVar1;
                    local_6f0 = puVar5;
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    uVar1 = local_6f1;
                  }
                  local_6f1 = uVar1;
                  if ((local_6e1 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_6e0);
                  }
                  puVar5 = local_580;
                  lVar12 = local_690;
                  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  if (bVar2) {
                    lVar11 = local_6d8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_6d8,PTR_s_row_0269e210);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar4,PTR_s_numberWithInteger__0269e080,lVar11);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar5,PTR_s_setObject_forKeyedSubscript__0269d248,lVar12);
                    (*(code *)PTR__objc_release_02578630)(puVar4);
                  }
                  _objc_storeStrong(&local_6d8,0);
                  local_a50 = local_a50 + 1;
                } while (local_a50 < local_a48);
                local_a48 = local_a30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_a30,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6d0,
                           auStack_340,0x10);
                local_a50 = 0;
              } while (local_a48 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(local_a30);
            local_a08 = local_a08 + 1;
          } while (local_a08 < local_a00);
          local_a00 = local_9e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_9e8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_688,
                     auStack_2c0,0x10);
          local_a08 = 0;
        } while (local_a00 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(local_9e8);
      _objc_storeStrong(&local_5a8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_appendString__0269ccb0,&cf_P);
    _memset(auStack_740,0,0x40);
    uVar3 = local_4d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_preservedOriginalRows_026a2ce0);
    _objc_retainAutoreleasedReturnValue();
    local_ab8 = uVar3;
    if (uVar3 == 0) {
      local_ab8 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_ad0 = local_ab8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_ab8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_740,auStack_3c0,
               0x10);
    if (local_ad0 != 0) {
      lVar8 = *local_730;
      local_ad8 = 0;
      do {
        do {
          if (*local_730 - lVar8 != 0) {
            _objc_enumerationMutation(*local_730 - lVar8,local_ab8);
          }
          local_700 = *(undefined8 *)(local_738 + local_ad8 * 8);
          puVar4 = local_580;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_580,PTR_s_objectForKeyedSubscript__0269d098,local_700);
          _objc_retainAutoreleasedReturnValue();
          local_748 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_appendFormat__0269d148,&cf_r___);
          }
          else {
            FUN_003d796c(local_4e8,puVar4);
          }
          _objc_storeStrong(&local_748,0);
          local_ad8 = local_ad8 + 1;
        } while (local_ad8 < local_ad0);
        local_ad0 = local_ab8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_ab8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_740,auStack_3c0
                   ,0x10);
        local_ad8 = 0;
      } while (local_ad0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_ab8);
    (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_appendString__0269ccb0,&cf__T);
    _memset(auStack_790,0,0x40);
    uVar3 = local_4d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_trailingOriginalRows_026a2cd8);
    _objc_retainAutoreleasedReturnValue();
    local_b00 = uVar3;
    if (uVar3 == 0) {
      local_b00 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_b18 = local_b00;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b00,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_790,auStack_440,
               0x10);
    if (local_b18 != 0) {
      lVar8 = *local_780;
      local_b20 = 0;
      do {
        do {
          if (*local_780 - lVar8 != 0) {
            _objc_enumerationMutation(*local_780 - lVar8,local_b00);
          }
          local_750 = *(undefined8 *)(local_788 + local_b20 * 8);
          puVar4 = local_580;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_580,PTR_s_objectForKeyedSubscript__0269d098,local_750);
          _objc_retainAutoreleasedReturnValue();
          local_798 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_appendFormat__0269d148,&cf_r___);
          }
          else {
            FUN_003d796c(local_4e8,puVar4);
          }
          _objc_storeStrong(&local_798,0);
          local_b20 = local_b20 + 1;
        } while (local_b20 < local_b18);
        local_b18 = local_b00;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b00,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_790,auStack_440
                   ,0x10);
        local_b20 = 0;
      } while (local_b18 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_b00);
    puVar4 = local_4e8;
    uVar3 = local_4d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_hiddenOriginalRowsBySection_026a31e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_collectedCount_026a2d40);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendFormat__0269d148,&cf__H_lu_C_lu);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_appendString__0269ccb0,&cf__X);
    _memset(auStack_7e0,0,0x40);
    uVar3 = local_4d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_4d0,PTR_s_hiddenSessionUsernames_026a31f0);
    _objc_retainAutoreleasedReturnValue();
    local_b60 = uVar3;
    if (uVar3 == 0) {
      local_b60 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_b78 = local_b60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b60,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7e0,auStack_4c0,
               0x10);
    if (local_b78 != 0) {
      lVar8 = *local_7d0;
      local_b80 = 0;
      do {
        do {
          if (*local_7d0 - lVar8 != 0) {
            _objc_enumerationMutation(*local_7d0 - lVar8,local_b60);
          }
          local_7a0 = *(undefined8 *)(local_7d8 + local_b80 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_appendFormat__0269d148,&cf____);
          local_b80 = local_b80 + 1;
        } while (local_b80 < local_b78);
        local_b78 = local_b60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b60,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7e0,auStack_4c0
                   ,0x10);
        local_b80 = 0;
      } while (local_b78 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_b60);
    puVar4 = local_4e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_copy_0269d150);
    local_4dc = 1;
    local_4c8 = puVar4;
    _objc_storeStrong(&local_580);
    _objc_storeStrong(&local_4e8,0);
  }
  _objc_storeStrong(&local_4d8);
  _objc_storeStrong(&local_4d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_4c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

