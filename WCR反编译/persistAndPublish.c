// persistAndPublish @ 011109bc

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::persistAndPublish(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ownerWxid_026aef20);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if (IVar3 != 0) {
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_persistStoreWithoutBroadcast_026aeef8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_publishRuntimeSnapshot_026aeef0);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_writeNotificationSnapshot_026aef38);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  return;
}

