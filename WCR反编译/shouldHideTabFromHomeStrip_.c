// shouldHideTabFromHomeStrip: @ 01518fd4

/* Function Stack Size: 0x18 bytes */

bool WCRefineTelegramGroupingStore::shouldHideTabFromHomeStrip_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  byte local_44;
  byte local_40;
  undefined *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8);
  bVar1 = false;
  local_40 = 0;
  if (lVar2 == 5) {
    local_38 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = 1;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_arePrivateFriendsHidden_026a6620);
      local_44 = (byte)puVar3;
    }
    local_40 = local_44;
  }
  local_11 = local_40 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

