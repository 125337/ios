// setUnreadDotPositionMode: @ 01117b50

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::setUnreadDotPositionMode_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,param_3 == 1);
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

