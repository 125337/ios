// wcm_yb_pageChanged @0x85b28

/* Function Stack Size: 0x10 bytes */

void WCMYBIBToolViewHandler::wcm_yb_pageChanged(ID param_1,SEL param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  _objc_msgSend_topView(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend_operationType(uVar2,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (lVar3 == 0) {
    uVar1 = _objc_msgSend_currentDataShouldHideSaveButton(param_1,local_38);
    _objc_msgSend_topView(param_1,local_38);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_operationButton(uVar2,local_38);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar4,local_38,uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_msgSend_topView(param_1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_currentPage(param_1,local_38);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = (**(code **)(lVar3 + 0x10))();
  _objc_msgSend_wcm_yb_totalPage(param_1,local_38);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  uVar6 = (**(code **)(lVar5 + 0x10))();
  _objc_msgSend_setPage_totalPage_(uVar2,local_38,uVar4,uVar6);
  (*(code *)PTR__objc_release_00110458)(lVar5);
  (*(code *)PTR__objc_release_00110458)(lVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

