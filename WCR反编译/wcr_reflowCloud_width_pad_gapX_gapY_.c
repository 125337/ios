// wcr_reflowCloud:width:pad:gapX:gapY: @ 01d93a2c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x38 bytes */

void WCRefineSessionStatsBoardView::wcr_reflowCloud_width_pad_gapX_gapY_
               (ID param_1,SEL param_2,ID param_3,double param_4,double param_5,double param_6,
               double param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double local_550;
  double local_540;
  double local_530;
  double local_528;
  undefined *local_500;
  undefined *local_4f8;
  double local_4c8;
  double local_4b0;
  double local_490;
  ulong local_368;
  undefined1 *local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  undefined1 *local_2e8;
  double local_2e0;
  double local_2d8;
  long local_2d0;
  undefined1 *local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  long local_280;
  double local_278;
  ulong local_270;
  long local_268;
  double local_260;
  double local_258;
  double local_250;
  ulong local_248;
  long local_240;
  double local_238;
  double local_230;
  undefined8 local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  ulong local_1e0;
  double local_1d8;
  double local_1d0;
  ulong local_1c8;
  undefined *local_1c0;
  double local_1b8;
  double local_1b0;
  undefined4 local_1a4;
  double local_1a0;
  undefined4 local_194;
  double local_190;
  double dStack_188;
  double local_180;
  undefined8 uStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 uStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  undefined8 uStack_138;
  ulong local_130;
  ulong local_128;
  double local_120;
  double local_118;
  double local_110;
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
  local_120 = param_7;
  local_118 = param_6;
  local_110 = param_5;
  local_108 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_128 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  local_130 = uVar1;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_frame_026ca640);
    local_140 = local_108;
    uStack_138 = 0;
    uStack_158 = 0;
    local_160 = local_108;
    uStack_178 = 0;
    local_180 = local_108;
    local_190 = param_4;
    dStack_188 = param_5;
    local_170 = param_4;
    dStack_168 = param_5;
    local_150 = param_4;
    dStack_148 = param_5;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_4,param_5,local_108,0,local_100,PTR_s_setFrame__026ca960);
    local_194 = 1;
  }
  else {
    local_1a4 = 0x28;
    local_1b0 = local_108 - local_110 * 2.0;
    dVar8 = local_1b0;
    local_490 = local_1b0;
    if (local_1b0 <= 40.0) {
      dVar8 = 1.97626258336499e-322;
      local_490 = 40.0;
    }
    local_1b8 = local_490;
    local_1a0 = local_490;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    dVar9 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = 0;
    local_1d0 = 0.0;
    local_1d8 = 0.0;
    local_1c0 = puVar2;
    for (local_1e0 = 0; puVar2 = local_1c0, local_1e0 < local_130; local_1e0 = local_1e0 + 1) {
      uVar1 = local_128;
      dVar6 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_objectAtIndexedSubscript__0269cc78,local_1e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_210 = dVar6;
      local_208 = dVar8;
      local_200 = dVar9;
      dStack_1f8 = param_7;
      local_1f0 = dVar9;
      dStack_1e8 = param_7;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar7 = 0x3ff0000000000000;
      if (local_1f0 < 1.0) {
        uVar1 = local_128;
        dVar8 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_objectAtIndexedSubscript__0269cc78,local_1e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_230 = dVar8;
        local_228 = uVar7;
        local_220 = dVar9;
        dStack_218 = param_7;
        local_1f0 = dVar9;
        dStack_1e8 = param_7;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      puVar2 = local_1c0;
      if (local_1c8 < local_1e0) {
        local_4b0 = local_118;
      }
      else {
        local_4b0 = 0.0;
      }
      local_238 = local_1d0 + local_4b0 + local_1f0;
      if ((local_1e0 <= local_1c8) || (local_238 <= local_1a0)) {
        local_250 = local_1d8;
        local_258 = dStack_1e8;
        if (dStack_1e8 <= local_1d8) {
          local_4c8 = local_1d8;
        }
        else {
          local_4c8 = dStack_1e8;
        }
        local_260 = local_4c8;
        local_1d8 = local_4c8;
        dVar8 = dStack_1e8;
        local_1d0 = local_238;
      }
      else {
        local_240 = local_1e0 - local_1c8;
        local_c0 = local_1c8;
        local_b8 = local_1c8;
        local_248 = local_1c8;
        puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        dVar8 = local_1a0;
        local_c8 = local_240;
        local_b0 = local_240;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,local_1c8,
                   local_240);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_1c8 = local_1e0;
        local_1d0 = local_1f0;
        local_1d8 = dStack_1e8;
      }
    }
    local_268 = local_130 - local_1c8;
    local_e0 = local_1c8;
    local_d8 = local_1c8;
    local_270 = local_1c8;
    puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_e8 = local_268;
    local_d0 = local_268;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,local_1c8,local_268
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    dVar6 = 0.0;
    local_278 = 0.0;
    _memset(auStack_2c0,0,0x40);
    puVar2 = local_1c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_4f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8,0x10);
    if (local_4f8 != (undefined *)0x0) {
      lVar4 = *local_2b0;
      local_500 = (undefined *)0x0;
      do {
        do {
          if (*local_2b0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_2b0 - lVar4,puVar2);
          }
          lVar5 = *(long *)(local_2b8 + (long)local_500 * 8);
          puVar3 = PTR_s_rangeValue_026ba098;
          local_280 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2d8 = 0.0;
          local_2e0 = 0.0;
          local_2d0 = lVar5;
          local_2c8 = puVar3;
          for (local_2e8 = (undefined1 *)0x0; local_2e8 < local_2c8; local_2e8 = local_2e8 + 1) {
            uVar1 = local_128;
            dVar6 = local_2e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_objectAtIndexedSubscript__0269cc78,local_2e8 + local_2d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_320 = dVar6;
            local_318 = dVar8;
            local_310 = dVar9;
            dStack_308 = param_7;
            local_300 = dVar9;
            dStack_2f8 = param_7;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            local_2d8 = local_2d8 + local_300;
            local_328 = local_2e0;
            local_330 = dStack_2f8;
            if (dStack_2f8 <= local_2e0) {
              local_528 = local_2e0;
            }
            else {
              local_528 = dStack_2f8;
            }
            local_338 = local_528;
            local_2e0 = local_528;
            dVar8 = dStack_2f8;
          }
          if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < local_2c8) {
            dVar9 = local_2d8;
            local_2d8 = local_2d8 + (double)(local_2c8 + -1) * local_118;
          }
          local_348 = local_110;
          local_350 = (local_108 - local_2d8) / 2.0;
          local_530 = local_350;
          if (local_350 <= local_110) {
            local_530 = local_110;
          }
          local_358 = local_530;
          local_340 = local_530;
          for (local_360 = (undefined1 *)0x0; local_360 < local_2c8; local_360 = local_360 + 1) {
            uVar1 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_objectAtIndexedSubscript__0269cc78,local_360 + local_2d0);
            _objc_retainAutoreleasedReturnValue();
            local_368 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_frame_026ca640);
            local_540 = (local_2e0 - param_7) / 2.0;
            if (local_540 <= 0.0) {
              local_540 = 0.0;
            }
            dVar8 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_340,local_278 + local_540,local_368,PTR_s_setFrame__026ca960);
            local_340 = local_340 + dVar9 + local_118;
            _objc_storeStrong(&local_368,0);
            dVar9 = dVar8;
          }
          dVar8 = local_2e0 + local_120;
          dVar6 = local_278 + dVar8;
          local_500 = local_500 + 1;
          local_278 = dVar6;
        } while (local_500 < local_4f8);
        local_4f8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8,
                   0x10);
        local_500 = (undefined *)0x0;
      } while (local_4f8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_frame_026ca640);
    local_550 = local_278 - local_120;
    if (local_550 <= 0.0) {
      local_550 = 0.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar6,dVar8,local_108,local_550,local_100,PTR_s_setFrame__026ca960);
    _objc_storeStrong(&local_1c0,0);
    local_194 = 0;
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

