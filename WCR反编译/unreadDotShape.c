// unreadDotShape @ 01116ff8

/* Function Stack Size: 0x10 bytes */

long_long WCRefinePrivateFriendManager::unreadDotShape(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_50;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_30 == 0) {
    local_50 = 1;
  }
  else {
    local_50 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  }
  if ((long)local_50 < 1) {
    local_18 = 1;
  }
  else if ((long)local_50 < 0xc) {
    local_18 = local_50;
  }
  else {
    local_18 = 0xb;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

