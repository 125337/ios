// FUN_001dff6c @ 001dff6c

void FUN_001dff6c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined *local_510;
  undefined *local_508;
  undefined *local_468;
  undefined *local_460;
  ulong local_408;
  ulong local_400;
  undefined *local_390;
  undefined4 local_388;
  undefined4 local_384;
  code *local_380;
  undefined *local_378;
  undefined8 local_370;
  undefined1 auStack_368 [8];
  long local_360;
  long *local_358;
  undefined8 local_328;
  double local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  double dStack_308;
  double local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  double dStack_2e8;
  double local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  double dStack_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  undefined8 local_280;
  byte local_271;
  double local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  double dStack_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  undefined *local_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  ulong local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c0;
  ulong local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_5);
  local_1c0 = 0;
  _objc_storeStrong(&local_1c0,param_6);
  uVar1 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
  uVar3 = local_1b8;
  uVar11 = local_1c0;
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = 1;
    local_1b0 = puVar2;
  }
  else {
    local_200 = PTR___NSConcreteGlobalBlock_02578658;
    local_1f8 = 0xd0800000;
    local_1f4 = 0;
    local_1f0 = FUN_001e2794;
    local_1e8 = &DAT_02579d80;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_sortedArrayUsingComparator__0269fae8,&local_200);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1d8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_208 = puVar2;
    _memset(auStack_250,0,0x40);
    uVar3 = local_1d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_400 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_a8,0x10);
    if (local_400 != 0) {
      lVar5 = *local_240;
      local_408 = 0;
      do {
        do {
          dVar8 = param_1;
          uVar11 = param_2;
          if (*local_240 - lVar5 != 0) {
            _objc_enumerationMutation(*local_240 - lVar5,uVar3);
            dVar8 = param_1;
            uVar11 = param_2;
          }
          param_1 = param_4;
          param_2 = param_3;
          local_210 = *(undefined8 *)(local_248 + local_408 * 8);
          FUN_001e25f4(local_210,local_1c0);
          local_271 = 0;
          local_270 = dVar8;
          uStack_268 = uVar11;
          local_260 = param_2;
          dStack_258 = param_1;
          _memset(auStack_2c0,0,0x40);
          puVar2 = local_208;
          (*(code *)PTR__objc_retain_02578638)();
          local_460 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_128,
                     0x10);
          if (local_460 != (undefined *)0x0) {
            lVar6 = *local_2b0;
            local_468 = (undefined *)0x0;
            do {
              do {
                if (*local_2b0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_2b0 - lVar6,puVar2);
                }
                uVar7 = *(undefined8 *)(local_2b8 + (long)local_468 * 8);
                local_280 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_firstObject_0269d1f8);
                _objc_retainAutoreleasedReturnValue();
                FUN_001e25f4();
                local_2e0 = param_1;
                uStack_2d8 = param_2;
                local_2d0 = uVar11;
                dStack_2c8 = dVar8;
                (*(code *)PTR__objc_release_02578630)(uVar7);
                uStack_2f8 = uStack_268;
                local_300 = local_270;
                dStack_2e8 = dStack_258;
                local_2f0 = local_260;
                dVar9 = local_270;
                _CGRectGetMidY(local_270,uStack_268,local_260,dStack_258);
                uStack_318 = uStack_2d8;
                local_320 = local_2e0;
                dStack_308 = dStack_2c8;
                local_310 = local_2d0;
                dVar10 = local_2e0;
                uVar11 = local_2d0;
                dVar8 = dStack_2c8;
                _CGRectGetMidY(local_2e0,uStack_2d8);
                param_1 = ABS(dVar9 - dVar10);
                param_2 = 0x4018000000000000;
                if (param_1 <= 6.0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_280,PTR_s_addObject__0269d180,local_210);
                  local_271 = 1;
                  local_1d0 = 4;
                  goto LAB_001e04d0;
                }
                local_468 = local_468 + 1;
              } while (local_468 < local_460);
              local_460 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                         auStack_128,0x10);
              local_468 = (undefined *)0x0;
            } while (local_460 != (undefined *)0x0);
          }
          local_1d0 = 0;
LAB_001e04d0:
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_208;
          param_3 = uVar11;
          param_4 = dVar8;
          if ((local_271 & 1) == 0) {
            puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                       local_210);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            param_3 = uVar11;
            param_4 = dVar8;
          }
          local_408 = local_408 + 1;
        } while (local_408 < local_400);
        local_400 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_a8,0x10
                  );
        local_408 = 0;
      } while (local_400 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _memset(auStack_368,0,0x40);
    puVar2 = local_208;
    (*(code *)PTR__objc_retain_02578638)();
    local_508 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_368,auStack_1a8,0x10);
    if (local_508 != (undefined *)0x0) {
      lVar5 = *local_358;
      local_510 = (undefined *)0x0;
      do {
        do {
          if (*local_358 - lVar5 != 0) {
            _objc_enumerationMutation(*local_358 - lVar5,puVar2);
          }
          uVar11 = local_1c0;
          uVar7 = *(undefined8 *)(local_360 + (long)local_510 * 8);
          local_390 = PTR___NSConcreteGlobalBlock_02578658;
          local_388 = 0xd0800000;
          local_384 = 0;
          local_380 = FUN_001e2a28;
          local_378 = &DAT_02579d80;
          local_328 = uVar7;
          (*(code *)PTR__objc_retain_02578638)();
          local_370 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_sortUsingComparator__0269d168,&local_390);
          _objc_storeStrong(&local_370,0);
          local_510 = local_510 + 1;
        } while (local_510 < local_508);
        local_508 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_368,auStack_1a8,
                   0x10);
        local_510 = (undefined *)0x0;
      } while (local_508 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_208;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar2;
    local_1d0 = 1;
    _objc_storeStrong(&local_208);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1e0,0);
  }
  _objc_storeStrong(&local_1c0);
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1b0);
  return;
}

