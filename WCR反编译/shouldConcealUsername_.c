// shouldConcealUsername: @ 01111b90

/* Function Stack Size: 0x18 bytes */

bool WCRefinePrivateFriendManager::shouldConcealUsername_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else if ((DAT_028e3544 & 3) == 3) {
    FUN_01111cd8(0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)lVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

