// refreshSessionList @ 015ffa84

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatRuntime::refreshSessionList(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  uint local_4c;
  ID local_48;
  undefined4 local_40;
  byte local_39;
  ID local_38;
  byte local_29;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_refreshScopedBadgeCacheWithConfi_026b1638,puVar1);
  local_29 = (byte)IVar2;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superFloatLinked_026b1650);
  if ((IVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_syncSuperFloatWithConfig__026b1658,local_28);
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scheduleTrailingBadgeRecompute_026b17a0);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  local_4c = 1;
  if (IVar2 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (uint)IVar3;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_4c & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar4 & 1) == 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar3 & 1) == 0) {
      local_40 = 1;
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_buildItems_026b1788);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_18;
      local_48 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sessionHasMore_026b1758);
      if ((IVar2 & 1) != 0) {
        IVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
        if (IVar2 < 6) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadNextSessionPage_026b1560);
        }
      }
      _objc_storeStrong(&local_48,0);
      local_40 = 0;
    }
  }
  else {
    local_40 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

