// setupPlaceholderLogic:placeholderLabel: @ 01e6beb0

/* Function Stack Size: 0x20 bytes */

void WCRefineTextReplaceViewController::setupPlaceholderLogic_placeholderLabel_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
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
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_updatePlaceholderVisibility_plac_026bd710,local_28,local_30);
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  uVar7 = *(undefined8 *)PTR__UITextViewTextDidChangeNotification_02578218;
  puVar6 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_28;
  local_48 = IVar4;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_30;
  local_40 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_addObserverForName_object_queue__026ca4b0,uVar7,uVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

