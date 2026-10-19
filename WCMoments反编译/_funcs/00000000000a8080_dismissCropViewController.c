// dismissCropViewController @0xa8080

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::dismissCropViewController(ID param_1,SEL param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_60;
  
  _objc_msgSend_delegate(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_respondsToSelector(uVar3,"cropViewController:didFinishCancelled:");
  (*(code *)PTR__objc_release_00110458)(uVar3);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    _objc_msgSend_delegate(param_1,local_60);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_cropViewController_didFinishCancelled_(uVar3,local_60,param_1,1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  _objc_msgSend_onDidFinishCancelled(param_1,local_60);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar4 != 0) {
    _objc_msgSend_onDidFinishCancelled(param_1,local_60);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,1);
    (*(code *)PTR__objc_release_00110458)(lVar5);
  }
  if (lVar4 == 0 && !bVar1) {
    _objc_msgSend_navigationController(param_1,local_60);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (lVar4 != 0) {
      _objc_msgSend_navigationController(param_1,local_60);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_viewControllers(uVar3,local_60);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      uVar7 = _objc_msgSend_count(uVar6,local_60);
      bVar1 = 1 < uVar7;
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    (*(code *)PTR__objc_release_00110458)(lVar4);
    if (bVar1) {
      _objc_msgSend_navigationController(param_1,local_60);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_popViewControllerAnimated_(uVar3,local_60,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else {
      _objc_msgSend_presentingViewController(param_1,local_60);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_dismissViewControllerAnimated_completion_(uVar3,local_60,1,0);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
  }
  return;
}

