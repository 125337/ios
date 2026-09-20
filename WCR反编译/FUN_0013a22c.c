// FUN_0013a22c @ 0013a22c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_0013a22c(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,ulong param_7,void *param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  ulong local_740;
  ulong local_738;
  long local_5a0;
  ulong local_590;
  ulong local_580;
  undefined1 auStack_500 [8];
  long local_4f8;
  long *local_4f0;
  undefined8 local_4c0;
  double local_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_490;
  double dStack_488;
  double local_480;
  undefined8 uStack_478;
  double local_470;
  double dStack_468;
  double local_460;
  undefined8 uStack_458;
  ulong local_450;
  ulong local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  undefined8 local_418;
  double local_410;
  ulong local_408;
  ulong local_400;
  double local_3f8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  undefined8 uStack_398;
  double local_390;
  double local_388;
  double local_380;
  double dStack_378;
  double local_370;
  undefined8 uStack_368;
  ulong local_360;
  long local_358;
  double local_350;
  long local_348;
  double local_340;
  double local_338;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  ulong local_248;
  long local_240;
  byte local_231;
  double local_230;
  undefined *local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  undefined4 local_1b4;
  long local_1b0;
  long local_1a8;
  int local_19c;
  ulong local_198;
  ulong local_190;
  ulong local_188;
  undefined4 local_17c;
  ulong local_178;
  ulong local_170;
  ulong local_158;
  ulong local_150;
  long local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  byte local_f0;
  void *local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar9 = DAT_02323c68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_6);
  local_e8 = param_8;
  local_e0 = param_3;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_7;
  _memset(&local_158,0,0x70);
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  local_178 = local_c8;
  local_17c = 1;
  if ((long)local_c8 < 1) {
    local_580 = 1;
  }
  else {
    local_580 = local_c8;
  }
  local_188 = local_580;
  local_170 = local_580;
  uVar3 = local_c0;
  local_158 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  local_590 = uVar3;
  if ((long)local_170 < (long)uVar3) {
    local_590 = local_170;
  }
  local_198 = local_590;
  local_150 = local_590;
  local_19c = 0;
  uVar2 = local_c0;
  local_190 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  local_1a8 = uVar2 - local_150;
  local_5a0 = local_1a8;
  if (local_1a8 <= local_19c) {
    local_5a0 = (long)local_19c;
  }
  local_1b0 = local_5a0;
  local_148 = local_5a0;
  local_140 = local_d0;
  local_138 = 20.0;
  local_130 = 0x403c000000000000;
  local_100 = -1.0;
  if ((local_b8 == 0) ||
     (uVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    if (local_e8 != (void *)0x0) {
      _memcpy(local_e8,&local_158,0x70);
    }
    local_b0 = 0;
    local_1b4 = 1;
  }
  else {
    local_1c0 = local_d0;
    uVar10 = 0x3ff0000000000000;
    if (local_d0 <= 1.0) {
      dVar6 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
      local_1e0 = dVar6;
      local_1d8 = uVar10;
      local_1d0 = param_3;
      local_1c8 = param_4;
      _CGRectGetWidth(dVar6,uVar10);
      local_1c0 = dVar6;
    }
    uVar10 = 0x3ff0000000000000;
    if (local_1c0 <= 1.0) {
      dVar6 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_frame_026ca640);
      local_200 = dVar6;
      local_1f8 = uVar10;
      local_1f0 = param_3;
      local_1e8 = param_4;
      _CGRectGetWidth(dVar6,uVar10);
      local_1c0 = dVar6;
    }
    if (1.0 < local_1c0) {
      local_140 = local_1c0;
      local_208 = 20.0;
      dVar6 = local_1c0 * 0.25;
      if (dVar6 < 20.0) {
        local_208 = dVar6;
      }
      local_138 = local_208;
      local_218 = 1.7976931348623157e+308;
      local_220 = -1.7976931348623157e+308;
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_210 = dVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      dVar7 = 0.0;
      local_230 = 0.0;
      local_231 = 0;
      local_228 = puVar4;
      for (local_240 = 0; local_240 < (long)local_150; local_240 = local_240 + 1) {
        uVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_240);
        _objc_retainAutoreleasedReturnValue();
        local_248 = uVar2;
        FUN_001427fc(uVar2);
        local_268 = dVar7;
        dStack_260 = dVar6;
        local_258 = param_3;
        uStack_250 = param_4;
        _CGRectGetMinX(dVar7,dVar6,param_3,param_4);
        if (dVar7 < local_218) {
          dVar6 = local_268;
          _CGRectGetMinX(local_268,dStack_260,local_258,uStack_250);
          local_218 = dVar6;
        }
        dVar6 = local_268;
        _CGRectGetMaxX(local_268,dStack_260,local_258,uStack_250);
        if (local_220 < dVar6) {
          dVar6 = local_268;
          _CGRectGetMaxX(local_268,dStack_260,local_258,uStack_250);
          local_220 = dVar6;
        }
        puVar1 = local_228;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        if ((local_231 & 1) != 0) {
          dVar6 = local_268;
          _CGRectGetMinX(local_268,dStack_260,local_258,uStack_250);
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar6 - local_230,puVar4,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        dVar7 = local_268;
        dVar6 = dStack_260;
        param_3 = local_258;
        param_4 = uStack_250;
        _CGRectGetMaxX();
        local_231 = 1;
        local_230 = dVar7;
        _objc_storeStrong(&local_248,0);
      }
      if (local_218 < local_220) {
        local_128 = local_220 - local_218;
        if (1 < (long)local_150) {
          local_128 = local_128 + (double)(long)(local_150 - 1) * local_d8;
        }
        local_338 = local_1c0 + local_208 * -2.0;
        if (local_338 < local_128) {
          local_f0 = 1;
        }
        local_340 = local_208 + (local_338 - local_128) * 0.5;
        if ((local_f0 & 1) != 0) {
          local_340 = (local_1c0 - local_128) * 0.5;
        }
        if (dVar9 <= ABS(local_e0)) {
          local_340 = local_340 + local_e0;
        }
        dVar6 = 10.0;
        local_340 = (double)(long)(local_340 * 10.0) / 10.0;
        local_120 = local_e0;
        local_348 = 0;
        dVar7 = 0.0;
        local_350 = 0.0;
        dVar11 = local_208;
        local_110 = local_340;
        for (local_358 = 0; local_358 < (long)local_150; local_358 = local_358 + 1) {
          uVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_358);
          _objc_retainAutoreleasedReturnValue();
          local_360 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_frame_026ca640);
          dVar8 = 0.0;
          local_388 = 0.0;
          local_380 = dVar7;
          dStack_378 = dVar6;
          local_370 = dVar11;
          uStack_368 = param_4;
          if (local_358 == 0) {
            local_388 = local_340;
          }
          else {
            puVar4 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_228,PTR_s_objectAtIndexedSubscript__0269cc78,local_358 + -1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            local_388 = local_350 + dVar8 + local_d8;
            local_390 = dVar8;
          }
          local_388 = (double)(long)(local_388 * 10.0) / 10.0;
          if (dVar9 <= ABS(local_380 - local_388)) {
            local_348 = local_348 + 1;
          }
          dStack_3a8 = dStack_378;
          uStack_398 = uStack_368;
          local_3a0 = local_370;
          local_380 = local_388;
          local_3b0 = local_388;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_388,dStack_378,local_370,uStack_368,local_360,PTR_s_setFrame__026ca960);
          dVar7 = local_380;
          dVar6 = dStack_378;
          dVar11 = local_370;
          param_4 = uStack_368;
          _CGRectGetMaxX();
          local_350 = dVar7;
          _objc_storeStrong(&local_360,0);
        }
        local_108 = local_350;
        if (0 < local_148) {
          dVar7 = 1.7976931348623157e+308;
          local_3f8 = 1.7976931348623157e+308;
          for (local_400 = local_150; (long)local_400 < (long)local_158; local_400 = local_400 + 1)
          {
            uVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_400);
            _objc_retainAutoreleasedReturnValue();
            local_408 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_frame_026ca640);
            local_430 = dVar7;
            local_428 = dVar6;
            local_420 = dVar11;
            local_418 = param_4;
            _CGRectGetMinX(dVar7,dVar6);
            dVar6 = local_3f8;
            if (dVar7 < local_3f8) {
              local_3f8 = dVar7;
            }
            local_410 = dVar7;
            _objc_storeStrong(&local_408,0);
          }
          local_438 = local_1c0 + 28.0;
          local_440 = local_108 + local_138 + 28.0;
          if (local_438 < local_440) {
            local_438 = local_440;
          }
          local_100 = local_438;
          if (0.0 <= local_438 - local_3f8) {
            local_118 = (double)(long)((local_438 - local_3f8) * 10.0) / 10.0;
          }
          else {
            local_118 = 0.0;
          }
          dVar7 = ABS(local_118);
          dVar6 = dVar9;
          if (dVar9 <= dVar7) {
            dVar11 = local_138;
            for (local_448 = local_150; dVar6 = dVar9, (long)local_448 < (long)local_158;
                local_448 = local_448 + 1) {
              uVar2 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_448);
              _objc_retainAutoreleasedReturnValue();
              local_450 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_frame_026ca640);
              dVar7 = dVar7 + local_118;
              local_4b0 = dVar7;
              dStack_4a8 = dVar9;
              local_470 = dVar7;
              dStack_468 = dVar9;
              local_460 = dVar11;
              uStack_458 = param_4;
              local_490 = dVar7;
              dStack_488 = dVar9;
              local_480 = dVar11;
              uStack_478 = param_4;
              (*(code *)PTR__objc_msgSend_02578628)(local_450,PTR_s_setFrame__026ca960);
              local_348 = local_348 + 1;
              _objc_storeStrong(&local_450,0);
            }
          }
        }
        dVar9 = 0.0;
        local_4b8 = 0.0;
        _memset(auStack_500,0,0x40);
        uVar2 = local_c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_738 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_500,auStack_a8,0x10
                  );
        if (local_738 != 0) {
          lVar5 = *local_4f0;
          local_740 = 0;
          do {
            do {
              if (*local_4f0 - lVar5 != 0) {
                _objc_enumerationMutation(*local_4f0 - lVar5,uVar2);
              }
              local_4c0 = *(undefined8 *)(local_4f8 + local_740 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_4c0,PTR_s_frame_026ca640);
              _CGRectGetMaxX(dVar9,dVar6);
              dVar6 = local_4b8;
              if (local_4b8 < dVar9) {
                local_4b8 = dVar9;
              }
              local_740 = local_740 + 1;
            } while (local_740 < local_738);
            local_738 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_500,auStack_a8,
                       0x10);
            local_740 = 0;
          } while (local_738 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_f8 = local_4b8;
        if (local_e8 != (void *)0x0) {
          _memcpy(local_e8,&local_158,0x70);
        }
        local_b0 = local_348;
      }
      else {
        if (local_e8 != (void *)0x0) {
          _memcpy(local_e8,&local_158,0x70);
        }
        local_b0 = 0;
      }
      local_1b4 = 1;
      _objc_storeStrong(&local_228,0);
    }
    else {
      if (local_e8 != (void *)0x0) {
        _memcpy(local_e8,&local_158,0x70);
      }
      local_b0 = 0;
      local_1b4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

