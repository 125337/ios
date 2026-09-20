// FUN_00747764 @ 00747764

void FUN_00747764(double param_1)

{
  undefined **ppuVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  double dVar10;
  undefined *local_4b8;
  undefined *local_4b0;
  undefined *local_418;
  undefined *local_410;
  undefined *local_370;
  undefined *local_368;
  undefined *local_310;
  undefined4 local_308;
  undefined4 local_304;
  code *local_300;
  undefined *local_2f8;
  double local_2f0;
  undefined **local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  undefined8 local_2a0;
  undefined *local_298;
  undefined1 auStack_290 [8];
  long local_288;
  long *local_280;
  undefined8 local_250;
  undefined *local_248;
  undefined *local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  double local_1c8;
  int local_1c0;
  double local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  local_1b0 = param_1;
  FUN_00749918();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  if ((DAT_028cc750 <= 0.0) || (20.0 <= local_1b0 - DAT_028cc750)) {
    DAT_028cc750 = local_1b0;
    local_1c0 = 0;
  }
  else {
    local_1c0 = 1;
  }
  _objc_sync_exit(puVar3);
  (*(code *)PTR__objc_release_02578630)();
  if (local_1c0 == 0) {
    FUN_0074998c();
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = PTR___NSConcreteGlobalBlock_02578658;
    local_1e0 = 0xd0800000;
    local_1dc = 0;
    local_1d8 = FUN_00749a00;
    local_1d0 = &DAT_02578c00;
    local_1c8 = local_1b0;
    _dispatch_sync();
    (*(code *)PTR__objc_release_02578630)();
    FUN_0074a974();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_sync_enter();
    FUN_0074a974();
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = puVar4;
    _memset(auStack_238,0,0x40);
    puVar4 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_368 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,0x10);
    if (local_368 != (undefined *)0x0) {
      lVar9 = *local_228;
      local_370 = (undefined *)0x0;
      do {
        do {
          if (*local_228 - lVar9 != 0) {
            _objc_enumerationMutation(*local_228 - lVar9,puVar5);
          }
          dVar2 = local_1b0;
          local_1f8 = *(undefined8 *)(local_230 + (long)local_370 * 8);
          puVar4 = local_1f0;
          dVar10 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,local_1f8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (60.0 < dVar2 - dVar10) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f0,PTR_s_removeObjectForKey__0269d700,local_1f8);
          }
          local_370 = local_370 + 1;
        } while (local_370 < local_368);
        local_368 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,
                   0x10);
        local_370 = (undefined *)0x0;
      } while (local_368 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    FUN_0074a1dc(local_1f0,0x80,&PTR___NSConcreteGlobalBlock_0257f6e8);
    _objc_storeStrong(&local_1f0,0);
    _objc_sync_exit(puVar3);
    (*(code *)PTR__objc_release_02578630)();
    FUN_0074aadc();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_sync_enter();
    FUN_0074aadc();
    _objc_retainAutoreleasedReturnValue();
    local_240 = puVar4;
    FUN_0074ab50();
    _objc_retainAutoreleasedReturnValue();
    local_248 = puVar4;
    _memset(auStack_290,0,0x40);
    puVar4 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_410 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_128,0x10);
    if (local_410 != (undefined *)0x0) {
      lVar9 = *local_280;
      local_418 = (undefined *)0x0;
      do {
        do {
          if (*local_280 - lVar9 != 0) {
            _objc_enumerationMutation(*local_280 - lVar9,puVar5);
          }
          dVar2 = local_1b0;
          local_250 = *(undefined8 *)(local_288 + (long)local_418 * 8);
          puVar4 = local_248;
          dVar10 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_248,PTR_s_objectForKeyedSubscript__0269d098,local_250);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (86400.0 < dVar2 - dVar10) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_248,PTR_s_removeObjectForKey__0269d700,local_250);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_240,PTR_s_removeObjectForKey__0269d700,local_250);
          }
          local_418 = local_418 + 1;
        } while (local_418 < local_410);
        local_410 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_128,
                   0x10);
        local_418 = (undefined *)0x0;
      } while (local_410 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    FUN_0074a1dc(local_248,0x100,&PTR___NSConcreteGlobalBlock_0257f708);
    puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
    puVar5 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_298 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _memset(auStack_2e0,0,0x40);
    puVar4 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_4b0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_1a8,0x10);
    if (local_4b0 != (undefined *)0x0) {
      lVar9 = *local_2d0;
      local_4b8 = (undefined *)0x0;
      do {
        do {
          if (*local_2d0 - lVar9 != 0) {
            _objc_enumerationMutation(*local_2d0 - lVar9,puVar5);
          }
          local_2a0 = *(undefined8 *)(local_2d8 + (long)local_4b8 * 8);
          puVar4 = local_298;
          (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_containsObject__0269cbb8,local_2a0);
          if (((ulong)puVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_240,PTR_s_removeObjectForKey__0269d700,local_2a0);
          }
          local_4b8 = local_4b8 + 1;
        } while (local_4b8 < local_4b0);
        local_4b0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_1a8,
                   0x10);
        local_4b8 = (undefined *)0x0;
      } while (local_4b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_298);
    _objc_storeStrong(&local_248,0);
    _objc_storeStrong(&local_240,0);
    _objc_sync_exit(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    ppuVar7 = &local_310;
    local_310 = PTR___NSConcreteStackBlock_02578660;
    local_308 = 0xc0000000;
    local_304 = 0;
    local_300 = FUN_0074ac4c;
    local_2f8 = &DAT_0257f748;
    local_2f0 = local_1b0;
    _objc_retainBlock();
    local_2e8 = ppuVar7;
    FUN_0074b2b8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    _objc_sync_enter();
    ppuVar1 = local_2e8;
    FUN_0074b2b8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar1[2])();
    (*(code *)PTR__objc_release_02578630)(ppuVar8);
    _objc_sync_exit(ppuVar7);
    (*(code *)PTR__objc_release_02578630)();
    FUN_0074b32c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    _objc_sync_enter();
    ppuVar1 = local_2e8;
    FUN_0074b32c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar1[2])();
    (*(code *)PTR__objc_release_02578630)(ppuVar8);
    _objc_sync_exit(ppuVar7);
    (*(code *)PTR__objc_release_02578630)(ppuVar7);
    _objc_storeStrong(&local_2e8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

