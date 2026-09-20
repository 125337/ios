// persistStoreWithoutBroadcast @ 011102d8

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::persistStoreWithoutBroadcast(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *local_90;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined1 local_39;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if ((param_1 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ownerWxid_026aef20);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_39 = 0;
    bVar2 = true;
    uVar1 = IVar4 != 0;
    if ((bool)uVar1) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_store_026aeee0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar4 == 0;
      local_39 = uVar1;
      local_38 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      uVar1 = local_39;
    }
    local_39 = uVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (!bVar2) {
      puVar5 = (undefined *)0x0;
      FUN_0110ec80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_51 = 0;
      local_90 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        local_90 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_90;
      }
      local_51 = puVar6 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_90;
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_store_026aeee0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar6 = local_48;
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ownerWxid_026aef20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_setObject_forKeyedSubscript__0269d248,IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar6 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_setObject_forKey__026ca9e8,local_48,&cf_WCRPrivateFriendStoresV1);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ownerWxid_026aef20);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar6 = local_60;
      if ((IVar4 & 1) == 0) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ownerWxid_026aef20);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_setObject_forKey__026ca9e8,IVar3,&cf_WCRPrivateFriendLastOwnerV1);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ownerWxid_026aef20);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_synchronize_026a0798);
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_48,0);
    }
  }
  return;
}

