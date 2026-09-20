// removeLivePluginForCustomEntry: @ 01779204

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubManager::removeLivePluginForCustomEntry_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58 [3];
  ID local_40;
  undefined4 local_34;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_identifierForCustomEntry__026b4450,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  IVar1 = local_18;
  if (IVar2 == 0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_plugins_026b43a8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    local_78 = PTR___NSConcreteGlobalBlock_02578658;
    local_70 = 0xd0800000;
    local_6c = 0;
    local_68 = FUN_017794f8;
    local_60 = &DAT_02588950;
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = IVar2;
    IVar2 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_indexOfObjectPassingTest__026a27f8,&local_78);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_40 = IVar2;
    if (IVar2 != 0x7fffffffffffffff) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_plugins_026b43a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sessionRegisteredIdentifiers_026b4390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(local_58,0);
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_resetCustomizationForPluginIdent_026b4488,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistRegistrySnapshot_026b4398);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

