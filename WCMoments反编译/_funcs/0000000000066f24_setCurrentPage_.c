// setCurrentPage: @0x66f24

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::setCurrentPage_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 local_28;
  
  _objc_msgSend_dataMediator(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_numberOfCells(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_28 = param_3;
  if ((long)(lVar2 - 1U) < (long)param_3) {
    local_28 = lVar2 - 1U;
  }
  *(long_long *)(param_1 + (long)_currentPage) = local_28;
  _objc_msgSend_collectionView(param_1,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_superview(uVar1,local_48);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (lVar2 != 0) {
    _objc_msgSend_collectionViewScrollToPage_(param_1,local_48,local_28);
  }
  return;
}

