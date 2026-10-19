// showSheetView @0x86064

/* Function Stack Size: 0x10 bytes */

void WCMYBIBToolViewHandler::showSheetView(ID param_1,SEL param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_40;
  
  uVar2 = _objc_msgSend_currentDataShouldHideSaveButton(param_1);
  if ((uVar2 & 1) == 0) {
    _objc_msgSend_sheetView(param_1,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_actions(uVar3,local_40);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_saveAction(param_1,local_40);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_msgSend_containsObject_(uVar4,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((uVar1 & 1) == 0) {
      _objc_msgSend_sheetView(param_1,local_40);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_actions(uVar3,local_40);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_saveAction(param_1,local_40);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar4,local_40);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
  }
  else {
    _objc_msgSend_sheetView(param_1,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_actions(uVar3,local_40);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_saveAction(param_1,local_40);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeObject_(uVar4,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  _objc_msgSend_sheetView(param_1,local_40);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_containerView(param_1,local_40);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_currentOrientation(param_1,local_40);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  uVar5 = (**(code **)(lVar6 + 0x10))();
  _objc_msgSend_showToView_orientation_(uVar3,local_40,uVar4,uVar5);
  (*(code *)PTR__objc_release_00110458)(lVar6);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  return;
}

