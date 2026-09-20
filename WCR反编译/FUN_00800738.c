// FUN_00800738 @ 00800738

void FUN_00800738(void)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *local_4f0;
  undefined *local_4e8;
  undefined *local_4b0;
  undefined *local_4a8;
  undefined *local_460;
  undefined *local_428;
  undefined *local_420;
  void *local_3d8;
  void *local_3d0;
  undefined1 auStack_3a8 [8];
  long local_3a0;
  long *local_398;
  long local_368;
  undefined1 auStack_360 [8];
  long local_358;
  long *local_350;
  long local_320;
  undefined *local_318;
  byte local_309;
  undefined *local_308;
  byte local_2f9;
  undefined *local_2f8;
  byte local_2e9;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  ulong local_298;
  undefined *local_290;
  int local_284;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  undefined *local_240;
  char *local_238;
  undefined *local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "NewMainFrameViewController";
  _objc_getClass();
  local_238 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_230 = (undefined *)0x0;
  }
  else {
    pvVar2 = _memset(auStack_280,0,0x40);
    FUN_007fe8cc();
    _objc_retainAutoreleasedReturnValue();
    pvVar3 = pvVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pvVar2);
    local_3d0 = pvVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_a8,0x10);
    if (local_3d0 != (void *)0x0) {
      lVar7 = *local_270;
      local_3d8 = (void *)0x0;
      do {
        do {
          if (*local_270 - lVar7 != 0) {
            _objc_enumerationMutation(*local_270 - lVar7,pvVar3);
          }
          puVar8 = *(undefined **)(local_278 + (long)local_3d8 * 8);
          local_240 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_isKindOfClass__0269cd68,local_238);
          puVar4 = local_240;
          if (((ulong)puVar8 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_230 = puVar4;
            local_284 = 1;
            goto LAB_0080091c;
          }
          local_3d8 = (void *)((long)local_3d8 + 1);
        } while (local_3d8 < local_3d0);
        local_3d0 = pvVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_a8,
                   0x10);
        local_3d8 = (void *)0x0;
      } while (local_3d0 != (void *)0x0);
    }
    local_284 = 0;
LAB_0080091c:
    (*(code *)PTR__objc_release_02578630)(pvVar3);
    if (local_284 == 0) {
      local_290 = (undefined *)0x0;
      _memset(auStack_2d8,0,0x40);
      puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_420 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_128,0x10
                );
      if (local_420 != (undefined *)0x0) {
        lVar7 = *local_2c8;
        local_428 = (undefined *)0x0;
        do {
          do {
            if (*local_2c8 - lVar7 != 0) {
              _objc_enumerationMutation(*local_2c8 - lVar7,puVar8);
            }
            uVar9 = *(ulong *)(local_2d0 + (long)local_428 * 8);
            local_298 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKeyWindow_0269cd70);
            if ((uVar9 & 1) != 0) {
              _objc_storeStrong(&local_290,local_298);
              local_284 = 4;
              goto LAB_00800ae8;
            }
            local_428 = local_428 + 1;
          } while (local_428 < local_420);
          local_420 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,auStack_128,
                     0x10);
          local_428 = (undefined *)0x0;
        } while (local_420 != (undefined *)0x0);
      }
      local_284 = 0;
LAB_00800ae8:
      (*(code *)PTR__objc_release_02578630)(puVar8);
      if (local_290 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_290;
        local_290 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar8);
      }
      puVar4 = local_290;
      (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      local_460 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_2e9 = 0;
      local_2f9 = 0;
      local_309 = 0;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_309 = 1;
        local_308 = local_460;
      }
      else {
        puVar8 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_rootViewController_026ca820);
        _objc_retainAutoreleasedReturnValue();
        local_2e9 = 1;
        local_2e8 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_arrayWithObject__0269d538);
        _objc_retainAutoreleasedReturnValue();
        local_2f9 = 1;
        local_2f8 = local_460;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_2e0 = local_460;
      if ((local_309 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_308);
      }
      if ((local_2f9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2f8);
      }
      if ((local_2e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2e8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      do {
        puVar4 = local_2e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_count_0269cfe0);
        if (puVar4 == (undefined *)0x0) {
          local_230 = (undefined *)0x0;
          local_284 = 1;
          break;
        }
        puVar4 = local_2e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_318 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_removeObjectAtIndex__0269d530,0);
        puVar8 = local_318;
        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_isKindOfClass__0269cd68,local_238);
        puVar4 = local_318;
        if (((ulong)puVar8 & 1) == 0) {
          puVar8 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar8);
          if (((ulong)puVar4 & 1) != 0) {
            _memset(auStack_360,0,0x40);
            puVar4 = local_318;
            (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_viewControllers_0269e348);
            _objc_retainAutoreleasedReturnValue();
            local_4a8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_4a8 != (undefined *)0x0) {
              lVar7 = *local_350;
              local_4b0 = (undefined *)0x0;
              do {
                do {
                  if (*local_350 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_350 - lVar7,puVar4);
                  }
                  local_320 = *(long *)(local_358 + (long)local_4b0 * 8);
                  if (local_320 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2e0,PTR_s_addObject__0269d180,local_320);
                  }
                  local_4b0 = local_4b0 + 1;
                } while (local_4b0 < local_4a8);
                local_4a8 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_360,
                           auStack_1a8,0x10);
                local_4b0 = (undefined *)0x0;
              } while (local_4a8 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          _memset(auStack_3a8,0,0x40);
          puVar4 = local_318;
          (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_childViewControllers_0269d618);
          _objc_retainAutoreleasedReturnValue();
          local_4e8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_4e8 != (undefined *)0x0) {
            lVar7 = *local_398;
            local_4f0 = (undefined *)0x0;
            do {
              do {
                if (*local_398 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_398 - lVar7,puVar4);
                }
                local_368 = *(long *)(local_3a0 + (long)local_4f0 * 8);
                if (local_368 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2e0,PTR_s_addObject__0269d180,local_368);
                }
                local_4f0 = local_4f0 + 1;
              } while (local_4f0 < local_4e8);
              local_4e8 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a8,
                         auStack_228,0x10);
              local_4f0 = (undefined *)0x0;
            } while (local_4e8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar8 = local_318;
          (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          puVar4 = local_2e0;
          if (puVar8 != (undefined *)0x0) {
            puVar8 = local_318;
            (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_presentedViewController_0269d448);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar8);
          }
          local_284 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_230 = puVar4;
          local_284 = 1;
        }
        _objc_storeStrong(&local_318,0);
      } while (local_284 == 0);
      _objc_storeStrong(&local_2e0);
      _objc_storeStrong(&local_290,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_230);
  return;
}

