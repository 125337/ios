// overrideForPluginIdentifier: @ 017753c0

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginHubManager::overrideForPluginIdentifier_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_48;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_customizationOverrides_026b4438);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_30[0];
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar1 & 1) == 0) {
    local_48 = *(ID *)PTR____NSDictionary0___02578288;
  }
  else {
    local_48 = local_30[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  _objc_autoreleaseReturnValue();
  return local_48;
}

