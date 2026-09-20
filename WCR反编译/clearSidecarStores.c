// clearSidecarStores @ 011107e0

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::clearSidecarStores(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_removeObjectForKey__0269d700,&cf_WCRPrivateFriendStoresV1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_removeObjectForKey__0269d700,&cf_WCRPrivateFriendLastOwnerV1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_synchronize_026a0798);
  _objc_storeStrong(&local_28,0);
  return;
}

