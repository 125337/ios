// unlockWithPassword: @ 0111dce4

/* Function Stack Size: 0x18 bytes */

bool WCRefinePrivateFriendManager::unlockWithPassword_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_verifyPassword__026aefe0,local_30);
  local_11 = (IVar1 & 1) != 0;
  if ((bool)local_11) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_markPasswordVerifiedForProtectio_026aefc0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setLocked__026af088,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

