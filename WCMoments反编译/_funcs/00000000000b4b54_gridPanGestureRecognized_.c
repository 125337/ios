// gridPanGestureRecognized: @0xb4b54

/* Function Stack Size: 0x18 bytes */

void WCMTOCropView::gridPanGestureRecognized_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_b8;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar4 = _objc_msgSend_locationInView_(local_28,local_b8,local_18);
  lVar2 = _objc_msgSend_state(local_28,local_b8);
  if (lVar2 == 1) {
    _objc_msgSend_startEditing(0,local_18,local_b8);
    uVar3 = in_d1;
    _objc_msgSend_setPanOriginPoint_(uVar4,local_18,local_b8);
    uVar5 = _objc_msgSend_cropBoxFrame(local_18,local_b8);
    _objc_msgSend_setCropOriginFrame_(uVar5,uVar3,in_d2,in_d3,local_18,local_b8);
    IVar1 = local_18;
    uVar5 = _objc_msgSend_panOriginPoint(local_18,local_b8);
    uVar3 = _objc_msgSend_cropEdgeForPoint_(uVar5,uVar3,IVar1,local_b8);
    _objc_msgSend_setTappedEdge_(local_18,local_b8,uVar3);
  }
  lVar2 = _objc_msgSend_state(local_28,local_b8);
  if (lVar2 + -3 != 0) {
    lVar2 = _objc_msgSend_state(lVar2 + -3,local_28,local_b8);
    if ((lVar2 + -4 != 0) && (lVar2 = _objc_msgSend_state(lVar2 + -4,local_28,local_b8), lVar2 != 5)
       ) goto LAB_000b4cc0;
  }
  _objc_msgSend_startResetTimer(0,local_18,local_b8);
LAB_000b4cc0:
  _objc_msgSend_updateCropBoxFrameWithGesturePoint_(uVar4,in_d1,local_18,local_b8);
  _objc_storeStrong(&local_28,0);
  return;
}

