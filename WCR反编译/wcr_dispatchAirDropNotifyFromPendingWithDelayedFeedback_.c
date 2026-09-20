// wcr_dispatchAirDropNotifyFromPendingWithDelayedFeedback: @ 01726fe8

/* Function Stack Size: 0x14 bytes */

void ThemeBoxAirDropThemePickViewController::
     wcr_dispatchAirDropNotifyFromPendingWithDelayedFeedback_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined **ppuVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  undefined *puVar9;
  cfstringStruct *local_700;
  cfstringStruct *local_6f0;
  cfstringStruct *local_6e0;
  cfstringStruct *local_6d0;
  cfstringStruct *local_6c0;
  cfstringStruct *local_670;
  cfstringStruct *local_660;
  cfstringStruct *local_650;
  cfstringStruct *local_640;
  cfstringStruct *local_600;
  cfstringStruct *local_5f0;
  cfstringStruct *local_5e0;
  cfstringStruct *local_5d0;
  cfstringStruct *local_580;
  cfstringStruct *local_570;
  cfstringStruct *local_560;
  cfstringStruct *local_550;
  cfstringStruct *local_518;
  cfstringStruct *local_500;
  cfstringStruct *local_4e8;
  cfstringStruct *local_4b8;
  cfstringStruct *local_4a0;
  cfstringStruct *local_488;
  cfstringStruct *local_460;
  cfstringStruct *local_450;
  cfstringStruct *local_440;
  cfstringStruct *local_430;
  cfstringStruct *local_420;
  cfstringStruct *local_410;
  int local_3fc;
  cfstringStruct *local_3f0;
  cfstringStruct *local_3d8;
  cfstringStruct *local_3b8;
  cfstringStruct *local_390;
  cfstringStruct *local_380;
  cfstringStruct *local_378;
  cfstringStruct *local_370;
  long local_368;
  long local_360;
  long local_358;
  byte local_349;
  cfstringStruct *local_348;
  cfstringStruct *local_340;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  cfstringStruct *local_328;
  cfstringStruct *local_320;
  cfstringStruct *local_318;
  byte local_309;
  cfstringStruct *local_308;
  byte local_2f9;
  cfstringStruct *local_2f8;
  byte local_2e9;
  cfstringStruct *local_2e8;
  byte local_2d9;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  undefined *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  code *local_2a0;
  undefined *local_298;
  byte local_290;
  undefined **local_288;
  byte local_279;
  SEL local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  undefined **local_220;
  undefined *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  undefined **local_190;
  undefined *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined **local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined **local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_279 = (byte)param_3;
  ppuVar2 = &local_2b0;
  local_2b0 = PTR___NSConcreteStackBlock_02578660;
  local_2a8 = 0xc0000000;
  local_2a4 = 0;
  local_2a0 = FUN_01728908;
  local_298 = &DAT_025886d8;
  local_290 = local_279 & 1;
  local_278 = param_2;
  local_270 = (cfstringStruct *)param_1;
  _objc_retainBlock();
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_288 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_2b8 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_themeBoxAirDropPendingThemeIndex_026b3b80);
  pcVar4 = local_2b8;
  local_2c0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_themeBoxAirDropThemeItems_026acfb8);
  _objc_retainAutoreleasedReturnValue();
  local_390 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_390 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_2c8 = local_390;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar3 = local_2c0;
  local_2d9 = 0;
  local_2e9 = 0;
  local_2f9 = 0;
  local_309 = 0;
  if ((-1 < (long)local_2c0) &&
     (pcVar4 = local_2c8, (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_count_0269cfe0),
     pcVar3 < pcVar4)) {
    pcVar3 = local_2c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_2c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_2c0);
    _objc_retainAutoreleasedReturnValue();
    local_2d9 = 1;
    local_2d8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_2e9 = 1;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_2e8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)pcVar3 & 1) != 0) {
      local_3b8 = local_2c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_2c0);
      _objc_retainAutoreleasedReturnValue();
      local_2f9 = 1;
      local_2f8 = local_3b8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_309 = 1;
      local_308 = local_3b8;
      goto LAB_017272dc;
    }
  }
  local_3b8 = &::cf___;
