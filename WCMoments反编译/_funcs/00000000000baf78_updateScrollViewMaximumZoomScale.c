// updateScrollViewMaximumZoomScale @0xbaf78

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::updateScrollViewMaximumZoomScale(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  double local_58;
  undefined8 local_40;
  
  _objc_msgSend_scrollView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_58 = (double)_objc_msgSend_minimumZoomScale(uVar1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dVar2 = (double)_objc_msgSend_baseMaximumZoomScale(param_1,local_40);
  if (local_58 < dVar2) {
    local_58 = dVar2;
  }
  _objc_msgSend_scrollView(param_1,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setMaximumZoomScale_(local_58,uVar1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

