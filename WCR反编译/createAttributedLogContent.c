// createAttributedLogContent @ 01f46b84

/* WARNING: Removing unreachable block (ram,0x01f46c50) */
/* Function Stack Size: 0x10 bytes */

ID WCRefineUpdateLogView::createAttributedLogContent(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  undefined1 *local_688;
  undefined *local_660;
  undefined *local_658;
  undefined *local_5c8;
  undefined *local_5c0;
  undefined *local_568;
  undefined *local_560;
  undefined *local_4d8;
  undefined *local_4d0;
  undefined *local_4c8;
  undefined1 *local_4c0;
  undefined8 local_4b8;
  undefined *local_4b0;
  undefined1 *local_4a8;
  undefined4 local_49c;
  undefined1 *local_498;
  double local_490;
  undefined1 *local_488;
  long local_480;
  undefined1 *local_478;
  undefined1 auStack_470 [8];
  long local_468;
  long *local_460;
  long local_430;
  undefined *local_428;
  undefined *local_420;
  undefined4 local_418;
  undefined4 local_414;
  code *local_410;
  undefined *local_408;
  undefined *local_400;
  undefined *local_3f8;
  undefined8 local_3f0;
  undefined *local_3e8;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined8 local_3d0;
  undefined *local_3c8;
  undefined1 auStack_3c0 [8];
  long local_3b8;
  long *local_3b0;
  undefined8 local_380;
  undefined *local_378;
  undefined8 local_370;
  undefined *local_368;
  undefined *local_360;
  undefined *local_358;
  undefined *local_350;
  undefined *local_348;
  undefined *local_340;
  undefined *local_338;
  undefined *local_330;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  undefined8 local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  SEL local_2b8;
  ID local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined8 local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined *local_250;
  undefined *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined *local_230;
  undefined *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined1 auStack_208 [128];
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineUpdateLogView_026cf590;
  local_2b8 = param_2;
  local_2b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineUpdateLogView_026cf590,PTR_s_updateLogContent_026c8ef8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_2c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  local_2d0 = (undefined *)0x0;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_2c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_2d0;
  local_2d0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
  _objc_alloc();
  puVar1 = local_2c0;
  local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  local_38 = local_2c8;
  local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
  local_30 = local_2d0;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithString_attributes__026a02b0,puVar1);
  local_2d8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_78 = &cf_eX;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
  _objc_retainAutoreleasedReturnValue();
  local_70 = &cf_OY;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
  _objc_retainAutoreleasedReturnValue();
  local_68 = &cf_OS;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_60,&local_78,3);
  _objc_retainAutoreleasedReturnValue();
  local_2e0 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_328,0,0x40);
  puVar1 = local_2e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_560 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_f8,0x10);
  if (local_560 != (undefined *)0x0) {
    lVar5 = *local_318;
    local_568 = (undefined *)0x0;
    do {
      do {
        if (*local_318 - lVar5 != 0) {
          _objc_enumerationMutation(*local_318 - lVar5,puVar1);
        }
        local_2e8 = *(undefined8 *)(local_320 + (long)local_568 * 8);
        puVar2 = local_2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2e0,PTR_s_objectForKeyedSubscript__0269d098,local_2e8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_2c0;
        local_330 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
        local_220 = 0;
        local_218 = 0;
        local_340 = (undefined *)0x0;
        local_338 = puVar3;
        local_228 = puVar3;
        local_210 = puVar3;
        while( true ) {
          puVar2 = local_340;
          puVar3 = local_2c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
          lVar8 = (long)puVar2 - (long)puVar3;
          if (puVar3 <= puVar2) break;
          puVar2 = local_2c0;
          puVar3 = PTR_s_rangeOfString_options_range__0269d130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2c0,PTR_s_rangeOfString_options_range__0269d130,local_2e8,0,local_340,
                     local_338);
          local_350 = puVar2;
          local_348 = puVar3;
          if (puVar2 == (undefined *)0x7fffffffffffffff) {
            lVar8 = 0;
            break;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2d8,PTR_s_addAttribute_value_range__026a1d88,
                     *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070,local_330,puVar2,
                     puVar3);
          local_340 = local_350 + (long)local_348;
          puVar2 = local_2c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
          local_338 = puVar2 + -(long)local_340;
        }
        _objc_storeStrong(lVar8,&local_330,0);
        local_568 = local_568 + 1;
      } while (local_568 < local_560);
      local_560 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_f8,0x10)
      ;
      local_568 = (undefined *)0x0;
    } while (local_560 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_WCRefinev_0_9_______n__,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_2c0;
  puVar3 = local_2c0;
  local_358 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
  local_240 = 0;
  local_238 = 0;
  local_370 = 0;
  local_368 = puVar3;
  local_248 = puVar3;
  local_230 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_matchesInString_options_range__0269ef68,puVar1,0,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_360 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  local_378 = puVar1;
  _memset(auStack_3c0,0,0x40);
  puVar1 = local_360;
  (*(code *)PTR__objc_retain_02578638)();
  local_5c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c0,auStack_178,0x10);
  if (local_5c0 != (undefined *)0x0) {
    lVar5 = *local_3b0;
    local_5c8 = (undefined *)0x0;
    do {
      do {
        if (*local_3b0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_3b0 - lVar5,puVar1);
        }
        puVar3 = local_2d8;
        puVar2 = local_378;
        uVar6 = *(undefined8 *)(local_3b8 + (long)local_5c8 * 8);
        uVar7 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
        puVar4 = PTR_s_range_0269ef50;
        local_380 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_3d0 = uVar6;
        local_3c8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_addAttribute_value_range__026a1d88,uVar7,puVar2,uVar6,puVar4);
        local_5c8 = local_5c8 + 1;
      } while (local_5c8 < local_5c0);
      local_5c0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c0,auStack_178,0x10
                );
      local_5c8 = (undefined *)0x0;
    } while (local_5c0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_188 = &cf_bUcLi;
  local_180 = &cf__iUS;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_188,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_3d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_2c0;
  puVar1 = local_2c0;
  local_3e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
  puVar2 = local_3d8;
  local_260 = 0;
  local_258 = 0;
  local_3f0 = 0;
  local_420 = PTR___NSConcreteStackBlock_02578660;
  local_418 = 0xc2000000;
  local_414 = 0;
  local_410 = FUN_01f47bc4;
  local_408 = &DAT_0258cca0;
  local_3e8 = puVar1;
  local_268 = puVar1;
  local_250 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_3e0;
  local_400 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_3f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_enumerateSubstringsInRange_optio_026a64a0,local_3f0,local_3e8,0,&local_420
            );
  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_setSponsorLineRanges__026c8f00,local_3e0);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  local_428 = puVar1;
  _memset(auStack_470,0,0x40);
  puVar1 = local_3e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_658 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_470,auStack_208,0x10);
  if (local_658 != (undefined *)0x0) {
    lVar5 = *local_460;
    local_660 = (undefined *)0x0;
    do {
      do {
        if (*local_460 - lVar5 != 0) {
          _objc_enumerationMutation(*local_460 - lVar5,puVar1);
        }
        lVar8 = *(long *)(local_468 + (long)local_660 * 8);
        puVar2 = PTR_s_rangeValue_026ba098;
        local_430 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_480 = lVar8;
        local_478 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2d8,PTR_s_addAttribute_value_range__026a1d88,
                   *(undefined8 *)PTR__NSFontAttributeName_02578068,local_428,lVar8,puVar2);
        for (local_488 = (undefined1 *)0x0; local_488 < local_478; local_488 = local_488 + 1) {
          local_490 = (double)NEON_ucvtf(local_488);
          local_498 = local_478;
          local_49c = 1;
          if (local_478 == (undefined1 *)0x0) {
            local_688 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
          else {
            local_688 = local_478;
          }
          local_4a8 = local_688;
          dVar9 = (double)NEON_ucvtf(local_688);
          local_490 = local_490 / dVar9;
          puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_490,0x3feb333333333333,0x3fee666666666666,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithHue_saturation_brightne_026b8910);
          _objc_retainAutoreleasedReturnValue();
          local_4c0 = local_488 + local_480;
          local_288 = 1;
          local_270 = 1;
          local_4b8 = 1;
          local_4b0 = puVar2;
          local_280 = local_4c0;
          local_278 = local_4c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2d8,PTR_s_addAttribute_value_range__026a1d88,
                     *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070,puVar2,local_4c0,1)
          ;
          _objc_storeStrong(&local_4b0,0);
        }
        local_660 = local_660 + 1;
      } while (local_660 < local_658);
      local_658 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_470,auStack_208,0x10
                );
      local_660 = (undefined *)0x0;
    } while (local_658 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_4d0 = local_2c0;
  local_4c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
  local_2a0 = 0;
  local_298 = 0;
  local_4d8 = (undefined *)0x0;
  local_2a8 = local_4d0;
  local_290 = local_4d0;
  while ((puVar1 = local_2c0, (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0)
         , local_4d8 < puVar1 &&
         (puVar2 = local_2c0, puVar3 = PTR_s_rangeOfString_options_range__0269d130,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_2c0,PTR_s_rangeOfString_options_range__0269d130,&cf__wcrefine,0,local_4d8,
                    local_4d0), puVar1 = local_4c8, puVar2 != (undefined *)0x7fffffffffffffff))) {
    puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,puVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_2d8;
    uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addAttribute_value_range__026a1d88,uVar6,puVar4,puVar2,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_2d8;
    uVar6 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_025780a0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addAttribute_value_range__026a1d88,uVar6,puVar4,puVar2,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_4d8 = puVar2 + (long)puVar3;
    local_4d0 = local_2c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
    local_4d0 = local_4d0 + -(long)local_4d8;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_2b0,PTR_s_setTelegramChannelRanges__026c8f08,local_4c8);
  puVar1 = local_2d8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_4c8);
  _objc_storeStrong(&local_428,0);
  _objc_storeStrong(&local_3f8,0);
  _objc_storeStrong(&local_400,0);
  _objc_storeStrong(&local_3e0,0);
  _objc_storeStrong(&local_3d8,0);
  _objc_storeStrong(&local_378,0);
  _objc_storeStrong(&local_360,0);
  _objc_storeStrong(&local_358,0);
  _objc_storeStrong(&local_2e0,0);
  _objc_storeStrong(&local_2d8,0);
  _objc_storeStrong(&local_2d0,0);
  _objc_storeStrong(&local_2c8,0);
  _objc_storeStrong(&local_2c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

