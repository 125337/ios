// openMessageBlockSettings @ 01a39054

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::openMessageBlockSettings(ID param_1,SEL param_2)

{
  int iVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  iVar1 = 0x259afc0;
  FUN_01a19cf0(&cf_message_block,0,0xc91a47b2,0);
  if (iVar1 != 2) {
    puVar2 = PTR_WCRefineMessageBlockSettingsViewController_026cf298;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageBlockSettingsViewController_026cf298,PTR_s_new_0269d288);
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar4 & 1) == 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

