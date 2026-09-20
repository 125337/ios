// FUN_002cb5b0 @ 002cb5b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_002cb5b0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,double param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  cfstringStruct *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined *local_790;
  undefined1 *local_770;
  double local_588;
  double local_570;
  double local_558;
  double local_540;
  double local_528;
  double local_510;
  undefined *local_3b0;
  undefined *local_3a0;
  undefined1 *local_390;
  undefined1 *local_380;
  undefined1 *local_378;
  double local_370;
  byte local_361;
  long local_360;
  char local_351;
  double local_350;
  double dStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  double local_330;
  double dStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined1 *local_310;
  undefined1 *local_308;
  double local_300;
  double dStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  double local_2e0;
  double dStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  byte local_2b1;
  undefined1 *local_2b0;
  undefined *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  undefined *local_290;
  undefined1 *local_288;
  double local_280;
  double dStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  double dStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  double local_188;
  double dStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  ulong local_148;
  ulong local_140;
  double local_138;
  double local_130;
  double dStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  double dStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_a4;
  cfstringStruct *local_a0;
  double local_98;
  double local_90;
  byte local_85;
  undefined1 *local_78;
  double local_70;
  ulong local_68;
  undefined8 local_60;
  long local_58;
  undefined *local_50;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_21;
  
  dVar2 = DAT_02323db0;
  local_588 = DAT_02323c68;
  local_50 = (undefined1 *)0x0;
  local_48 = param_1;
  dStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  puVar5 = PTR_WCRefineConfig_026cdf58;
  local_70 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_85 = (byte)local_68;
  local_78 = puVar5;
  FUN_002b13fc();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_floatingTabBarBackgroundOpacity_026a1ac0);
  param_1 = param_1 / 100.0;
  FUN_002adba4(param_1,0,0x3ff0000000000000);
  local_90 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_floatingTabBarBackgroundGlassInt_026a1ac8);
  param_1 = param_1 / 100.0;
  FUN_002adba4(param_1,0,0x3ff0000000000000);
  local_98 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = &cf_default;
  puVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tag_026cab98);
  if (puVar5 != (undefined1 *)0x24f757) {
    uVar4 = (uint)local_68;
    FUN_002cae04();
    if ((uVar4 & 1) != 0) {
      FUN_002bf438(local_50);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_58,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setImage__026ca978,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_60,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEffect__026ca930,0);
      uVar13 = local_60;
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      FUN_002cdbd0(uVar13);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_21 = 1;
      local_a4 = 1;
      goto LAB_002cdb08;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHidden__026ca970,0);
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_60,PTR_s_setAlpha__026ca860);
  dStack_c8 = dStack_40;
  local_d0 = local_48;
  uStack_b8 = uStack_30;
  local_c0 = local_38;
  dStack_e8 = dStack_40;
  local_f0 = local_48;
  uStack_d8 = uStack_30;
  local_e0 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,dStack_40,local_38,uStack_30,local_58,PTR_s_setFrame__026ca960);
  dVar15 = local_70;
  lVar6 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar15);
  (*(code *)PTR__objc_release_02578630)(lVar6);
  lVar6 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar6);
  lVar6 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  FUN_002b0928();
  (*(code *)PTR__objc_release_02578630)(lVar6);
  dStack_108 = dStack_40;
  local_110 = local_48;
  uStack_f8 = uStack_30;
  local_100 = local_38;
  dStack_128 = dStack_40;
  local_130 = local_48;
  uStack_118 = uStack_30;
  local_120 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,dStack_40,local_38,uStack_30,local_60,PTR_s_setFrame__026ca960);
  local_510 = local_70;
  uVar13 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar13);
  uVar13 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar13);
  uVar13 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  FUN_002b0928();
  (*(code *)PTR__objc_release_02578630)(uVar13);
  puVar7 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_floatingTabBarBackgroundStyleInd_026a1a48);
  if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    _CFAbsoluteTimeGetCurrent(0);
    uVar8 = local_68;
    local_138 = local_510;
    FUN_002b0af0();
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    FUN_002b1d4c();
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar9;
    (*(code *)PTR__objc_release_02578630)(uVar8);
    uVar8 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    if ((uVar8 == 0) ||
       (uVar8 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
       uVar8 == 0)) {
      local_a4 = 0;
    }
    else {
      if ((local_85 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_floatingTabBarBackgroundMediaAlp_026a1b28);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_floatingTabBarBackgroundMediaAlp_026a1b20);
      }
      local_150 = local_510;
      if ((local_85 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_floatingTabBarBackgroundMediaOff_026a1b38);
        local_528 = local_510;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_floatingTabBarBackgroundMediaOff_026a1b30);
        local_528 = local_510;
      }
      local_158 = local_528;
      if ((local_85 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_floatingTabBarBackgroundMediaOff_026a1b48);
        local_540 = local_528;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_floatingTabBarBackgroundMediaOff_026a1b40);
        local_540 = local_528;
      }
      local_160 = local_540;
      if ((local_85 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_floatingTabBarBackgroundMediaSca_026a1b58);
        local_558 = local_540;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_floatingTabBarBackgroundMediaSca_026a1b50);
        local_558 = local_540;
      }
      local_168 = local_558;
      dStack_1a8 = dStack_40;
      local_1b0 = local_48;
      uStack_198 = uStack_30;
      local_1a0 = local_38;
      dStack_1c8 = dStack_40;
      local_1d0 = local_48;
      uStack_1b8 = uStack_30;
      local_1c0 = local_38;
      _CGRectGetWidth(local_48,dStack_40,local_38,uStack_30);
      local_1d8 = local_588;
      local_1e0 = local_168;
      if (local_168 <= local_588) {
        local_570 = local_588;
      }
      else {
        local_570 = local_168;
      }
      local_1e8 = local_570;
      dStack_208 = dStack_40;
      local_210 = local_48;
      uStack_1f8 = uStack_30;
      local_200 = local_38;
      _CGRectGetHeight(local_48,dStack_40,local_38,uStack_30);
      local_218 = local_588;
      local_220 = local_168;
      if (local_168 <= local_588) {
      }
      else {
        local_588 = local_168;
      }
      local_228 = local_588;
      dVar15 = local_1b0;
      dVar16 = dStack_1a8;
      uVar13 = local_1a0;
      uVar17 = uStack_198;
      _CGRectInset();
      local_188 = dVar15 + local_158;
      dStack_180 = dVar16 - local_160;
      local_178 = uVar13;
      uStack_170 = uVar17;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_60,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEffect__026ca930,0);
      uVar13 = local_60;
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      FUN_002cdbd0(uVar13);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar4 = (uint)local_148;
      FUN_002cde14();
      if ((uVar4 & 1) == 0) {
        uVar8 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isEqualToString__0269ccc8,&cf_gif);
        pcVar1 = &cf_gif;
        if ((uVar8 & 1) == 0) {
          pcVar1 = &cf_image;
        }
        _objc_storeStrong(&local_a0,pcVar1);
        puVar5 = local_50;
        _objc_getAssociatedObject(local_50,&DAT_028c9824);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = local_50;
        local_308 = puVar5;
        _objc_getAssociatedObject(local_50,&DAT_028c9822);
        _objc_retainAutoreleasedReturnValue();
        local_310 = puVar12;
        if (puVar12 != (undefined1 *)0x0) {
          FUN_002bf438(local_50);
          _objc_storeStrong(&local_308,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setHidden__026ca970,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_150,local_58,PTR_s_setAlpha__026ca860);
        dStack_328 = dStack_180;
        local_330 = local_188;
        uStack_318 = uStack_170;
        local_320 = local_178;
        dStack_348 = dStack_180;
        local_350 = local_188;
        uStack_338 = uStack_170;
        local_340 = local_178;
        dVar15 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_188,dStack_180,local_178,uStack_170,local_58,PTR_s_setFrame__026ca960);
        local_361 = 0;
        puVar7 = local_308;
        (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_isEqualToString__0269ccc8,local_140);
        bVar3 = false;
        if (((ulong)puVar7 & 1) != 0) {
          lVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          local_361 = 1;
          bVar3 = lVar6 != 0;
          local_360 = lVar6;
        }
        if ((local_361 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_360);
        }
        uVar8 = local_140;
        local_351 = bVar3;
        if (bVar3 == false) {
          uVar9 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isEqualToString__0269ccc8,&cf_gif);
          FUN_002ce998(uVar8,uVar9 & 0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setImage__026ca978);
          (*(code *)PTR__objc_release_02578630)(uVar8);
          _objc_setAssociatedObject(local_50,&DAT_028c9824,local_140,3);
        }
        _objc_storeStrong(&local_310);
        _objc_storeStrong(&local_308,0);
      }
      else {
        _objc_storeStrong(&local_a0,&cf_video);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setHidden__026ca970,1);
        dVar15 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setImage__026ca978,0);
        puVar5 = local_50;
        _objc_getAssociatedObject(local_50,&DAT_028c9824);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = local_50;
        local_230 = puVar5;
        _objc_getAssociatedObject(local_50,&DAT_028c9823);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_50;
        local_238 = puVar12;
        _objc_getAssociatedObject(local_50,&DAT_028c9822);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = (uint)local_68;
        local_240 = puVar5;
        FUN_002ce0bc();
        if ((uVar4 & 1) == 0) {
          if (((local_238 != (undefined1 *)0x0) && (local_240 != (undefined1 *)0x0)) &&
             (puVar7 = local_230,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_230,PTR_s_isEqualToString__0269ccc8,local_140),
             ((ulong)puVar7 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_pause_0269f2d8);
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setHidden__026ca970,0);
            dStack_258 = dStack_180;
            local_260 = local_188;
            uStack_248 = uStack_170;
            local_250 = local_178;
            dStack_278 = dStack_180;
            local_280 = local_188;
            uStack_268 = uStack_170;
            local_270 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_188,dStack_180,local_178,uStack_170,local_238,PTR_s_setFrame__026ca960)
            ;
            (*(code *)PTR__objc_msgSend_02578628)
                      ((float)local_150,local_238,PTR_s_setOpacity__026ca9f0);
            dVar15 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setCornerRadius__026ca900);
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setMasksToBounds__026ca9b8,1);
          }
          local_21 = 0;
          local_a4 = 1;
        }
        else {
          puVar7 = local_230;
          (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_isEqualToString__0269ccc8,local_140)
          ;
          fVar14 = SUB84(dVar15,0);
          if (((((ulong)puVar7 & 1) == 0) || (local_238 == (undefined1 *)0x0)) ||
             (local_240 == (undefined1 *)0x0)) {
            FUN_002bf438(local_50);
            puVar5 = PTR__OBJC_CLASS___AVPlayer_026ce308;
            puVar12 = PTR__OBJC_CLASS___NSURL_026ce328;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_140);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_playerWithURL__026a1b60);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_240;
            local_240 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar12);
            puVar7 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_floatingTabBarBackgroundVideoMut_026a1b68);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_240,PTR_s_setMuted__0269f258,(ulong)puVar7 & 0xffffffff);
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_setActionAtItemEnd__026a05a8,2);
            puVar5 = PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___AVPlayerLayer_026ce2f8,
                       PTR_s_playerLayerWithPlayer__026a05a0,local_240);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_238;
            local_238 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_238,PTR_s_setVideoGravity__0269f298,
                       *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558);
            puVar5 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar5);
            _objc_setAssociatedObject(local_50,&DAT_028c9822,local_240,1);
            _objc_setAssociatedObject(local_50,&DAT_028c9823,local_238,1);
            _objc_setAssociatedObject(local_50,&DAT_028c9824,local_140,3);
            puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0)
            ;
            _objc_retainAutoreleasedReturnValue();
            uVar13 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_025785a0;
            puVar10 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_currentItem_026a1b70);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_240;
            local_2a8 = PTR___NSConcreteStackBlock_02578660;
            local_2a0 = 0xc2000000;
            local_29c = 0;
            local_298 = FUN_002ce8d8;
            local_290 = &DAT_0257ba08;
            (*(code *)PTR__objc_retain_02578638)();
            local_288 = puVar7;
            puVar11 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_addObserverForName_object_queue__026ca4b0,uVar13,puVar10,puVar12
                       ,&local_2a8);
            _objc_unsafeClaimAutoreleasedReturnValue(puVar11);
            (*(code *)PTR__objc_release_02578630)(puVar12);
            (*(code *)PTR__objc_release_02578630)(puVar10);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_play_0269f2b0);
            _objc_storeStrong(&local_288,0);
          }
          puVar7 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_floatingTabBarBackgroundVideoMut_026a1b68);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_240,PTR_s_setMuted__0269f258,(ulong)puVar7 & 0xffffffff);
          local_2b1 = 0;
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_rate_026a1b80);
          bVar3 = false;
          if (fVar14 == 0.0) {
            puVar7 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_currentItem_026a1b70);
            _objc_retainAutoreleasedReturnValue();
            local_2b1 = 1;
            local_2b0 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar3 = puVar7 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
          }
          if ((local_2b1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_2b0);
          }
          if (bVar3) {
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_play_0269f2b0);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setHidden__026ca970,0);
          dStack_2d8 = dStack_180;
          local_2e0 = local_188;
          uStack_2c8 = uStack_170;
          local_2d0 = local_178;
          dStack_2f8 = dStack_180;
          local_300 = local_188;
          uStack_2e8 = uStack_170;
          local_2f0 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_188,dStack_180,local_178,uStack_170,local_238,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)
                    ((float)local_150,local_238,PTR_s_setOpacity__026ca9f0);
          dVar15 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setCornerRadius__026ca900);
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setMasksToBounds__026ca9b8,1);
          local_a4 = 0;
        }
        _objc_storeStrong(&local_240);
        _objc_storeStrong(&local_238,0);
        _objc_storeStrong(&local_230,0);
        if (local_a4 != 0) goto LAB_002cd3e0;
      }
      _CFAbsoluteTimeGetCurrent();
      local_370 = (dVar15 - local_138) * 1000.0;
      if (local_370 < 1.0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isEqualToString__0269ccc8,&cf_image);
      }
      local_21 = 0;
      local_a4 = 1;
    }
