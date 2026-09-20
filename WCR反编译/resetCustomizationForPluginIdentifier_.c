// resetCustomizationForPluginIdentifier: @ 01776e38

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubManager::resetCustomizationForPluginIdentifier_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_48;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_customizationOverrides_026b4438);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectForKey__0269d700,local_28);
  IVar1 = local_18;
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (IVar2 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_setConfigValue_forKey__026b4428,local_48,&cf_WCRPluginHubOverrides);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

