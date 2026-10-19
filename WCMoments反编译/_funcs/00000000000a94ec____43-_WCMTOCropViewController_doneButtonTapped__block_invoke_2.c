// ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke_2 @0xa94ec

void ___43__WCMTOCropViewController_doneButtonTapped__block_invoke_2
               (long param_1,undefined8 param_2,byte param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_a8;
  undefined8 local_48;
  undefined8 local_40;
  byte local_31;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_40 = 0;
  local_31 = param_3;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if ((local_31 & 1) != 0) {
    _objc_msgSend_onDidFinishCancelled(*(undefined8 *)(param_1 + 0x20),local_a8);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar3 != 0) {
      _objc_msgSend_onDidFinishCancelled(*(undefined8 *)(param_1 + 0x20),local_a8);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,0);
      (*(code *)PTR__objc_release_00110458)(lVar4);
    }
    _objc_msgSend_delegate(*(undefined8 *)(param_1 + 0x20),local_a8);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_opt_respondsToSelector(uVar5,"cropViewController:didFinishCancelled:");
    (*(code *)PTR__objc_release_00110458)(uVar5);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      _objc_msgSend_delegate(*(undefined8 *)(param_1 + 0x20),local_a8);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_cropViewController_didFinishCancelled_
                (uVar5,local_a8,*(undefined8 *)(param_1 + 0x20),0);
      (*(code *)PTR__objc_release_00110458)(uVar5);
    }
    if (!bVar1 && lVar3 == 0) {
      _objc_msgSend_navigationController(*(undefined8 *)(param_1 + 0x20),local_a8);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      if (lVar3 != 0) {
        _objc_msgSend_navigationController(*(undefined8 *)(param_1 + 0x20),local_a8);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_viewControllers(uVar5,local_a8);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_msgSend_count(uVar6,local_a8);
        bVar1 = 1 < uVar7;
        (*(code *)PTR__objc_release_00110458)(uVar6);
        (*(code *)PTR__objc_release_00110458)(uVar5);
      }
      (*(code *)PTR__objc_release_00110458)(lVar3);
      if (bVar1) {
        _objc_msgSend_navigationController(*(undefined8 *)(param_1 + 0x20),local_a8);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_popViewControllerAnimated_(uVar5,local_a8,1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar5);
      }
      else {
        _objc_msgSend_presentingViewController(*(undefined8 *)(param_1 + 0x20),local_a8);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_dismissViewControllerAnimated_completion_(uVar5,local_a8,1);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        uVar5 = _objc_loadWeakRetained(param_1 + 0x28);
        _objc_msgSend_setCompletionWithItemsHandler_(uVar5,local_a8,0);
        (*(code *)PTR__objc_release_00110458)(uVar5);
      }
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

