// FUN_008067f8 @ 008067f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008067f8(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  dispatch_time_t dVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_6b0;
  ulong local_630;
  ulong local_520;
  ulong local_4e8;
  ulong local_4e0;
  ulong local_490;
  ulong local_488;
  undefined *local_428;
  undefined4 local_420;
  undefined4 local_41c;
  code *local_418;
  undefined *local_410;
  undefined *local_408;
  undefined *local_400;
  double local_3f8;
  double local_3f0;
  undefined8 local_3e8;
  double local_3e0;
  undefined *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  code *local_3c8;
  undefined *local_3c0;
  undefined *local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_388;
  double dStack_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double dStack_348;
  byte local_339;
  ulong local_338;
  ulong local_330;
  ulong local_328;
  ulong local_320;
  byte local_311;
  ulong local_310;
  ulong local_308;
  double local_300;
  double dStack_2f8;
  double local_2e8;
  double local_2e0;
  long local_2d8 [7];
  undefined *local_2a0;
  undefined *local_298;
  double local_290;
  double dStack_288;
  byte local_279;
  ulong local_278;
  byte local_269;
  ulong local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  ulong local_1c8;
  double local_1c0;
  long local_1b8;
  byte local_1a9;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  byte local_181;
  undefined8 local_180;
  undefined8 local_178;
  byte local_169;
  double local_168;
  undefined8 local_160;
  ulong local_158;
  int local_150;
  ulong local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_4;
  local_130 = param_3;
  _objc_storeStrong(&local_140,param_5);
  (*DAT_028ccf90)(local_130,local_138,local_140);
  FUN_00808938();
  if (((DAT_028ccf9a & 1) == 0) ||
     (uVar4 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_type_0269e6f8),
     uVar4 != 0)) {
    local_150 = 1;
  }
  else {
    uVar4 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_allTouches_026a8b70);
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
    if (uVar4 == 0) {
      local_150 = 1;
    }
    else {
      FUN_00808f58();
      uVar8 = DAT_028ccf70;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = DAT_028ccf78;
      local_160 = uVar8;
      local_168 = DAT_026f46d8;
      local_169 = DAT_028ccfb2 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      lVar10 = DAT_028ccf80;
      local_178 = uVar1;
      local_180 = DAT_026f46e0;
      local_181 = DAT_026f46e8 & 1;
      local_190 = DAT_026f46f0;
      local_198 = DAT_026f46f8;
      local_1a0 = DAT_026f4700;
      local_1a8 = DAT_028ccfb8;
      local_1a9 = DAT_028ccfc0 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b8 = lVar10;
      local_1c0 = DAT_026f4708;
      local_1c8 = 0;
      dVar16 = DAT_026f4708;
      _memset(auStack_210,0,0x40);
      uVar4 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_488 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10);
      if (local_488 != 0) {
        lVar10 = *local_200;
        local_490 = 0;
        do {
          do {
            dVar13 = dVar16;
            if (*local_200 - lVar10 != 0) {
              _objc_enumerationMutation(*local_200 - lVar10,uVar4);
              dVar13 = dVar16;
            }
            uVar11 = *(ulong *)(local_208 + local_490 * 8);
            local_1d0 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_window_026cabf0);
            _objc_retainAutoreleasedReturnValue();
            local_218 = uVar11;
            if (uVar11 == 0) {
              if (local_1c8 == 0) {
                _memset(auStack_260,0,0x40);
                uVar11 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_windows_0269dde0);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar11;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_02578630)(uVar11);
                local_4e0 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,
                           auStack_128,0x10);
                if (local_4e0 != 0) {
                  lVar12 = *local_250;
                  local_4e8 = 0;
                  do {
                    do {
                      if (*local_250 - lVar12 != 0) {
                        _objc_enumerationMutation(*local_250 - lVar12,uVar5);
                      }
                      uVar11 = *(ulong *)(local_258 + local_4e8 * 8);
                      local_220 = uVar11;
                      (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKeyWindow_0269cd70);
                      if ((uVar11 & 1) != 0) {
                        _objc_storeStrong(&local_1c8,local_220);
                        local_150 = 4;
                        goto LAB_00806d7c;
                      }
                      local_4e8 = local_4e8 + 1;
                    } while (local_4e8 < local_4e0);
                    local_4e0 = uVar5;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,
                               auStack_128,0x10);
                    local_4e8 = 0;
                  } while (local_4e0 != 0);
                }
                local_150 = 0;
