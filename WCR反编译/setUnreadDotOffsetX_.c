// setUnreadDotOffsetX: @ 01117d70

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::setUnreadDotOffsetX_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  FUN_01117cfc(param_3);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_persistAndPublish_026aef58);
  return;
}

