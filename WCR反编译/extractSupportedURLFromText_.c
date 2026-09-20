// extractSupportedURLFromText: @ 010173a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::extractSupportedURLFromText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint local_484;
  undefined *local_468;
  undefined *local_460;
  ulong local_400;
  ulong local_3f8;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  ID local_310;
  undefined *local_308;
  ID local_300;
  undefined2 local_2f2;
  long local_2f0;
  undefined *local_2e8;
  ulong local_2e0;
  long local_2d8;
  undefined *local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  long local_288;
  undefined8 local_280;
  ulong local_278;
  ulong local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  undefined *local_220;
  undefined *local_218;
  int local_20c;
  ulong local_208;
  SEL local_200;
  ID local_1f8;
  ID local_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [128];
  undefined1 auStack_138 [128];
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_208 = 0;
  local_200 = param_2;
  local_1f8 = param_1;
  _objc_storeStrong(&local_208,param_3);
  uVar2 = local_208;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_208, (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_1f0 = 0;
    local_20c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_218 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_220 = puVar3;
    _memset(auStack_268,0,0x40);
    IVar4 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_URLRegex_026adbf8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_1f8;
    local_b8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_schemelessShareURLRegex_026adc00);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b0 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_3a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_a8,0x10);
    if (local_3a8 != (undefined *)0x0) {
      lVar7 = *local_258;
      local_3b0 = (undefined *)0x0;
      do {
        do {
          if (*local_258 - lVar7 != 0) {
            _objc_enumerationMutation(*local_258 - lVar7,puVar1);
          }
          uVar2 = local_208;
          uVar9 = *(ulong *)(local_260 + (long)local_3b0 * 8);
          uVar6 = local_208;
          local_228 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0);
          local_1d0 = 0;
          local_1c8 = 0;
          local_280 = 0;
          local_278 = uVar6;
          local_1d8 = uVar6;
          local_1c0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar9,PTR_s_matchesInString_options_range__0269ef68,uVar2,0,0,uVar6);
          _objc_retainAutoreleasedReturnValue();
          local_270 = uVar9;
          _memset(auStack_2c8,0,0x40);
          uVar2 = local_270;
          (*(code *)PTR__objc_retain_02578638)();
          local_3f8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_138,
                     0x10);
          if (local_3f8 != 0) {
            lVar8 = *local_2b8;
            local_400 = 0;
            do {
              do {
                if (*local_2b8 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_2b8 - lVar8,uVar2);
                }
                lVar10 = *(long *)(local_2c0 + local_400 * 8);
                puVar3 = PTR_s_range_0269ef50;
                local_288 = lVar10;
                (*(code *)PTR__objc_msgSend_02578628)();
                uVar6 = local_208;
                local_2d8 = lVar10;
                local_2d0 = puVar3;
                if (lVar10 != 0x7fffffffffffffff) {
                  lVar10 = local_288;
                  puVar3 = PTR_s_range_0269ef50;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_2f0 = lVar10;
                  local_2e8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_substringWithRange__0269d138,lVar10,puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  local_1e0 = &DAT_028e3188;
                  local_1e8 = 0;
                  local_2e0 = uVar6;
                  _objc_storeStrong(&local_1e8,&PTR___NSConcreteGlobalBlock_02584590);
                  if (*local_1e0 != -1) {
                    _dispatch_once(local_1e0,local_1e8);
                  }
                  _objc_storeStrong(&local_1e8,0);
                  while (uVar9 = local_2e0,
                        (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0),
                        uVar6 = local_2e0, uVar9 != 0) {
                    uVar9 = local_2e0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar6,PTR_s_characterAtIndex__0269fa18,uVar9 - 1);
                    local_2f2 = (undefined2)uVar6;
                    uVar9 = DAT_028e3180;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (DAT_028e3180,PTR_s_characterIsMember__026a20a0,uVar6 & 0xffff);
                    uVar6 = local_2e0;
                    if ((uVar9 & 1) == 0) break;
                    uVar9 = local_2e0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar6,PTR_s_substringToIndex__0269d6c0,uVar9 - 1);
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = local_2e0;
                    local_2e0 = uVar6;
                    (*(code *)PTR__objc_release_02578630)(uVar9);
                  }
                  IVar4 = local_1f8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f8,PTR_s_normalizedShareURLCandidate__026adc08,local_2e0);
                  _objc_retainAutoreleasedReturnValue();
                  local_300 = IVar4;
                  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
                  if ((IVar4 == 0) ||
                     (puVar3 = local_220,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_220,PTR_s_containsObject__0269cbb8,local_300),
                     ((ulong)puVar3 & 1) != 0)) {
                    local_20c = 7;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_220,PTR_s_addObject__0269d180,local_300);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_218,PTR_s_addObject__0269d180,local_300);
                    local_20c = 0;
                  }
                  _objc_storeStrong(&local_300);
                  _objc_storeStrong(&local_2e0,0);
                }
                local_400 = local_400 + 1;
              } while (local_400 < local_3f8);
              local_3f8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,
                         auStack_138,0x10);
              local_400 = 0;
            } while (local_3f8 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
          _objc_storeStrong(&local_270,0);
          local_3b0 = local_3b0 + 1;
        } while (local_3b0 < local_3a8);
        local_3a8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_a8,
                   0x10);
        local_3b0 = (undefined *)0x0;
      } while (local_3a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_308 = puVar1;
    _memset(auStack_350,0,0x40);
    puVar1 = local_218;
    (*(code *)PTR__objc_retain_02578638)();
    local_460 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_1b8,0x10);
    if (local_460 != (undefined *)0x0) {
      lVar7 = *local_340;
      local_468 = (undefined *)0x0;
      do {
        do {
          if (*local_340 - lVar7 != 0) {
            _objc_enumerationMutation(*local_340 - lVar7,puVar1);
          }
          local_310 = *(ID *)(local_348 + (long)local_468 * 8);
          IVar4 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_platformForURL__026ad950,local_310);
          local_484 = 0;
          if (IVar4 != 0) {
            IVar5 = local_1f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_platformAllowed__026adc10,IVar4);
            local_484 = (uint)IVar5;
          }
          IVar4 = local_310;
          if ((local_484 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1f0 = IVar4;
            local_20c = 1;
            goto LAB_01017d98;
          }
          local_468 = local_468 + 1;
        } while (local_468 < local_460);
        local_460 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_1b8,
                   0x10);
        local_468 = (undefined *)0x0;
      } while (local_460 != (undefined *)0x0);
    }
    local_20c = 0;
LAB_01017d98:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_20c == 0) {
      local_1f0 = 0;
      local_20c = 1;
    }
    _objc_storeStrong(&local_308);
    _objc_storeStrong(&local_220,0);
    _objc_storeStrong(&local_218,0);
  }
  _objc_storeStrong(&local_208,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_1f0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

