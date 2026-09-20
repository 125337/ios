// shouldPlayMessageHapticForUsername: @ 0111ddc4

/* Function Stack Size: 0x18 bytes */

bool WCRefinePrivateFriendManager::shouldPlayMessageHapticForUsername_
               (ID param_1,SEL param_2,ID param_3)

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
  if ((DAT_028e3544 >> 9 & 1) == 0) {
    local_11 = 0;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_shouldConcealUsername__0269fef8,local_30);
    local_11 = (byte)IVar1 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

