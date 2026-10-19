// longPressGestureRecognized: @0xb4cec

/* Function Stack Size: 0x18 bytes */

void WCMTOCropView::longPressGestureRecognized_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = _objc_msgSend_state(local_28,local_30);
  if (lVar1 == 1) {
    _objc_msgSend_gridOverlayView(0,local_18,local_30);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setGridHidden_animated_(uVar2,local_30,0,1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  lVar1 = _objc_msgSend_state(local_28,local_30);
  if (lVar1 == 3) {
    _objc_msgSend_gridOverlayView(0,local_18,local_30);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setGridHidden_animated_(uVar2,local_30,1,1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

