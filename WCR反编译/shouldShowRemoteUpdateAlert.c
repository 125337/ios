// shouldShowRemoteUpdateAlert @ 01d2c364

/* Function Stack Size: 0x10 bytes */

bool WCRefineRootViewController::shouldShowRemoteUpdateAlert(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_58;
  ID local_50;
  undefined *local_48;
  undefined1 local_3a;
  byte local_39;
  uint local_38;
  byte local_31;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineRemoteUpdateManager_026ce600;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_alertIgnoresVersionCheck_026c43c8);
  local_31 = (byte)puVar2;
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasNewVersion_026c43d0);
  if ((((ulong)puVar2 & 1) == 0) && ((local_31 & 1) == 0)) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_01d2c648;
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isForceUpdate_026c43d8);
  local_39 = (byte)puVar2;
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shouldShowUpdateAlert_026c43e0);
  local_3a = SUB81(puVar2,0);
  if (((local_39 & 1) == 0) && (((ulong)puVar2 & 1) == 0)) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_01d2c648;
  }
  if (((local_39 & 1) == 0) &&
     (IVar3 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isUpdateNotificationDisabled_026c43e8),
     (IVar3 & 1) != 0)) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_01d2c648;
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_updateAlertLocalDedupeKey_026c43a0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  if ((local_39 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_shownUpdateVersion_026c43b0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isEqualToString__0269ccc8,local_48);
      if ((IVar3 & 1) == 0) {
        IVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_skippedUpdateVersion_026c43a8);
        _objc_retainAutoreleasedReturnValue();
        local_58 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isEqualToString__0269ccc8,local_48);
        bVar1 = (IVar3 & 1) != 0;
        if (bVar1) {
          local_11 = 0;
        }
        local_38 = (uint)bVar1;
        _objc_storeStrong(&local_58,0);
      }
      else {
        local_11 = 0;
        local_38 = 1;
      }
      _objc_storeStrong(&local_50,0);
      if (local_38 == 0) goto LAB_01d2c620;
    }
  }
  else {
LAB_01d2c620:
    local_11 = 1;
    local_38 = 1;
  }
  _objc_storeStrong(&local_48,0);
LAB_01d2c648:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

