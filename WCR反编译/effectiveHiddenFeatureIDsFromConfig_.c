// effectiveHiddenFeatureIDsFromConfig: @ 01c8f9d4

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginFeatureManagementViewController::effectiveHiddenFeatureIDsFromConfig_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_normalizedHiddenFeatureIDsFromCo_026c2aa8,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_30;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cloudHiddenFeatureIDs_026c2ab0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_unionSet__026a2cb0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

