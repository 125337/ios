// FUN_00efbd08 @ 00efbd08

void FUN_00efbd08(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *local_630;
  undefined *local_628;
  undefined *local_5c8;
  undefined *local_5b8;
  undefined *local_5a8;
  undefined *local_598;
  undefined *local_588;
  uint local_574;
  undefined *local_558;
  undefined *local_550;
  ulong local_518;
  ulong local_4e8;
  ulong local_4e0;
  ulong local_498;
  ulong local_490;
  ulong local_458;
  undefined1 auStack_450 [8];
  long local_448;
  long *local_440;
  ulong local_410;
  undefined *local_408;
  undefined *local_400;
  byte local_3f1;
  undefined *local_3f0;
  byte local_3e1;
  undefined *local_3e0;
  byte local_3d1;
  undefined *local_3d0;
  byte local_3c1;
  undefined *local_3c0;
  byte local_3b1;
  undefined *local_3b0;
  byte local_3a1;
  undefined *local_3a0;
  byte local_391;
  undefined *local_390;
  undefined *local_388;
  undefined1 auStack_380 [8];
  long local_378;
  long *local_370;
  undefined *local_340;
  undefined *local_338;
  undefined *local_330;
  undefined1 local_321;
  undefined *local_320;
  ulong local_318;
  bool local_309;
  ulong local_308;
  ulong local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  long *local_2e8;
  ulong local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined4 local_29c;
  ulong local_298;
  undefined1 auStack_290 [8];
  long local_288;
  long *local_280;
  ulong local_250;
  undefined *local_248;
  byte local_239;
  ulong local_238;
  ulong local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_230 = 0;
  _objc_storeStrong(&local_230,param_1);
  local_238 = 0;
  _objc_storeStrong(&local_238,param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_239 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_248 = puVar3;
  _memset(auStack_290,0,0x40);
  uVar9 = local_238;
  (*(code *)PTR__objc_retain_02578638)();
  local_490 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_a8,0x10);
  if (local_490 != 0) {
    lVar5 = *local_280;
    local_498 = 0;
    do {
      do {
        if (*local_280 - lVar5 != 0) {
          _objc_enumerationMutation(*local_280 - lVar5,uVar9);
        }
        uVar6 = *(ulong *)(local_288 + local_498 * 8);
        local_250 = uVar6;
        FUN_00efce44(uVar6,&cf___,1);
        _objc_retainAutoreleasedReturnValue();
        local_298 = uVar6;
        if (uVar6 == 0) {
          local_29c = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if ((uVar7 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_addObject__0269d180,local_298);
            local_29c = 0;
          }
          else {
            local_29c = 3;
          }
        }
        _objc_storeStrong(&local_298,0);
        local_498 = local_498 + 1;
      } while (local_498 < local_490);
      local_490 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_a8,0x10);
      local_498 = 0;
    } while (local_490 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar9);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_2a8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_2b0 = puVar4;
  _memset(auStack_2f8,0,0x40);
  uVar9 = local_230;
  (*(code *)PTR__objc_retain_02578638)();
  local_4e0 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_128,0x10);
  if (local_4e0 != 0) {
    lVar5 = *local_2e8;
    local_4e8 = 0;
    do {
      do {
        if (*local_2e8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_2e8 - lVar5,uVar9);
        }
        uVar7 = *(ulong *)(local_2f0 + local_4e8 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_2b8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        uVar6 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_309 = false;
        bVar2 = (uVar6 & 1) == 0;
        if (bVar2) {
          local_518 = 0;
        }
        else {
          local_518 = local_2b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2b8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrSource);
          _objc_retainAutoreleasedReturnValue();
          local_308 = local_518;
        }
        local_309 = !bVar2;
        FUN_00eee23c();
        _objc_retainAutoreleasedReturnValue();
        FUN_00efce44(uVar7,local_518,0);
        _objc_retainAutoreleasedReturnValue();
        local_300 = uVar7;
        (*(code *)PTR__objc_release_02578630)(local_518);
        if ((local_309 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_308);
        }
        uVar6 = local_300;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_300,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
        _objc_retainAutoreleasedReturnValue();
        local_321 = 0;
        bVar2 = true;
        uVar1 = local_300 != 0;
        local_318 = uVar6;
        if ((bool)uVar1) {
          puVar3 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2a8,PTR_s_objectForKeyedSubscript__0269d098,uVar6);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = puVar3 != (undefined *)0x0;
          local_321 = uVar1;
          local_320 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar1 = local_321;
        }
        local_321 = uVar1;
        if (bVar2) {
          local_29c = 5;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_300,local_318);
          (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_addObject__0269d180,local_300);
          local_29c = 0;
        }
        _objc_storeStrong(&local_318);
        _objc_storeStrong(&local_300,0);
        local_4e8 = local_4e8 + 1;
      } while (local_4e8 < local_4e0);
      local_4e0 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_128,0x10)
      ;
      local_4e8 = 0;
    } while (local_4e0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar9);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_330 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_338 = puVar4;
  _memset(auStack_380,0,0x40);
  puVar3 = local_248;
  (*(code *)PTR__objc_retain_02578638)();
  local_550 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_1a8,0x10);
  if (local_550 != (undefined *)0x0) {
    lVar5 = *local_370;
    local_558 = (undefined *)0x0;
    do {
      do {
        if (*local_370 - lVar5 != 0) {
          _objc_enumerationMutation(*local_370 - lVar5,puVar3);
        }
        puVar8 = *(undefined **)(local_378 + (long)local_558 * 8);
        local_340 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_330;
        local_388 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_containsObject__0269cbb8,puVar8);
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2a8,PTR_s_objectForKeyedSubscript__0269d098,local_388);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = local_388;
          local_390 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_hasPrefix__0269d320,&cf_chat_);
          local_574 = 1;
          if (((ulong)puVar8 & 1) == 0) {
            puVar4 = local_388;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_388,PTR_s_hasPrefix__0269d320,&cf_wcr_custom_);
            local_574 = (uint)puVar4;
          }
          local_391 = (byte)local_574 & 1;
          if ((local_390 == (undefined *)0x0) && ((local_574 & 1) == 0)) {
            local_29c = 7;
          }
          else {
            if (local_390 == (undefined *)0x0) {
              local_588 = local_340;
            }
            else {
              local_588 = local_390;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_588,PTR_s_mutableCopy_0269d8a0);
            local_3a1 = local_391 & 1;
            local_3b1 = 0;
            local_3c1 = 0;
            local_3d1 = 0;
            local_3e1 = 0;
            local_3f1 = 0;
            local_3a0 = local_588;
            if (((local_239 & 1) == 0) || (local_3a1 != 0)) {
              local_5b8 = local_340;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_340,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrEnabled);
              _objc_retainAutoreleasedReturnValue();
              local_3d1 = 1;
              local_3d0 = local_5b8;
              if (local_5b8 == (undefined *)0x0) {
                local_5c8 = local_390;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_390,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrEnabled);
                _objc_retainAutoreleasedReturnValue();
                local_3e1 = 1;
                local_3e0 = local_5c8;
                if (local_5c8 == (undefined *)0x0) {
                  local_5c8 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                  _objc_retainAutoreleasedReturnValue();
                  local_3f1 = 1;
                  local_3f0 = local_5c8;
                }
                local_5b8 = local_5c8;
              }
              local_5a8 = local_5b8;
            }
            else {
              local_598 = local_390;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_390,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrEnabled);
              _objc_retainAutoreleasedReturnValue();
              local_3b1 = 1;
              local_3b0 = local_598;
              if (local_598 == (undefined *)0x0) {
                local_598 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                _objc_retainAutoreleasedReturnValue();
                local_3c1 = 1;
                local_3c0 = local_598;
              }
              local_5a8 = local_598;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_5a8,
                       &cf__wcrEnabled);
            if ((local_3f1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_3f0);
            }
            if ((local_3e1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_3e0);
            }
            if ((local_3d1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_3d0);
            }
            if ((local_3c1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_3c0);
            }
            if ((local_3b1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_3b0);
            }
            puVar4 = local_340;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_340,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomTitle);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            FUN_00eee23c();
            _objc_retainAutoreleasedReturnValue();
            local_400 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_400;
            (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_length_0269cca0);
            if (puVar4 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_3a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_400,&cf_title);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_3a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_400,
                         &cf__wcrCustomTitle);
            }
            puVar4 = local_340;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_340,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            FUN_00eee23c();
            _objc_retainAutoreleasedReturnValue();
            local_408 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_408;
            (*(code *)PTR__objc_msgSend_02578628)(local_408,PTR_s_length_0269cca0);
            if (puVar4 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_3a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_408,&cf_icon);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_3a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_408,
                         &cf__wcrCustomIcon);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_addObject__0269d180,local_388);
            (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_addObject__0269d180,local_3a0);
            _objc_storeStrong(&local_408);
            _objc_storeStrong(&local_400,0);
            _objc_storeStrong(&local_3a0,0);
            local_29c = 0;
          }
          _objc_storeStrong(&local_390,0);
        }
        else {
          local_29c = 7;
        }
        _objc_storeStrong(&local_388,0);
        local_558 = local_558 + 1;
      } while (local_558 < local_550);
      local_550 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_1a8,0x10
                );
      local_558 = (undefined *)0x0;
    } while (local_550 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_450,0,0x40);
  puVar3 = local_2b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_628 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_450,auStack_228,0x10);
  if (local_628 != (undefined *)0x0) {
    lVar5 = *local_440;
    local_630 = (undefined *)0x0;
    do {
      do {
        if (*local_440 - lVar5 != 0) {
          _objc_enumerationMutation(*local_440 - lVar5,puVar3);
        }
        uVar9 = *(ulong *)(local_448 + (long)local_630 * 8);
        local_410 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
        _objc_retainAutoreleasedReturnValue();
        local_458 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_hasPrefix__0269d320,&cf_chat_);
        if ((uVar9 & 1) == 0) {
          puVar4 = local_330;
          (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_containsObject__0269cbb8,local_458);
          if (((ulong)puVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_addObject__0269d180,local_458);
            (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_addObject__0269d180,local_410);
          }
          local_29c = 0;
        }
        else {
          local_29c = 9;
        }
        _objc_storeStrong(&local_458,0);
        local_630 = local_630 + 1;
      } while (local_630 < local_628);
      local_628 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_450,auStack_228,0x10
                );
      local_630 = (undefined *)0x0;
    } while (local_628 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_338;
  (*(code *)PTR__objc_retain_02578638)();
  local_29c = 1;
  _objc_storeStrong(&local_338);
  _objc_storeStrong(&local_330,0);
  _objc_storeStrong(&local_2b0,0);
  _objc_storeStrong(&local_2a8,0);
  _objc_storeStrong(&local_248,0);
  _objc_storeStrong(&local_238,0);
  _objc_storeStrong(&local_230,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

