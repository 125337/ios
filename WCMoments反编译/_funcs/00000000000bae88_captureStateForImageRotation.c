// captureStateForImageRotation @0xbae88

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::captureStateForImageRotation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_68;
  
  _objc_msgSend_cropBoxFrame(param_1);
  _objc_msgSend_setCropBoxLastEditedSize_(in_d2,in_d3,param_1,local_68);
  _objc_msgSend_scrollView(param_1,local_68);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_zoomScale(uVar1,local_68);
  _objc_msgSend_setCropBoxLastEditedZoomScale_(param_1,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_scrollView(param_1,local_68);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_minimumZoomScale(uVar1,local_68);
  _objc_msgSend_setCropBoxLastEditedMinZoomScale_(param_1,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_baseMaximumZoomScale(param_1,local_68);
  _objc_msgSend_setCropBoxLastEditedMaxZoomScale_(param_1,local_68);
  return;
}

