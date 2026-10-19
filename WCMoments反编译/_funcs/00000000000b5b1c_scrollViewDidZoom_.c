// scrollViewDidZoom: @0xb5b1c

/* Function Stack Size: 0x18 bytes */

void WCMTOCropView::scrollViewDidZoom_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = _objc_msgSend_isTracking(local_28,local_30);
  if ((uVar1 & 1) != 0) {
    _objc_msgSend_zoomScale(local_28,local_30);
    _objc_msgSend_setCropBoxLastEditedZoomScale_(local_18,local_30);
    _objc_msgSend_minimumZoomScale(local_28,local_30);
    _objc_msgSend_setCropBoxLastEditedMinZoomScale_(local_18,local_30);
    _objc_msgSend_baseMaximumZoomScale(local_18,local_30);
    _objc_msgSend_setCropBoxLastEditedMaxZoomScale_(local_18,local_30);
  }
  _objc_msgSend_matchForegroundToBackground(local_18,local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

