// openLib: @ 01c4ebd4

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUserDetailViewController::openLib_
               (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_38;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingScene__026c1c88,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sceneKey__026c1be0,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineNameplateLibraryViewController_026cf488;
  local_30 = IVar1;
  _objc_alloc_init();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setIsSelectMode__026b5890,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDelegate__026ca910,local_18);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Path);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectionContextDayPath__026b6510);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___NightPath);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectionContextNightPath__026b6508);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sceneTitle__026c18e0,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectionContextTag__026b6710);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

