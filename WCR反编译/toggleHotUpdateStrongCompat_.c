// toggleHotUpdateStrongCompat: @ 01f4f764

/* Function Stack Size: 0x18 bytes */

void WCRefineVersionController::toggleHotUpdateStrongCompat_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_7c;
  uint local_78;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar3 & 1) != 0) {
    uVar3 = 0;
    FUN_01138c30(&cf_hot_update_strong_compat,0);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
      local_2c = 1;
      goto LAB_01f4fbd0;
    }
  }
  puVar4 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_hidden);
  if (((ulong)puVar4 & 1) == 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    bVar2 = false;
    bVar1 = false;
    local_78 = 0;
    if ((uVar3 & 1) != 0) {
      local_40 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_7c = 1;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_50 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_7c = (uint)puVar4;
      }
      local_78 = local_7c;
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if ((local_78 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showRestartAlertIfNeeded_026c9140);
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_showHotUpdateStrongCompatBlocked_026c91c8);
      local_2c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_2c = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_01f4fbd0:
  _objc_storeStrong(&local_28,0);
  return;
}

