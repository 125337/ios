// handlePrivateFriendStateDidChange: @ 0151a9fc

/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramGroupingStore::handlePrivateFriendStateDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong local_188;
  ulong local_180;
  ID local_120;
  byte local_111;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  byte local_c5;
  undefined4 local_c4;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cachedTabs_026b0180);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 == 0) {
    local_c4 = 1;
  }
  else {
    puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_arePrivateFriendsHidden_026a6620);
    if (((ulong)puVar3 & 1) != 0) {
      IVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_lastUnfilteredTop_026b0208);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      FUN_0151b01c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastUnfilteredTop__026b0210);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_lastUnfilteredAllTop_026a8220);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      FUN_0151b01c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastUnfilteredAllTop__026b0218);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_lastUnfilteredNormal_026a8230);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      FUN_0151b01c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastUnfilteredNormal__026b0220);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    local_c5 = 0;
    _memset(auStack_110,0,0x40);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cachedTabs_026b0180);
    _objc_retainAutoreleasedReturnValue();
    local_180 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_180 != 0) {
      lVar5 = *local_100;
      local_188 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,IVar1);
          }
          lVar6 = *(long *)(local_108 + local_188 * 8);
          local_d0 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_kind_026a27e8);
          if (lVar6 == 5) {
            local_c5 = 1;
            local_c4 = 2;
            goto LAB_0151ad84;
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    local_c4 = 0;
LAB_0151ad84:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((local_c5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_invalidateFilteredSessionCache_026a2fc0);
      local_c4 = 1;
    }
    else {
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_disablePrivateFriendTabIfFeature_026b01a0);
      IVar1 = local_b0;
      local_111 = (byte)IVar2;
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedTabId_026b01c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_tabForId__026a8278);
      _objc_retainAutoreleasedReturnValue();
      local_120 = IVar1;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((local_120 != 0) &&
         (IVar1 = local_b0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_b0,PTR_s_shouldHideTabFromHomeStrip__026b01d0,local_120), (IVar1 & 1) != 0
         )) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_setSelectedTabId__026b01c0,DAT_02586510);
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar4 & 1) != 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
      }
      if ((local_111 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_postChangeReason__026b01f0,&cf_tabs);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
      }
      _objc_storeStrong(&local_120,0);
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

