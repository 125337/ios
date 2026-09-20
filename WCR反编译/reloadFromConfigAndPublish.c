// reloadFromConfigAndPublish @ 01110898

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::reloadFromConfigAndPublish(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if ((param_1 & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_reloadStoreForCurrentAccount_026aeec8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_persistStoreWithoutBroadcast_026aeef8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_publishRuntimeSnapshot_026aeef0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_writeNotificationSnapshot_026aef38);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

