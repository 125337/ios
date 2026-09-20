// FUN_004c10b4 @ 004c10b4

bool FUN_004c10b4(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  uint local_44;
  undefined *local_18;
  
  puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_18 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isEntryVisibleForCurrentUser_0269e560);
  local_44 = 0;
  if (((ulong)puVar4 & 1) != 0) {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_enabled_0269db80);
    local_44 = 0;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_plusLongPressEntryEnabled_026a3f20);
      local_44 = (uint)puVar3;
    }
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = false;
  if (((ulong)puVar4 & 1) != 0) {
    pcVar5 = "MiYouViewController";
    _objc_getClass();
    bVar2 = pcVar5 != (char *)0x0;
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  bVar1 = true;
  if ((local_44 & 1) == 0) {
    bVar1 = bVar2;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

