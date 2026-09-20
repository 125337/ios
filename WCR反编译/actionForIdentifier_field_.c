// actionForIdentifier:field: @ 01de87d8

/* Function Stack Size: 0x20 bytes */

ID WCRefineSpecialTextListViewController::actionForIdentifier_field_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRSpecialTextAction_026cf5f0;
  _objc_alloc_init();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setOwner__026a2488,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIdentifier__026a7358,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setField__026c58d0,local_30);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_actions_0269f150);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

