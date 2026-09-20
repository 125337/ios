// wcr_closeAfterSelection @ 016e32d8

/* Function Stack Size: 0x10 bytes */

void RepeatThemeIconSelectorViewController::wcr_closeAfterSelection(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ID IVar5;
  ID local_50;
  ID local_40;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar4 = false;
  local_28 = param_1;
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    IVar5 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar4 = false;
    local_30 = param_1;
    if (1 < IVar5) {
      local_40 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_50 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar4 = local_50 == local_18;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (bVar4) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_popViewControllerAnimated__0269ede0,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar5 == 0) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

