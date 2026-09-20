// showPluginLongPressMenu:sourceView: @ 0178b2d8

/* Function Stack Size: 0x20 bytes */

void WCPluginsViewControllerBehavior::showPluginLongPressMenu_sourceView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  uint local_4c;
  ID local_48;
  undefined4 local_40;
  byte local_39;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_39 = 0;
  local_4c = 1;
  if (local_28 != 0) {
    puVar1 = PTR_WCRefinePluginHubManager_026ce800;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (uint)puVar1 ^ 1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_4c & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_longPressActionsForPlugin_source_026b4768,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRefinePluginHubManager_026ce800;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar2 = local_18;
    if (puVar3 == (undefined *)0x0) {
      puVar1 = PTR_WCRefinePluginHubManager_026ce800;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_showNativeMenuWithTitle_actions__026b4778,puVar3,local_48);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      puVar1 = PTR_WCRefinePluginHubManager_026ce800;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_showWCRefineMenuWithTitle_action_026b4780,puVar3,local_48,local_30);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  else {
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

