// rebuild @0x63548

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::rebuild(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_setHiddenProjectiveView_(param_1);
  _objc_msgSend_showStatusBar(param_1,local_30);
  _objc_msgSend_containerView(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeFromSuperview(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(param_1 + (long)_containerView,0);
  _objc_msgSend_collectionView(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeFromSuperview(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(param_1 + (long)_collectionView,0);
  _objc_msgSend_dataMediator(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_clear(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_rotationHandler(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_clear(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

