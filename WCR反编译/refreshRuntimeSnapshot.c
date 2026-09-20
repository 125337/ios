// refreshRuntimeSnapshot @ 01111978

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::refreshRuntimeSnapshot(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  uint local_40;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  puVar1 = local_30;
  local_40 = 0;
  if (puVar2 != (undefined *)0x0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ownerWxid_026aef20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isEqualToString__0269ccc8);
    local_40 = (uint)puVar1 ^ 1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  if ((local_40 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadStoreForCurrentAccount_026aeec8);
  }
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reconcilePrivateFriendMuteState_026aef40);
  if ((IVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_persistStoreWithoutBroadcast_026aeef8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_publishRuntimeSnapshot_026aeef0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_writeNotificationSnapshot_026aef38);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

