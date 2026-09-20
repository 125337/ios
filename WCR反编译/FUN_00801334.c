// FUN_00801334 @ 00801334

void FUN_00801334(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  void *pvVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_508;
  undefined *local_500;
  undefined *local_4c8;
  undefined *local_4c0;
  undefined *local_460;
  undefined *local_458;
  void *local_418;
  void *local_410;
  undefined *local_3c8;
  undefined1 auStack_3c0 [8];
  long local_3b8;
  long *local_3b0;
  long local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  long local_338;
  undefined *local_330;
  undefined *local_328;
  undefined4 local_31c;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  ulong local_2d8;
  undefined *local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  undefined8 local_288;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  undefined *local_260;
  char *local_258;
  undefined **local_250;
  undefined *local_248;
  char *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "NewMainFrameViewController";
  local_238 = param_1;
  local_230 = param_1;
  _objc_getClass();
  local_240 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSHashTable_026ce238;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSHashTable_026ce238,PTR_s_weakObjectsHashTable_0269e2e0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &local_280;
    local_280 = PTR___NSConcreteStackBlock_02578660;
    local_278 = 0xc2000000;
    local_274 = 0;
    local_270 = FUN_00801d34;
    local_268 = &DAT_025803d0;
    local_258 = local_240;
    local_248 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_260 = puVar2;
    _objc_retainBlock();
    local_250 = ppuVar3;
    pvVar4 = _memset(auStack_2c8,0,0x40);
    FUN_007fe8cc();
    _objc_retainAutoreleasedReturnValue();
    pvVar5 = pvVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pvVar4);
    local_410 = pvVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pvVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_a8,0x10);
    if (local_410 != (void *)0x0) {
      lVar9 = *local_2b8;
      local_418 = (void *)0x0;
      do {
        do {
          if (*local_2b8 - lVar9 != 0) {
            _objc_enumerationMutation(*local_2b8 - lVar9,pvVar5);
          }
          local_288 = *(undefined8 *)(local_2c0 + (long)local_418 * 8);
          (*(code *)local_250[2])(local_250,local_288);
          local_418 = (void *)((long)local_418 + 1);
        } while (local_418 < local_410);
        local_410 = pvVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_a8,
                   0x10);
        local_418 = (void *)0x0;
      } while (local_410 != (void *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pvVar5);
    local_2d0 = (undefined *)0x0;
    _memset(auStack_318,0,0x40);
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_458 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_128,0x10);
    if (local_458 != (undefined *)0x0) {
      lVar9 = *local_308;
      local_460 = (undefined *)0x0;
      do {
        do {
          if (*local_308 - lVar9 != 0) {
            _objc_enumerationMutation(*local_308 - lVar9,puVar6);
          }
          uVar10 = *(ulong *)(local_310 + (long)local_460 * 8);
          local_2d8 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKeyWindow_0269cd70);
          if ((uVar10 & 1) != 0) {
            _objc_storeStrong(&local_2d0,local_2d8);
            local_31c = 4;
            goto LAB_00801738;
          }
          local_460 = local_460 + 1;
        } while (local_460 < local_458);
        local_458 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_128,
                   0x10);
        local_460 = (undefined *)0x0;
      } while (local_458 != (undefined *)0x0);
    }
    local_31c = 0;
LAB_00801738:
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (local_2d0 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_2d0;
      local_2d0 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    if (local_2d0 == (undefined *)0x0) {
      local_31c = 1;
    }
    else {
      puVar6 = local_2d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithObject__0269d538);
      _objc_retainAutoreleasedReturnValue();
      local_328 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      while (puVar2 = local_328,
            (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_count_0269cfe0),
            puVar2 != (undefined *)0x0) {
        puVar2 = local_328;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_330 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_removeObjectAtIndex__0269d530,0);
        if (local_330 == (undefined *)0x0) {
          local_31c = 6;
        }
        else {
          (*(code *)local_250[2])(local_250,local_330);
          puVar2 = local_330;
          puVar6 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar6);
          if (((ulong)puVar2 & 1) != 0) {
            _memset(auStack_378,0,0x40);
            puVar2 = local_330;
            (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_viewControllers_0269e348);
            _objc_retainAutoreleasedReturnValue();
            local_4c0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_4c0 != (undefined *)0x0) {
              lVar9 = *local_368;
              local_4c8 = (undefined *)0x0;
              do {
                do {
                  if (*local_368 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_368 - lVar9,puVar2);
                  }
                  local_338 = *(long *)(local_370 + (long)local_4c8 * 8);
                  if (local_338 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_328,PTR_s_addObject__0269d180,local_338);
                  }
                  local_4c8 = local_4c8 + 1;
                } while (local_4c8 < local_4c0);
                local_4c0 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                           auStack_1a8,0x10);
                local_4c8 = (undefined *)0x0;
              } while (local_4c0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          _memset(auStack_3c0,0,0x40);
          puVar2 = local_330;
          (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_childViewControllers_0269d618);
          _objc_retainAutoreleasedReturnValue();
          local_500 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_500 != (undefined *)0x0) {
            lVar9 = *local_3b0;
            local_508 = (undefined *)0x0;
            do {
              do {
                if (*local_3b0 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_3b0 - lVar9,puVar2);
                }
                local_380 = *(long *)(local_3b8 + (long)local_508 * 8);
                if (local_380 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_328,PTR_s_addObject__0269d180,local_380);
                }
                local_508 = local_508 + 1;
              } while (local_508 < local_500);
              local_500 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c0,
                         auStack_228,0x10);
              local_508 = (undefined *)0x0;
            } while (local_500 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_330;
          (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          local_3c8 = puVar2;
          if (puVar2 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_addObject__0269d180,puVar2);
          }
          _objc_storeStrong(&local_3c8,0);
          local_31c = 0;
        }
        _objc_storeStrong(&local_330,0);
      }
      _objc_storeStrong(0,&local_328,0);
      local_31c = 0;
    }
    _objc_storeStrong(&local_2d0);
    _objc_storeStrong(&local_250,0);
    _objc_storeStrong(&local_260,0);
    _objc_storeStrong(&local_248,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

