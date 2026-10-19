// gestureRecognizerShouldBegin: @0xb4de0

/* Function Stack Size: 0x18 bytes */

bool WCMTOCropView::gestureRecognizerShouldBegin_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined8 uVar8;
  undefined8 in_d2;
  undefined8 uVar9;
  undefined8 in_d3;
  undefined8 uVar10;
  undefined8 local_c0;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  _objc_msgSend_gridPanGestureRecognizer(local_20,local_c0);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 == lVar2) {
    uVar5 = _objc_msgSend_locationInView_(0,local_30,local_c0,local_20);
    uVar8 = in_d1;
    _objc_msgSend_gridOverlayView(local_20,local_c0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _objc_msgSend_frame(uVar3,local_c0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar3 = uVar8;
    uVar9 = in_d2;
    uVar10 = in_d3;
    uVar7 = _CGRectInset(uVar6);
    uVar6 = _CGRectInset(uVar6);
    uVar4 = _CGRectContainsPoint(uVar7,uVar3,uVar9,uVar10,uVar5,in_d1);
    if (((uVar4 & 1) == 0) &&
       (uVar4 = _CGRectContainsPoint(uVar6,uVar8,in_d2,in_d3,uVar5,in_d1), (uVar4 & 1) != 0)) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

