// cyclicPagingEnabled @ 0178e2d8

/* Function Stack Size: 0x10 bytes */

bool WCPluginsViewControllerBehavior::cyclicPagingEnabled(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined4 local_38;
  
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (bool)(1 < IVar3);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return local_38;
}

