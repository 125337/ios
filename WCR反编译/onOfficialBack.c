// onOfficialBack @ 01b60248

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::onOfficialBack(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  if ((*(byte *)(param_1 + (long)_exportSelectMode) & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (IVar3 == param_1) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_closeTapped_026b6858);
    }
    else {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if ((IVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_unsafeClaimAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(param_1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(param_1);
      }
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelSelectMode_026bf888);
  }
  return;
}

