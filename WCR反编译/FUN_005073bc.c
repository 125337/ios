// FUN_005073bc @ 005073bc

void FUN_005073bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_c0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [14];
  byte local_5a;
  undefined1 local_59;
  undefined *local_58;
  undefined *local_50;
  int local_48;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar1 == 1) {
    puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithStyle__026ca710,1);
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_prepare_026ca7d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_impactOccurred_026ca6a0);
    _objc_storeStrong(&local_50,0);
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isEntryVisibleForCurrentUser_0269e560
              );
    local_59 = SUB81(puVar3,0);
    local_c0 = 0;
    if (((ulong)puVar3 & 1) != 0) {
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_enabled_0269db80);
      local_c0 = 0;
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_titleLongPressLockEnabled_026a4638);
        local_c0 = (uint)puVar2;
      }
    }
    local_5a = (byte)local_c0 & 1;
    if ((local_c0 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrefine_toggleMiYouMode_026a4620);
      }
      local_48 = 0;
    }
    else {
      _objc_initWeak(auStack_68,local_28);
      puVar2 = local_58;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_005083dc;
      local_78 = &DAT_02578da0;
      _objc_copyWeak(auStack_70,auStack_68);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_authenticateTitleLongPressSucces_0269e570,&local_90);
      local_48 = 1;
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    _objc_storeStrong(&local_58,0);
    if (local_48 == 0) {
      local_48 = 0;
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

