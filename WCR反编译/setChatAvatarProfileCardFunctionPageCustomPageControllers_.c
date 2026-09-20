// setChatAvatarProfileCardFunctionPageCustomPageControllers: @ 0200af74

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setChatAvatarProfileCardFunctionPageCustomPageControllers_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  SEL SVar4;
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
             PTR_s_normalizedCustomPageControllersF_026b09a8,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_30;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  puVar1 = local_30;
  IVar2 = local_38;
  if (puVar3 == (undefined *)0x0) {
    SVar4 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(SVar4);
  }
  else {
    SVar4 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar1);
    (*(code *)PTR__objc_release_02578630)(SVar4);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

