// setNotificationDisguiseTitle: @ 011180f4

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::setNotificationDisguiseTitle_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (lVar2 != 0) {
    local_30 = local_28;
    FUN_0110d24c();
    _objc_retainAutoreleasedReturnValue();
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistAndPublish_026aef58);
  _objc_storeStrong(&local_28,0);
  return;
}

