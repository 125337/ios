// FUN_00909254 @ 00909254

/* WARNING: Removing unreachable block (ram,0x00909f08) */
/* WARNING: Removing unreachable block (ram,0x0090a01c) */
/* WARNING: Removing unreachable block (ram,0x009098f0) */
/* WARNING: Removing unreachable block (ram,0x009094fc) */

void FUN_00909254(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *local_680;
  undefined *local_678;
  undefined *local_648;
  undefined *local_5d8;
  undefined *local_5d0;
  undefined *local_590;
  undefined *local_538;
  undefined *local_4b0;
  undefined8 local_4a8;
  ulong local_4a0;
  undefined8 local_498;
  ulong local_490;
  undefined8 local_488;
  ulong local_480;
  undefined8 local_478;
  ulong local_470;
  undefined8 local_468;
  ulong local_460;
  undefined *local_458;
  ulong local_450 [3];
  undefined *local_438;
  ulong local_430;
  ulong local_428;
  undefined *local_420;
  undefined1 auStack_418 [8];
  long local_410;
  long *local_408;
  ulong local_3d8;
  byte local_3c9;
  undefined *local_3c8;
  undefined *local_3c0;
  undefined *local_3b8;
  undefined *local_3b0;
  byte local_3a1;
  undefined *local_3a0;
  byte local_391;
  undefined *local_390;
  undefined *local_388;
  byte local_379;
  undefined8 local_378;
  byte local_369;
  undefined *local_368;
  undefined *local_360;
  undefined *local_358;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  undefined8 local_310;
  undefined *local_308;
  undefined *local_300;
  long local_2f8;
  undefined *local_2f0;
  long local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  int local_2c4;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined4 local_2b0;
  byte local_2a9;
  undefined *local_2a8;
  byte local_299;
  undefined *local_298;
  byte local_289;
  undefined *local_288;
  byte local_279;
  undefined *local_278;
  undefined *local_270;
  byte local_261;
  long local_260;
  long local_258;
  long local_250;
  undefined8 local_248;
  long local_240;
  long local_238;
  undefined8 local_230;
  ulong local_228;
  undefined8 local_220;
  undefined8 local_218;
  ulong local_210;
  ulong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  ulong local_190;
  ulong local_188;
  undefined8 local_180;
  undefined8 local_178;
  ulong local_170;
  ulong local_168;
  undefined8 local_160;
  undefined8 local_158;
  ulong local_150;
  long local_148;
  undefined *local_140;
  undefined *local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar3 = DAT_02323da8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = *(long *)(param_1 + 0x20);
  local_258 = param_1;
  local_250 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_activeLogType_026aa060);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_260 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isMonitorEnabledForCurrentMode_026a9f10);
  local_261 = (byte)uVar2;
  if (local_260 == 3) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if ((local_261 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    local_279 = 0;
    local_289 = 0;
    local_299 = 0;
    local_2a9 = 0;
    local_538 = PTR_WCNavigationMonitor_026cea60;
    if (local_260 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      local_279 = 1;
      local_278 = local_538;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_289 = 1;
      local_288 = local_538;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      local_299 = 1;
      local_298 = local_538;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_2a9 = 1;
      local_2a8 = local_538;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = local_538;
    if ((local_2a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2a8);
    }
    if ((local_299 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_298);
    }
    if ((local_289 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_288);
    }
    if ((local_279 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_278);
    }
    if ((local_270 == (undefined *)0x0) ||
       (puVar4 = local_270, (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_length_0269cca0),
       puVar4 == (undefined *)0x0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_2b0 = 1;
    }
    else {
      puVar4 = local_270;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_270,PTR_s_componentsSeparatedByString__0269d3c0,&cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      local_2c4 = 0;
      local_2b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
      local_2e0 = local_2b8;
      local_2d0 = puVar4 + -0x1e;
      local_590 = local_2d0;
      if ((long)local_2d0 <= (long)local_2c4) {
        local_590 = (undefined *)(long)local_2c4;
      }
      local_2d8 = local_590;
      local_2c0 = local_590;
      puVar4 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0);
      local_2e8 = (long)puVar4 - (long)local_2c0;
      local_140 = local_590;
      local_138 = local_590;
      local_2f0 = local_590;
      local_148 = local_2e8;
      local_130 = local_2e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2e0,PTR_s_subarrayWithRange__0269d848,local_590,local_2e8);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_2e0;
      local_2f8 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_300 = puVar4;
      if (local_260 == 3) {
        lVar5 = *(long *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_nsLogPreciseKeywords_026aa078);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_2f8;
        local_2f8 = lVar5;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        lVar1 = local_2f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_count_0269cfe0);
        if (lVar1 != 0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_308 = puVar4;
          _memset(auStack_350,0,0x40);
          puVar4 = local_2e0;
          (*(code *)PTR__objc_retain_02578638)();
          local_5d0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_a8,
                     0x10);
          if (local_5d0 != (undefined *)0x0) {
            lVar1 = *local_340;
            local_5d8 = (undefined *)0x0;
            do {
              do {
                if (*local_340 - lVar1 != 0) {
                  _objc_enumerationMutation(*local_340 - lVar1,puVar4);
                }
                local_310 = *(undefined8 *)(local_348 + (long)local_5d8 * 8);
                uVar6 = *(ulong *)(param_1 + 0x20);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_line_matchesAnyKeyword__026aa0a8,local_310,local_2f8);
                if ((uVar6 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_308,PTR_s_addObject__0269d180,local_310);
                }
                local_5d8 = local_5d8 + 1;
              } while (local_5d8 < local_5d0);
              local_5d0 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,
                         auStack_a8,0x10);
              local_5d8 = (undefined *)0x0;
            } while (local_5d0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_300,local_308);
          _objc_storeStrong(&local_308,0);
        }
      }
      puVar4 = local_300;
      (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_count_0269cfe0);
      if (puVar4 == (undefined *)0x0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((local_260 == 3) &&
           (lVar1 = local_2f8, (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_count_0269cfe0)
           , lVar1 != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        else {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_2b0 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
        _objc_alloc_init();
        local_369 = 0;
        local_379 = 0;
        puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_358 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
        _objc_retainAutoreleasedReturnValue();
        local_369 = 1;
        local_368 = puVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_360 = puVar7;
        if ((local_379 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_378);
        }
        if ((local_369 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_368);
        }
        local_391 = 0;
        local_3a1 = 0;
        local_648 = PTR__OBJC_CLASS___UIColor_026cdf78;
        if (local_260 == 3) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323d50,DAT_02323f38,uVar3,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_391 = 1;
          local_390 = local_648;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,uVar3,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_3a1 = 1;
          local_3a0 = local_648;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_388 = local_648;
        if ((local_3a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3a0);
        }
        if ((local_391 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_390);
        }
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_3b0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02324020,0,0x3fe3333333333333,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_3b8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_3c0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
        _objc_retainAutoreleasedReturnValue();
        local_3c9 = local_260 == 0;
        local_3c8 = puVar7;
        _memset(auStack_418,0,0x40);
        puVar4 = local_300;
        (*(code *)PTR__objc_retain_02578638)();
        local_678 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_418,auStack_128,
                   0x10);
        if (local_678 != (undefined *)0x0) {
          lVar1 = *local_408;
          local_680 = (undefined *)0x0;
          do {
            do {
              if (*local_408 - lVar1 != 0) {
                _objc_enumerationMutation(*local_408 - lVar1,puVar4);
              }
              uVar6 = *(ulong *)(local_410 + (long)local_680 * 8);
              local_3d8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
              if (uVar6 != 0) {
                uVar6 = local_3d8;
                puVar7 = PTR_s_rangeOfString_options__0269d118;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3d8,PTR_s_rangeOfString_options__0269d118,
                           &cf____d_2___d_2___d_2_______d_3_____,0x400);
                local_428 = uVar6;
                local_420 = puVar7;
                if (uVar6 == 0x7fffffffffffffff) {
                  puVar9 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
                  _objc_alloc();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  puVar7 = local_388;
                  uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
                  uVar6 = local_3d8;
                  local_4b0 = puVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(local_3d8,PTR_s_length_0269cca0);
                  local_220 = 0;
                  local_218 = 0;
                  local_228 = uVar6;
                  local_210 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar9,PTR_s_addAttribute_value_range__026a1d88,uVar3,puVar7,0,uVar6);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_358,PTR_s_appendAttributedString__026a6388,local_4b0);
                  _objc_storeStrong(&local_4b0,0);
                }
                else {
                  uVar8 = local_3d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_3d8,PTR_s_substringWithRange__0269d138,uVar6,puVar7);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
                  local_430 = uVar8;
                  _objc_alloc();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  puVar7 = local_360;
                  uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
                  uVar6 = local_430;
                  local_438 = puVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(local_430,PTR_s_length_0269cca0);
                  local_160 = 0;
                  local_158 = 0;
                  local_450[1] = 0;
                  local_450[2] = uVar6;
                  local_168 = uVar6;
                  local_150 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar9,PTR_s_addAttribute_value_range__026a1d88,uVar3,puVar7,0,uVar6);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_358,PTR_s_appendAttributedString__026a6388,local_438);
                  uVar6 = local_3d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_3d8,PTR_s_substringFromIndex__0269d120,local_420 + local_428);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
                  local_450[0] = uVar6;
                  _objc_alloc();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_458 = puVar7;
                  if (((local_3c9 & 1) == 0) ||
                     (uVar6 = local_450[0],
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_450[0],PTR_s_containsString__0269d0b0,&cf_PUSH_),
                     puVar9 = local_3b0, puVar7 = local_458, (uVar6 & 1) == 0)) {
                    if (((local_3c9 & 1) == 0) ||
                       (uVar6 = local_450[0],
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_450[0],PTR_s_containsString__0269d0b0,&cf_POP),
                       puVar9 = local_3b8, puVar7 = local_458, (uVar6 & 1) == 0)) {
                      if (((local_3c9 & 1) == 0) ||
                         (uVar6 = local_450[0],
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_450[0],PTR_s_containsString__0269d0b0,&cf_DidAppear_),
                         puVar9 = local_3c0, puVar7 = local_458, (uVar6 & 1) == 0)) {
                        if (((local_3c9 & 1) == 0) ||
                           (uVar6 = local_450[0],
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_450[0],PTR_s_containsString__0269d0b0,&cf_PRESENT_),
                           puVar9 = local_3c8, puVar7 = local_458, (uVar6 & 1) == 0)) {
                          puVar9 = local_388;
                          puVar7 = local_458;
                          uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
                          uVar6 = local_450[0];
                          (*(code *)PTR__objc_msgSend_02578628)(local_450[0],PTR_s_length_0269cca0);
                          local_200 = 0;
                          local_1f8 = 0;
                          local_4a8 = 0;
                          local_4a0 = uVar6;
                          local_208 = uVar6;
                          local_1f0 = uVar6;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar7,PTR_s_addAttribute_value_range__026a1d88,uVar3,puVar9,0,
                                     uVar6);
                        }
                        else {
                          uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
                          uVar6 = local_450[0];
                          (*(code *)PTR__objc_msgSend_02578628)(local_450[0],PTR_s_length_0269cca0);
                          local_1e0 = 0;
                          local_1d8 = 0;
                          local_498 = 0;
                          local_490 = uVar6;
                          local_1e8 = uVar6;
                          local_1d0 = uVar6;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar7,PTR_s_addAttribute_value_range__026a1d88,uVar3,puVar9,0,
                                     uVar6);
                        }
                      }
                      else {
                        uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
                        uVar6 = local_450[0];
                        (*(code *)PTR__objc_msgSend_02578628)(local_450[0],PTR_s_length_0269cca0);
                        local_1c0 = 0;
                        local_1b8 = 0;
                        local_488 = 0;
                        local_480 = uVar6;
                        local_1c8 = uVar6;
                        local_1b0 = uVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar7,PTR_s_addAttribute_value_range__026a1d88,uVar3,puVar9,0,
                                   uVar6);
                      }
                    }
                    else {
                      uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
                      uVar6 = local_450[0];
                      (*(code *)PTR__objc_msgSend_02578628)(local_450[0],PTR_s_length_0269cca0);
                      local_1a0 = 0;
                      local_198 = 0;
                      local_478 = 0;
                      local_470 = uVar6;
                      local_1a8 = uVar6;
                      local_190 = uVar6;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar7,PTR_s_addAttribute_value_range__026a1d88,uVar3,puVar9,0,
                                 uVar6);
                    }
                  }
                  else {
                    uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
                    uVar6 = local_450[0];
                    (*(code *)PTR__objc_msgSend_02578628)(local_450[0],PTR_s_length_0269cca0);
                    local_180 = 0;
                    local_178 = 0;
                    local_468 = 0;
                    local_460 = uVar6;
                    local_188 = uVar6;
                    local_170 = uVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar7,PTR_s_addAttribute_value_range__026a1d88,uVar3,puVar9,0,uVar6)
                    ;
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_358,PTR_s_appendAttributedString__026a6388,local_458);
                  _objc_storeStrong(&local_458);
                  _objc_storeStrong(local_450,0);
                  _objc_storeStrong(&local_438,0);
                  _objc_storeStrong(&local_430,0);
                }
                puVar7 = local_358;
                puVar9 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_appendAttributedString__026a6388)
                ;
                (*(code *)PTR__objc_release_02578630)(puVar9);
              }
              local_680 = local_680 + 1;
            } while (local_680 < local_678);
            local_678 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_418,
                       auStack_128,0x10);
            local_680 = (undefined *)0x0;
          } while (local_678 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar4 = local_358;
        (*(code *)PTR__objc_msgSend_02578628)(local_358,PTR_s_length_0269cca0);
        if (puVar4 == (undefined *)0x0) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        lVar10 = *(long *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_logTextView_026a9fc0);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar10;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar1);
        (*(code *)PTR__objc_release_02578630)(lVar10);
        if (lVar5 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = *(long *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_logTextView_026a9fc0);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_240 = lVar5 + -1;
          local_248 = 1;
          local_230 = 1;
          local_238 = local_240;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_scrollRangeToVisible__026aa0d8,local_240,1);
          (*(code *)PTR__objc_release_02578630)(lVar1);
          (*(code *)PTR__objc_release_02578630)(lVar10);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        _objc_storeStrong(&local_3c8);
        _objc_storeStrong(&local_3c0,0);
        _objc_storeStrong(&local_3b8,0);
        _objc_storeStrong(&local_3b0,0);
        _objc_storeStrong(&local_388,0);
        _objc_storeStrong(&local_360,0);
        _objc_storeStrong(&local_358,0);
        local_2b0 = 0;
      }
      _objc_storeStrong(&local_300);
      _objc_storeStrong(&local_2f8,0);
      _objc_storeStrong(&local_2e0,0);
      _objc_storeStrong(&local_2b8,0);
    }
    _objc_storeStrong(&local_270,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

