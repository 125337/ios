// toggleDisableGroup: @ 01abf0c0

/* Function Stack Size: 0x18 bytes */

void WCRGroupListViewController::toggleDisableGroup_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_30 == (undefined *)0x0) {
    local_34 = 1;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    puVar2 = local_30;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_disabled_026a2c20);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDisabled__026b0148,(uint)puVar2 ^ 1);
    puVar1 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadRows_026bdd78);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_externalCompletion_026bdec0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 != 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_externalCompletion_026bdec0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(IVar3 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

