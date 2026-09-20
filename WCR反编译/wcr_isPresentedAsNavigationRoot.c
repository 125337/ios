// wcr_isPresentedAsNavigationRoot @ 016e30e4

/* Function Stack Size: 0x10 bytes */

bool RepeatThemeIconSelectorViewController::wcr_isPresentedAsNavigationRoot(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    local_11 = IVar1 != 0;
    (*(code *)PTR__objc_release_02578630)();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    local_11 = 0;
    if (param_1 != 0) {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_11 = IVar2 == local_20;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

