// FUN_0039e980 @ 0039e980

/* WARNING: Removing unreachable block (ram,0x0039eb54) */

void FUN_0039e980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  cfstringStruct *local_5f0;
  cfstringStruct *local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  ulong local_5c8;
  undefined8 local_5c0;
  ulong local_5b8;
  ulong local_5b0;
  ulong local_5a8;
  undefined8 local_5a0;
  ulong local_598;
  ulong local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 *local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  ulong local_530;
  undefined1 *local_528;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined **local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  uint local_4c4;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  uint local_494;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  uint local_46c;
  undefined1 *local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  ulong local_448;
  undefined *local_440;
  undefined8 local_438;
  undefined1 *local_430;
  undefined1 *local_428;
  undefined8 local_420;
  undefined *local_418;
  undefined *local_410;
  uint local_404;
  undefined8 local_400;
  undefined1 *local_3f8;
  uint local_3ec;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined1 *local_3d0;
  undefined8 local_3c8;
  uint local_3c0;
  uint local_3bc;
  undefined8 local_3b8;
  uint local_3ac;
  undefined8 local_3a8;
  uint local_39c;
  cfstringStruct *local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  uint local_374;
  undefined8 local_370;
  uint local_364;
  uint local_360;
  uint local_35c;
  cfstringStruct *local_358;
  cfstringStruct *local_350;
  cfstringStruct *local_348;
  cfstringStruct *local_340;
  undefined *local_338;
  cfstringStruct *local_330;
  undefined8 local_328;
  undefined8 local_320;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_308;
  cfstringStruct *local_300;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  long local_2b0;
  long local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_284;
  undefined8 local_280;
  undefined8 *local_278;
  byte local_269;
  undefined8 local_268;
  byte local_259;
  ulong local_258;
  byte local_249;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 auStack_238 [48];
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [15];
  byte local_1d1;
  byte local_1c1;
  byte local_1b1;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [15];
  byte local_179;
  undefined1 local_178 [15];
  byte local_169;
  undefined1 local_168 [8];
  undefined1 local_160 [24];
  undefined1 local_148 [15];
  byte local_139;
  undefined1 local_130 [79];
  byte local_e1;
  byte local_d2;
  byte local_d1;
  undefined1 local_d0 [14];
  byte local_c2;
  byte local_c1;
  byte local_b3;
  byte local_b2;
  byte local_b1;
  undefined1 local_b0 [72];
  undefined1 local_68 [15];
  byte local_59;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [24];
  long local_28;
  
  local_278 = &local_1e8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_2a0 = param_5;
  local_298 = param_6;
  local_290 = param_7;
  local_284 = param_8;
  local_280 = param_9;
  _objc_storeStrong(&local_48,param_5);
  uVar3 = local_298;
  local_278[0x33] = 0;
  _objc_storeStrong(local_50,uVar3);
  uVar3 = local_290;
  local_278[0x32] = 0;
  _objc_storeStrong(local_58,uVar3);
  uVar3 = local_280;
  local_59 = (byte)local_284;
  local_278[0x30] = 0;
  _objc_storeStrong(local_68,uVar3);
  puVar1 = local_278;
  if (((local_278[0x34] == 0) || (local_278[0x33] == 0)) || (local_278[0x32] == 0)) {
    *(undefined4 *)((long)local_278 + 0x17c) = 1;
  }
  else {
    *(undefined4 *)((long)local_278 + 0x16c) = 0;
    uVar3 = puVar1[0x33];
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_iconKind_026a3228);
    puVar1 = local_278;
    local_278[0x2b] = uVar3;
    *(undefined4 *)((long)puVar1 + 0x154) = 2;
    puVar2 = local_278;
    if ((long)puVar1[0x2b] < (long)*(int *)((long)puVar1 + 0x154)) {
      local_2a8 = local_278[0x2b];
    }
    else {
      local_2a8 = (long)*(int *)((long)local_278 + 0x154);
    }
    local_278[0x29] = local_2a8;
    puVar2[0x2c] = puVar2[0x29];
    puVar1 = local_278;
    if ((long)*(int *)((long)puVar2 + 0x16c) < (long)puVar2[0x2c]) {
      local_2b0 = local_278[0x2c];
    }
    else {
      local_2b0 = (long)*(int *)((long)local_278 + 0x16c);
    }
    local_278[0x28] = local_2b0;
    puVar1[0x2e] = puVar1[0x28];
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_278[0x27] = puVar4;
    local_b1 = 0;
    local_2b4 = 0;
    local_b2 = 0;
    local_b3 = (byte)local_278[0x33];
    FUN_003d8534();
    uVar3 = local_278[0x27];
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_homeGroupingInlineRightDisplayMo_026a3010);
    local_278[0x25] = uVar3;
    uVar3 = local_278[0x27];
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_homeGroupingHideGroupBadgeEnable_026a3230);
    local_c1 = (byte)uVar3;
    uVar3 = local_278[0x27];
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_homeGroupingUnreadRedDotEnabled_026a3238);
    local_c2 = (byte)uVar3;
    local_278[0x23] = 0;
    local_d1 = 0;
    local_d2 = 0;
    if ((local_b2 & 1) != 0) {
      uVar3 = local_278[0x33];
      FUN_003d857c(uVar3,local_d0,&local_d1);
      local_d2 = (byte)uVar3;
    }
    local_278[0x21] = 0;
    local_e1 = 0;
    if ((local_b2 & 1) == 0) {
      if ((local_c1 & 1) == 0) {
        uVar3 = local_278[0x33];
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_unreadCount_026a3080);
        local_2c0 = uVar3;
      }
      else {
        local_2c0 = 0;
      }
      local_278[0x21] = local_2c0;
      local_2c4 = 0;
      if (((local_c1 & 1) == 0) && (local_2c4 = 0, (local_c2 & 1) == 0)) {
        uVar3 = local_278[0x33];
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasRedDotUnread_026a3088);
        local_2c4 = (undefined4)uVar3;
      }
      local_e1 = (byte)local_2c4 & 1;
    }
    uVar3 = 0;
    local_278[0x1e] = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_278[0x32],PTR_s_bounds_026ca548);
    local_278[0x19] = uVar3;
    local_278[0x1a] = param_2;
    local_278[0x1b] = param_3;
    local_278[0x1c] = param_4;
    dVar11 = (double)local_278[0x19];
    uVar3 = local_278[0x1c];
    _CGRectGetWidth(dVar11,local_278[0x1a],local_278[0x1b]);
    local_278[0x1d] = dVar11 - 120.0;
    if ((double)local_278[0x1d] <= (double)local_278[0x1e]) {
      local_2d0 = local_278[0x1e];
    }
    else {
      local_2d0 = local_278[0x1d];
    }
    local_278[0x18] = local_2d0;
    uVar12 = local_278[0x18];
    local_278[0x1f] = uVar12;
    local_139 = 0;
    if ((local_b1 & 1) == 0) {
      pcVar5 = (cfstringStruct *)local_278[0x33];
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_detailText_026a3240);
      _objc_retainAutoreleasedReturnValue();
      local_278[0x16] = pcVar5;
      local_139 = 1;
      local_2e8 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_2e8 = &cf___;
      }
      local_2d8 = local_2e8;
      local_2e0 = pcVar5;
    }
    else {
      local_2d8 = &cf___;
    }
    local_2f0 = local_2d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_278[0x17] = local_2f0;
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_278[0x16]);
    }
    local_2f8 = &cf___;
    (*(code *)PTR__objc_retain_02578638)();
    local_278[0x14] = local_2f8;
    if ((local_b1 & 1) == 0) {
      pcVar5 = (cfstringStruct *)local_278[0x33];
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_timeText_026a3250);
      _objc_retainAutoreleasedReturnValue();
      local_318 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_318 = &cf___;
      }
      local_310 = pcVar5;
      _objc_storeStrong(local_148,local_318);
      (*(code *)PTR__objc_release_02578630)(local_310);
    }
    else if (((local_d2 & 1) == 0) && (local_278[0x25] == 0)) {
      pcVar5 = (cfstringStruct *)local_278[0x33];
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_inlineDetailText_026a3248);
      _objc_retainAutoreleasedReturnValue();
      local_308 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_308 = &cf___;
      }
      local_300 = pcVar5;
      _objc_storeStrong(local_148,local_308);
      (*(code *)PTR__objc_release_02578630)(local_300);
    }
    if ((local_b2 & 1) == 0) {
      local_320 = 0;
    }
    else {
      FUN_003caf7c();
      local_320 = uVar12;
    }
    local_278[0x13] = local_320;
    if ((local_b2 & 1) == 0) {
      local_328 = 0;
    }
    else {
      uVar12 = local_320;
      FUN_003cb0c8();
      local_328 = uVar12;
    }
    local_278[0x12] = local_328;
    local_338 = PTR__OBJC_CLASS___NSString_026cdfe8;
    pcVar5 = (cfstringStruct *)local_278[0x33];
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    local_340 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_340 = &cf___;
    }
    local_350 = local_340;
    pcVar6 = (cfstringStruct *)local_278[0x33];
    local_330 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    local_358 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_358 = &cf___;
    }
    local_398 = local_358;
    local_390 = local_278[0x17];
    local_388 = local_278[0x14];
    local_380 = local_278[0x21];
    local_374 = (uint)local_e1;
    local_370 = local_278[0x23];
    local_364 = (uint)local_d1;
    local_360 = (uint)local_59;
    local_35c = 0;
    local_348 = pcVar6;
    if ((local_b1 & 1) != 0) {
      uVar12 = local_278[0x27];
      (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_homeGroupingInlineNameCenteredEn_026a3258);
      local_35c = (uint)uVar12;
    }
    local_39c = local_35c;
    if ((local_b1 & 1) == 0) {
      local_3a8 = 0;
    }
    else {
      local_3a8 = local_278[0x25];
    }
    local_3b8 = local_3a8;
    local_3ac = 0;
    if ((local_b1 & 1) != 0) {
      uVar12 = local_278[0x27];
      (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_homeGroupingInlineAvatarShown_026a31f8);
      local_3ac = (uint)uVar12;
    }
    local_3bc = local_3ac;
    if ((local_b2 & 1) == 0) {
      local_3c0 = 0;
    }
    else {
      local_3c0 = (uint)((local_b3 & 1) != 0);
    }
    local_3ec = local_3c0;
    local_3e8 = local_278[0x1f];
    local_3e0 = local_278[0x13];
    local_3d8 = local_278[0x12];
    uVar7 = local_278[0x33];
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_avatarImage_026a3120);
    _objc_retainAutoreleasedReturnValue();
    local_590 = (ulong)local_3ec;
    local_5f0 = local_350;
    local_5e8 = local_398;
    local_5e0 = local_390;
    local_5d8 = local_388;
    local_5d0 = local_380;
    local_5c8 = (ulong)local_374 & 1;
    local_5c0 = local_370;
    local_5b8 = (ulong)local_364 & 1;
    local_5b0 = (ulong)local_360 & 1;
    local_5a8 = (ulong)local_39c & 1;
    local_5a0 = local_3b8;
    local_598 = (ulong)local_3bc & 1;
    local_588 = local_3e8;
    local_580 = local_3e0;
    local_578 = local_3d8;
    puVar4 = local_338;
    uVar12 = local_3d8;
    uVar13 = local_3e0;
    uVar14 = local_3e8;
    local_570 = uVar7;
    local_3d0 = (undefined1 *)&local_5f0;
    local_3c8 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_338,PTR_s_stringWithFormat__0269cca8,
               &cf______________llu__d__llu__d__d__d__d__d__d___0f___1f___0f__p);
    _objc_retainAutoreleasedReturnValue();
    local_278[0x11] = puVar4;
    (*(code *)PTR__objc_release_02578630)(local_3c8);
    (*(code *)PTR__objc_release_02578630)(local_348);
    (*(code *)PTR__objc_release_02578630)(local_330);
    uVar7 = local_278[0x34];
    _objc_getAssociatedObject(uVar7,&DAT_028ca2d0);
    _objc_retainAutoreleasedReturnValue();
    local_278[0x10] = uVar7;
    uVar8 = local_278[0x10];
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isEqualToString__0269ccc8,local_278[0x11]);
    local_169 = (byte)uVar8;
    if ((uVar8 & 1) == 0) {
      _objc_setAssociatedObject(local_278[0x34],&DAT_028ca2d0,local_278[0x11],3);
    }
    uVar7 = local_278[0x33];
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_avatarImage_026a3120);
    _objc_retainAutoreleasedReturnValue();
    local_278[0xe] = uVar7;
    uVar7 = local_278[0x33];
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_avatarUsesTemplate_026a3260);
    local_179 = (byte)uVar7;
    if ((local_b2 & 1) == 0) {
      if (local_278[0xe] == 0) {
        local_278[0x35] = &cf_person_2_fill;
        local_278[0x36] = &cf_bubble_left_and_bubble_right_fill;
        local_278[0x37] = &cf_tray_full_fill;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   local_40,3);
        _objc_retainAutoreleasedReturnValue();
        local_428 = local_190;
        local_278[0xb] = puVar4;
        uVar12 = 0x4034000000000000;
        puVar4 = PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640,
                   PTR_s_configurationWithPointSize_weigh_026ca588,5);
        _objc_retainAutoreleasedReturnValue();
        local_430 = local_198;
        local_278[10] = puVar4;
        local_440 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        uVar7 = local_278[0xb];
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectAtIndexedSubscript__0269cc78,local_278[0x2e]);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_440;
        local_438 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_440,PTR_s_systemImageNamed_withConfigurati_026a3270,uVar7,local_278[10]);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_278[0xe];
        local_278[0xe] = puVar4;
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(local_438);
        local_179 = 1;
        local_420 = 0;
        _objc_storeStrong(local_430);
        _objc_storeStrong(local_428,local_420);
      }
    }
    else {
      local_418 = PTR_WCRefineOfficialTheme_026ce620;
      uVar13 = 0x3ff0000000000000;
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      uVar12 = DAT_02323c98;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_418;
      local_410 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_418,PTR_s_colorNamed_fallback__026a3268,&cf_tertiaryLabelColor);
      _objc_retainAutoreleasedReturnValue();
      local_3f8 = local_188;
      local_278[0xc] = puVar9;
      (*(code *)PTR__objc_release_02578630)(local_410);
      local_404 = (uint)local_b3;
      local_400 = local_278[0xc];
      FUN_003caf7c();
      uVar8 = (ulong)(local_404 & 1);
      FUN_003d87bc(uVar8,local_400);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_278[0xe];
      local_278[0xe] = uVar8;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      local_179 = 0;
      _objc_storeStrong(local_3f8,0);
    }
    if ((local_169 & 1) == 0) {
      local_278[1] = 0;
      if ((local_59 & 1) == 0) {
        uVar7 = local_278[0x33];
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_cachedNativeCellDataSignature_026a3288);
        _objc_retainAutoreleasedReturnValue();
        local_4a0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_494 = (uint)uVar7;
        (*(code *)PTR__objc_release_02578630)(local_4a0);
        if ((local_494 & 1) == 0) {
          uVar7 = local_278[0x33];
          local_4e8 = &PTR_s_avatarCornerChatPageBorderEnable_0269e000;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = local_278[0x33];
          local_4a8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          local_4e0 = local_278[0x17];
          local_4d8 = local_278[0x14];
          local_4d0 = local_278[0x21];
          local_4c4 = (uint)local_e1;
          uVar7 = local_278[0x33];
          local_4b0 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,local_4e8[0x151]);
          _objc_retainAutoreleasedReturnValue();
          local_4b8 = uVar7;
          FUN_003d4cf0();
          uVar7 = local_4a8;
          FUN_003da0f4(local_4a8,local_4b0,local_4e0,local_4d8,local_4d0,local_4c4 & 1);
          _objc_retainAutoreleasedReturnValue();
          local_4c0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_278[0x33],PTR_s_setCachedNativeCellData__026a3150);
          (*(code *)PTR__objc_release_02578630)(local_4c0);
          (*(code *)PTR__objc_release_02578630)(local_4b8);
          (*(code *)PTR__objc_release_02578630)(local_4b0);
          (*(code *)PTR__objc_release_02578630)(local_4a8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_278[0x33],PTR_s_setCachedNativeCellDataSignature_026a3158,local_278[0x11]
                    );
        }
        uVar7 = local_278[0x33];
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_cachedNativeCellData_026a3290);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = local_278[1];
        local_278[1] = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar10);
      }
      else {
        uVar7 = local_278[0x33];
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_cachedFakeCellDataSignature_026a3278);
        _objc_retainAutoreleasedReturnValue();
        local_478 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_46c = (uint)uVar7;
        (*(code *)PTR__objc_release_02578630)(local_478);
        if ((local_46c & 1) == 0) {
          uVar12 = local_278[0x33];
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = local_278[0x33];
          local_480 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = local_278[0x1f];
          uVar7 = local_480;
          local_488 = uVar10;
          FUN_003d9d20(local_480,uVar10,local_278[0x17],local_278[0x14]);
          _objc_retainAutoreleasedReturnValue();
          local_490 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_278[0x33],PTR_s_setCachedFakeCellData__026a3160);
          (*(code *)PTR__objc_release_02578630)(local_490);
          (*(code *)PTR__objc_release_02578630)(local_488);
          (*(code *)PTR__objc_release_02578630)(local_480);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_278[0x33],PTR_s_setCachedFakeCellDataSignature__026a3168,local_278[0x11])
          ;
        }
        uVar7 = local_278[0x33];
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_cachedFakeCellData_026a3280);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = local_278[1];
        local_278[1] = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar10);
      }
      uVar7 = local_278[0x34];
      FUN_003d8dd0(uVar7,local_278[0x33],local_278[0x32],local_59 & 1,local_278[0xe],local_179 & 1,
                   local_278[0x2e]);
      _objc_retainAutoreleasedReturnValue();
      *local_278 = uVar7;
      if (local_278[1] != 0) {
        local_518 = local_278[0x34];
        local_510 = local_278[1];
        (*(code *)PTR__objc_msgSend_02578628)(local_278[0x32],PTR_s_frame_026ca640);
        local_508 = uVar12;
        local_500 = uVar13;
        local_4f8 = uVar14;
        local_4f0 = uVar3;
        local_208 = uVar12;
        local_200 = uVar13;
        local_1f8 = uVar14;
        local_1f0 = uVar3;
        FUN_0036b910(uVar12,uVar13,uVar14,uVar3,local_518,local_510);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_278[0x34],PTR_s_setNeedsLayout_0269deb8);
      uVar3 = local_278[0x34];
      FUN_003d8dd0(uVar3,local_278[0x33],local_278[0x32],local_59 & 1,local_278[0xe],local_179 & 1,
                   local_278[0x2e]);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *local_278;
      *local_278 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar12);
      local_528 = auStack_238;
      FUN_003dab18(local_278[1],*local_278,local_278[0x33],local_59 & 1);
      FUN_003db9ac(local_528);
      FUN_003d96b8(*local_278,local_278[0x33],local_b2 & 1);
      if ((local_59 & 1) == 0) {
        uVar8 = local_278[0x32];
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_delegate_0269e808);
        _objc_retainAutoreleasedReturnValue();
        local_530 = uVar8;
        FUN_003adbe4();
        local_249 = 0;
        local_259 = 0;
        local_269 = 0;
        if ((uVar8 & 1) == 0) {
          uVar8 = local_278[0x32];
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_dataSource_0269e800);
          _objc_retainAutoreleasedReturnValue();
          local_259 = 1;
          local_258 = uVar8;
          FUN_003adbe4();
          if ((uVar8 & 1) == 0) {
            local_540 = 0;
          }
          else {
            uVar3 = local_278[0x32];
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_dataSource_0269e800);
            _objc_retainAutoreleasedReturnValue();
            local_269 = 1;
            local_540 = uVar3;
            local_268 = uVar3;
          }
          local_538 = local_540;
        }
        else {
          uVar3 = local_278[0x32];
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_delegate_0269e808);
          _objc_retainAutoreleasedReturnValue();
          local_249 = 1;
          local_538 = uVar3;
          local_248 = uVar3;
        }
        local_548 = local_538;
        (*(code *)PTR__objc_retain_02578638)();
        local_240 = local_548;
        if ((local_269 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_268);
        }
        if ((local_259 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_258);
        }
        if ((local_249 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_248);
        }
        (*(code *)PTR__objc_release_02578630)(local_530);
        local_550 = &local_240;
        FUN_003d9948(local_278[0x34],local_240,local_278[0x33]);
        FUN_0036baa4(local_278[0x34],local_278[0x30]);
        FUN_0036b608(local_278[0x34],0);
        FUN_003d9948(local_278[0x34],local_240,local_278[0x33]);
        _objc_storeStrong(local_550,0);
      }
      FUN_0036bf30(local_278[0x34]);
      local_558 = 0;
      _objc_storeStrong(&local_1e8);
      _objc_storeStrong(local_1e0,local_558);
      *(undefined4 *)((long)local_278 + 0x17c) = 0;
    }
    else {
      uVar3 = local_278[0x34];
      FUN_003d8dd0(uVar3,local_278[0x33],local_278[0x32],local_59 & 1,local_278[0xe],local_179 & 1,
                   local_278[0x2e]);
      _objc_retainAutoreleasedReturnValue();
      local_278[9] = uVar3;
      FUN_003c6aa4(local_278[9]);
      FUN_003d96b8(local_278[9],local_278[0x33],local_b2 & 1);
      if ((local_59 & 1) == 0) {
        uVar8 = local_278[0x32];
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_delegate_0269e808);
        _objc_retainAutoreleasedReturnValue();
        local_448 = uVar8;
        FUN_003adbe4();
        local_1b1 = 0;
        local_1c1 = 0;
        local_1d1 = 0;
        if ((uVar8 & 1) == 0) {
          uVar8 = local_278[0x32];
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_dataSource_0269e800);
          _objc_retainAutoreleasedReturnValue();
          local_278[5] = uVar8;
          local_1c1 = 1;
          FUN_003adbe4();
          if ((uVar8 & 1) == 0) {
            local_458 = 0;
          }
          else {
            uVar3 = local_278[0x32];
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_dataSource_0269e800);
            _objc_retainAutoreleasedReturnValue();
            local_278[3] = uVar3;
            local_1d1 = 1;
            local_458 = uVar3;
          }
          local_450 = local_458;
        }
        else {
          uVar3 = local_278[0x32];
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_delegate_0269e808);
          _objc_retainAutoreleasedReturnValue();
          local_278[7] = uVar3;
          local_1b1 = 1;
          local_450 = uVar3;
        }
        local_460 = local_450;
        (*(code *)PTR__objc_retain_02578638)();
        local_278[8] = local_460;
        if ((local_1d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_278[3]);
        }
        if ((local_1c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_278[5]);
        }
        if ((local_1b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_278[7]);
        }
        (*(code *)PTR__objc_release_02578630)(local_448);
        local_468 = local_1a8;
        FUN_003d9948(local_278[0x34],local_278[8],local_278[0x33]);
        FUN_0036baa4(local_278[0x34],local_278[0x30]);
        FUN_003d9948(local_278[0x34],local_278[8],local_278[0x33]);
        _objc_storeStrong(local_468,0);
      }
      FUN_0036bf30(local_278[0x34]);
      *(undefined4 *)((long)local_278 + 0x17c) = 1;
      _objc_storeStrong(local_1a0,0);
    }
    local_560 = 0;
    _objc_storeStrong(local_178);
    _objc_storeStrong(local_168,local_560);
    _objc_storeStrong(local_160,local_560);
    _objc_storeStrong(local_148,local_560);
    _objc_storeStrong(local_130,local_560);
    _objc_storeStrong(local_b0,local_560);
  }
  local_568 = 0;
  _objc_storeStrong(local_68);
  _objc_storeStrong(local_58,local_568);
  _objc_storeStrong(local_50,local_568);
  _objc_storeStrong(&local_48,local_568);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

