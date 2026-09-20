// scheduleRegistryPublishIfNeeded @ 017702b8

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginHubManager::scheduleRegistryPublishIfNeeded(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  uint local_30;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_registryPublishScheduled_026b4400);
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRegistryPublishScheduled__026b4408,1);
  }
  local_30 = (uint)!bVar1;
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_30 == 0) {
    _objc_initWeak(auStack_38,local_18);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_0177044c;
    local_48 = &DAT_0257be28;
    _objc_copyWeak(auStack_40,auStack_38);
    _dispatch_async(puVar3,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}

