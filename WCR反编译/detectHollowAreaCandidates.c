// detectHollowAreaCandidates @ 01d52eb4

/* Function Stack Size: 0x10 bytes */

ID WCRefineScreenshotFrameEditorViewController::detectHollowAreaCandidates(ID param_1,SEL param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  ID IVar5;
  undefined1 *puVar6;
  void *pvVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double in_d1;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double local_b20;
  double local_b18;
  double local_b08;
  double local_b00;
  double local_af8;
  double local_aa8;
  double local_a98;
  double local_a78;
  double local_a70;
  double local_a58;
  double local_a50;
  double local_a40;
  double local_a38;
  long local_a28;
  long local_a20;
  double local_a18;
  double local_a08;
  double local_9f8;
  double local_9f0;
  ulong local_9d0;
  ulong local_9c8;
  ulong local_9c0;
  ulong local_9b8;
  long local_980;
  long local_978;
  double local_970;
  double local_968;
  double local_858;
  undefined *local_800;
  double local_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double local_7d0;
  double local_7c8;
  double local_7c0;
  double local_7b8;
  double local_7b0;
  undefined8 local_7a8;
  double local_7a0;
  double local_798;
  double local_790;
  undefined8 local_788;
  double local_780;
  long local_778;
  byte local_769;
  double local_768;
  double local_760;
  double local_758;
  long local_750;
  long local_748;
  double local_740;
  double dStack_738;
  double local_728;
  double local_720;
  double local_718;
  double local_710;
  double local_708;
  double local_700;
  undefined8 local_6f8;
  double local_6f0;
  long local_6e8;
  double local_6e0;
  double local_6d8;
  double local_6d0;
  double local_6c8;
  double local_6c0;
  undefined8 local_6b8;
  double local_6b0;
  double local_6a8;
  double local_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  double local_680;
  double local_678;
  double dStack_670;
  double local_668;
  double local_660;
  double local_658;
  double dStack_650;
  double local_648;
  double local_640;
  double local_638;
  double dStack_630;
  double local_628;
  double local_620;
  double local_618;
  double local_610;
  double local_608;
  double local_600;
  double local_5f8;
  double local_5f0;
  double local_5e8;
  double local_5e0;
  long local_5d8;
  long local_5d0;
  double local_5c8;
  double local_5c0;
  long local_5b8;
  long local_5b0;
  double local_5a8;
  double local_5a0;
  undefined8 local_598;
  double local_590;
  double local_588;
  double local_580;
  undefined8 local_578;
  double local_570;
  double local_568;
  double local_560;
  double local_558;
  double local_550;
  double local_548;
  double local_540;
  double local_538;
  double local_530;
  double local_528;
  double local_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  long local_4c8;
  int local_4bc;
  long local_4b8;
  long local_4b0;
  long local_4a8;
  long local_4a0;
  int local_494;
  long local_490;
  long local_488;
  long local_480;
  double local_478;
  double local_470;
  undefined8 local_468;
  double local_460;
  double local_458;
  double local_450;
  undefined8 local_448;
  double local_440;
  double local_438;
  double local_430;
  long local_428;
  long local_420;
  long local_418;
  long local_410;
  char local_401;
  long local_400;
  long local_3f8;
  long local_3f0;
  long local_3e8;
  long local_3e0;
  long local_3d8;
  long local_3d0;
  long local_3c8;
  long local_3c0;
  long local_3b8;
  long local_3b0;
  double local_3a8;
  double local_3a0;
  undefined8 local_398;
  double local_390;
  undefined1 *local_388;
  ulong local_380;
  double local_378;
  double local_370;
  undefined8 local_368;
  byte local_35d;
  undefined1 local_35c;
  undefined1 local_35b;
  undefined1 local_35a;
  undefined1 local_359;
  double local_358;
  long local_350;
  ulong local_348;
  ulong local_340;
  ulong local_338;
  ulong local_330;
  ulong local_328;
  ulong local_320;
  ulong local_318;
  ulong local_310;
  ulong local_308;
  ulong local_300;
  ulong local_2f8;
  ulong local_2f0;
  ulong local_2e8;
  ulong local_2e0;
  byte local_2d4;
  byte local_2d3;
  byte local_2d2;
  byte local_2d1;
  ulong local_2d0;
  long local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  double local_290;
  double local_288;
  void *local_280;
  void *local_278;
  void *local_270;
  void *local_268;
  void *local_260;
  void *local_258;
  undefined4 *local_250;
  void *local_248;
  void *local_240;
  void *local_238;
  size_t local_230;
  long local_228;
  long local_220;
  undefined4 local_214;
  long local_210;
  long local_208;
  long local_200;
  undefined4 local_1f4;
  long local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  byte local_161;
  ID local_160;
  double local_158;
  byte local_141;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  double local_70 [5];
  double dStack_48;
  double local_40;
  double dStack_38;
  long local_28;
  
  dVar4 = DAT_02323d60;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar23 = DAT_02323d60;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_templateImage_026c46b8);
  _objc_retainAutoreleasedReturnValue();
  local_141 = 0;
  local_161 = 0;
  bVar1 = true;
  dVar24 = dVar23;
  if (param_1 != 0) {
    IVar5 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_templateImage_026c46b8);
    _objc_retainAutoreleasedReturnValue();
    local_141 = 1;
    local_140 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    in_d1 = 1.0;
    bVar1 = true;
    dVar24 = dVar23;
    local_158 = dVar23;
    if (1.0 < dVar23) {
      IVar5 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_templateImage_026c46b8);
      _objc_retainAutoreleasedReturnValue();
      local_161 = 1;
      dVar24 = in_d1;
      local_160 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      in_d1 = 1.0;
      bVar1 = dVar24 <= 1.0;
      local_178 = dVar23;
      local_170 = dVar24;
    }
  }
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  if ((local_141 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (bVar1) {
    puVar6 = *(undefined1 **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = puVar6;
  }
  else {
    IVar5 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_templateImage_026c46b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_190 = dVar24;
    local_188 = in_d1;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_130;
    local_180 = dVar24;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_templateImage_026c46b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1a8 = dVar24;
    local_1a0 = in_d1;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    local_1b0 = 0x4087c00000000000;
    local_1c0 = 0x3ff0000000000000;
    local_1d0 = local_180;
    local_968 = in_d1;
    if (in_d1 <= local_180) {
      local_968 = local_180;
    }
    local_1e0 = local_968;
    local_1c8 = 760.0 / local_968;
    local_970 = local_1c8;
    if (1.0 < local_1c8) {
      local_970 = 1.0;
    }
    local_1e8 = local_970;
    local_1b8 = local_970;
    local_1f4 = 1;
    local_200 = (long)(local_180 * local_970);
    local_978 = local_200;
    if (local_200 < 2) {
      local_978 = 1;
    }
    local_208 = local_978;
    local_1f0 = local_978;
    local_214 = 1;
    local_220 = (long)(in_d1 * local_970);
    local_980 = local_220;
    if (local_220 < 2) {
      local_980 = 1;
    }
    local_228 = local_980;
    local_210 = local_980;
    local_230 = local_978 * local_980;
    local_1d8 = in_d1;
    local_198 = in_d1;
    local_238 = _calloc(local_230 * 4,1);
    local_240 = _calloc(local_230,1);
    local_248 = _calloc(local_230,1);
    local_250 = _malloc(local_230 << 2);
    local_258 = _malloc(local_210 << 2);
    local_260 = _malloc(local_210 << 2);
    local_268 = _malloc(local_1f0 << 2);
    pvVar7 = _malloc(local_1f0 << 2);
    local_270 = pvVar7;
    if ((((((local_238 == (void *)0x0) || (local_240 == (void *)0x0)) || (local_248 == (void *)0x0))
         || ((local_250 == (undefined4 *)0x0 || (local_258 == (void *)0x0)))) ||
        (local_260 == (void *)0x0)) || ((local_268 == (void *)0x0 || (pvVar7 == (void *)0x0)))) {
      _free(local_238);
      _free(local_240);
      _free(local_248);
      _free(local_250);
      _free(local_258);
      _free(local_260);
      _free(local_268);
      _free(local_270);
      puVar6 = *(undefined1 **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = puVar6;
    }
    else {
      _CGColorSpaceCreateDeviceRGB();
      pvVar8 = local_238;
      local_278 = pvVar7;
      _CGBitmapContextCreate(local_238,local_1f0,local_210,8,local_1f0 << 2,pvVar7,0x4001);
      local_280 = pvVar8;
      if (local_278 != (void *)0x0) {
        _CGColorSpaceRelease(local_278);
      }
      if (local_280 == (void *)0x0) {
        _free(local_238);
        _free(local_240);
        _free(local_248);
        _free(local_250);
        _free(local_258);
        _free(local_260);
        _free(local_268);
        _free(local_270);
        puVar6 = *(undefined1 **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = puVar6;
      }
      else {
        _UIGraphicsPushContext(local_280);
        pvVar7 = local_280;
        dVar23 = (double)local_1f0;
        dVar24 = (double)local_210;
        uVar20 = 0;
        uVar17 = 0;
        FUN_01d42a30();
        local_2a0 = uVar17;
        local_298 = uVar20;
        local_290 = dVar23;
        local_288 = dVar24;
        _CGContextClearRect(uVar17,uVar20,dVar23,dVar24,pvVar7);
        IVar5 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_templateImage_026c46b8);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = 0;
        dVar23 = (double)local_1f0;
        dVar24 = (double)local_210;
        uVar17 = uVar20;
        FUN_01d42a30();
        local_2c0 = uVar20;
        local_2b8 = uVar17;
        local_2b0 = dVar23;
        local_2a8 = dVar24;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar20,uVar17,dVar23,dVar24,IVar5,PTR_s_drawInRect__026ca610);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        _UIGraphicsPopContext();
        _CGContextRelease(local_280);
        local_2c8 = 0;
        for (local_2d0 = 0; local_2d0 < local_230; local_2d0 = local_2d0 + 1) {
          local_2d1 = *(byte *)((long)local_238 + local_2d0 * 4);
          local_2d2 = *(byte *)((long)local_238 + local_2d0 * 4 + 1);
          local_2d3 = *(byte *)((long)local_238 + local_2d0 * 4 + 2);
          local_2d4 = *(byte *)((long)local_238 + local_2d0 * 4 + 3);
          if (local_2d4 < 0x50) {
            *(undefined1 *)((long)local_240 + local_2d0) = 2;
            local_2c8 = local_2c8 + 1;
          }
          else if (local_2d4 < 0x78) {
            *(undefined1 *)((long)local_240 + local_2d0) = 2;
            local_2c8 = local_2c8 + 1;
          }
          else {
            local_2e8 = (ulong)local_2d1;
            local_2f8 = (ulong)local_2d2;
            local_300 = (ulong)local_2d3;
            local_9b8 = local_2f8;
            if (local_2f8 < local_300) {
              local_9b8 = local_300;
            }
            local_308 = local_9b8;
            local_2f0 = local_9b8;
            local_9c0 = local_2e8;
            if (local_2e8 < local_9b8) {
              local_9c0 = local_9b8;
            }
            local_310 = local_9c0;
            local_2e0 = local_9c0;
            local_320 = (ulong)local_2d1;
            local_330 = (ulong)local_2d2;
            local_338 = (ulong)local_2d3;
            local_9c8 = local_338;
            if (local_330 < local_338) {
              local_9c8 = local_330;
            }
            local_340 = local_9c8;
            local_328 = local_9c8;
            local_9d0 = local_320;
            if (local_9c8 <= local_320) {
              local_9d0 = local_9c8;
            }
            local_348 = local_9d0;
            local_318 = local_9d0;
            local_350 = local_9c0 - local_9d0;
            local_358 = DAT_02339df8 * (double)local_2d2 + (double)local_2d1 * DAT_02339df0 +
                        (double)local_2d3 * DAT_02339de8;
            local_359 = false;
            if ((0xf5 < local_2d1) && (local_359 = false, 0xf5 < local_2d2)) {
              local_359 = 0xf5 < local_2d3;
            }
            local_35a = 218.0 < local_358 && local_350 < 0x34;
            local_35b = 236.0 < local_358 && local_350 < 0x48;
            local_35c = false;
            if (((0xda < local_2d1) && (local_35c = false, 0xde < local_2d2)) &&
               (local_35c = false, 0xe4 < local_2d3)) {
              local_35c = local_350 < 0x4e;
            }
            if ((((bool)local_359 != false) || ((bool)local_35a)) ||
               (((bool)local_35b || ((bool)local_35c != false)))) {
              *(undefined1 *)((long)local_240 + local_2d0) = 1;
            }
          }
        }
        dVar23 = (double)NEON_ucvtf(local_2c8);
        local_368 = 0x3ff0000000000000;
        local_370 = (double)NEON_ucvtf(local_230);
        local_9f0 = local_370;
        if (local_370 <= 1.0) {
          local_9f0 = 1.0;
        }
        local_378 = local_9f0;
        local_35d = DAT_0233a3f8 <= dVar23 / local_9f0;
        if ((bool)local_35d) {
          for (local_380 = 0; local_380 < local_230; local_380 = local_380 + 1) {
            if (*(char *)((long)local_240 + local_380) != '\x02') {
              *(undefined1 *)((long)local_240 + local_380) = 0;
            }
          }
        }
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_398 = 0x4054000000000000;
        local_3a0 = (double)NEON_ucvtf(local_230);
        local_3a0 = local_3a0 * DAT_0232c6c8;
        local_9f8 = local_3a0;
        if (local_3a0 <= 80.0) {
          local_9f8 = 80.0;
        }
        local_3a8 = local_9f8;
        local_390 = local_9f8;
        local_388 = puVar9;
        for (local_3b0 = 0; local_3b0 < (long)local_230; local_3b0 = local_3b0 + 1) {
          if ((*(char *)((long)local_240 + local_3b0) != '\0') &&
             (*(char *)((long)local_248 + local_3b0) == '\0')) {
            for (local_3b8 = 0; local_3b8 < local_210; local_3b8 = local_3b8 + 1) {
              *(int *)((long)local_258 + local_3b8 * 4) = (int)local_1f0;
              *(undefined4 *)((long)local_260 + local_3b8 * 4) = 0xffffffff;
            }
            for (local_3c0 = 0; local_3c0 < local_1f0; local_3c0 = local_3c0 + 1) {
              *(int *)((long)local_268 + local_3c0 * 4) = (int)local_210;
              *(undefined4 *)((long)local_270 + local_3c0 * 4) = 0xffffffff;
            }
            local_3c8 = 0;
            *local_250 = (int)local_3b0;
            *(undefined1 *)((long)local_248 + local_3b0) = 1;
            local_3d8 = 0;
            local_3e0 = 0;
            local_3e8 = local_1f0;
            local_3f0 = local_210;
            local_3f8 = 0;
            local_400 = 0;
            local_401 = '\0';
            local_3d0 = 1;
            while (local_3c8 < local_3d0) {
              lVar2 = local_3c8 + 1;
              local_410 = (long)(int)local_250[local_3c8];
              lVar3 = 0;
              if (local_1f0 != 0) {
                lVar3 = local_410 / local_1f0;
              }
              local_418 = local_410 - lVar3 * local_1f0;
              local_420 = 0;
              if (local_1f0 != 0) {
                local_420 = local_410 / local_1f0;
              }
              local_3d8 = local_3d8 + 1;
              if (*(char *)((long)local_240 + local_410) == '\x02') {
                local_3e0 = local_3e0 + 1;
              }
              if (local_418 < local_3e8) {
                local_3e8 = local_418;
              }
              if (local_420 < local_3f0) {
                local_3f0 = local_420;
              }
              if (local_3f8 < local_418) {
                local_3f8 = local_418;
              }
              if (local_400 < local_420) {
                local_400 = local_420;
              }
              if ((((local_418 < 2) || (local_420 < 2)) || (local_1f0 + -2 <= local_418)) ||
                 (local_210 + -2 <= local_420)) {
                local_401 = '\x01';
              }
              if (local_418 < *(int *)((long)local_258 + local_420 * 4)) {
                *(int *)((long)local_258 + local_420 * 4) = (int)local_418;
              }
              if (*(int *)((long)local_260 + local_420 * 4) < local_418) {
                *(int *)((long)local_260 + local_420 * 4) = (int)local_418;
              }
              if (local_420 < *(int *)((long)local_268 + local_418 * 4)) {
                *(int *)((long)local_268 + local_418 * 4) = (int)local_420;
              }
              if (*(int *)((long)local_270 + local_418 * 4) < local_420) {
                *(int *)((long)local_270 + local_418 * 4) = (int)local_420;
              }
              local_428 = 0;
              if (((0 < local_418) &&
                  (local_428 = local_410 + -1, *(char *)((long)local_240 + local_428) != '\0')) &&
                 (*(char *)((long)local_248 + local_428) == '\0')) {
                *(undefined1 *)((long)local_248 + local_428) = 1;
                local_250[local_3d0] = (int)local_428;
                local_3d0 = local_3d0 + 1;
              }
              if (((local_418 < local_1f0 + -1) &&
                  (local_428 = local_410 + 1, *(char *)((long)local_240 + local_428) != '\0')) &&
                 (*(char *)((long)local_248 + local_428) == '\0')) {
                *(undefined1 *)((long)local_248 + local_428) = 1;
                local_250[local_3d0] = (int)local_428;
                local_3d0 = local_3d0 + 1;
              }
              if (((0 < local_420) &&
                  (local_428 = local_410 - local_1f0, *(char *)((long)local_240 + local_428) != '\0'
                  )) && (*(char *)((long)local_248 + local_428) == '\0')) {
                *(undefined1 *)((long)local_248 + local_428) = 1;
                local_250[local_3d0] = (int)local_428;
                local_3d0 = local_3d0 + 1;
              }
              local_3c8 = lVar2;
              if (((local_420 < local_210 + -1) &&
                  (local_428 = local_410 + local_1f0, *(char *)((long)local_240 + local_428) != '\0'
                  )) && (*(char *)((long)local_248 + local_428) == '\0')) {
                *(undefined1 *)((long)local_248 + local_428) = 1;
                local_250[local_3d0] = (int)local_428;
                local_3d0 = local_3d0 + 1;
              }
            }
            local_430 = (double)((local_3f8 - local_3e8) + 1);
            local_438 = (double)((local_400 - local_3f0) + 1);
            if (((local_390 <= (double)local_3d8) && ((double)local_1f0 * DAT_02323c90 <= local_430)
                ) && (((double)local_210 * DAT_02323c68 <= local_438 &&
                      ((local_401 == '\0' &&
                       (dVar23 = (double)NEON_ucvtf(local_230),
                       local_430 * local_438 <= dVar23 * DAT_02323c60)))))) {
              local_448 = 0x3ff0000000000000;
              local_450 = local_430 * local_438;
              local_a08 = local_450;
              if (local_450 <= 1.0) {
                local_a08 = 1.0;
              }
              local_458 = local_a08;
              local_440 = (double)local_3d8 / local_a08;
              local_468 = 0x3ff0000000000000;
              local_a18 = local_438;
              if (local_438 <= 1.0) {
                local_a18 = 1.0;
              }
              local_478 = local_a18;
              local_460 = local_430 / local_a18;
              local_470 = local_438;
              if (((DAT_02324020 <= local_440) && (DAT_02323c70 <= local_460)) &&
                 (local_460 <= DAT_02324270)) {
                local_480 = 0;
                for (local_488 = local_3f0; local_488 <= local_400; local_488 = local_488 + 1) {
                  if (*(int *)((long)local_258 + local_488 * 4) <=
                      *(int *)((long)local_260 + local_488 * 4)) {
                    local_490 = local_480;
                    local_494 = (*(int *)((long)local_260 + local_488 * 4) -
                                *(int *)((long)local_258 + local_488 * 4)) + 1;
                    if (local_480 < local_494) {
                      local_a20 = (long)local_494;
                    }
                    else {
                      local_a20 = local_480;
                    }
                    local_4a0 = local_a20;
                    local_480 = local_a20;
                  }
                }
                local_4a8 = 0;
                for (local_4b0 = local_3e8; local_4b0 <= local_3f8; local_4b0 = local_4b0 + 1) {
                  if (*(int *)((long)local_268 + local_4b0 * 4) <=
                      *(int *)((long)local_270 + local_4b0 * 4)) {
                    local_4b8 = local_4a8;
                    local_4bc = (*(int *)((long)local_270 + local_4b0 * 4) -
                                *(int *)((long)local_268 + local_4b0 * 4)) + 1;
                    if (local_4a8 < local_4bc) {
                      local_a28 = (long)local_4bc;
                    }
                    else {
                      local_a28 = local_4a8;
                    }
                    local_4c8 = local_a28;
                    local_4a8 = local_a28;
                  }
                }
                local_4d0 = 0.0;
                local_4d8 = 0.0;
                local_4e0 = 0.0;
                local_4e8 = 0.0;
                local_4f0 = 0.0;
                local_4f8 = 0.0;
                local_500 = 0.0;
                local_508 = 0.0;
                local_510 = 0.0;
                local_518 = 0.0;
                local_520 = 0.0;
                local_528 = 0.0;
                local_530 = 0.0;
                local_538 = 0.0;
                local_540 = 0.0;
                local_548 = 0.0;
                local_550 = 0.0;
                local_558 = 0.0;
                local_560 = 0.0;
                local_568 = 0.0;
                local_578 = 0x4010000000000000;
                local_580 = (double)local_480 * dVar4;
                local_a38 = local_580;
                if (local_580 <= 4.0) {
                  local_a38 = 4.0;
                }
                local_588 = local_a38;
                local_570 = local_a38;
                local_598 = 0x4010000000000000;
                local_5a0 = (double)local_4a8 * dVar4;
                local_a40 = local_5a0;
                if (local_5a0 <= 4.0) {
                  local_a40 = 4.0;
                }
                local_5a8 = local_a40;
                local_590 = local_a40;
                for (local_5b0 = local_3f0; local_5b0 <= local_400; local_5b0 = local_5b0 + 1) {
                  if ((*(int *)((long)local_258 + local_5b0 * 4) <=
                       *(int *)((long)local_260 + local_5b0 * 4)) &&
                     (local_5b8 = (long)((*(int *)((long)local_260 + local_5b0 * 4) -
                                         *(int *)((long)local_258 + local_5b0 * 4)) + 1),
                     local_a38 <= (double)local_5b8)) {
                    local_5c0 = (double)(long)*(int *)((long)local_258 + local_5b0 * 4);
                    local_5c8 = (double)(long)*(int *)((long)local_260 + local_5b0 * 4);
                    local_4d0 = local_4d0 + 1.0;
                    local_4d8 = local_4d8 + (double)local_5b0;
                    local_4e0 = local_4e0 + local_5c0;
                    local_4e8 = local_4e8 + (double)local_5b0 * (double)local_5b0;
                    local_4f0 = local_4f0 + local_5c0 * (double)local_5b0;
                    local_4f8 = local_4f8 + 1.0;
                    local_500 = local_500 + (double)local_5b0;
                    local_508 = local_508 + local_5c8;
                    local_510 = local_510 + (double)local_5b0 * (double)local_5b0;
                    local_518 = local_518 + local_5c8 * (double)local_5b0;
                  }
                }
                for (local_5d0 = local_3e8; local_5d0 - local_3f8 == 0 || local_5d0 < local_3f8;
                    local_5d0 = local_5d0 + 1) {
                  if ((*(int *)((long)local_268 + local_5d0 * 4) <=
                       *(int *)((long)local_270 + local_5d0 * 4)) &&
                     (local_5d8 = (long)((*(int *)((long)local_270 + local_5d0 * 4) -
                                         *(int *)((long)local_268 + local_5d0 * 4)) + 1),
                     local_a40 <= (double)local_5d8)) {
                    local_5e0 = (double)(long)*(int *)((long)local_268 + local_5d0 * 4);
                    local_5e8 = (double)(long)*(int *)((long)local_270 + local_5d0 * 4);
                    local_520 = local_520 + 1.0;
                    local_528 = local_528 + (double)local_5d0;
                    local_530 = local_530 + local_5e0;
                    local_538 = local_538 + (double)local_5d0 * (double)local_5d0;
                    local_540 = local_540 + local_5e0 * (double)local_5d0;
                    local_548 = local_548 + 1.0;
                    local_550 = local_550 + (double)local_5d0;
                    local_558 = local_558 + local_5e8;
                    local_560 = local_560 + (double)local_5d0 * (double)local_5d0;
                    local_568 = local_568 + local_5e8 * (double)local_5d0;
                  }
                }
                dVar23 = local_4d0;
                dVar18 = local_4d8;
                FUN_01d559b8(local_5d0 - local_3f8,local_4d0,local_4d8,local_4e0,local_4e8,local_4f0
                             ,0,(double)local_3e8);
                dVar24 = local_4f8;
                dVar22 = local_500;
                local_5f8 = dVar23;
                local_5f0 = dVar18;
                FUN_01d559b8(local_4f8,local_500,local_508,local_510,local_518,0,(double)local_3f8);
                dVar23 = local_520;
                dVar18 = local_528;
                local_608 = dVar24;
                local_600 = dVar22;
                FUN_01d559b8(local_520,local_528,local_530,local_538,local_540,0,(double)local_3f0);
                dVar24 = local_548;
                dVar22 = local_550;
                local_618 = dVar23;
                local_610 = dVar18;
                FUN_01d559b8(local_548,local_550,local_558,local_560,local_568,0,(double)local_400);
                dVar18 = (double)local_3e8;
                dVar21 = (double)local_3f0;
                local_628 = dVar24;
                local_620 = dVar22;
                FUN_01d47748();
                dVar23 = local_5f8;
                dVar24 = local_5f0;
                local_648 = dVar18;
                local_640 = dVar21;
                FUN_01d55a8c(local_5f8,local_5f0,local_618,local_610,dVar18,dVar21);
                dVar18 = (double)local_3f8;
                dVar22 = (double)local_3f0;
                local_638 = dVar23;
                dStack_630 = dVar24;
                FUN_01d47748();
                dVar23 = local_608;
                dVar24 = local_600;
                local_668 = dVar18;
                local_660 = dVar22;
                FUN_01d55a8c(local_608,local_600,local_618,local_610,dVar18,dVar22);
                dVar18 = (double)local_3e8;
                dVar22 = (double)local_400;
                local_658 = dVar23;
                dStack_650 = dVar24;
                FUN_01d47748();
                dVar23 = local_5f8;
                dVar24 = local_5f0;
                local_688 = dVar18;
                local_680 = dVar22;
                FUN_01d55a8c(local_5f8,local_5f0,local_628,local_620,dVar18,dVar22);
                dVar18 = (double)local_3f8;
                dVar22 = (double)local_400;
                local_678 = dVar23;
                dStack_670 = dVar24;
                FUN_01d47748();
                dVar23 = local_608;
                dVar24 = local_600;
                local_6a8 = dVar18;
                local_6a0 = dVar22;
                FUN_01d55a8c(local_608,local_600,local_628,local_620,dVar18,dVar22);
                local_6b8 = 0x4010000000000000;
                local_6c8 = local_430;
                local_6d0 = local_438;
                if (local_438 <= local_430) {
                  local_a50 = local_438;
                }
                else {
                  local_a50 = local_430;
                }
                local_6d8 = local_a50;
                local_6c0 = local_a50 * DAT_02323d40;
                local_a58 = local_6c0;
                if (local_6c0 <= 4.0) {
                  local_a58 = 4.0;
                }
                local_6e0 = local_a58;
                local_6b0 = local_a58;
                local_70[1] = dStack_630;
                local_70[0] = local_638;
                local_70[3] = dStack_650;
                local_70[2] = local_658;
                dStack_48 = dStack_670;
                local_70[4] = local_678;
                local_698 = dVar23;
                dStack_690 = dVar24;
                local_40 = dVar23;
                dStack_38 = dVar24;
                for (local_6e8 = 0; local_6e8 < 4; local_6e8 = local_6e8 + 1) {
                  dVar23 = local_70[local_6e8 * 2];
                  FUN_01d524d0(dVar23,(double)local_3e8 - local_6b0,(double)local_3f8 + local_6b0);
                  local_70[local_6e8 * 2] = dVar23;
                  dVar23 = local_70[local_6e8 * 2 + 1];
                  FUN_01d524d0(dVar23,(double)local_3f0 - local_6b0,(double)local_400 + local_6b0);
                  local_70[local_6e8 * 2 + 1] = dVar23;
                }
                local_6f8 = 0x3ff0000000000000;
                local_700 = (double)local_3d8;
                local_a70 = local_700;
                if (local_700 <= 1.0) {
                  local_a70 = 1.0;
                }
                local_708 = local_a70;
                local_6f0 = (double)local_3e0 / local_a70;
                if (local_6f0 < 0.3) {
                  local_718 = local_430;
                  local_720 = local_438;
                  if (local_438 <= local_430) {
                    local_a78 = local_438;
                  }
                  else {
                    local_a78 = local_430;
                  }
                  local_728 = local_a78;
                  local_a78 = local_a78 * DAT_0233a3f0;
                  FUN_01d524d0(local_a78,0x4000000000000000,0x4032000000000000);
                  dStack_738 = *(double *)(PTR__CGPointZero_025782e0 + 8);
                  local_740 = *(double *)PTR__CGPointZero_025782e0;
                  for (local_748 = 0; local_748 < 4; local_748 = local_748 + 1) {
                    local_740 = local_740 + local_70[local_748 * 2];
                    dStack_738 = dStack_738 + local_70[local_748 * 2 + 1];
                  }
                  local_740 = local_740 / 4.0;
                  dStack_738 = dStack_738 / 4.0;
                  for (local_750 = 0; local_710 = local_a78, local_750 < 4;
                      local_750 = local_750 + 1) {
                    local_758 = local_70[local_750 * 2] - local_740;
                    local_760 = local_70[local_750 * 2 + 1] - dStack_738;
                    local_768 = SQRT(local_760 * local_760 + local_758 * local_758);
                    if (DAT_02323db0 < local_768) {
                      local_70[local_750 * 2] =
                           local_70[local_750 * 2] + local_a78 * (local_758 / local_768);
                      local_70[local_750 * 2 + 1] =
                           local_70[local_750 * 2 + 1] + local_a78 * (local_760 / local_768);
                    }
                  }
                }
                local_769 = 0;
                if (((local_35d & 1) == 0) && (local_6f0 < 0.7)) {
                  IVar5 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_130,PTR_s_refineCandidatePoints_withDarkFr_026c4928,local_70,
                             local_238,local_1f0,local_210);
                  local_769 = (byte)IVar5;
                }
                for (local_778 = 0; local_778 < 4; local_778 = local_778 + 1) {
                  dVar23 = local_70[local_778 * 2];
                  FUN_01d524d0(dVar23,0,(double)(local_1f0 + -1));
                  local_70[local_778 * 2] = dVar23;
                  dVar23 = local_70[local_778 * 2 + 1];
                  FUN_01d524d0(dVar23,0,(double)(local_210 + -1));
                  local_70[local_778 * 2 + 1] = dVar23;
                }
                local_788 = 0x3ff0000000000000;
                local_790 = (double)local_1f0;
                local_a98 = local_790;
                if (local_790 <= 1.0) {
                  local_a98 = 1.0;
                }
                local_798 = local_a98;
                local_780 = local_180 / local_a98;
                local_7a8 = 0x3ff0000000000000;
                local_7b0 = (double)local_210;
                local_aa8 = local_7b0;
                if (local_7b0 <= 1.0) {
                  local_aa8 = 1.0;
                }
                local_7b8 = local_aa8;
                local_7a0 = local_198 / local_aa8;
                dVar23 = local_70[4] * local_780;
                dVar18 = local_198 - local_7a0 * dStack_48;
                FUN_01d47748(local_778 + -4);
                dVar24 = local_40 * local_780;
                dVar22 = local_198 - local_7a0 * dStack_38;
                local_7c8 = dVar23;
                local_7c0 = dVar18;
                FUN_01d47748();
                dVar23 = local_70[0] * local_780;
                dVar18 = local_198 - local_7a0 * local_70[1];
                local_7d8 = dVar24;
                local_7d0 = dVar22;
                FUN_01d47748();
                dVar24 = local_70[2] * local_780;
                dVar22 = local_198 - local_7a0 * local_70[3];
                local_7e8 = dVar23;
                local_7e0 = dVar18;
                FUN_01d47748();
                local_7f8 = dVar24;
                local_7f0 = dVar22;
                FUN_01d524d0(local_7c8,0,local_180);
                FUN_01d524d0(local_7c0,0,local_198);
                FUN_01d524d0(local_7d8,0,local_180);
                FUN_01d524d0(local_7d0,0,local_198);
                FUN_01d524d0(local_7e8,0,local_180);
                FUN_01d524d0(local_7e0,0,local_198);
                FUN_01d524d0(local_7f8,0,local_180);
                FUN_01d524d0(local_7f0,0,local_198);
                puVar9 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_7c8,local_7c0,PTR__OBJC_CLASS___NSValue_026ce1f0,
                           PTR_s_valueWithCGPoint__0269e328);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                local_90 = puVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_7d8,local_7d0,PTR__OBJC_CLASS___NSValue_026ce1f0,
                           PTR_s_valueWithCGPoint__0269e328);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                local_88 = puVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_7e8,local_7e0,PTR__OBJC_CLASS___NSValue_026ce1f0,
                           PTR_s_valueWithCGPoint__0269e328);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                local_80 = puVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_7f8,local_7f0,PTR__OBJC_CLASS___NSValue_026ce1f0,
                           PTR_s_valueWithCGPoint__0269e328);
                _objc_retainAutoreleasedReturnValue();
                puVar13 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_78 = puVar12;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_90,4);
                _objc_retainAutoreleasedReturnValue();
                local_800 = puVar13;
                (*(code *)PTR__objc_release_02578630)(puVar12);
                (*(code *)PTR__objc_release_02578630)(puVar11);
                (*(code *)PTR__objc_release_02578630)(puVar10);
                (*(code *)PTR__objc_release_02578630)(puVar9);
                dVar23 = (double)local_3e8 * local_780;
                dVar18 = local_198 - local_7a0 * (double)(local_400 + 1);
                dVar22 = local_430 * local_780;
                dVar21 = local_438 * local_7a0;
                FUN_01d42a30();
                dVar24 = (double)local_3d8;
                local_af8 = (double)NEON_ucvtf(local_230);
                if (local_af8 <= 1.0) {
                  local_af8 = 1.0;
                }
                local_b00 = ABS(local_460 - DAT_0233a3e8) / DAT_0233a3e8;
                if (1.0 <= local_b00) {
                  local_b00 = 1.0;
                }
                local_858 = 1.0 - local_b00 * 0.35;
                if ((0.3 <= local_460) && (local_460 <= DAT_02324258)) {
                  local_858 = local_858 + DAT_02323cc0;
                }
                local_b08 = local_440 / DAT_02323f28;
                if (1.0 < local_b08) {
                  local_b08 = 1.0;
                }
                dVar19 = ((double)local_3e8 + local_430 * 0.5) - (double)local_1f0 * 0.5;
                _hypot(dVar19,((double)local_3f0 + local_438 * 0.5) - (double)local_210 * 0.5);
                local_b18 = (double)local_1f0;
                _hypot(local_b18,(double)local_210);
                puVar6 = local_388;
                if (local_b18 <= 1.0) {
                  local_b18 = 1.0;
                }
                local_b20 = 1.0 - (dVar19 / local_b18) * 0.75;
                if (local_b20 <= DAT_02323c98) {
                  local_b20 = DAT_02323c98;
                }
                dVar19 = 1.15;
                if (local_6f0 <= 0.35) {
                  dVar19 = 1.0;
                }
                local_100 = &cf_points;
                local_c8 = local_800;
                local_f8 = &cf_rect;
                puVar9 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar23,dVar18,dVar22,dVar21,PTR__OBJC_CLASS___NSValue_026ce1f0,
                           PTR_s_valueWithCGRect__0269e130);
                _objc_retainAutoreleasedReturnValue();
                local_f0 = &cf_score;
                puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_c0 = puVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (SQRT(dVar24 / local_af8) * local_b08 * local_858 * local_b20 * dVar19,
                           PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                local_e8 = &cf_area;
                puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_b8 = puVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                           local_3d8);
                _objc_retainAutoreleasedReturnValue();
                local_e0 = &cf_fillRatio;
                puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_b0 = puVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_440,PTR__OBJC_CLASS___NSNumber_026ce038,
                           PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                local_d8 = &cf_transparentRatio;
                puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_a8 = puVar12;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_6f0,PTR__OBJC_CLASS___NSNumber_026ce038,
                           PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                local_d0 = &cf_darkFrameRefined;
                puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_a0 = puVar13;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                           local_769 & 1);
                _objc_retainAutoreleasedReturnValue();
                puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_98 = puVar14;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c8,&local_100,7);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar15);
                (*(code *)PTR__objc_release_02578630)(puVar14);
                (*(code *)PTR__objc_release_02578630)(puVar13);
                (*(code *)PTR__objc_release_02578630)(puVar12);
                (*(code *)PTR__objc_release_02578630)(puVar11);
                (*(code *)PTR__objc_release_02578630)(puVar10);
                (*(code *)PTR__objc_release_02578630)(puVar9);
                _objc_storeStrong(&local_800,0);
              }
            }
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_388,PTR_s_sortUsingComparator__0269d168,
                   &PTR___NSConcreteGlobalBlock_0258c280);
        puVar16 = local_388;
        (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_count_0269cfe0);
        puVar6 = local_388;
        if (&MACH_HEADER.cpusubtype < puVar16) {
          puVar16 = local_388;
          (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_count_0269cfe0);
          local_120 = puVar16 + -8;
          local_118 = 8;
          local_110 = 8;
          local_108 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_removeObjectsInRange__0269dad0,8,local_120);
        }
        _free(local_238);
        _free(local_240);
        _free(local_248);
        _free(local_250);
        _free(local_258);
        _free(local_260);
        _free(local_268);
        _free(local_270);
        puVar6 = local_388;
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = puVar6;
        _objc_storeStrong(&local_388,0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_128;
}

