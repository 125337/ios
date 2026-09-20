// openLongPressOrder @ 01c9d318

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginIconCustomizationViewController::openLongPressOrder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefinePluginIconLongPressOrderViewController_026cf4c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconLongPressOrderViewController_026cf4c0,PTR_s_new_0269d288);
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar3 & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

