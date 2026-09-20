// setNeedsSessionListRefresh @ 015ffeb8

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatRuntime::setNeedsSessionListRefresh(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  dispatch_time_t dVar5;
  uint local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
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
  local_74 = 1;
  if (IVar2 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_74 = (uint)IVar3;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_74 & 1) == 0) {
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
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingListRefresh_026b17a8);
      if ((IVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingListRefresh__026b17b0,1);
        _objc_initWeak(auStack_48,local_18);
        dVar5 = _dispatch_time(0,300000000);
        puVar1 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_70 = PTR___NSConcreteStackBlock_02578660;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = FUN_016002cc;
        local_58 = &DAT_0257be28;
        _objc_copyWeak(auStack_50,auStack_48);
        _dispatch_after(dVar5,puVar1,&local_70);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
        local_40 = 0;
      }
      else {
        local_40 = 1;
      }
    }
  }
  else {
    local_40 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