LAB_00806d7c:
                (*(code *)PTR__objc_release_02578630)(uVar5);
                local_269 = 0;
                local_279 = 0;
                bVar3 = local_1c8 == 0;
                if (bVar3) {
                  local_520 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_windows_0269dde0);
                  _objc_retainAutoreleasedReturnValue();
                  local_269 = 1;
                  local_268 = local_520;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_278 = local_520;
                }
                else {
                  local_520 = local_1c8;
                }
                local_279 = bVar3;
                _objc_storeStrong(&local_1c8,local_520);
                if ((local_279 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_278);
                }
                if ((local_269 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_268);
                }
              }
              _objc_storeStrong(&local_218,local_1c8);
            }
            if (local_218 == 0) {
              local_150 = 3;
              dVar16 = dVar13;
              dVar13 = param_2;
            }
            else {
              dVar16 = param_2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d0,PTR_s_locationInView__026ca798,local_218);
              puVar6 = PTR__OBJC_CLASS___NSValue_026ce1f0;
              local_290 = dVar13;
              dStack_288 = dVar16;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithPointer__026a2118,
                         local_1d0);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = DAT_028ccf48;
              local_298 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_028ccf48,PTR_s_objectForKeyedSubscript__0269d098,puVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = local_1d0;
              local_2a0 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_phase_026a8b78);
              if (uVar11 == 0) {
                FUN_0080b764(local_298,1);
                puVar7 = PTR_WBTouchTrailView_026ce998;
                _objc_alloc_init();
                puVar6 = local_2a0;
                local_2a0 = puVar7;
                (*(code *)PTR__objc_release_02578630)(puVar6);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_168,local_2a0,PTR_s_setTrailSize__026a8a48);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2a0,PTR_s_setTrailColor__026a8a40,local_160);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2a0,PTR_s_setHasBorder__026a8a10,local_169 & 1);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2a0,PTR_s_setBorderColor__026ca890,local_178);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,local_2a0,PTR_s_setBorderWidth__026ca898);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2a0,PTR_s_setUseCustomImage__026a8a18,local_1a9 & 1);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c0,local_2a0,PTR_s_setCornerRadiusRatio__026a8a20);
                if (((local_1a9 & 1) != 0) && (local_1b8 != 0)) {
                  puVar6 = local_2a0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_customImageView_026a8a30);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_218,PTR_s_addSubview__026ca4c0,local_2a0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (DAT_028ccf48,PTR_s_setObject_forKeyedSubscript__0269d248,local_2a0,
                           local_298);
                dVar16 = local_290;
                dVar13 = dStack_288;
                (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_updateWithPoint__026a8b80);
                if ((local_181 & 1) != 0) {
                  puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (DAT_028ccf50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,
                             local_298);
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  puVar6 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                  dVar13 = dStack_288;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_290,PTR__OBJC_CLASS___NSValue_026ce1f0,
                             PTR_s_valueWithCGPoint__0269e328);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (DAT_028ccf58,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,
                             local_298);
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  dVar16 = 0.0;
                  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (DAT_028ccf60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,
                             local_298);
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                }
              }
              else if (uVar11 == 1) {
                if (local_2a0 != (undefined *)0x0) {
                  dVar16 = local_290;
                  dVar13 = dStack_288;
                  (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_moveToPoint__026a01b0);
                  if ((local_181 & 1) == 0) {
                    FUN_0080c250(local_298,1);
                  }
                  else {
                    lVar12 = DAT_028ccf50;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (DAT_028ccf50,PTR_s_objectForKeyedSubscript__0269d098,local_298);
                    _objc_retainAutoreleasedReturnValue();
                    local_2d8[0] = lVar12;
                    if (lVar12 != 0) {
                      FUN_0080b91c(lVar12);
                      dVar16 = local_168;
                      dVar13 = local_190;
                      FUN_0080bc64();
                      uVar8 = DAT_028ccf60;
                      local_2e0 = dVar16;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (DAT_028ccf60,PTR_s_objectForKeyedSubscript__0269d098,local_298);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(uVar8);
                      uVar8 = DAT_028ccf58;
                      local_2e8 = dVar16;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (DAT_028ccf58,PTR_s_objectForKeyedSubscript__0269d098,local_298);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      local_300 = dVar16;
                      dStack_2f8 = dVar13;
                      (*(code *)PTR__objc_release_02578630)(uVar8);
                      local_308 = 0;
                      uVar11 = local_140;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_140,PTR_s_coalescedTouchesForTouch__026a8b88,local_1d0);
                      _objc_retainAutoreleasedReturnValue();
                      local_310 = uVar11;
                      (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_lastObject_0269d200);
                      _objc_retainAutoreleasedReturnValue();
                      bVar3 = uVar11 != local_1d0;
                      (*(code *)PTR__objc_release_02578630)();
                      uVar11 = local_310;
                      local_311 = bVar3;
                      (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_count_0269cfe0);
                      local_320 = uVar11 + (long)(int)(uint)((local_311 & 1) != 0);
                      for (local_328 = 0; uVar11 = local_328, local_328 < local_320;
                          local_328 = local_328 + 1) {
                        local_339 = 0;
                        uVar5 = local_310;
                        (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_count_0269cfe0);
                        if (uVar11 < uVar5) {
                          local_630 = local_310;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_310,PTR_s_objectAtIndexedSubscript__0269cc78,local_328);
                          _objc_retainAutoreleasedReturnValue();
                          local_339 = 1;
                          local_338 = local_630;
                        }
                        else {
                          local_630 = local_1d0;
                        }
                        (*(code *)PTR__objc_retain_02578638)();
                        local_330 = local_630;
                        if ((local_339 & 1) != 0) {
                          (*(code *)PTR__objc_release_02578630)(local_338);
                        }
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_330,PTR_s_locationInView__026ca798,local_218);
                        dVar14 = dVar13 - local_300;
                        dVar15 = dVar16 - dStack_2f8;
                        local_360 = dVar15;
                        local_358 = dVar14;
                        local_350 = dVar13;
                        dStack_348 = dVar16;
                        _hypot();
                        local_368 = dVar14;
                        while (dVar16 = dVar15, 0.0 < local_368 && local_308 < 8) {
                          local_370 = local_2e0 - local_2e8;
                          if (local_368 < local_370) {
                            local_2e8 = local_2e8 + local_368;
                            dVar16 = local_368;
                            break;
                          }
                          local_378 = local_370 / local_368;
                          dVar16 = local_300 + local_378 * local_358;
                          dVar13 = dStack_2f8 + local_378 * local_360;
                          FUN_0080be0c();
                          local_388 = dVar16;
                          dStack_380 = dVar13;
                          local_300 = dVar16;
                          dStack_2f8 = dVar13;
                          FUN_0080be38(dVar16,dVar13,local_168,local_180,local_198,local_1a0,
                                       local_1c0,local_2d8[0],local_218,local_160,local_178,
                                       local_169 & 1,local_1a9 & 1,local_1b8);
                          local_308 = local_308 + 1;
                          local_2e8 = 0.0;
                          dVar16 = local_350 - local_300;
                          dVar15 = dStack_348 - dStack_2f8;
                          local_360 = dVar15;
                          local_358 = dVar16;
                          _hypot();
                          local_368 = dVar16;
                        }
                        dStack_2f8 = dStack_348;
                        local_300 = local_350;
                        lVar12 = local_308 - 8;
                        if (local_308 < 8) {
                          local_150 = 0;
                          dVar13 = local_350;
                        }
                        else {
                          local_2e8 = 0.0;
                          lVar12 = 7;
                          local_150 = 7;
                          dVar13 = 0.0;
                        }
                        _objc_storeStrong(lVar12,&local_330,0);
                        if (local_150 != 0) break;
                      }
                      dStack_3a8 = dStack_288;
                      local_3b0 = local_290;
                      puVar6 = PTR__OBJC_CLASS___NSValue_026ce1f0;
                      dVar13 = dStack_288;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_290,PTR__OBJC_CLASS___NSValue_026ce1f0,
                                 PTR_s_valueWithCGPoint__0269e328);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (DAT_028ccf58,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,
                                 local_298);
                      (*(code *)PTR__objc_release_02578630)(puVar6);
                      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      dVar16 = local_2e8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,
                                 PTR_s_numberWithDouble__0269d6d0);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (DAT_028ccf60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,
                                 local_298);
                      (*(code *)PTR__objc_release_02578630)(puVar6);
                      _objc_storeStrong(&local_310,0);
                    }
                    _objc_storeStrong(local_2d8,0);
                  }
                }
              }
              else if ((uVar11 == 3 || uVar11 - 4 == 0) &&
                      (dVar16 = local_198, FUN_0080c3e8(uVar11 - 4,local_298), dVar15 = local_1a8,
                      puVar7 = local_2a0, puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8,
                      local_2a0 != (undefined *)0x0)) {
                local_3d8 = PTR___NSConcreteStackBlock_02578660;
                local_3d0 = 0xc2000000;
                local_3cc = 0;
                local_3c8 = FUN_0080c684;
                local_3c0 = &DAT_02578c20;
                (*(code *)PTR__objc_retain_02578638)();
                local_3b8 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (0x3fd3333333333333,dVar15,puVar6,
                           PTR_s_animateWithDuration_delay_option_026ca4f0,&DAT_00020004,&local_3d8,
                           0);
                local_3e8 = 0;
                local_3f0 = local_1a8;
                if (local_1a8 <= 0.0) {
                  local_6b0 = 0.0;
                }
                else {
                  local_6b0 = local_1a8;
                }
                local_3f8 = local_6b0;
                local_3e0 = local_6b0 + 0.35;
                dVar13 = 1000000000.0;
                dVar16 = local_3e0 * 1000000000.0;
                dVar9 = _dispatch_time(0,(long)dVar16);
                puVar6 = PTR___dispatch_main_q_02578680;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = local_2a0;
                local_428 = PTR___NSConcreteStackBlock_02578660;
                local_420 = 0xc2000000;
                local_41c = 0;
                local_418 = FUN_0080c6c8;
                local_410 = &DAT_02578e60;
                (*(code *)PTR__objc_retain_02578638)();
                puVar2 = local_298;
                local_408 = puVar7;
                (*(code *)PTR__objc_retain_02578638)();
                local_400 = puVar2;
                _dispatch_after(dVar9,puVar6,&local_428);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                _objc_storeStrong(&local_400);
                _objc_storeStrong(&local_408,0);
                _objc_storeStrong(&local_3b8,0);
              }
              _objc_storeStrong(&local_2a0);
              _objc_storeStrong(&local_298,0);
              local_150 = 0;
            }
            _objc_storeStrong(&local_218,0);
            local_490 = local_490 + 1;
            param_2 = dVar13;
          } while (local_490 < local_488);
          local_488 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,
                     0x10);
          local_490 = 0;
          param_2 = dVar13;
        } while (local_488 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _objc_storeStrong(&local_1c8);
      _objc_storeStrong(&local_1b8,0);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_160,0);
      local_150 = 0;
    }
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

