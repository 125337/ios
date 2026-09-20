// patternColorForText:font:minHeight:colors:direction:containerSize:alignment: @ 00f8ee80

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x50 bytes */

ID __thiscall
WCRefineGradientPalette::
patternColorForText_font_minHeight_colors_direction_containerSize_alignment_
          (WCRefineGradientPalette *this,ID param_1,SEL param_2,ID param_3,ID param_4,double param_5
          ,ID param_6,long_long param_7,CGSize param_8,long_long param_9)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  double *pdVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double in_d1;
  double dVar11;
  double in_d2;
  undefined *local_6f8;
  double local_6f0;
  double local_6e8;
  double local_6d8;
  double local_6d0;
  long_long local_6c0;
  long_long local_6b8;
  long local_6a0;
  long local_698;
  double local_680;
  double local_678;
  double local_670;
  double local_668;
  double local_660;
  double local_658;
  double local_650;
  double local_648;
  double local_640;
  undefined *local_620;
  cfstringStruct *local_608;
  ulong local_5d8;
  ulong local_5d0;
  bool local_579;
  undefined *local_578;
  undefined *local_568;
  long local_560;
  double *local_558;
  double local_550;
  double local_548;
  double local_540;
  undefined8 local_538;
  double local_530;
  undefined8 local_528;
  long local_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  undefined8 local_4e8;
  double local_4e0;
  undefined8 local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  long local_4a8;
  long local_4a0;
  double local_498;
  double local_490;
  double local_488;
  long_long local_480;
  long_long local_478;
  long_long local_470;
  undefined4 local_464;
  long_long local_460;
  undefined4 local_454;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  void *local_420;
  size_t local_418;
  long local_410;
  undefined4 local_404;
  long local_400;
  long local_3f8;
  long local_3f0;
  undefined4 local_3e4;
  long local_3e0;
  long local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  undefined8 local_3b0;
  double local_3a8;
  double local_3a0;
  undefined8 local_398;
  double local_390;
  undefined8 local_388;
  double local_380;
  double local_378;
  double local_370;
  undefined8 local_368;
  double local_360;
  undefined8 local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  undefined8 local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  undefined8 local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  byte local_2a9;
  undefined *local_2a8;
  undefined *local_2a0;
  cfstringStruct *local_298;
  undefined4 local_28c;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  undefined *local_220;
  ulong local_218;
  double local_210;
  long_long local_208;
  ulong local_200;
  double local_1f8;
  undefined *local_1f0;
  cfstringStruct *local_1e8;
  SEL local_1e0;
  double *local_1d8;
  double local_1d0;
  double local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  double local_128 [4];
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e8 = (cfstringStruct *)0x0;
  local_1e0 = param_2;
  local_1d8 = (double *)param_1;
  local_1d0 = in_d1;
  local_1c8 = in_d2;
  _objc_storeStrong(&local_1e8,param_3);
  local_1f0 = (undefined *)0x0;
  _objc_storeStrong(&local_1f0,param_4);
  local_200 = 0;
  local_1f8 = param_5;
  _objc_storeStrong(&local_200,param_6);
  local_218 = 0;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_210 = param_8.field0_0x0;
  local_208 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  local_220 = puVar3;
  _memset(auStack_268,0,0x40);
  uVar2 = local_200;
  (*(code *)PTR__objc_retain_02578638)();
  local_5d0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_1a8,0x10);
  if (local_5d0 != 0) {
    lVar8 = *local_258;
    local_5d8 = 0;
    do {
      do {
        if (*local_258 - lVar8 != 0) {
          _objc_enumerationMutation(*local_258 - lVar8,uVar2);
        }
        uVar9 = *(ulong *)(local_260 + local_5d8 * 8);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_228 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((((uVar9 & 1) != 0) && (local_218 < 8)) &&
           (uVar9 = local_228, FUN_00f8c1b8(local_228,&local_288), (uVar9 & 1) != 0)) {
          uVar9 = local_218 + 1;
          local_128[local_218 * 4 + 1] = dStack_280;
          local_128[local_218 * 4] = local_288;
          local_128[local_218 * 4 + 3] = dStack_270;
          local_128[local_218 * 4 + 2] = local_278;
          param_5 = local_278;
          local_218 = uVar9;
          if (uVar9 == 1) {
            _objc_storeStrong(&local_220,local_228);
          }
        }
        local_5d8 = local_5d8 + 1;
      } while (local_5d8 < local_5d0);
      local_5d0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_1a8,0x10)
      ;
      local_5d8 = 0;
    } while (local_5d0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = local_220;
  if (local_218 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = puVar3;
    local_28c = 1;
  }
  else {
    if (local_218 == 1) {
      uStack_100 = local_128[1];
      local_108 = local_128[0];
      uStack_f0 = local_128[3];
      local_f8 = local_128[2];
      local_218 = 2;
      param_5 = local_128[2];
    }
    pcVar4 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_608 = &::cf_space_s_;
    }
    else {
      local_608 = local_1e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_298 = local_608;
    local_620 = local_1f0;
    local_2a9 = 0;
    bVar1 = local_1f0 == (undefined *)0x0;
    if (bVar1) {
      param_5 = 15.0;
      local_620 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      local_2a8 = local_620;
    }
    local_2a9 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a0 = local_620;
    if ((local_2a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2a8);
    }
    pcVar4 = local_298;
    local_1b8 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    local_1b0 = local_2a0;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1b0,&local_1b8,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_sizeWithAttributes__026cab08);
    local_2c0 = param_5;
    local_2b8 = in_d1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_2d0 = (double)(long)local_2c0 + 2.0;
    local_2d8 = 0x4020000000000000;
    local_640 = local_2d0;
    if (local_2d0 < 8.0) {
      local_640 = 8.0;
    }
    local_2e0 = local_640;
    local_2c8 = local_640;
    local_2f8 = local_2b8;
    local_300 = local_1f8;
    if (local_1f8 <= local_2b8) {
      local_648 = local_2b8;
    }
    else {
      local_648 = local_1f8;
    }
    local_308 = local_648;
    local_2f0 = (double)(long)local_648;
    local_310 = 0x4020000000000000;
    local_650 = local_2f0;
    if (local_2f0 < 8.0) {
      local_650 = 8.0;
    }
    local_318 = local_650;
    local_2e8 = local_650;
    local_320 = local_640;
    local_328 = local_650;
    if (local_640 <= local_1d0) {
      local_320 = (double)(long)local_1d0;
    }
    if (8.0 <= local_1c8) {
      local_330 = local_650;
      local_338 = (double)(long)local_1c8;
      local_658 = local_338;
      if (local_338 <= local_650) {
        local_658 = local_650;
      }
      local_340 = local_658;
      local_328 = local_658;
    }
    local_350 = local_320;
    local_358 = 0x4020000000000000;
    if (8.0 <= local_320) {
      local_660 = local_320;
    }
    else {
      local_660 = 8.0;
    }
    local_360 = local_660;
    local_348 = local_660;
    local_368 = 0x4090000000000000;
    if (1024.0 <= local_660) {
      local_668 = 1024.0;
    }
    else {
      local_668 = local_660;
    }
    local_370 = local_668;
    local_320 = local_668;
    local_380 = local_328;
    local_388 = 0x4020000000000000;
    if (8.0 <= local_328) {
      local_670 = local_328;
    }
    else {
      local_670 = 8.0;
    }
    local_390 = local_670;
    local_378 = local_670;
    local_398 = 0x4060000000000000;
    if (128.0 <= local_670) {
      local_678 = 128.0;
    }
    else {
      local_678 = local_670;
    }
    local_3a0 = local_678;
    local_328 = local_678;
    local_3a8 = 0.0;
    if (local_210 == 4.94065645841247e-324) {
      if (local_640 < local_668) {
        local_3a8 = (double)(long)((local_668 - local_640) / 2.0);
      }
    }
    else if (local_210 == 9.88131291682493e-324) {
      local_3b0 = 0;
      local_3b8 = local_668 - local_640;
      local_680 = local_3b8;
      if (local_3b8 <= 0.0) {
        local_680 = 0.0;
      }
      local_3c0 = local_680;
      local_3a8 = local_680;
    }
    dVar10 = (double)(long)((local_678 - local_650) / 2.0);
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    local_3c8 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_3d0 = dVar10;
    if (dVar10 < 1.0) {
      local_3d0 = 2.0;
    }
    local_3e0 = (long)(local_320 * local_3d0);
    local_3e4 = 8;
    local_698 = local_3e0;
    if (local_3e0 < 8) {
      local_698 = 8;
    }
    local_3f0 = local_698;
    local_3d8 = local_698;
    local_400 = (long)(local_328 * local_3d0);
    local_404 = 8;
    local_6a0 = local_400;
    if (local_400 < 8) {
      local_6a0 = 8;
    }
    local_410 = local_6a0;
    local_3f8 = local_6a0;
    local_418 = local_698 * local_6a0 * 4;
    local_420 = _calloc(local_418,1);
    puVar3 = local_220;
    if (local_420 == (void *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = puVar3;
      local_28c = 1;
    }
    else {
      dVar10 = local_2c8 * local_3d0;
      dVar11 = local_2e8 * local_3d0;
      FUN_00f90090();
      local_454 = 0;
      local_464 = 5;
      local_470 = local_208;
      if ((long)local_208 < 6) {
        local_6b8 = local_208;
      }
      else {
        local_6b8 = 5;
      }
      local_478 = local_6b8;
      local_460 = local_6b8;
      if ((long)local_6b8 < 1) {
        local_6c0 = 0;
      }
      else {
        local_6c0 = local_6b8;
      }
      local_480 = local_6c0;
      pdVar5 = local_1d8;
      local_430 = dVar10;
      local_428 = dVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar10,dVar11,local_1d8,PTR_s_pointsForDirection_size_start_en_026accc8,local_6c0,
                 &local_440,&local_450);
      local_440 = local_440 + local_3d0 * local_3a8;
      local_438 = local_438 + local_3d0 * local_3c8;
      local_450 = local_450 + local_3d0 * local_3a8;
      local_448 = local_448 + local_3d0 * local_3c8;
      local_488 = local_450 - local_440;
      local_490 = local_448 - local_438;
      local_498 = local_490 * local_490 + local_488 * local_488;
      if (local_498 < DAT_02323ca8) {
        local_498 = 1.0;
      }
      for (local_4a0 = 0; local_4a0 < local_3f8; local_4a0 = local_4a0 + 1) {
        for (local_4a8 = 0; local_4a8 < local_3d8; local_4a8 = local_4a8 + 1) {
          dVar10 = (((double)local_4a0 + 0.5) - local_438) * local_490;
          local_4f0 = (dVar10 + local_488 * (((double)local_4a8 + 0.5) - local_440)) / local_498;
          local_4d8 = 0;
          local_4e8 = 0x3ff0000000000000;
          local_6d0 = local_4f0;
          if (1.0 < local_4f0) {
            local_6d0 = 1.0;
          }
          local_4f8 = local_6d0;
          local_4e0 = local_6d0;
          if (local_6d0 <= 0.0) {
            local_6d8 = 0.0;
          }
          else {
            local_6d8 = local_6d0;
          }
          local_500 = local_6d8;
          dVar11 = local_490;
          local_4b0 = local_4f0;
          FUN_00f900bc(local_128,local_218);
          pdVar5 = &local_508;
          local_508 = 0.0;
          local_510 = 0.0;
          local_518 = 0.0;
          local_4d0 = local_6d8;
          local_4c8 = local_6d0;
          local_4c0 = dVar10;
          local_4b8 = dVar11;
          FUN_00f8c428(local_6d8,local_6d0,dVar10,dVar11,pdVar5,&local_510,&local_518);
          local_520 = (local_4a0 * local_3d8 + local_4a8) * 4;
          *(char *)((long)local_420 + local_520) = (char)(long)(local_508 * 255.0);
          *(char *)((long)local_420 + local_520 + 1) = (char)(long)(local_510 * 255.0);
          *(char *)((long)local_420 + local_520 + 2) = (char)(long)(local_518 * 255.0);
          local_528 = 0;
          local_538 = 0x3ff0000000000000;
          local_540 = local_4b8;
          local_6e8 = local_540;
          if (1.0 < local_4b8) {
            local_6e8 = 1.0;
          }
          local_548 = local_6e8;
          local_530 = local_6e8;
          if (local_6e8 <= 0.0) {
            local_6f0 = 0.0;
          }
          else {
            local_6f0 = local_6e8;
          }
          local_550 = local_6f0;
          *(char *)((long)local_420 + local_520 + 3) = (char)(long)(local_6f0 * 255.0);
        }
      }
      _CGColorSpaceCreateDeviceRGB(local_4a0 - local_3f8);
      lVar8 = 0;
      local_558 = pdVar5;
      _CGDataProviderCreateWithData(0,local_420,local_418,FUN_00f90254);
      local_568 = (undefined *)0x0;
      local_560 = lVar8;
      if (((local_558 != (double *)0x0) && (lVar8 != 0)) &&
         (lVar6 = local_3d8,
         _CGImageCreate(local_3d8,local_3f8,8,0x20,local_3d8 << 2,local_558,0x4003,lVar8),
         lVar6 != 0)) {
        puVar7 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3d0,PTR__OBJC_CLASS___UIImage_026cdfd0,
                   PTR_s_imageWithCGImage_scale_orientati_0269ebf0,lVar6,0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_568;
        local_568 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _CGImageRelease(lVar6);
      }
      if (local_560 != 0) {
        _CGDataProviderRelease(local_560);
      }
      if (local_558 != (double *)0x0) {
        _CGColorSpaceRelease(local_558);
      }
      if (local_560 == 0) {
        _free(local_420);
      }
      local_579 = local_568 == (undefined *)0x0;
      if (local_579) {
        local_6f8 = local_220;
      }
      else {
        local_6f8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithPatternImage__026accd0,
                   local_568);
        _objc_retainAutoreleasedReturnValue();
        local_578 = local_6f8;
      }
      local_579 = !local_579;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = local_6f8;
      if (local_579) {
        (*(code *)PTR__objc_release_02578630)(local_578);
      }
      local_28c = 1;
      _objc_storeStrong(&local_568,0);
    }
    _objc_storeStrong(&local_2a0);
    _objc_storeStrong(&local_298,0);
  }
  _objc_storeStrong(&local_220);
  _objc_storeStrong(&local_200,0);
  _objc_storeStrong(&local_1f0,0);
  _objc_storeStrong(&local_1e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_1c0;
}

