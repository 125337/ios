// _WCRefineRenderDateFormatsInText @ 00f1f4ac

void _WCRefineRenderDateFormatsInText(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_4b8;
  undefined *local_4b0;
  undefined *local_488;
  undefined *local_450;
  undefined *local_448;
  ulong local_400;
  ulong local_3f8;
  cfstringStruct *local_3b0;
  cfstringStruct *local_378;
  undefined8 local_370;
  undefined *local_368;
  cfstringStruct *local_360;
  undefined1 auStack_358 [8];
  long local_350;
  long *local_348;
  undefined8 local_318;
  byte local_309;
  undefined *local_308;
  undefined *local_300;
  cfstringStruct *local_2f8;
  undefined8 local_2f0;
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  undefined8 local_290;
  undefined *local_288;
  undefined *local_280;
  undefined8 local_278;
  undefined *local_270;
  cfstringStruct *local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  undefined *local_218;
  undefined8 local_210;
  cfstringStruct *local_208;
  ulong local_200;
  undefined4 local_1f4;
  undefined *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  undefined8 local_1d8;
  long *local_1d0;
  cfstringStruct *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1e8,param_1);
  local_1f0 = (undefined *)0x0;
  _objc_storeStrong(&local_1f0,param_2);
  pcVar3 = local_1e8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_1e8, (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    if (local_1e8 == (cfstringStruct *)0x0) {
      local_3b0 = &cf___;
    }
    else {
      local_3b0 = local_1e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = local_3b0;
    local_1f4 = 1;
  }
  else {
    local_1d0 = &DAT_028e2c40;
    local_1d8 = 0;
    _objc_storeStrong(&local_1d8,&PTR___NSConcreteGlobalBlock_025828e8);
    if (*local_1d0 + 1 != 0) {
      _dispatch_once(*local_1d0 + 1,local_1d0,local_1d8);
    }
    _objc_storeStrong(&local_1d8,0);
    pcVar3 = local_1e8;
    uVar5 = DAT_028e2c38;
    if (DAT_028e2c38 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_1e0 = pcVar3;
      local_1f4 = 1;
    }
    else {
      pcVar4 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0);
      local_1c0 = 0;
      local_1b8 = 0;
      local_210 = 0;
      local_208 = pcVar4;
      local_1c8 = pcVar4;
      local_1b0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_matchesInString_options_range__0269ef68,pcVar3,0,0,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      local_200 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_count_0269cfe0);
      pcVar3 = local_1e8;
      if (uVar5 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_1e0 = pcVar3;
        local_1f4 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_218 = puVar2;
        _memset(auStack_260,0,0x40);
        uVar5 = local_200;
        (*(code *)PTR__objc_retain_02578638)();
        local_3f8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,0x10
                  );
        if (local_3f8 != 0) {
          lVar8 = *local_250;
          local_400 = 0;
          do {
            do {
              if (*local_250 - lVar8 != 0) {
                _objc_enumerationMutation(*local_250 - lVar8,uVar5);
              }
              pcVar3 = local_1e8;
              uVar9 = *(undefined8 *)(local_258 + local_400 * 8);
              puVar2 = PTR_s_range_0269ef50;
              local_220 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_278 = uVar9;
              local_270 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_substringWithRange__0269d138,uVar9,puVar2);
              _objc_retainAutoreleasedReturnValue();
              local_268 = pcVar3;
              _WCRefineDateFormatLooksLikePattern();
              if (((ulong)pcVar3 & 1) == 0) {
                local_1f4 = 3;
              }
              else {
                pcVar3 = local_268;
                FUN_00f200ec();
                if ((((ulong)pcVar3 & 1) == 0) &&
                   (pcVar3 = local_268,
                   (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_length_0269cca0),
                   pcVar3 <= (cfstringStruct *)((long)&MACH_HEADER.magic + 2))) {
                  local_1f4 = 3;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_218,PTR_s_addObject__0269d180,local_220);
                  local_1f4 = 0;
                }
              }
              _objc_storeStrong(&local_268,0);
              local_400 = local_400 + 1;
            } while (local_400 < local_3f8);
            local_3f8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,
                       0x10);
            local_400 = 0;
          } while (local_3f8 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar5);
        puVar2 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_count_0269cfe0);
        pcVar3 = local_1e8;
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_1e0 = pcVar3;
          local_1f4 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_sortUsingComparator__0269d168,
                     &PTR___NSConcreteGlobalBlock_02582928);
          puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_280 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_288 = puVar6;
          _memset(auStack_2d0,0,0x40);
          puVar2 = local_218;
          (*(code *)PTR__objc_retain_02578638)();
          local_448 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_128,
                     0x10);
          if (local_448 != (undefined *)0x0) {
            lVar8 = *local_2c0;
            local_450 = (undefined *)0x0;
            do {
              do {
                if (*local_2c0 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_2c0 - lVar8,puVar2);
                }
                puVar6 = local_280;
                uVar9 = *(undefined8 *)(local_2c8 + (long)local_450 * 8);
                puVar7 = PTR_s_range_0269ef50;
                local_290 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_2e0 = uVar9;
                local_2d8 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_intersectsIndexesInRange__026abda0,uVar9,puVar7);
                puVar7 = local_280;
                if (((ulong)puVar6 & 1) == 0) {
                  uVar9 = local_290;
                  puVar6 = PTR_s_range_0269ef50;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_2f0 = uVar9;
                  local_2e8 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar7,PTR_s_addIndexesInRange__026abda8,uVar9,puVar6);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_288,PTR_s_addObject__0269d180,local_290);
                }
                local_450 = local_450 + 1;
              } while (local_450 < local_448);
              local_448 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                         auStack_128,0x10);
              local_450 = (undefined *)0x0;
            } while (local_448 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_288,PTR_s_sortUsingComparator__0269d168,
                     &PTR___NSConcreteGlobalBlock_02582948);
          pcVar3 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_mutableCopy_0269d8a0);
          local_309 = 0;
          bVar1 = local_1f0 == (undefined *)0x0;
          local_2f8 = pcVar3;
          if (bVar1) {
            local_488 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            local_308 = local_488;
          }
          else {
            local_488 = local_1f0;
          }
          local_309 = bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_300 = local_488;
          if ((local_309 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_308);
          }
          _memset(auStack_358,0,0x40);
          puVar2 = local_288;
          (*(code *)PTR__objc_retain_02578638)();
          local_4b0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,auStack_1a8,
                     0x10);
          if (local_4b0 != (undefined *)0x0) {
            lVar8 = *local_348;
            local_4b8 = (undefined *)0x0;
            do {
              do {
                if (*local_348 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_348 - lVar8,puVar2);
                }
                pcVar4 = local_1e8;
                uVar9 = *(undefined8 *)(local_350 + (long)local_4b8 * 8);
                puVar6 = PTR_s_range_0269ef50;
                local_318 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_370 = uVar9;
                local_368 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar4,PTR_s_substringWithRange__0269d138,uVar9,puVar6);
                _objc_retainAutoreleasedReturnValue();
                local_360 = pcVar4;
                _WCRefineFormatDateWithChatTimeRules(pcVar4,local_300);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_2f8;
                uVar9 = local_318;
                puVar6 = PTR_s_range_0269ef50;
                local_378 = pcVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar3,PTR_s_replaceCharactersInRange_withStr_0269ef70,uVar9,puVar6,
                           local_378);
                _objc_storeStrong(&local_378);
                _objc_storeStrong(&local_360,0);
                local_4b8 = local_4b8 + 1;
              } while (local_4b8 < local_4b0);
              local_4b0 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,
                         auStack_1a8,0x10);
              local_4b8 = (undefined *)0x0;
            } while (local_4b0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          pcVar3 = local_2f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_copy_0269d150);
          local_1f4 = 1;
          local_1e0 = pcVar3;
          _objc_storeStrong(&local_300);
          _objc_storeStrong(&local_2f8,0);
          _objc_storeStrong(&local_288,0);
          _objc_storeStrong(&local_280,0);
        }
        _objc_storeStrong(&local_218,0);
      }
      _objc_storeStrong(&local_200,0);
    }
  }
  _objc_storeStrong(&local_1f0);
  _objc_storeStrong(&local_1e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1e0);
  return;
}

