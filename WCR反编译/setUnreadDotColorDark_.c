// setUnreadDotColorDark: @ 01117980

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::setUnreadDotColorDark_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_0111753c(local_28,&cf__000000);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistAndPublish_026aef58);
  _objc_storeStrong(&local_28,0);
  return;
}

