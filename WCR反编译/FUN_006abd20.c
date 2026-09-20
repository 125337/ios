// FUN_006abd20 @ 006abd20

void FUN_006abd20(void)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *local_5c8;
  undefined *local_5c0;
  undefined *local_580;
  undefined *local_578;
  undefined *local_530;
  undefined *local_528;
  ulong local_4e8;
  ulong local_4e0;
  undefined *local_4a0;
  undefined *local_498;
  undefined *local_450;
  undefined1 auStack_448 [8];
  long local_440;
  long *local_438;
  ulong local_408;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  undefined8 local_3c0;
  undefined *local_3b8;
  undefined *local_3b0;
  undefined1 auStack_3a8 [8];
  long local_3a0;
  long *local_398;
  long local_368;
  undefined1 auStack_360 [8];
  long local_358;
  long *local_350;
  long local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  ulong local_2d8;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  cfstringStruct *local_2b8;
  ulong local_2b0;
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar3 = &cf_BaseMsgContentViewController;
  _NSClassFromString();
  local_2b8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_2b0 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_2c0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_2c8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_2d0 = puVar4;
    _memset(auStack_318,0,0x40);
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_498 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_a8,0x10);
    if (local_498 != (undefined *)0x0) {
      lVar7 = *local_308;
      local_4a0 = (undefined *)0x0;
      do {
        do {
          if (*local_308 - lVar7 != 0) {
            _objc_enumerationMutation(*local_308 - lVar7,puVar5);
          }
          uVar9 = *(ulong *)(local_310 + (long)local_4a0 * 8);
          puVar4 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          local_2d8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar9 & 1) != 0) {
            _memset(auStack_360,0,0x40);
            uVar9 = local_2d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_4e0 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_4e0 != 0) {
              lVar8 = *local_350;
              local_4e8 = 0;
              do {
                do {
                  if (*local_350 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_350 - lVar8,uVar9);
                  }
                  local_320 = *(long *)(local_358 + local_4e8 * 8);
                  if ((local_320 != 0) &&
                     (puVar4 = local_2d0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_2d0,PTR_s_containsObject__0269cbb8,local_320),
                     ((ulong)puVar4 & 1) == 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2d0,PTR_s_addObject__0269d180,local_320);
                  }
                  local_4e8 = local_4e8 + 1;
                } while (local_4e8 < local_4e0);
                local_4e0 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_360,
                           auStack_128,0x10);
                local_4e8 = 0;
              } while (local_4e0 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar9);
          }
          local_4a0 = local_4a0 + 1;
        } while (local_4a0 < local_498);
        local_498 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_a8,
                   0x10);
        local_4a0 = (undefined *)0x0;
      } while (local_498 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _memset(auStack_3a8,0,0x40);
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_528 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a8,auStack_1a8,0x10);
    if (local_528 != (undefined *)0x0) {
      lVar7 = *local_398;
      local_530 = (undefined *)0x0;
      do {
        do {
          if (*local_398 - lVar7 != 0) {
            _objc_enumerationMutation(*local_398 - lVar7,puVar5);
          }
          local_368 = *(long *)(local_3a0 + (long)local_530 * 8);
          if ((local_368 != 0) &&
             (puVar4 = local_2d0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_2d0,PTR_s_containsObject__0269cbb8,local_368),
             ((ulong)puVar4 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_addObject__0269d180,local_368);
          }
          local_530 = local_530 + 1;
        } while (local_530 < local_528);
        local_528 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a8,auStack_1a8,
                   0x10);
        local_530 = (undefined *)0x0;
      } while (local_528 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_3b0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_3b0,PTR_s_respondsToSelector__026ca818,PTR_s_window_026cabf0);
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = local_3b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIWindow_026cdf68;
      local_3b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((((ulong)puVar4 & 1) != 0) &&
         (puVar4 = local_2d0,
         (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_containsObject__0269cbb8,local_3b8),
         ((ulong)puVar4 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_addObject__0269d180,local_3b8);
      }
      _objc_storeStrong(&local_3b8,0);
    }
    _memset(auStack_400,0,0x40);
    puVar4 = local_2d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_578 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_228,0x10);
    if (local_578 != (undefined *)0x0) {
      lVar7 = *local_3f0;
      local_580 = (undefined *)0x0;
      do {
        do {
          if (*local_3f0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_3f0 - lVar7,puVar4);
          }
          uVar10 = *(undefined8 *)(local_3f8 + (long)local_580 * 8);
          local_3c0 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_rootViewController_026ca820);
          _objc_retainAutoreleasedReturnValue();
          FUN_006acaf4();
          (*(code *)PTR__objc_release_02578630)(uVar10);
          local_580 = local_580 + 1;
        } while (local_580 < local_578);
        local_578 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_228,
                   0x10);
        local_580 = (undefined *)0x0;
      } while (local_578 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _memset(auStack_448,0,0x40);
    puVar4 = local_2c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_5c0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448,auStack_2a8,0x10);
    if (local_5c0 != (undefined *)0x0) {
      lVar7 = *local_438;
      local_5c8 = (undefined *)0x0;
      do {
        do {
          if (*local_438 - lVar7 != 0) {
            _objc_enumerationMutation(*local_438 - lVar7,puVar4);
          }
          uVar9 = *(ulong *)(local_440 + (long)local_5c8 * 8);
          local_408 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,local_2b8);
          puVar5 = PTR_WCRefinePrivateFriendManager_026ce160;
          if ((uVar9 & 1) != 0) {
            puVar6 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_contactFromMsgViewController__0269d468,
                       local_408);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_usernameFromObject__026a6718);
            _objc_retainAutoreleasedReturnValue();
            local_450 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            puVar5 = PTR_WCRefinePrivateFriendManager_026ce160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefinePrivateFriendManager_026ce160,
                       PTR_s_shouldConcealUsername__0269fef8,local_450);
            uVar9 = local_408;
            bVar1 = ((ulong)puVar5 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_2b0 = uVar9;
            }
            _objc_storeStrong(&local_450,0);
            bVar2 = true;
            if (bVar1) goto LAB_006ac868;
          }
          local_5c8 = local_5c8 + 1;
        } while (local_5c8 < local_5c0);
        local_5c0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448,auStack_2a8,
                   0x10);
        local_5c8 = (undefined *)0x0;
      } while (local_5c0 != (undefined *)0x0);
    }
    bVar2 = false;
LAB_006ac868:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (!bVar2) {
      local_2b0 = 0;
    }
    _objc_storeStrong(&local_3b0);
    _objc_storeStrong(&local_2d0,0);
    _objc_storeStrong(&local_2c8,0);
    _objc_storeStrong(&local_2c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_2b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

