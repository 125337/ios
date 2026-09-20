// highlightedCrashLog:todayDateKey:includesToday: @ 0092c16c

/* Function Stack Size: 0x24 bytes */

ID WCRefineCrashMonitorViewController::highlightedCrashLog_todayDateKey_includesToday_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *local_528;
  undefined *local_520;
  undefined *local_3c8;
  undefined *local_3a8;
  undefined *local_398;
  undefined *local_368;
  undefined4 local_360;
  undefined4 local_35c;
  code *local_358;
  undefined *local_350;
  undefined *local_348;
  undefined *local_340;
  undefined *local_338;
  undefined *local_330;
  undefined4 local_328;
  undefined4 local_324;
  code *local_320;
  undefined *local_318;
  undefined *local_310;
  undefined *local_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  code *local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2bc;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  undefined8 local_260;
  ulong local_258;
  undefined *local_250;
  undefined *local_248;
  byte local_239;
  undefined *local_238;
  undefined *local_230;
  byte local_221;
  undefined *local_220;
  byte local_211;
  undefined *local_210;
  undefined *local_208;
  byte local_1f9;
  ulong local_1f8;
  ulong local_1f0;
  SEL local_1e8;
  undefined *local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [128];
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1f0 = 0;
  local_1e8 = param_2;
  local_1e0 = (undefined *)param_1;
  _objc_storeStrong(&local_1f0,param_3);
  local_1f8 = 0;
  _objc_storeStrong(&local_1f8,param_4);
  local_1f9 = (byte)param_5;
  puVar1 = local_1e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_logTextView_026a9fc0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_211 = 0;
  local_221 = 0;
  local_398 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_3a8 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4026000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_fontWithName_size__026a1cd0,&cf_Menlo);
    _objc_retainAutoreleasedReturnValue();
    local_211 = 1;
    local_210 = local_3a8;
    if (local_3a8 == (undefined *)0x0) {
      local_3a8 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      local_221 = 1;
      local_220 = local_3a8;
    }
    local_398 = local_3a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_208 = local_398;
  if ((local_221 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_220);
  }
  if ((local_211 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_210);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_pointSize_026a1d68);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fontWithName_size__026a1cd0,&cf_Menlo_Bold);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_239 = 0;
  local_3c8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_pointSize_026a1d68);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_boldSystemFontOfSize__0269cf28);
    _objc_retainAutoreleasedReturnValue();
    local_3c8 = puVar2;
    local_238 = puVar2;
  }
  local_239 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_230 = local_3c8;
  if ((local_239 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_238);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
  _objc_alloc();
  uVar14 = local_1f0;
  local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  local_38 = local_208;
  local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithString_attributes__026a02b0,uVar14);
  local_248 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_98 = &cf_pattern;
  local_88 = &cf_________;
  local_90 = &cf_color;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_80 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_88,&local_98,2);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = &cf_pattern;
  local_a8 = &cf___time_time_unix_name_reason_thread_image_wcr_in_stack__s__;
  local_b0 = &cf_color;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGrayColor_026a9fa8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_a0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_a8,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = &cf_pattern;
  local_c8 = &cf_NS_w_Exception_std__terminate_SIG_w__EXC__w_;
  local_d0 = &cf_color;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_70 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_c0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_c8,&local_d8,2);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = &cf_pattern;
  local_e8 = &cf___WCRefine__;
  local_f0 = &cf_color;
  puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_68 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemPurpleColor_026cab90);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_e0 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_e8,&local_f8,2);
  _objc_retainAutoreleasedReturnValue();
  local_118 = &cf_pattern;
  local_108 = &cf_0x_0_9a_fA_F__;
  local_110 = &cf_color;
  puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_60 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_100 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_108,&local_118,2);
  _objc_retainAutoreleasedReturnValue();
  local_138 = &cf_pattern;
  local_128 = &cf____s__d_;
  local_130 = &cf_color;
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_58 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_120 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_128,&local_138,2);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,6);
  _objc_retainAutoreleasedReturnValue();
  local_250 = puVar13;
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar14 = local_1f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
  local_1d0 = 0;
  local_1c8 = 0;
  local_260 = 0;
  local_258 = uVar14;
  local_1d8 = uVar14;
  local_1c0 = uVar14;
  _memset(auStack_2a8,0,0x40);
  puVar1 = local_250;
  (*(code *)PTR__objc_retain_02578638)();
  local_520 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_1b8,0x10);
  if (local_520 != (undefined *)0x0) {
    lVar15 = *local_298;
    local_528 = (undefined *)0x0;
    do {
      do {
        if (*local_298 - lVar15 != 0) {
          _objc_enumerationMutation(*local_298 - lVar15,puVar1);
        }
        puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        uVar16 = *(undefined8 *)(local_2a0 + (long)local_528 * 8);
        local_2b0 = 0x10;
        local_268 = uVar16;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar16,PTR_s_objectForKeyedSubscript__0269d098,&cf_pattern);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_regularExpressionWithPattern_opt_0269ef10,uVar16,local_2b0,0);
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = puVar2;
        (*(code *)PTR__objc_release_02578630)(uVar16);
        if (local_2b8 == (undefined *)0x0) {
          local_2bc = 3;
        }
        else {
          uVar16 = local_268;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_268,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = local_1f0;
          puVar3 = local_248;
          puVar2 = local_2b8;
          local_2f8 = PTR___NSConcreteGlobalBlock_02578658;
          local_2f0 = 0xd0800000;
          local_2ec = 0;
          local_2e8 = FUN_0092d0e8;
          local_2e0 = &DAT_0257a2a8;
          local_2c8 = uVar16;
          (*(code *)PTR__objc_retain_02578638)();
          uVar16 = local_2c8;
          local_2d8 = puVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_2d0 = uVar16;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_enumerateMatchesInString_options_0269ef28,uVar14,0,local_260,
                     local_258,&local_2f8);
          _objc_storeStrong(&local_2d0);
          _objc_storeStrong(&local_2d8,0);
          _objc_storeStrong(&local_2c8,0);
          local_2bc = 0;
        }
        _objc_storeStrong(&local_2b8,0);
        local_528 = local_528 + 1;
      } while (local_528 < local_520);
      local_520 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_1b8,0x10
                );
      local_528 = (undefined *)0x0;
    } while (local_520 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((((local_1f9 & 1) != 0) ||
      (uVar14 = local_1f0,
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_containsString__0269d0b0,&cf_0Ne0),
      (uVar14 & 1) != 0)) ||
     (uVar14 = local_1f0,
     (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_containsString__0269d0b0,&cf_Ne),
     (uVar14 & 1) != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_0Ne0_,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = local_1f0;
    puVar1 = local_248;
    local_330 = PTR___NSConcreteGlobalBlock_02578658;
    local_328 = 0xd0800000;
    local_324 = 0;
    local_320 = FUN_0092d1e8;
    local_318 = &DAT_0257a2a8;
    local_300 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_230;
    local_310 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_308 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_enumerateMatchesInString_options_0269ef28,uVar14,0,local_260,local_258,
               &local_330);
    uVar14 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_length_0269cca0);
    if (5 < uVar14) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_______crash____d___log_________);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      local_338 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,puVar1,0x10);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = local_1f0;
      puVar1 = local_248;
      local_368 = PTR___NSConcreteGlobalBlock_02578658;
      local_360 = 0xd0800000;
      local_35c = 0;
      local_358 = FUN_0092d390;
      local_350 = &DAT_02581130;
      local_340 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_348 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_enumerateMatchesInString_options_0269ef28,uVar14,0,local_260,local_258
                 ,&local_368);
      _objc_storeStrong(&local_348,0);
      _objc_storeStrong(&local_340,0);
      _objc_storeStrong(&local_338,0);
    }
    _objc_storeStrong(&local_308);
    _objc_storeStrong(&local_310,0);
    _objc_storeStrong(&local_300,0);
  }
  puVar1 = local_248;
  (*(code *)PTR__objc_retain_02578638)();
  local_2bc = 1;
  _objc_storeStrong(&local_250);
  _objc_storeStrong(&local_248,0);
  _objc_storeStrong(&local_230,0);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_1f8,0);
  _objc_storeStrong(&local_1f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

