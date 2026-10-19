// cuttingImage @0x6c2c8

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageCell::cuttingImage(ID param_1,SEL param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_wcm_yb_isTransitioning(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = (**(code **)(lVar2 + 0x10))();
  (*(code *)PTR__objc_release_00110458)(lVar2);
  if (((uVar1 & 1) == 0) && ((*(byte *)(local_18 + (long)_interacting) & 1) == 0)) {
    _objc_msgSend_wcm_yb_cellData(local_18,local_48);
    local_28 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_originImage(local_28,local_48);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar2 != 0) {
      _objc_msgSend_imageScrollView(local_18,local_48);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      dVar5 = (double)_objc_msgSend_zoomScale(uVar3,local_48);
      dVar6 = (double)_objc_msgSend_cuttingZoomScale(local_28,local_48);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if ((dVar6 <= dVar5) &&
         (uVar4 = _objc_msgSend_shouldCompress(local_28,local_48), (uVar4 & 1) != 0)) {
        _objc_msgSend_cancelPreviousPerformRequestsWithTarget_selector_object_
                  (&_OBJC_CLASS___NSObject,local_48,local_18,"cuttingImage_");
        _objc_msgSend_performSelector_withObject_afterDelay_
                  (0x3fc3333333333333,local_18,local_48,"cuttingImage_",0);
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

