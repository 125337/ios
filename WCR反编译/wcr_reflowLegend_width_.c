// wcr_reflowLegend:width: @ 01d929b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineSessionStatsBoardView::wcr_reflowLegend_width_
          (WCRefineSessionStatsBoardView *this,ID param_1,SEL param_2,ID param_3,double param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  undefined8 in_d1;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double local_658;
  double local_618;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  double local_5b8;
  ulong local_570;
  ulong local_568;
  double local_548;
  ulong local_460;
  undefined1 *local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  undefined1 *local_430;
  double local_428;
  undefined *local_420;
  undefined1 *local_418;
  undefined *local_410;
  double local_408;
  ulong local_400;
  long local_3f8;
  ulong local_3f0;
  long local_3e8;
  double local_3e0;
  double local_3d8;
  ulong local_3d0;
  double local_3c8;
  ulong local_3c0;
  undefined *local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  undefined8 uStack_398;
  double local_390;
  double dStack_388;
  double local_380;
  undefined8 uStack_378;
  double local_370;
  double dStack_368;
  double local_360;
  undefined8 uStack_358;
  double local_350;
  double dStack_348;
  double local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  double dStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  double dStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined4 local_2ac;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined8 local_268;
  double local_260;
  undefined8 local_258;
  double local_250;
  undefined8 local_248;
  double local_240;
  undefined8 local_238;
  double local_230;
  double local_228;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  undefined *local_1c0;
  double local_1b8;
  double local_1b0;
  undefined4 local_1a4;
  double local_1a0;
  double local_198;
  double local_190;
  undefined4 local_184;
  double local_180;
  double local_170;
  undefined8 uStack_168;
  double local_160;
  double local_150;
  undefined8 uStack_148;
  double local_138;
  double local_128;
  undefined8 uStack_120;
  ulong local_118;
  ulong local_110;
  double local_108;
  ulong local_100;
  SEL local_f8;
  ID local_f0;
  long local_e8;
  ulong local_e0;
  ulong local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(&local_100,param_3);
  uVar1 = local_100;
  local_108 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_110 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  local_118 = uVar1;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_frame_026ca640);
    local_128 = local_108;
    uStack_120 = 0;
    uStack_168 = 0;
    local_170 = local_108;
    local_180 = param_4;
    local_160 = param_4;
    local_150 = local_170;
    uStack_148 = uStack_168;
    local_138 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_4,in_d1,local_108,0,local_100,PTR_s_setFrame__026ca960);
    local_184 = 1;
  }
  else {
    local_190 = 16.0;
    local_198 = 8.0;
    local_1a4 = 0x28;
    local_1b0 = local_108 - 16.0;
    dVar8 = local_1b0;
    local_548 = local_1b0;
    if (local_1b0 <= 40.0) {
      dVar8 = 1.97626258336499e-322;
      local_548 = 40.0;
    }
    local_1b8 = local_548;
    local_1a0 = local_548;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar2;
    _memset(auStack_208,0,0x40);
    uVar1 = local_110;
    (*(code *)PTR__objc_retain_02578638)();
    local_568 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10);
    if (local_568 != 0) {
      lVar6 = *local_1f8;
      local_570 = 0;
      do {
        do {
          if (*local_1f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar6,uVar1);
          }
          uVar7 = *(ulong *)(local_200 + local_570 * 8);
          local_1c8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_viewWithTag__026cabe0,3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_1c8;
          local_210 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_viewWithTag__026cabe0,1);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = local_1c8;
          local_218 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_viewWithTag__026cabe0,2);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_218;
          local_228 = 0.0;
          local_230 = 0.0;
          puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          local_220 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar7 = local_218;
          if ((uVar3 & 1) != 0) {
            dVar8 = 160.0;
            uVar9 = 0x4032000000000000;
            FUN_01d8ebe8();
            local_240 = dVar8;
            local_238 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_sizeThatFits__0269ec10);
            local_228 = (double)(long)dVar8;
            local_250 = dVar8;
            local_248 = uVar9;
          }
          uVar3 = local_220;
          puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar7 = local_220;
          if ((uVar3 & 1) != 0) {
            dVar8 = 160.0;
            uVar9 = 0x4032000000000000;
            FUN_01d8ebe8();
            local_260 = dVar8;
            local_258 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_sizeThatFits__0269ec10);
            local_230 = (double)(long)dVar8;
            local_270 = dVar8;
            local_268 = uVar9;
          }
          local_280 = local_228;
          local_288 = local_230;
          if (local_230 <= local_228) {
            local_5b8 = local_228;
          }
          else {
            local_5b8 = local_230;
          }
          local_290 = local_5b8;
          local_278 = local_5b8;
          local_2a0 = local_1a0;
          local_2ac = 0x24;
          local_2b8 = local_5b8 + 12.0;
          local_5c0 = local_2b8;
          if (local_2b8 <= 36.0) {
            local_5c0 = 36.0;
          }
          local_2c0 = local_5c0;
          local_2a8 = local_5c0;
          if (local_5c0 <= local_1a0) {
            local_5c8 = local_5c0;
          }
          else {
            local_5c8 = local_1a0;
          }
          local_2c8 = local_5c8;
          local_298 = local_5c8;
          local_2d0 = 12.0;
          dVar8 = (local_228 - local_230) / 2.0;
          local_2d8 = dVar8 + 12.0;
          if (local_2d8 < 0.0) {
            local_2d0 = 12.0 - local_2d8;
            local_2d8 = 0.0;
            local_2e0 = local_5c8;
            dVar8 = local_2d0 + local_228;
            local_5d0 = dVar8;
            if (dVar8 <= local_5c8) {
              local_5d0 = local_5c8;
            }
            local_2f0 = local_5d0;
            local_298 = local_5d0;
            local_2e8 = dVar8;
          }
          if (local_210 != 0) {
            uVar9 = 0;
            dVar8 = 4.0;
            uVar13 = 0x4020000000000000;
            uVar11 = 0x4020000000000000;
            FUN_01d8ec14();
            local_330 = uVar9;
            dStack_328 = dVar8;
            local_320 = uVar11;
            uStack_318 = uVar13;
            local_310 = uVar9;
            dStack_308 = dVar8;
            local_300 = uVar11;
            uStack_2f8 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,local_210,PTR_s_setFrame__026ca960);
          }
          uVar3 = local_218;
          puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_setTextAlignment__026caa90,1);
            dVar8 = 0.0;
            uVar9 = 0x4030000000000000;
            dVar10 = local_2d0;
            dVar12 = local_228;
            FUN_01d8ec14();
            local_370 = dVar10;
            dStack_368 = dVar8;
            local_360 = dVar12;
            uStack_358 = uVar9;
            local_350 = dVar10;
            dStack_348 = dVar8;
            local_340 = dVar12;
            uStack_338 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(dVar10,local_218,PTR_s_setFrame__026ca960);
          }
          uVar3 = local_220;
          puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_setTextAlignment__026caa90,1);
            uVar9 = 0x4030000000000000;
            dVar8 = 16.0;
            dVar10 = local_2d8;
            dVar12 = local_230;
            FUN_01d8ec14();
            local_3b0 = dVar10;
            dStack_3a8 = dVar8;
            local_3a0 = dVar12;
            uStack_398 = uVar9;
            local_390 = dVar10;
            dStack_388 = dVar8;
            local_380 = dVar12;
            uStack_378 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(dVar10,local_220,PTR_s_setFrame__026ca960);
          }
          puVar2 = local_1c0;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_298,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_220);
          _objc_storeStrong(&local_218,0);
          _objc_storeStrong(&local_210,0);
          local_570 = local_570 + 1;
        } while (local_570 < local_568);
        local_568 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10
                  );
        local_570 = 0;
      } while (local_568 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_3c0 = 0;
    local_3c8 = 0.0;
    local_3b8 = puVar2;
    for (local_3d0 = 0; puVar2 = local_3b8, local_3d0 < local_118; local_3d0 = local_3d0 + 1) {
      puVar2 = local_1c0;
      dVar8 = local_3c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_3d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_3b8;
      if (local_3c0 < local_3d0) {
        local_618 = local_190;
      }
      else {
        local_618 = 0.0;
      }
      local_3e0 = local_3c8 + local_618 + dVar8;
      local_3d8 = dVar8;
      dVar10 = local_3e0;
      if ((local_3c0 < local_3d0) && (dVar8 = local_1a0, dVar10 = local_3e0, local_1a0 < local_3e0))
      {
        local_3e8 = local_3d0 - local_3c0;
        local_c0 = local_3c0;
        local_b8 = local_3c0;
        local_3f0 = local_3c0;
        puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        local_c8 = local_3e8;
        local_b0 = local_3e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,local_3c0,
                   local_3e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_3c0 = local_3d0;
        local_3c8 = local_3d8;
        dVar10 = local_3c8;
      }
      local_3c8 = dVar10;
    }
    local_3f8 = local_118 - local_3c0;
    local_e0 = local_3c0;
    local_d8 = local_3c0;
    local_400 = local_3c0;
    puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_e8 = local_3f8;
    local_d0 = local_3f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,local_3c0,local_3f8
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_658 = 0.0;
    local_408 = 0.0;
    for (local_410 = (undefined *)0x0; puVar2 = local_410, puVar4 = local_3b8,
        (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_count_0269cfe0), puVar2 < puVar4;
        local_410 = local_410 + 1) {
      puVar2 = local_3b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_3b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_410);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      puVar5 = PTR_s_rangeValue_026ba098;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_420 = puVar4;
      local_418 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      dVar8 = 0.0;
      local_428 = 0.0;
      for (local_430 = (undefined1 *)0x0; local_430 < local_418; local_430 = local_430 + 1) {
        puVar2 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_420 + (long)local_430);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar8 = local_428 + dVar8;
        local_428 = dVar8;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < local_418) {
        local_428 = local_428 + (double)(local_418 + -1) * local_190;
      }
      local_440 = local_198;
      dVar8 = (local_108 - local_428) / 2.0;
      local_658 = dVar8;
      if (dVar8 <= local_198) {
        local_658 = local_198;
      }
      local_450 = local_658;
      local_438 = local_658;
      local_448 = dVar8;
      for (local_458 = (undefined1 *)0x0; local_458 < local_418; local_458 = local_458 + 1) {
        uVar1 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_objectAtIndexedSubscript__0269cc78,local_420 + (long)local_458);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_1c0;
        local_460 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_420 + (long)local_458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        dVar10 = (double)(ulong)((long)local_410 * 0x28);
        dVar8 = local_438;
        FUN_01d8ec14();
        (*(code *)PTR__objc_msgSend_02578628)(dVar8,dVar10,local_460,PTR_s_setFrame__026ca960);
        dVar8 = local_658 + local_190;
        local_658 = local_438 + dVar8;
        local_438 = local_658;
        (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_frame_026ca640);
        _CGRectGetMaxY();
        local_408 = local_658;
        _objc_storeStrong(&local_460,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_658,dVar8,local_108,local_408,local_100,PTR_s_setFrame__026ca960);
    _objc_storeStrong(&local_3b8);
    _objc_storeStrong(&local_1c0,0);
    local_184 = 0;
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

