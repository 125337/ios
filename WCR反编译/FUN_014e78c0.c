// FUN_014e78c0 @ 014e78c0

byte FUN_014e78c0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 1;
  }
  else {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
               local_28);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_30 = 0;
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isSelectedUsername__026afed0,
                   local_28);
        local_30 = (uint)puVar3;
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_30 & 1) == 0) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

