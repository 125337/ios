// FUN_01625d48 @ 01625d48

void FUN_01625d48(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong local_510;
  ulong local_508;
  cfstringStruct *local_4a0;
  undefined *local_3c8;
  ulong local_3a0;
  ulong local_398;
  ulong local_348;
  ulong local_340;
  long local_310;
  long local_308;
  undefined1 auStack_300 [8];
  long local_2f8;
  long *local_2f0;
  long local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  byte local_299;
  undefined *local_298;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  undefined *local_280;
  undefined *local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined4 local_214;
  long local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  cfstringStruct *local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_1);
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_2);
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = pcVar2;
  _memset(auStack_208,0,0x40);
  uVar1 = local_1b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_340 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10);
  if (local_340 != 0) {
    lVar7 = *local_1f8;
    local_348 = 0;
    do {
      do {
        if (*local_1f8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_1f8 - lVar7,uVar1);
        }
        lVar8 = *(long *)(local_200 + local_348 * 8);
        local_1c8 = lVar8;
        FUN_01624b98();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_1c0;
        local_210 = lVar8;
        if (lVar8 == 0) {
          local_214 = 3;
        }
        else {
          lVar3 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_setObject_forKeyedSubscript__0269d248,lVar8);
          (*(code *)PTR__objc_release_02578630)(lVar3);
          local_214 = 0;
        }
        _objc_storeStrong(&local_210,0);
        local_348 = local_348 + 1;
      } while (local_348 < local_340);
      local_340 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10);
      local_348 = 0;
    } while (local_340 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_220 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_228 = puVar4;
  _memset(auStack_270,0,0x40);
  uVar1 = local_1b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_398 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,0x10);
  if (local_398 != 0) {
    lVar7 = *local_260;
    local_3a0 = 0;
    do {
      do {
        if (*local_260 - lVar7 != 0) {
          _objc_enumerationMutation(*local_260 - lVar7,uVar1);
        }
        puVar9 = *(undefined **)(local_268 + local_3a0 * 8);
        local_230 = puVar9;
        FUN_01624b98();
        _objc_retainAutoreleasedReturnValue();
        local_278 = puVar9;
        if (puVar9 == (undefined *)0x0) {
          local_214 = 5;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
          _objc_retainAutoreleasedReturnValue();
          local_280 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_length_0269cca0);
          if ((puVar9 == (undefined *)0x0) ||
             (puVar9 = local_228,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_228,PTR_s_containsObject__0269cbb8,local_280),
             ((ulong)puVar9 & 1) != 0)) {
            local_214 = 5;
          }
          else {
            pcVar2 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,local_280);
            _objc_retainAutoreleasedReturnValue();
            local_288 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              puVar9 = local_278;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrEnabled);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar9);
              puVar9 = local_280;
              if (((ulong)puVar4 & 1) == 0) goto LAB_01626bb8;
              pcVar2 = &cf_wcr_sf_open_url;
              (*(code *)PTR__objc_msgSend_02578628)
                        (&cf_wcr_sf_open_url,PTR_s_stringByAppendingString__0269d398,&cf__);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_hasPrefix__0269d320);
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              if (((ulong)puVar9 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_addObject__0269d180,local_278)
                ;
                (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_addObject__0269d180,local_280)
                ;
                goto LAB_01626bb8;
              }
              local_214 = 5;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_mutableCopy_0269d8a0);
              puVar9 = local_278;
              local_290 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrEnabled);
              _objc_retainAutoreleasedReturnValue();
              local_299 = 0;
              local_3c8 = puVar9;
              if (puVar9 == (undefined *)0x0) {
                local_3c8 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                _objc_retainAutoreleasedReturnValue();
                local_298 = local_3c8;
              }
              local_299 = puVar9 == (undefined *)0x0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,local_3c8,
                         &cf__wcrEnabled);
              if ((local_299 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_298);
              }
              (*(code *)PTR__objc_release_02578630)(puVar9);
              puVar9 = local_278;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomTitle);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (puVar9 != (undefined *)0x0) {
                puVar9 = local_278;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_278,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                           &cf__wcrCustomTitle);
                (*(code *)PTR__objc_release_02578630)(puVar9);
              }
              puVar9 = local_278;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (puVar9 != (undefined *)0x0) {
                puVar9 = local_278;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_278,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                           &cf__wcrCustomIcon);
                (*(code *)PTR__objc_release_02578630)(puVar9);
              }
              puVar9 = local_278;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomKind);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (puVar9 != (undefined *)0x0) {
                puVar9 = local_278;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_278,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                           &cf__wcrCustomKind);
                (*(code *)PTR__objc_release_02578630)(puVar9);
              }
              puVar9 = local_278;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (puVar9 != (undefined *)0x0) {
                puVar9 = local_278;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_278,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                           &cf__wcrCustomPayload);
                (*(code *)PTR__objc_release_02578630)(puVar9);
              }
              puVar9 = local_278;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrLocalIcon);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (puVar9 != (undefined *)0x0) {
                puVar9 = local_278;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_278,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,
                           &cf__wcrLocalIcon);
                (*(code *)PTR__objc_release_02578630)(puVar9);
              }
              puVar9 = local_278;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomTitle);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar9;
              FUN_01618794();
              _objc_retainAutoreleasedReturnValue();
              local_2a8 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar9);
              puVar9 = local_2a8;
              (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_length_0269cca0);
              if (puVar9 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,local_2a8,&cf_title
                          );
              }
              puVar9 = local_278;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar9;
              FUN_01618794();
              _objc_retainAutoreleasedReturnValue();
              local_2b0 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar9);
              puVar9 = local_2b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_length_0269cca0);
              if (puVar9 == (undefined *)0x0) {
                pcVar2 = local_290;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = pcVar2;
                FUN_01618794();
                _objc_retainAutoreleasedReturnValue();
                pcVar6 = pcVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                if (pcVar6 == (cfstringStruct *)0x0) {
                  puVar9 = local_278;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar9;
                  FUN_01618794();
                  _objc_retainAutoreleasedReturnValue();
                  local_2b8 = puVar4;
                  (*(code *)PTR__objc_release_02578630)(puVar9);
                  puVar9 = local_2b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_length_0269cca0);
                  if (((puVar9 != (undefined *)0x0) &&
                      (puVar9 = local_2b8,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2b8,PTR_s_isEqualToString__0269ccc8,
                                 &cf_icons_outlined_setting), ((ulong)puVar9 & 1) == 0)) &&
                     (puVar9 = local_2b8,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_2b8,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_more),
                     ((ulong)puVar9 & 1) == 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,local_2b8,
                               &cf_icon);
                  }
                  _objc_storeStrong(&local_2b8,0);
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,local_2b0,&cf_icon)
                ;
              }
              puVar9 = local_280;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_280,PTR_s_isEqualToString__0269ccc8,&cf_wcr_sf_manage_buttons);
              if ((((ulong)puVar9 & 1) != 0) &&
                 (puVar9 = local_2b0,
                 (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_length_0269cca0),
                 puVar9 == (undefined *)0x0)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,
                           &cf_icons_filled_wrench,&cf_icon);
              }
              pcVar2 = local_290;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrSource);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar2;
              FUN_01618794();
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              if (pcVar6 == (cfstringStruct *)0x0) {
                pcVar2 = local_288;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_288,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrSource);
                _objc_retainAutoreleasedReturnValue();
                local_4a0 = pcVar2;
                if (pcVar2 == (cfstringStruct *)0x0) {
                  local_4a0 = &cf_external;
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,local_4a0,
                           &cf__wcrSource);
                (*(code *)PTR__objc_release_02578630)(pcVar2);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_addObject__0269d180,local_290);
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_addObject__0269d180,local_280);
              _objc_storeStrong(&local_2b0);
              _objc_storeStrong(&local_2a8,0);
              _objc_storeStrong(&local_290,0);
