// selectGroupSwitchBackgroundColor @ 01c88480

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginContainerSettingsViewController::selectGroupSwitchBackgroundColor
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_pluginHubGroupSwitchBackgroundCo_026b44c0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pluginHubGroupSwitchBackgroundCo_026b44b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_18;
  local_38 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_showGroupSwitchColorPickerWithTi_026c29e8,&cf_R_,puVar4,puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

