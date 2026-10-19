// handleScrollViewTouchCancellation @0xb52ac

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::handleScrollViewTouchCancellation(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  _objc_msgSend_scrollView(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_isDragging(uVar3,local_50);
  bVar2 = false;
  bVar1 = false;
  local_40 = 1;
  if ((uVar4 & 1) == 0) {
    _objc_msgSend_scrollView(param_1,local_50);
    local_28 = _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    uVar4 = _objc_msgSend_isZooming(local_28,local_50);
    local_40 = 1;
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_scrollView(param_1,local_50);
      local_38 = _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_40 = _objc_msgSend_isDecelerating(local_38,local_50);
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_38);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_00110458)(local_28);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if ((local_40 & 1) == 0) {
    _objc_msgSend_startResetTimer(param_1,local_50);
  }
  return;
}