LAB_01626bb8:
              local_214 = 0;
            }
            _objc_storeStrong(&local_288,0);
          }
          _objc_storeStrong(&local_280,0);
        }
        _objc_storeStrong(&local_278,0);
        local_3a0 = local_3a0 + 1;
      } while (local_3a0 < local_398);
      local_398 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,0x10)
      ;
      local_3a0 = 0;
    } while (local_398 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _memset(auStack_300,0,0x40);
  uVar1 = local_1b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_508 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_1a8,0x10);
  if (local_508 != 0) {
    lVar7 = *local_2f0;
    local_510 = 0;
    do {
      do {
        if (*local_2f0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_2f0 - lVar7,uVar1);
        }
        lVar8 = *(long *)(local_2f8 + local_510 * 8);
        local_2c0 = lVar8;
        FUN_01624b98();
        _objc_retainAutoreleasedReturnValue();
        local_308 = lVar8;
        if (lVar8 == 0) {
          local_214 = 7;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
          _objc_retainAutoreleasedReturnValue();
          local_310 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
          if ((lVar8 == 0) ||
             (puVar9 = local_228,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_228,PTR_s_containsObject__0269cbb8,local_310),
             ((ulong)puVar9 & 1) != 0)) {
            local_214 = 7;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_addObject__0269d180,local_308);
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_addObject__0269d180,local_310);
            local_214 = 0;
          }
          _objc_storeStrong(&local_310,0);
        }
        _objc_storeStrong(&local_308,0);
        local_510 = local_510 + 1;
      } while (local_510 < local_508);
      local_508 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_1a8,0x10)
      ;
      local_510 = 0;
    } while (local_508 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar9 = local_220;
  (*(code *)PTR__objc_retain_02578638)();
  local_214 = 1;
  _objc_storeStrong(&local_228);
  _objc_storeStrong(&local_220,0);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar9);
  return;
}

