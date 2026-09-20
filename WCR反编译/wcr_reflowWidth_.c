// wcr_reflowWidth: @ 01d97690

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsBoardView::wcr_reflowWidth_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double in_d3;
  double local_880;
  ulong local_860;
  ulong local_858;
  long local_828;
  ulong local_7e8;
  ulong local_7e0;
  ulong local_7a8;
  ulong local_7a0;
  ulong local_768;
  ulong local_760;
  undefined1 auStack_610 [8];
  long local_608;
  long *local_600;
  undefined8 local_5d0;
  double local_5c8;
  double local_5c0;
  double dStack_5b8;
  double local_5b0;
  double dStack_5a8;
  double local_5a0;
  double dStack_598;
  double local_590;
  double dStack_588;
  double local_578;
  double local_570;
  double local_568;
  double local_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  long local_538;
  double local_530;
  double dStack_528;
  double local_520;
  double dStack_518;
  double local_510;
  double dStack_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double dStack_4c8;
  double local_4c0;
  double dStack_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double dStack_488;
  double local_480;
  double dStack_478;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double dStack_448;
  double local_440;
  double dStack_438;
  double local_430;
  double dStack_428;
  double local_420;
  double dStack_418;
  double local_410;
  double dStack_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double dStack_3b8;
  undefined1 auStack_3b0 [8];
  long local_3a8;
  long *local_3a0;
  long local_370;
  long local_368;
  long local_360;
  long local_358;
  long local_350;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  undefined8 local_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  ulong local_258;
  double local_250;
  double local_248;
  double local_240;
  SEL local_238;
  ID local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_248 = 0.0;
  dVar10 = 32.0;
  dVar8 = param_3 - 32.0;
  local_250 = dVar8;
  local_240 = param_3;
  local_238 = param_2;
  local_230 = param_1;
  _memset(auStack_298,0,0x40);
  IVar1 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_content_026a4a90);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_760 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,0x10);
  if (local_760 != 0) {
    lVar5 = *local_288;
    local_768 = 0;
    do {
      do {
        if (*local_288 - lVar5 != 0) {
          _objc_enumerationMutation(*local_288 - lVar5,IVar2);
        }
        local_258 = *(ulong *)(local_290 + local_768 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_frame_026ca640);
        local_2b8 = 16.0;
        local_2a8 = local_250;
        dStack_2b0 = local_248;
        dStack_2f8 = local_248;
        dVar8 = 16.0;
        local_2f0 = local_250;
        dVar10 = local_248;
        dVar11 = local_250;
        local_300 = dVar8;
        dStack_2e8 = in_d3;
        local_2e0 = dVar8;
        dStack_2d8 = dStack_2f8;
        local_2d0 = local_2f0;
        dStack_2c8 = in_d3;
        dStack_2a0 = in_d3;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_setFrame__026ca960);
        _memset(auStack_348,0,0x40);
        uVar3 = local_258;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_7a0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_7a0 != 0) {
          lVar6 = *local_338;
          local_7a8 = 0;
          do {
            do {
              if (*local_338 - lVar6 != 0) {
                _objc_enumerationMutation(*local_338 - lVar6,uVar3);
              }
              local_308 = *(undefined8 *)(local_340 + local_7a8 * 8);
              dVar8 = local_250;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_230,PTR_s_wcr_reflowInner_cardW__026c4e48,local_308);
              local_7a8 = local_7a8 + 1;
            } while (local_7a8 < local_7a0);
            local_7a0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_128
                       ,0x10);
            local_7a8 = 0;
          } while (local_7a0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_350 = 0;
        local_358 = 0;
        local_360 = 0;
        local_368 = 0;
        _memset(auStack_3b0,0,0x40);
        uVar3 = local_258;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_7e0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_7e0 != 0) {
          lVar6 = *local_3a0;
          local_7e8 = 0;
          do {
            do {
              if (*local_3a0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_3a0 - lVar6,uVar3);
              }
              lVar7 = *(long *)(local_3a8 + local_7e8 * 8);
              local_370 = lVar7;
              (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_tag_026cab98);
              if ((lVar7 == 0x57) ||
                 (lVar7 = local_370,
                 (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_tag_026cab98), lVar7 == 0x60)
                 ) {
                _objc_storeStrong(0,&local_350,local_370);
              }
              else {
                lVar7 = local_370;
                (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_tag_026cab98);
                if (lVar7 == 0x5e) {
                  _objc_storeStrong(0,&local_358,local_370);
                }
                else {
                  lVar7 = local_370;
                  (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_tag_026cab98);
                  if (lVar7 == 0x5f) {
                    _objc_storeStrong(0,&local_360,local_370);
                  }
                  else {
                    lVar7 = local_370;
                    (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_tag_026cab98);
                    if (lVar7 == 0x52) {
                      _objc_storeStrong(0,&local_368,local_370);
                    }
                  }
                }
              }
              local_7e8 = local_7e8 + 1;
            } while (local_7e8 < local_7e0);
            local_7e0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3b0,auStack_1a8
                       ,0x10);
            local_7e8 = 0;
          } while (local_7e0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((local_350 != 0) && (local_358 != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_358,PTR_s_frame_026ca640);
          local_3d0 = dVar8;
          dStack_3c8 = dVar10;
          local_3c0 = dVar11;
          dStack_3b8 = in_d3;
          (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_frame_026ca640);
          local_3f0 = dVar8;
          local_3e8 = dVar10;
          local_3e0 = dVar11;
          local_3d8 = in_d3;
          _CGRectGetMaxY(dVar8,dVar10,dVar11,in_d3);
          dVar10 = dVar8 + 12.0;
          local_410 = local_3d0;
          dStack_3f8 = dStack_3b8;
          local_400 = local_3c0;
          local_430 = local_3d0;
          dStack_418 = dStack_3b8;
          local_420 = local_3c0;
          dVar8 = local_3d0;
          dVar11 = local_3c0;
          in_d3 = dStack_3b8;
          dStack_428 = dVar10;
          dStack_408 = dVar10;
          dStack_3c8 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_358,PTR_s_setFrame__026ca960);
        }
        if ((local_358 == 0) || (local_360 == 0)) {
          if ((local_350 != 0) && (local_360 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_frame_026ca640);
            local_4d0 = dVar8;
            dStack_4c8 = dVar10;
            local_4c0 = dVar11;
            dStack_4b8 = in_d3;
            (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_frame_026ca640);
            local_4f0 = dVar8;
            local_4e8 = dVar10;
            local_4e0 = dVar11;
            local_4d8 = in_d3;
            _CGRectGetMaxY(dVar8,dVar10,dVar11,in_d3);
            dVar10 = dVar8 + 12.0;
            local_510 = local_4d0;
            dStack_4f8 = dStack_4b8;
            local_500 = local_4c0;
            local_530 = local_4d0;
            dStack_518 = dStack_4b8;
            local_520 = local_4c0;
            dVar8 = local_4d0;
            dVar11 = local_4c0;
            in_d3 = dStack_4b8;
            dStack_528 = dVar10;
            dStack_508 = dVar10;
            dStack_4c8 = dVar10;
            (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setFrame__026ca960);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_frame_026ca640);
          local_450 = dVar8;
          dStack_448 = dVar10;
          local_440 = dVar11;
          dStack_438 = in_d3;
          (*(code *)PTR__objc_msgSend_02578628)(local_358,PTR_s_frame_026ca640);
          local_470 = dVar8;
          local_468 = dVar10;
          local_460 = dVar11;
          local_458 = in_d3;
          _CGRectGetMaxY(dVar8,dVar10,dVar11,in_d3);
          dVar10 = dVar8 + 8.0;
          local_490 = local_450;
          dStack_478 = dStack_438;
          local_480 = local_440;
          local_4b0 = local_450;
          dStack_498 = dStack_438;
          local_4a0 = local_440;
          dVar8 = local_450;
          dVar11 = local_440;
          in_d3 = dStack_438;
          dStack_4a8 = dVar10;
          dStack_488 = dVar10;
          dStack_448 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_setFrame__026ca960);
        }
        if (local_360 == 0) {
          local_828 = local_358;
        }
        else {
          local_828 = local_360;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_538 = local_828;
        if ((local_828 != 0) && (local_368 != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_frame_026ca640);
          local_558 = dVar8;
          dStack_550 = dVar10;
          local_548 = dVar11;
          dStack_540 = in_d3;
          (*(code *)PTR__objc_msgSend_02578628)(local_538,PTR_s_frame_026ca640);
          local_578 = dVar8;
          local_570 = dVar10;
          local_568 = dVar11;
          local_560 = in_d3;
          _CGRectGetMaxY(dVar8,dVar10,dVar11,in_d3);
          dVar10 = dVar8 + 6.0;
          local_5c0 = local_558;
          dStack_5a8 = dStack_540;
          local_5b0 = local_548;
          in_d3 = dStack_540;
          dStack_5b8 = dVar10;
          local_5a0 = local_5c0;
          dStack_598 = dVar10;
          local_590 = local_5b0;
          dStack_588 = dStack_5a8;
          dStack_550 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_558,local_368,PTR_s_setFrame__026ca960);
        }
        local_5c8 = 0.0;
        _memset(auStack_610,0,0x40);
        uVar3 = local_258;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_858 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_858 != 0) {
          lVar6 = *local_600;
          local_860 = 0;
          do {
            do {
              dVar8 = dVar10;
              if (*local_600 - lVar6 != 0) {
                _objc_enumerationMutation(*local_600 - lVar6,uVar3);
                dVar8 = dVar10;
              }
              dVar11 = local_5c8;
              local_5d0 = *(undefined8 *)(local_608 + local_860 * 8);
              dVar10 = local_5c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_5d0,PTR_s_frame_026ca640);
              _CGRectGetMaxY(dVar10,dVar8);
              local_880 = dVar10;
              if (dVar10 <= dVar11) {
                local_880 = dVar11;
              }
              local_5c8 = local_880;
              local_860 = local_860 + 1;
            } while (local_860 < local_858);
            local_858 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_610,auStack_228
                       ,0x10);
            local_860 = 0;
          } while (local_858 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        dVar8 = local_5c8;
        if (0.0 < local_5c8) {
          in_d3 = local_5c8 + 14.0;
          dVar8 = local_2b8;
          dVar10 = dStack_2b0;
          dStack_2a0 = in_d3;
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_setFrame__026ca960);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_frame_026ca640);
        _CGRectGetMaxY(dVar8,dVar10);
        IVar1 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_tightCardSpacing_026c4e50);
        iVar4 = 8;
        if ((IVar1 & 1) == 0) {
          iVar4 = 0xc;
        }
        dVar10 = (double)iVar4;
        dVar8 = dVar8 + dVar10;
        local_248 = dVar8;
        _objc_storeStrong(&local_538);
        _objc_storeStrong(&local_368,0);
        _objc_storeStrong(&local_360,0);
        _objc_storeStrong(&local_358,0);
        _objc_storeStrong(&local_350,0);
        local_768 = local_768 + 1;
      } while (local_768 < local_760);
      local_760 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,0x10);
      local_768 = 0;
    } while (local_760 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar1 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_content_026a4a90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  dVar11 = local_240;
  dVar9 = local_248 + 16.0;
  IVar1 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_content_026a4a90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar8,dVar10,dVar11,dVar9);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_report_026c4e00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar11,dVar9);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