LAB_017272dc:
  (*(code *)PTR__objc_retain_02578638)();
  local_2d0 = local_3b8;
  if ((local_309 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_308);
  }
  if ((local_2f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_2f8);
  }
  if ((local_2e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_2e8);
  }
  if ((local_2d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_2d8);
  }
  pcVar3 = local_270;
  _objc_getAssociatedObject(local_270,&DAT_028e3f80);
  _objc_retainAutoreleasedReturnValue();
  local_3d8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_3d8 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_318 = local_3d8;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_270;
  _objc_getAssociatedObject(local_270,&DAT_028e3f81);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_320 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)pcVar3 & 1) == 0) {
    local_3f0 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_wcr_currentRedeemProvider_026b3b88);
  }
  else {
    local_3f0 = local_320;
    (*(code *)PTR__objc_msgSend_02578628)(local_320,PTR_s_integerValue_026ca750);
    FUN_01728a88();
  }
  local_328 = local_3f0;
  FUN_01728acc();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_270;
  pcVar4 = local_328;
  local_330 = local_3f0;
  FUN_01728b80(local_328);
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_wcr_effectiveTargetAccountUsesWe_026b3b90,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_338 = pcVar3;
  FUN_01728bdc();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_270;
  local_340 = pcVar3;
  _objc_getAssociatedObject(local_270,&DAT_028e3f82);
  _objc_retainAutoreleasedReturnValue();
  local_348 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_3fc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_boolValue_026ca540);
    local_3fc = (int)pcVar4;
  }
  local_349 = local_3fc != 0;
  local_358 = 0;
  local_360 = 0;
  local_368 = 0;
  if (local_328 == (cfstringStruct *)0x2) {
    pcVar3 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_themeBoxAirDropNotifyFormatSUTU_026b3b98);
    _objc_retainAutoreleasedReturnValue();
    local_410 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_410 = &::cf___;
    }
    _objc_storeStrong(&local_360,local_410);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_themeBoxAirDropNotifyFormatFailu_026b3ba0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_420 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_420 = &::cf___;
    }
    _objc_storeStrong(&local_368,local_420);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  else if (local_328 == (cfstringStruct *)0x1) {
    pcVar3 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_themeBoxAirDropNotifyFormatTheme_026b3ba8)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_430 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_430 = &::cf___;
    }
    _objc_storeStrong(&local_360,local_430);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_themeBoxAirDropNotifyFormatFailu_026b3bb0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_440 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_440 = &::cf___;
    }
    _objc_storeStrong(&local_368,local_440);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  else {
    pcVar3 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_themeBoxAirDropNotifyFormat_026b3bb8);
    _objc_retainAutoreleasedReturnValue();
    local_450 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_450 = &::cf___;
    }
    _objc_storeStrong(&local_360,local_450);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_themeBoxAirDropNotifyFormatFailu_026b3bc0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_460 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_460 = &::cf___;
    }
    _objc_storeStrong(&local_368,local_460);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar4 = local_2d0;
  pcVar3 = local_318;
  lVar8 = local_360;
  if ((local_349 & 1) == 0) {
    pcVar3 = local_270;
    _objc_getAssociatedObject(local_270,&DAT_028e3f83);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_370 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)pcVar3 & 1) == 0) {
      _objc_storeStrong(&local_370,&::cf___);
    }
    pcVar3 = local_2d0;
    lVar8 = local_368;
    pcVar4 = local_318;
    FUN_017296d0();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetNickname_026b3bc8);
    _objc_retainAutoreleasedReturnValue();
    local_4e8 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_4e8 = &::cf___;
    }
    pcVar7 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetWxid_026b3bd0);
    _objc_retainAutoreleasedReturnValue();
    local_500 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_500 = &::cf___;
    }
    if (local_338 == (cfstringStruct *)0x0) {
      local_518 = &::cf___;
    }
    else {
      local_518 = local_338;
    }
    FUN_01729170(lVar8,pcVar3,pcVar4,local_4e8,local_500,local_518,local_370,local_340);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_358;
    local_358 = lVar8;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    _objc_storeStrong(&local_370,0);
  }
  else {
    pcVar6 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetNickname_026b3bc8);
    _objc_retainAutoreleasedReturnValue();
    local_488 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_488 = &::cf___;
    }
    pcVar7 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetWxid_026b3bd0);
    _objc_retainAutoreleasedReturnValue();
    local_4a0 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_4a0 = &::cf___;
    }
    if (local_338 == (cfstringStruct *)0x0) {
      local_4b8 = &::cf___;
    }
    else {
      local_4b8 = local_338;
    }
    FUN_01728ca8(lVar8,pcVar4,pcVar3,local_488,local_4a0,local_4b8,local_340);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_358;
    local_358 = lVar8;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
  }
  pcVar3 = local_2b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_themeBoxAirDropNotifyChannel_026b3bd8);
  if (pcVar3 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
    pcVar3 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetWxid_026b3bd0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_01725ed0();
    _objc_retainAutoreleasedReturnValue();
    local_378 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_isWeChatFriendUserName__026af090,local_378);
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      ppuVar2 = local_288;
      (*(code *)local_288[2])(local_288,&cf_ellS_Y6R0R_4_g);
      pcVar3 = local_270;
      local_148 = &cf_time;
      FUN_01728bdc();
      _objc_retainAutoreleasedReturnValue();
      local_140 = &cf_success;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_100 = ppuVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      local_138 = &cf_theme;
      if (local_2d0 == (cfstringStruct *)0x0) {
        local_5d0 = &::cf___;
      }
      else {
        local_5d0 = local_2d0;
      }
      local_f0 = local_5d0;
      local_130 = &cf_code;
      local_e8 = &::cf___;
      local_128 = &cf_targetWxid;
      local_e0 = local_378;
      local_120 = &cf_targetNickname;
      pcVar4 = local_270;
      local_f8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetNickname_026b3bc8);
      _objc_retainAutoreleasedReturnValue();
      local_5e0 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_5e0 = &::cf___;
      }
      local_d8 = local_5e0;
      local_118 = &cf_targetAccount;
      if (local_338 == (cfstringStruct *)0x0) {
        local_5f0 = &::cf___;
      }
      else {
        local_5f0 = local_338;
      }
      local_d0 = local_5f0;
      local_110 = &cf_provider;
      if (local_330 == (cfstringStruct *)0x0) {
        local_600 = &::cf___;
      }
      else {
        local_600 = local_330;
      }
      local_c8 = local_600;
      local_108 = &cf_message;
      local_c0 = &cf_w__YSellS_Y6R;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_100,&local_148,9);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_wcr_appendAirDropLog__026b3be0);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_358,
                 local_378);
      ppuVar2 = local_288;
      (*(code *)local_288[2])(local_288,&cf__T_eSw);
      pcVar3 = local_270;
      local_b8 = &cf_time;
      FUN_01728bdc();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = &cf_success;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_70 = ppuVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = &cf_theme;
      if (local_2d0 == (cfstringStruct *)0x0) {
        local_550 = &::cf___;
      }
      else {
        local_550 = local_2d0;
      }
      local_60 = local_550;
      local_a0 = &cf_code;
      local_58 = &::cf___;
      local_98 = &cf_targetWxid;
      local_50 = local_378;
      local_90 = &cf_targetNickname;
      pcVar4 = local_270;
      local_68 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetNickname_026b3bc8);
      _objc_retainAutoreleasedReturnValue();
      local_560 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_560 = &::cf___;
      }
      local_48 = local_560;
      local_88 = &cf_targetAccount;
      if (local_338 == (cfstringStruct *)0x0) {
        local_570 = &::cf___;
      }
      else {
        local_570 = local_338;
      }
      local_40 = local_570;
      local_80 = &cf_provider;
      if (local_330 == (cfstringStruct *)0x0) {
        local_580 = &::cf___;
      }
      else {
        local_580 = local_330;
      }
      local_38 = local_580;
      local_78 = &cf_message;
      local_30 = &cf_w_S;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_b8,9);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_wcr_appendAirDropLog__026b3be0);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
    }
    _objc_storeStrong(&local_378,0);
  }
  else {
    pcVar3 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_themeBoxAirDropOriginSessionWxid_026b3be8)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_01725ed0();
    _objc_retainAutoreleasedReturnValue();
    local_380 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_380;
    (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar4 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_themeBoxResolvedForegroundChatSe_026a7c00);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar4;
      FUN_01725ed0();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_380;
      local_380 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar3 = local_380;
    (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      ppuVar2 = local_288;
      (*(code *)local_288[2])(local_288,&cf_el_MOS_MRJ_Yw_Y6R0R_4_g);
      pcVar3 = local_270;
      local_268 = &cf_time;
      FUN_01728bdc();
      _objc_retainAutoreleasedReturnValue();
      local_260 = &cf_success;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_220 = ppuVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      local_258 = &cf_theme;
      if (local_2d0 == (cfstringStruct *)0x0) {
        local_6c0 = &::cf___;
      }
      else {
        local_6c0 = local_2d0;
      }
      local_210 = local_6c0;
      local_250 = &cf_code;
      local_208 = &::cf___;
      local_248 = &cf_targetWxid;
      pcVar4 = local_270;
      local_218 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetWxid_026b3bd0);
      _objc_retainAutoreleasedReturnValue();
      local_6d0 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_6d0 = &::cf___;
      }
      local_200 = local_6d0;
      local_240 = &cf_targetNickname;
      pcVar6 = local_270;
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetNickname_026b3bc8);
      _objc_retainAutoreleasedReturnValue();
      local_6e0 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_6e0 = &::cf___;
      }
      local_1f8 = local_6e0;
      local_238 = &cf_targetAccount;
      if (local_338 == (cfstringStruct *)0x0) {
        local_6f0 = &::cf___;
      }
      else {
        local_6f0 = local_338;
      }
      local_1f0 = local_6f0;
      local_230 = &cf_provider;
      if (local_330 == (cfstringStruct *)0x0) {
        local_700 = &::cf___;
      }
      else {
        local_700 = local_330;
      }
      local_1e8 = local_700;
      local_228 = &cf_message;
      local_1e0 = &cf_wel_MOS_MRJ_Y_Y6R;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_220,&local_268,9);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_wcr_appendAirDropLog__026b3be0);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_358,
                 local_380);
      ppuVar2 = local_288;
      (*(code *)local_288[2])(local_288,&cf__TS_MRJ_YSw);
      pcVar3 = local_270;
      local_1d8 = &cf_time;
      FUN_01728bdc();
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = &cf_success;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_190 = ppuVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = &cf_theme;
      if (local_2d0 == (cfstringStruct *)0x0) {
        local_640 = &::cf___;
      }
      else {
        local_640 = local_2d0;
      }
      local_180 = local_640;
      local_1c0 = &cf_code;
      local_178 = &::cf___;
      local_1b8 = &cf_targetWxid;
      local_170 = local_380;
      local_1b0 = &cf_targetNickname;
      pcVar4 = local_270;
      local_188 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_targetNickname_026b3bc8);
      _objc_retainAutoreleasedReturnValue();
      local_650 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_650 = &::cf___;
      }
      local_168 = local_650;
      local_1a8 = &cf_targetAccount;
      if (local_338 == (cfstringStruct *)0x0) {
        local_660 = &::cf___;
      }
      else {
        local_660 = local_338;
      }
      local_160 = local_660;
      local_1a0 = &cf_provider;
      if (local_330 == (cfstringStruct *)0x0) {
        local_670 = &::cf___;
      }
      else {
        local_670 = local_330;
      }
      local_158 = local_670;
      local_198 = &cf_message;
      local_150 = &cf_wS_MRO_S;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_190,&local_1d8,9);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_wcr_appendAirDropLog__026b3be0);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
    }
    _objc_storeStrong(&local_380,0);
  }
  _objc_storeStrong(&local_368);
  _objc_storeStrong(&local_360,0);
  _objc_storeStrong(&local_358,0);
  _objc_storeStrong(&local_348,0);
  _objc_storeStrong(&local_340,0);
  _objc_storeStrong(&local_338,0);
  _objc_storeStrong(&local_330,0);
  _objc_storeStrong(&local_320,0);
  _objc_storeStrong(&local_318,0);
  _objc_storeStrong(&local_2d0,0);
  _objc_storeStrong(&local_2c8,0);
  _objc_storeStrong(&local_2b8,0);
  _objc_storeStrong(&local_288,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

