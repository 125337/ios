// lock @ 0111d954

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::lock(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLocked_0269db88);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLocked__026af088,1);
  }
  return;
}

