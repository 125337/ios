// commitMessageHapticStyle: @ 01cb9b64

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendViewController::commitMessageHapticStyle_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_playIncomingMessageHaptic_026a6830);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

