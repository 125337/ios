// checkForCanReset @0xbb054

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::checkForCanReset(ID param_1,SEL param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_d2;
  double in_d3;
  undefined8 local_110;
  bool local_31;
  
  lVar2 = _objc_msgSend_angle(param_1);
  if (lVar2 == 0) {
    _objc_msgSend_scrollView(param_1,local_110);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)_objc_msgSend_zoomScale(uVar3,local_110);
    _objc_msgSend_scrollView(param_1,local_110);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    dVar6 = (double)_objc_msgSend_minimumZoomScale(uVar4,local_110);
    dVar6 = dVar6 + 1.1920928955078125e-07;
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if (dVar5 <= dVar6) {
      _objc_msgSend_cropBoxFrame(param_1,local_110);
      dVar5 = (double)_objc_msgSend_originalCropBoxSize(param_1,local_110);
      bVar1 = true;
      if ((long)in_d2 == (long)dVar5) {
        _objc_msgSend_cropBoxFrame(param_1,local_110);
        _objc_msgSend_originalCropBoxSize(param_1,local_110);
        bVar1 = (long)in_d3 != (long)dVar6;
      }
      if (bVar1) {
        local_31 = true;
      }
      else {
        _objc_msgSend_scrollView(param_1,local_110);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        dVar5 = (double)_objc_msgSend_contentOffset(uVar3,local_110);
        dVar7 = (double)_objc_msgSend_originalContentOffset(param_1,local_110);
        local_31 = true;
        if ((long)dVar5 == (long)dVar7) {
          _objc_msgSend_scrollView(param_1,local_110);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_contentOffset(uVar4,local_110);
          lVar2 = (long)dVar6;
          _objc_msgSend_originalContentOffset(param_1,local_110);
          local_31 = lVar2 != (long)dVar6;
          (*(code *)PTR__objc_release_00110458)(uVar4);
        }
        (*(code *)PTR__objc_release_00110458)(uVar3);
      }
    }
    else {
      local_31 = true;
    }
  }
  else {
    local_31 = true;
  }
  _objc_msgSend_setCanBeReset_(param_1,local_110,local_31);
  return;
}

