// presentSettingsFromViewController: @ 0112094c

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::presentSettingsFromViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isEntryVisibleForCurrentUser_0269e560);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pushSettingsFrom__026af0f8,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

