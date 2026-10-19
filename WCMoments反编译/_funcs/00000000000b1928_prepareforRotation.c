// prepareforRotation @0xb1928

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::prepareforRotation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_a8;
  
  _objc_msgSend_scrollView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_contentOffset(uVar1,local_a8);
  _objc_msgSend_setRotationContentOffset_(uVar2,param_1,local_a8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_scrollView(param_1,local_a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_contentSize(uVar1,local_a8);
  _objc_msgSend_setRotationContentSize_(uVar2,param_1,local_a8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = _objc_msgSend_contentBounds(param_1,local_a8);
  _objc_msgSend_setRotationBoundFrame_(uVar1,in_d1,in_d2,in_d3,param_1,local_a8);
  return;
}

