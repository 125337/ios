// FUN_000bc4c4 @ 000bc4c4

byte FUN_000bc4c4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    puVar1 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
               PTR_s_canonicalStoredAction__0269e3e0,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTogglePrivateFriend);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineTogglePluginHub);
      if (((ulong)puVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        FUN_000bddb4((ulong)puVar3 & 0xffffffff);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_11 = 1;
      }
    }
    else {
      puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      FUN_000bdb74((ulong)puVar3 & 0xffffffff);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_11 = 1;
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

