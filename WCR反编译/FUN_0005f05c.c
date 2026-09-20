// FUN_0005f05c @ 0005f05c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0005f05c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  byte local_534;
  undefined *local_4f8;
  undefined *local_4d0;
  undefined *local_488;
  undefined4 local_480;
  undefined4 local_47c;
  code *local_478;
  undefined *local_470;
  undefined8 local_468;
  undefined1 auStack_460 [15];
  undefined1 local_451;
  undefined *local_450;
  undefined4 local_448;
  undefined4 local_444;
  code *local_440;
  undefined *local_438;
  undefined **local_430;
  undefined1 local_422;
  undefined1 local_421;
  undefined *local_420;
  undefined4 local_418;
  undefined4 local_414;
  code *local_410;
  undefined *local_408;
  undefined *local_400;
  undefined8 local_3f8;
  undefined1 local_3e9;
  undefined *local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  code *local_3d8;
  undefined *local_3d0;
  undefined **local_3c8;
  undefined1 local_3b9;
  undefined *local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  code *local_3a8;
  undefined *local_3a0;
  undefined **local_398;
  undefined1 local_389;
  undefined *local_388;
  undefined4 local_380;
  undefined4 local_37c;
  code *local_378;
  undefined *local_370;
  undefined **local_368;
  undefined1 local_359;
  undefined *local_358;
  undefined4 local_350;
  undefined4 local_34c;
  code *local_348;
  undefined *local_340;
  undefined **local_338;
  undefined1 local_329;
  undefined *local_328;
  undefined4 local_320;
  undefined4 local_31c;
  code *local_318;
  undefined *local_310;
  undefined **local_308;
  cfstringStruct *local_300;
  cfstringStruct *local_2f8;
  char *local_2f0;
  undefined1 local_2e2;
  undefined1 local_2e1;
  undefined *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  code *local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined1 auStack_2b8 [15];
  undefined1 local_2a9;
  undefined *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  undefined *local_290;
  undefined **local_288;
  undefined1 local_27a;
  undefined1 local_279;
  undefined *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  code *local_268;
  undefined *local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined1 local_241;
  undefined *local_240;
  undefined4 local_238;
  undefined4 local_234;
  code *local_230;
  undefined *local_228;
  undefined **local_220;
  undefined1 local_211;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  undefined **local_1f0;
  undefined1 local_1e1;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  undefined **local_1c0;
  undefined1 local_1b1;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined **local_190;
  undefined1 local_181;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined **local_160;
  undefined *local_158;
  undefined4 local_14c;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined **local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined **local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [8];
  undefined **local_a8;
  byte local_99;
  undefined1 auStack_98 [8];
  char *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50 [3];
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineLinkMediaSender_026ce170;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_usernameFromLogicController__0269db98,
             local_30);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_4d0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_4d0 = PTR_WCRefineLinkMediaSender_026ce170;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_currentChatUsername_0269dba0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_4d0;
  }
  local_59 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_4d0;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_71 = 0;
  local_81 = 0;
  local_4f8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_4f8 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_4f8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_4f8;
  }
  local_81 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_4f8;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = "WCUIActionSheet";
  _objc_getClass();
  local_90 = pcVar3;
  _objc_initWeak(auStack_98,local_30);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_534 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR_WCRefineLinkMediaSender_026ce170;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_shouldOfferLinkCardForText__0269dbc0,
               local_28);
    local_534 = (byte)puVar2;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_99 = local_534 & 1;
  ppuVar4 = &local_d8;
  local_d8 = PTR___NSConcreteStackBlock_02578660;
  local_d0 = 0xc2000000;
  local_cc = 0;
  local_c8 = FUN_00061998;
  local_c0 = &DAT_025797f0;
  _objc_copyWeak(auStack_b0,auStack_98);
  uVar10 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = uVar10;
  _objc_retainBlock();
  puVar2 = local_50[0];
  ppuVar9 = &local_110;
  local_110 = puVar1;
  local_108 = 0xc2000000;
  local_104 = 0;
  local_100 = FUN_00061a7c;
  local_f8 = &DAT_02579820;
  local_a8 = ppuVar4;
  (*(code *)PTR__objc_retain_02578638)();
  uVar10 = local_28;
  local_f0 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = uVar10;
  _objc_retainBlock();
  puVar2 = local_50[0];
  ppuVar4 = &local_148;
  local_148 = puVar1;
  local_140 = 0xc2000000;
  local_13c = 0;
  local_138 = FUN_00061c50;
  local_130 = &DAT_02579850;
  local_e0 = ppuVar9;
  (*(code *)PTR__objc_retain_02578638)();
  uVar10 = local_28;
  local_128 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_120 = uVar10;
  _objc_retainBlock();
  local_118 = ppuVar4;
  if ((local_90 == (char *)0x0) || (local_68 == (undefined *)0x0)) {
    if (local_68 == (undefined *)0x0) {
      (*(code *)local_a8[2])();
      local_14c = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,&cf_hKm0RRNc,&cf_bSe_,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = local_a8;
      puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_180 = PTR___NSConcreteStackBlock_02578660;
      local_178 = 0xc2000000;
      local_174 = 0;
      local_170 = FUN_00061e20;
      local_168 = &DAT_02579880;
      local_158 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = ppuVar4;
      local_181 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_vcS,0,&local_180);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      local_181 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      ppuVar4 = local_e0;
      puVar2 = local_158;
      puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_1b0 = PTR___NSConcreteStackBlock_02578660;
      local_1a8 = 0xc2000000;
      local_1a4 = 0;
      local_1a0 = FUN_00061ed0;
      local_198 = &DAT_02579880;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = ppuVar4;
      local_1b1 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_gS,0,&local_1b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      local_1b1 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      ppuVar4 = local_118;
      puVar2 = local_158;
      puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_1e0 = PTR___NSConcreteStackBlock_02578660;
      local_1d8 = 0xc2000000;
      local_1d4 = 0;
      local_1d0 = FUN_00061f50;
      local_1c8 = &DAT_02579880;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = ppuVar4;
      local_1e1 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_gcVGr,0,&local_1e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      local_1e1 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      ppuVar4 = local_118;
      puVar2 = local_158;
      puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      if (((ulong)puVar5 & 1) != 0) {
        local_210 = PTR___NSConcreteStackBlock_02578660;
        local_208 = 0xc2000000;
        local_204 = 0;
        local_200 = FUN_00061fcc;
        local_1f8 = &DAT_02579880;
        (*(code *)PTR__objc_retain_02578638)();
        local_1f0 = ppuVar4;
        local_211 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_S_b,0,&local_210);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
        local_211 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        ppuVar4 = local_118;
        puVar2 = local_158;
        puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
        local_240 = PTR___NSConcreteStackBlock_02578660;
        local_238 = 0xc2000000;
        local_234 = 0;
        local_230 = FUN_00062048;
        local_228 = &DAT_02579880;
        (*(code *)PTR__objc_retain_02578638)();
        local_220 = ppuVar4;
        local_241 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Ne_S,0,&local_240);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
        local_241 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(&local_220);
        _objc_storeStrong(&local_1f0,0);
      }
      puVar5 = local_50[0];
      puVar2 = local_158;
      puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      if ((local_99 & 1) != 0) {
        local_278 = PTR___NSConcreteStackBlock_02578660;
        local_270 = 0xc2000000;
        local_26c = 0;
        local_268 = FUN_000620c4;
        local_260 = &DAT_025798b0;
        (*(code *)PTR__objc_retain_02578638)();
        uVar10 = local_28;
        local_258 = puVar5;
        local_27a = 1;
        (*(code *)PTR__objc_retain_02578638)();
        local_250 = uVar10;
        local_279 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_SbcaSGr,0,&local_278);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
        local_279 = 0;
        local_27a = 0;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(&local_250);
        _objc_storeStrong(&local_258,0);
      }
      ppuVar4 = local_e0;
      puVar2 = local_158;
      puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_2a8 = PTR___NSConcreteStackBlock_02578660;
      local_2a0 = 0xc2000000;
      local_29c = 0;
      local_298 = FUN_0006226c;
      local_290 = &DAT_02579880;
      (*(code *)PTR__objc_retain_02578638)();
      local_288 = ppuVar4;
      local_2a9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_gv_OYuSN,0,&local_2a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      local_2a9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar2 = local_158;
      puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_2e0 = PTR___NSConcreteStackBlock_02578660;
      local_2d8 = 0xc2000000;
      local_2d4 = 0;
      local_2d0 = FUN_000622ec;
      local_2c8 = &DAT_025798e0;
      _objc_copyWeak(auStack_2b8,auStack_98);
      uVar10 = local_28;
      local_2e2 = 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c0 = uVar10;
      local_2e1 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,&local_2e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      local_2e1 = 0;
      local_2e2 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_158,1,0);
      local_14c = 1;
      _objc_storeStrong(&local_2c0);
      _objc_destroyWeak(auStack_2b8);
      _objc_storeStrong(&local_288,0);
      _objc_storeStrong(&local_1c0,0);
      _objc_storeStrong(&local_190,0);
      _objc_storeStrong(&local_160,0);
      _objc_storeStrong(&local_158,0);
    }
  }
  else {
    pcVar3 = local_90;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithTitle__0269d2f8,&cf_hKm0RRNc);
    pcVar6 = &cf_addBtnTitle_handler_;
    local_2f0 = pcVar3;
    _NSSelectorFromString();
    pcVar7 = &cf_addCancelBtnTitle_handler_;
    local_2f8 = pcVar6;
    _NSSelectorFromString();
    pcVar8 = local_2f0;
    local_300 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_respondsToSelector__026ca818,local_2f8);
    ppuVar4 = local_a8;
    pcVar3 = local_2f0;
    pcVar6 = local_2f8;
    if (((ulong)pcVar8 & 1) != 0) {
      ppuVar9 = &local_328;
      local_328 = PTR___NSConcreteStackBlock_02578660;
      local_320 = 0xc2000000;
      local_31c = 0;
      local_318 = FUN_00062594;
      local_310 = &DAT_02579910;
      (*(code *)PTR__objc_retain_02578638)();
      local_308 = ppuVar4;
      local_329 = 1;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar6,&cf_vcS);
      local_329 = 0;
      (*(code *)PTR__objc_release_02578630)(ppuVar9);
      ppuVar9 = local_e0;
      pcVar3 = local_2f0;
      pcVar6 = local_2f8;
      ppuVar4 = &local_358;
      local_358 = PTR___NSConcreteStackBlock_02578660;
      local_350 = 0xc2000000;
      local_34c = 0;
      local_348 = FUN_000626b4;
      local_340 = &DAT_02579910;
      (*(code *)PTR__objc_retain_02578638)();
      local_338 = ppuVar9;
      local_359 = 1;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar6,&cf_gS);
      local_359 = 0;
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      ppuVar9 = local_118;
      pcVar3 = local_2f0;
      pcVar6 = local_2f8;
      ppuVar4 = &local_388;
      local_388 = PTR___NSConcreteStackBlock_02578660;
      local_380 = 0xc2000000;
      local_37c = 0;
      local_378 = FUN_000627dc;
      local_370 = &DAT_02579910;
      (*(code *)PTR__objc_retain_02578638)();
      local_368 = ppuVar9;
      local_389 = 1;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar6,&cf_gcVGr);
      local_389 = 0;
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      ppuVar4 = local_118;
      pcVar3 = local_2f0;
      pcVar6 = local_2f8;
      if (((ulong)puVar2 & 1) != 0) {
        ppuVar9 = &local_3b8;
        local_3b8 = PTR___NSConcreteStackBlock_02578660;
        local_3b0 = 0xc2000000;
        local_3ac = 0;
        local_3a8 = FUN_00062900;
        local_3a0 = &DAT_02579910;
        (*(code *)PTR__objc_retain_02578638)();
        local_398 = ppuVar4;
        local_3b9 = 1;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar6,&cf_S_b);
        local_3b9 = 0;
        (*(code *)PTR__objc_release_02578630)(ppuVar9);
        ppuVar9 = local_118;
        pcVar3 = local_2f0;
        pcVar6 = local_2f8;
        ppuVar4 = &local_3e8;
        local_3e8 = PTR___NSConcreteStackBlock_02578660;
        local_3e0 = 0xc2000000;
        local_3dc = 0;
        local_3d8 = FUN_00062a24;
        local_3d0 = &DAT_02579910;
        (*(code *)PTR__objc_retain_02578638)();
        local_3c8 = ppuVar9;
        local_3e9 = 1;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar6,&cf_Ne_S);
        local_3e9 = 0;
        (*(code *)PTR__objc_release_02578630)(ppuVar4);
        _objc_storeStrong(&local_3c8);
        _objc_storeStrong(&local_398,0);
      }
      puVar1 = local_50[0];
      pcVar3 = local_2f0;
      pcVar6 = local_2f8;
      if ((local_99 & 1) != 0) {
        ppuVar4 = &local_420;
        local_420 = PTR___NSConcreteStackBlock_02578660;
        local_418 = 0xc2000000;
        local_414 = 0;
        local_410 = FUN_00062b48;
        local_408 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        uVar10 = local_28;
        local_400 = puVar1;
        local_422 = 1;
        (*(code *)PTR__objc_retain_02578638)();
        local_3f8 = uVar10;
        local_421 = 1;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar6,&cf_SbcaSGr);
        local_421 = 0;
        local_422 = 0;
        (*(code *)PTR__objc_release_02578630)(ppuVar4);
        _objc_storeStrong(&local_3f8);
        _objc_storeStrong(&local_400,0);
      }
      pcVar3 = local_2f0;
      pcVar6 = local_2f8;
      ppuVar4 = &local_450;
      local_450 = PTR___NSConcreteStackBlock_02578660;
      local_448 = 0xc2000000;
      local_444 = 0;
      local_440 = FUN_00062dc4;
      local_438 = &DAT_02579910;
      ppuVar9 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_451 = 1;
      local_430 = ppuVar9;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar6,&cf_gv_OYuSN);
      local_451 = 0;
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      _objc_storeStrong(&local_430);
      _objc_storeStrong(&local_368,0);
      _objc_storeStrong(&local_338,0);
      _objc_storeStrong(&local_308,0);
    }
    pcVar8 = local_2f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_respondsToSelector__026ca818,local_300);
    pcVar3 = local_2f0;
    pcVar6 = local_300;
    if (((ulong)pcVar8 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2f0,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addCancelBtnTitle_target_sel__0269d268);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2f0,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      }
    }
    else {
      ppuVar4 = &local_488;
      local_488 = PTR___NSConcreteStackBlock_02578660;
      local_480 = 0xc2000000;
      local_47c = 0;
      local_478 = FUN_00062eec;
      local_470 = &DAT_025797f0;
      _objc_copyWeak(auStack_460,auStack_98);
      uVar10 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_468 = uVar10;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar6,&cf_Sm);
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      _objc_storeStrong(&local_468,0);
      _objc_destroyWeak(auStack_460);
    }
    pcVar3 = local_2f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_2f0,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_showInView__0269d310,local_68);
    }
    _objc_storeStrong(&local_2f0,0);
    local_14c = 0;
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_b8,0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_98);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