LAB_002cd3e0:
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_140,0);
    if (local_a4 != 0) goto LAB_002cdb08;
  }
  FUN_002bf438(local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setHidden__026ca970,1);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_58,PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setImage__026ca978,0);
  if (dVar2 < local_90) {
    if (dVar2 < local_98) {
      uVar4 = 0xd;
      FUN_002b0a2c();
      if ((uVar4 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEffect__026ca930);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      else {
        uVar13 = 8;
        if (local_98 <= DAT_02323f60) {
          uVar13 = 6;
        }
        puVar5 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,uVar13);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEffect__026ca930);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEffect__026ca930,0);
    }
    bVar3 = (local_85 & 1) == 0;
    local_770 = local_78;
    if (bVar3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_floatingTabBarBackgroundColorLig_026a1b90);
      _objc_retainAutoreleasedReturnValue();
      local_390 = local_770;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_floatingTabBarBackgroundColorDar_026a1b88);
      _objc_retainAutoreleasedReturnValue();
      local_380 = local_770;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_378 = local_770;
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_390);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_380);
    }
    if (local_378 == (undefined1 *)0x0) {
      bVar3 = (local_85 & 1) == 0;
      local_790 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if (bVar3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_3b0 = local_790;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_3a0 = local_790;
      }
      _objc_storeStrong(&local_378,local_790);
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_3b0);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_3a0);
      }
    }
    uVar13 = local_60;
    puVar7 = local_378;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90 * (DAT_02323d58 + (1.0 - local_98 * 0.35) * DAT_02323f78),local_378,
               PTR_s_colorWithAlphaComponent__026ca578);
    _objc_retainAutoreleasedReturnValue();
    FUN_002cdbd0(uVar13);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_21 = 0;
    local_a4 = 1;
    _objc_storeStrong(&local_378,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEffect__026ca930,0);
    uVar13 = local_60;
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    FUN_002cdbd0(uVar13);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_21 = 1;
    local_a4 = 1;
  }
LAB_002cdb08:
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  return local_21 & 1;
}

