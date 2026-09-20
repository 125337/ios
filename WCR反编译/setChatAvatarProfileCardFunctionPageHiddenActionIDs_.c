// setChatAvatarProfileCardFunctionPageHiddenActionIDs: @ 0200a80c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setChatAvatarProfileCardFunctionPageHiddenActionIDs_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  SEL SVar3;
  ID local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineProfileCardActionCatalog_026ced78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineProfileCardActionCatalog_026ced78,
             PTR_s_normalizedHiddenIDsFromSavedIDs__026c3558,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_30;
  SVar3 = local_20;
  local_38 = IVar2;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar1);
  (*(code *)PTR__objc_release_02578630)(SVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

