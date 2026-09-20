// openWatermarkSelectorForIndex: @ 017ff764

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::openWatermarkSelectorForIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineWatermarkLibraryViewController_026ce908;
  _objc_alloc_init();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setIsSelectMode__026b5890,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setWatermarkIndex__026b5a98,local_28);
  puVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,&cf_WCRefineWatermarkIndex,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_30,0);
  return;
}

