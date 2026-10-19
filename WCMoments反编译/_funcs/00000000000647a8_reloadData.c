// reloadData @0x647a8

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::reloadData(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  
  _objc_msgSend_dataMediator(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_clear(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_msgSend_currentPage(param_1,local_30);
  _objc_msgSend_collectionView(param_1,local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_reloadData(uVar2,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_setCurrentPage_(param_1,local_30,uVar1);
  return;
}

