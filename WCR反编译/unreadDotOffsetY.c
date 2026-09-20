// unreadDotOffsetY @ 01117e48

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefinePrivateFriendManager::unreadDotOffsetY
          (WCRefinePrivateFriendManager *this,ID param_1,SEL param_2)

{
  ID IVar1;
  double in_d0;
  double local_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_28 == 0) {
    local_38 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
    local_38 = in_d0;
  }
  FUN_01117cfc();
  _objc_storeStrong(&local_28,0);
  return local_38;
}

