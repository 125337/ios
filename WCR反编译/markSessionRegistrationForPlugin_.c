// markSessionRegistrationForPlugin: @ 01770564

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubManager::markSessionRegistrationForPlugin_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
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
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_identifier_026a4a88);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  IVar1 = local_18;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sessionRegisteredIdentifiers_026b4390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scheduleRegistryReconciliationIf_026b4380);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

