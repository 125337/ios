// build @0x62f7c

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::build(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_c0;
  
  _objc_msgSend_collectionView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addSubview_(param_1,local_c0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = _objc_msgSend_bounds(param_1,local_c0);
  _objc_msgSend_collectionView(param_1,local_c0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,uVar1,local_c0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_collectionView(param_1,local_c0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAutoresizingMask_(uVar1,local_c0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_containerView(param_1,local_c0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addSubview_(param_1,local_c0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = _objc_msgSend_bounds(param_1,local_c0);
  _objc_msgSend_containerView(param_1,local_c0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,in_d1,in_d2,in_d3,uVar1,local_c0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_containerView(param_1,local_c0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAutoresizingMask_(uVar1,local_c0,0x12);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_buildToolView(param_1,local_c0);
  _objc_msgSend_layoutIfNeeded(param_1,local_c0);
  uVar1 = _objc_msgSend_currentPage(param_1,local_c0);
  _objc_msgSend_collectionViewScrollToPage_(param_1,local_c0,uVar1);
  _objc_msgSend_rotationHandler(param_1,local_c0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_startObserveDeviceOrientation(uVar1,local_c0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

