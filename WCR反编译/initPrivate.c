// initPrivate @ 0110ceac

/* Function Stack Size: 0x10 bytes */

ID WCRefinePrivateFriendManager::initPrivate(ID param_1,SEL param_2)

{
  ID *pIVar1;
  ID local_38;
  undefined *local_30;
  SEL local_28;
  ID *local_20;
  ID *local_18;
  
  local_20 = (ID *)0x0;
  pIVar1 = &local_38;
  local_30 = PTR_WCRefinePrivateFriendManager_026cf9e8;
  local_38 = param_1;
  local_28 = param_2;
  _objc_msgSendSuper2(pIVar1,PTR_s_init_026ca6a8);
  local_20 = pIVar1;
  _objc_storeStrong(&local_20);
  if (local_20 == (ID *)0x0) {
    local_18 = (ID *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_reloadStoreForCurrentAccount_026aeec8);
    pIVar1 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pIVar1;
  }
  _objc_storeStrong(&local_20,0);
  return (ID)local_18;
}

