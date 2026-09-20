// FUN_006b0df4 @ 006b0df4

void FUN_006b0df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cc030)(local_18,local_20,local_28);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_type_0269e6f8);
  if ((lVar1 == 1) &&
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_subtype_026a6850),
     lVar1 == 1)) {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_enabled_0269db80);
    if ((((ulong)puVar2 & 1) == 0) ||
       ((puVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isLocked_0269db88),
        ((ulong)puVar2 & 1) != 0 ||
        (puVar2 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_shakeToLockEnabled_026a6858),
        ((ulong)puVar2 & 1) == 0)))) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_applyLockedStateFromQuickAction__0269e568,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_shakeToLockToastEnabled_026a6860);
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_y__YS_);
      }
      FUN_006a420c();
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

