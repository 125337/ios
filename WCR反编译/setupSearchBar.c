// setupSearchBar @ 01fa7244

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::setupSearchBar(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_d2;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UISearchBar_026ce298;
  _objc_alloc();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0x4046000000000000;
  FUN_01fa74bc();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,in_d2,uVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
  uVar3 = *(undefined8 *)(param_1 + (long)_searchBar);
  *(undefined8 *)(param_1 + (long)_searchBar) = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_searchBar),PTR_s_setPlaceholder__0269e9c8,
             &cf_d__4lpSTy);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_searchBar),PTR_s_setDelegate__026ca910,param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_searchBar),PTR_s_setSearchBarStyle__0269e9c0,2);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemBackgroundColor_026ca848);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + (long)_searchBar);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_searchTextField_0269e9f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

