// FUN_006b21fc @ 006b21fc

byte FUN_006b21fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,puVar1)
  ;
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar3 = local_20;
    FUN_006b2384();
    if ((uVar3 & 1) == 0) {
      FUN_006b2660(local_28);
      puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,
                 PTR_s_shouldPresentDisguiseNotificatio_026a6800);
      if (((ulong)puVar1 & 1) != 0) {
        puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        local_38 = puVar1;
        if ((puVar1 != (undefined *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_applicationState_0269d6d8),
           puVar1 != (undefined *)0x0)) {
          FUN_006b27c8(local_20);
        }
        _objc_storeStrong(&local_38,0);
      }
    }
    local_11 = 1;
  }
  local_2c = 1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

