// openPluginIconCustomization: @ 01ca1478

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefinePluginManagementViewController::openPluginIconCustomization_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_40;
  uint local_34;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = IVar1;
  if (IVar1 != 0) {
    puVar2 = PTR_WCRefinePluginIconCustomizationViewController_026cf4d0;
    _objc_alloc_init();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30[0],PTR_s_PushViewController_animated__0269cd40,puVar2,1);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)(IVar1 == 0);
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

