// FUN_007b8ad4 @ 007b8ad4

/* WARNING: Removing unreachable block (ram,0x007b975c) */
/* WARNING: Removing unreachable block (ram,0x007b977c) */
/* WARNING: Removing unreachable block (ram,0x007b910c) */
/* WARNING: Removing unreachable block (ram,0x007b9b74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_007b8ad4(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  cfstringStruct *local_250;
  cfstringStruct *local_240;
  cfstringStruct *local_1e0;
  cfstringStruct *local_190;
  cfstringStruct **local_170;
  cfstringStruct *local_160;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  byte local_ea;
  undefined1 local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  byte local_c2;
  byte local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined4 local_98;
  ulong local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  _objc_storeStrong(&local_88,param_2);
  uVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_wcrGrouping_active_026a2a40);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = local_88,
     (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_wcrGrouping_active_026a2a40),
     (uVar4 & 1) == 0)) {
    local_79 = 0;
    local_98 = 1;
  }
  else {
    pcVar5 = (cfstringStruct *)PTR_WCRefineTelegramGroupingStore_026ce5a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar5;
    FUN_007ac8c8();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar5;
    if ((pcVar5 == (cfstringStruct *)0x0) ||
       (pcVar5 = local_a0,
       (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_hasUnfilteredSnapshot_026a8210),
       ((ulong)pcVar5 & 1) == 0)) {
      local_79 = 0;
      local_98 = 1;
    }
    else {
      pcVar5 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_selectedTab_026a2a78);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_160 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_160 = &cf_all;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_160;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      if (DAT_028ccbf0 == 0) {
        local_170 = &local_b0;
      }
      else {
        local_170 = (cfstringStruct **)&DAT_028ccbf0;
      }
      pcVar6 = *local_170;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar5 = local_a0;
      local_b8 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_unfilteredSnapshotSignature_026a8290);
      _objc_retainAutoreleasedReturnValue();
      local_190 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_190 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_190;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setLastTabSnapshotRestored__026a25a0,0);
      local_c1 = 0;
      DAT_028ccbf9 = 1;
      local_c2 = 0;
      pcVar5 = local_a8;
      FUN_007aca00(local_a8,PTR_s_topSessions_026a81b0,PTR_s_setTopSessions__026a2ff0);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_a8;
      local_d0 = pcVar5;
      FUN_007aca00(local_a8,PTR_s_allTopSessions_026a8100,PTR_s_setAllTopSessions__026a2fe8);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_a8;
      local_d8 = pcVar6;
      FUN_007aca00(local_a8,PTR_s_normalSessions_026a81b8,PTR_s_setNormalSessions__026a2f60);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_a0;
      local_e0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_applySelectedTabToSessionArraysT_026a82a8,local_d0,local_d8,pcVar5);
      local_c1 = (byte)pcVar6;
      if ((((ulong)pcVar6 & 1) != 0) &&
         (pcVar6 = local_a8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_a8,PTR_s_respondsToSelector__026ca818,
                    PTR_s_setTotalTopSessionCount__026a81e0), pcVar5 = local_d8,
         ((ulong)pcVar6 & 1) != 0)) {
        puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
        if (((ulong)pcVar5 & 1) == 0) {
          local_1e0 = (cfstringStruct *)0x0;
        }
        else {
          local_1e0 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
        }
        local_e8 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_setTotalTopSessionCount__026a81e0,local_1e0);
        FUN_007ba3d8(local_88,local_e8);
      }
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
      local_98 = 0;
      DAT_028ccbf9 = 0;
      if ((local_c2 & 1) != 0) {
        _objc_exception_rethrow();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x7b90fc);
        (*pcVar2)();
      }
      local_98 = 0;
      if ((local_c1 & 1) == 0) {
        local_79 = 0;
        local_98 = 1;
      }
      else {
        uVar4 = local_88;
        _WCRGroupingTryRestoreTelegramTabSnapshot(local_88,local_b8,local_b0,local_c0);
        local_e9 = (undefined1)uVar4;
        if ((uVar4 & 1) == 0) {
          _WCRGroupingInvalidateLiveSnapshotKeepingTabCache(local_88);
        }
        puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_88;
        uVar1 = _WCRefineHomeGroupsDidChangeNotification;
        local_78 = &cf_wcrTelegramTabChanged;
        puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        local_70 = &cf_wcrTelegramReloadHandled;
        puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_50 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        local_68 = &cf_wcrTelegramFromTabId;
        if (local_b8 == (cfstringStruct *)0x0) {
          local_240 = &cf___;
        }
        else {
          local_240 = local_b8;
        }
        local_40 = local_240;
        local_60 = &cf_wcrTelegramToTabId;
        if (local_b0 == (cfstringStruct *)0x0) {
          local_250 = &cf___;
        }
        else {
          local_250 = local_b0;
        }
        local_38 = local_250;
        local_58 = &cf_wcrTelegramUnfilteredSignature;
        local_30 = local_c0;
        puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_48 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_postNotificationName_object_user_026a1e90,uVar1,uVar4);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar5 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_lastTabSnapshotRestored_026a82b0);
        local_ea = (byte)pcVar5;
        uVar4 = local_88;
        FUN_007ae408();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = local_88;
        local_f8 = uVar4;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_100 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_reloadGeneration_026a2ab0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_numberWithUnsignedInteger__0269e4d0,uVar4 + 1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setReloadGeneration__026a2ab8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(uVar11);
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        _CACurrentMediaTime();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setLastReloadTime__026a2ae8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if ((local_ea & 1) == 0) {
          uVar3 = (uint)local_88;
          _WCRGroupingRetargetSnapshotToCurrentSessions();
          if (((uVar3 & 1) == 0) &&
             (uVar4 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_88,PTR_s_respondsToSelector__026ca818,
                        PTR_s_wcrGrouping_snapshotForTableView_026a2a50), (uVar4 & 1) != 0)) {
            uVar4 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_forceSnapshotBuild_026a2b50);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_108 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setForceSnapshotBuild__026a2f20);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            uVar4 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_f8);
            _objc_unsafeClaimAutoreleasedReturnValue(uVar4);
            local_98 = 0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_setForceSnapshotBuild__026a2f20,local_108);
            local_98 = 0;
            _objc_storeStrong(&local_108,0);
          }
        }
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        _CACurrentMediaTime();
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1 + DAT_02323da8,puVar7,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_setTelegramHandledReloadUntil__026a82b8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _WCRGroupingReloadHomeTableForTelegramTab(local_88);
        _objc_storeStrong(&DAT_028ccbf0,local_b0);
        local_79 = 1;
        local_98 = 1;
        _objc_storeStrong(&local_100);
        _objc_storeStrong(&local_f8,0);
      }
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_79 & 1;
}

