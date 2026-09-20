// openLibraryForScene: @ 01c33044

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateBeautifyViewController::openLibraryForScene_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHaptic_026bab98);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingSelectScene__026c1998,local_28);
  puVar1 = PTR_WCRefineNameplateLibraryViewController_026cf488;
  _objc_alloc_init();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setIsSelectMode__026b5890,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDelegate__026ca910,local_18);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dayPathForScene__026c1918,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSelectionContextDayPath__026b6510);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nightPathForScene__026c1920,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSelectionContextNightPath__026b6508);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sceneTitle__026c18e0,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSelectionContextTag__026b6710);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_30,0);
  return;
}

