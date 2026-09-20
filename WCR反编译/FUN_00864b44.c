// FUN_00864b44 @ 00864b44

void FUN_00864b44(void)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_528;
  undefined *local_520;
  undefined *local_4c0;
  undefined *local_4b8;
  undefined *local_430;
  undefined *local_428;
  undefined *local_3c8;
  undefined *local_3c0;
  undefined1 auStack_390 [8];
  long local_388;
  long *local_380;
  undefined8 local_350;
  undefined *local_348;
  undefined1 auStack_340 [8];
  long local_338;
  long *local_330;
  undefined8 local_300;
  undefined *local_2f8;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  long local_298;
  undefined1 auStack_290 [8];
  long local_288;
  long *local_280;
  long local_250;
  char *local_248;
  undefined4 local_240;
  undefined *local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_230 = puVar1;
  if ((puVar1 == (undefined *)0x0) ||
     (puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0),
     ((ulong)puVar1 & 1) == 0)) {
    local_240 = 1;
  }
  else {
    pcVar2 = "NewMainFrameViewController";
    _objc_getClass();
    local_248 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_240 = 1;
    }
    else {
      _memset(auStack_290,0,0x40);
      puVar1 = local_230;
      (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_windows_0269dde0);
      _objc_retainAutoreleasedReturnValue();
      local_3c0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3c0 != (undefined *)0x0) {
        lVar5 = *local_280;
        local_3c8 = (undefined *)0x0;
        do {
          do {
            if (*local_280 - lVar5 != 0) {
              _objc_enumerationMutation(*local_280 - lVar5,puVar1);
            }
            lVar6 = *(long *)(local_288 + (long)local_3c8 * 8);
            local_250 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_rootViewController_026ca820);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            local_298 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_2a0 = puVar3;
            if (local_298 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,local_298);
            }
            while (puVar3 = local_2a0,
                  (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_count_0269cfe0),
                  puVar3 != (undefined *)0x0) {
              puVar3 = local_2a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_lastObject_0269d200);
              _objc_retainAutoreleasedReturnValue();
              local_2a8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_removeLastObject_0269e830);
              puVar3 = local_2a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a8,PTR_s_isKindOfClass__0269cd68,local_248);
              if (((ulong)puVar3 & 1) != 0) {
                FUN_00878c68(local_2a8);
              }
              _memset(auStack_2f0,0,0x40);
              puVar3 = local_2a8;
              (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_childViewControllers_0269d618);
              _objc_retainAutoreleasedReturnValue();
              local_428 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_428 != (undefined *)0x0) {
                lVar6 = *local_2e0;
                local_430 = (undefined *)0x0;
                do {
                  do {
                    if (*local_2e0 - lVar6 != 0) {
                      _objc_enumerationMutation(*local_2e0 - lVar6,puVar3);
                    }
                    local_2b0 = *(undefined8 *)(local_2e8 + (long)local_430 * 8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2a0,PTR_s_addObject__0269d180,local_2b0);
                    local_430 = local_430 + 1;
                  } while (local_430 < local_428);
                  local_428 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,
                             auStack_128,0x10);
                  local_430 = (undefined *)0x0;
                } while (local_428 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar4 = local_2a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a8,PTR_s_presentedViewController_0269d448);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              puVar3 = local_2a0;
              if (puVar4 != (undefined *)0x0) {
                puVar4 = local_2a8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2a8,PTR_s_presentedViewController_0269d448);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar4);
              }
              puVar3 = local_2a8;
              puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
              puVar4 = local_2a8;
              if (((ulong)puVar3 & 1) == 0) {
                puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
                puVar3 = local_2a8;
                if (((ulong)puVar4 & 1) != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_348 = puVar3;
                  _memset(auStack_390,0,0x40);
                  puVar3 = local_348;
                  (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_viewControllers_0269e348);
                  _objc_retainAutoreleasedReturnValue();
                  local_520 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  if (local_520 != (undefined *)0x0) {
                    lVar6 = *local_380;
                    local_528 = (undefined *)0x0;
                    do {
                      do {
                        if (*local_380 - lVar6 != 0) {
                          _objc_enumerationMutation(*local_380 - lVar6,puVar3);
                        }
                        local_350 = *(undefined8 *)(local_388 + (long)local_528 * 8);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_2a0,PTR_s_addObject__0269d180,local_350);
                        local_528 = local_528 + 1;
                      } while (local_528 < local_520);
                      local_520 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_390,
                                 auStack_228,0x10);
                      local_528 = (undefined *)0x0;
                    } while (local_520 != (undefined *)0x0);
                  }
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  _objc_storeStrong(&local_348,0);
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_2f8 = puVar4;
                _memset(auStack_340,0,0x40);
                puVar3 = local_2f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_viewControllers_0269e348);
                _objc_retainAutoreleasedReturnValue();
                local_4b8 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (local_4b8 != (undefined *)0x0) {
                  lVar6 = *local_330;
                  local_4c0 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_330 - lVar6 != 0) {
                        _objc_enumerationMutation(*local_330 - lVar6,puVar3);
                      }
                      local_300 = *(undefined8 *)(local_338 + (long)local_4c0 * 8);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2a0,PTR_s_addObject__0269d180,local_300);
                      local_4c0 = local_4c0 + 1;
                    } while (local_4c0 < local_4b8);
                    local_4b8 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_340,
                               auStack_1a8,0x10);
                    local_4c0 = (undefined *)0x0;
                  } while (local_4b8 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar3);
                _objc_storeStrong(&local_2f8,0);
              }
              _objc_storeStrong(&local_2a8,0);
            }
            _objc_storeStrong(0,&local_2a0);
            _objc_storeStrong(&local_298,0);
            local_3c8 = local_3c8 + 1;
          } while (local_3c8 < local_3c0);
          local_3c0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_a8,
                     0x10);
          local_3c8 = (undefined *)0x0;
        } while (local_3c0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_240 = 0;
    }
  }
  _objc_storeStrong(&local_230,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

