// navigationTitleForViewController: @ 0091fd40

/* Function Stack Size: 0x18 bytes */

ID WCNavigationMonitor::navigationTitleForViewController_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (IVar2 != 0) {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (bVar1) {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar2;
    }
    else {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      if (IVar3 != 0) {
        IVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = IVar6 != 0;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (bVar1) {
        IVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_18 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      else {
        local_18 = 0;
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

