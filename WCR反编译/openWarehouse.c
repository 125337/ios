// openWarehouse @ 01e2c100

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatSettingsViewController::openWarehouse(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineSuperFloatBallWarehouseViewController_026ce920;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSuperFloatBallWarehouseViewController_026ce920,PTR_s_new_0269d288);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_PushViewController_animated__0269cd40,puVar1,1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

