// openPluginSortPage @ 01d7b0fc

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::openPluginSortPage(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefinePluginSortViewController_026cf5a8;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  bVar1 = false;
  local_28 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar3 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  if (bVar1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

