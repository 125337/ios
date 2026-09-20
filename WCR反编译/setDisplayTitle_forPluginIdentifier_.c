// setDisplayTitle:forPluginIdentifier: @ 01776354

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginHubManager::setDisplayTitle_forPluginIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  long local_50;
  long local_38;
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
  lVar2 = local_28;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_setOverrideValue_key_identifier__026b43c8,local_50,&cf_title,local_30);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

