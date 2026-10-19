// layoutInitialImage @0xb11a0

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::layoutInitialImage(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double in_d1;
  double dVar11;
  double in_d2;
  double in_d3;
  double local_2a0;
  double local_298;
  double local_288;
  undefined8 local_278;
  double local_220;
  double dStack_218;
  double local_170;
  double dStack_168;
  double local_d0;
  double dStack_c8;
  double local_98;
  
  dVar4 = (double)_objc_msgSend_imageSize(param_1);
  if ((1.1920928955078125e-07 <= dVar4) && (1.1920928955078125e-07 <= in_d1)) {
    _objc_msgSend_scrollView(param_1,local_278);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar11 = in_d1;
    _objc_msgSend_setContentSize_(dVar4,uVar1,local_278);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    dVar5 = (double)_objc_msgSend_contentBounds(param_1,local_278);
    dVar6 = (double)_CGRectGetWidth(dVar5,dVar11,in_d2,in_d3);
    local_288 = (double)_CGRectGetHeight(dVar5,dVar11,in_d2,in_d3);
    local_288 = local_288 / in_d1;
    if (dVar6 / dVar4 < local_288) {
      local_288 = dVar6 / dVar4;
    }
    local_98 = local_288;
    local_220 = (double)(float)(int)(dVar4 * local_288);
    dStack_218 = (double)(float)(int)(in_d1 * local_288);
    dStack_c8 = *(double *)(PTR__CGSizeZero_001108e0 + 8);
    local_d0 = *(double *)PTR__CGSizeZero_001108e0;
    uVar2 = _objc_msgSend_hasAspectRatio(param_1,local_278);
    if ((uVar2 & 1) != 0) {
      dVar6 = (double)_objc_msgSend_aspectRatio(param_1,local_278);
      _objc_msgSend_aspectRatio(param_1,local_278);
      local_d0 = in_d3 * (dVar6 / local_288);
      dVar6 = in_d2 / local_d0;
      local_298 = in_d3 / in_d3;
      if (dVar6 < local_298) {
        local_298 = dVar6;
      }
      local_d0 = local_d0 * local_298;
      dStack_c8 = in_d3 * local_298;
      local_2a0 = local_d0 / dVar4;
      if (local_2a0 < dStack_c8 / in_d1) {
        local_2a0 = dStack_c8 / in_d1;
      }
      local_98 = local_2a0;
    }
    dVar4 = (double)(float)(int)(dVar4 * local_98);
    dVar6 = (double)(float)(int)(in_d1 * local_98);
    _objc_msgSend_scrollView(param_1,local_278);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setMinimumZoomScale_(local_98,uVar1,local_278);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    dVar7 = (double)_objc_msgSend_maximumZoomScale(param_1,local_278);
    _objc_msgSend_setBaseMaximumZoomScale_(local_98 * dVar7,param_1,local_278);
    _objc_msgSend_updateScrollViewMaximumZoomScale(param_1,local_278);
    uVar2 = _objc_msgSend_hasAspectRatio(param_1,local_278);
    local_170 = dVar4;
    dStack_168 = dVar6;
    if ((uVar2 & 1) != 0) {
      dStack_168 = dStack_c8;
      local_170 = local_d0;
    }
    dVar8 = (double)_CGRectGetWidth(dVar5,dVar11,in_d2,in_d3);
    dVar9 = (double)_CGRectGetHeight(dVar5,dVar11,in_d2,in_d3);
    dVar7 = dStack_168;
    _objc_msgSend_setCropBoxFrame_
              ((double)(float)(int)(dVar5 + (double)(float)(int)((dVar8 - local_170) * 0.5)),
               (double)(float)(int)(dVar11 + (double)(float)(int)((dVar9 - dStack_168) * 0.5)),
               local_170,param_1,local_278);
    _objc_msgSend_scrollView(param_1,local_278);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar10 = _objc_msgSend_minimumZoomScale(uVar1,local_278);
    _objc_msgSend_scrollView(param_1,local_278);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setZoomScale_(uVar10,uVar3,local_278);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_scrollView(param_1,local_278);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setContentSize_(dVar4,dVar6,uVar1,local_278);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    if ((local_170 < dVar4 - 1.1920928955078125e-07) ||
       (dVar8 = 1.1920928955078125e-07, dStack_168 < dVar6 - 1.1920928955078125e-07)) {
      dVar6 = (double)_CGRectGetMidX(dVar5,dVar11,in_d2,in_d3);
      dVar8 = (double)_CGRectGetMidY(dVar5,dVar11,in_d2);
      _objc_msgSend_scrollView(param_1,local_278);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setContentOffset_((double)-(float)(int)(dVar6 - dVar4 * 0.5),uVar1,local_278);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      dVar7 = in_d3;
    }
    _objc_msgSend_setCropBoxLastEditedAngle_(param_1,local_278,0);
    _objc_msgSend_captureStateForImageRotation(param_1,local_278);
    uVar2 = _objc_msgSend_resetAspectRatioEnabled(param_1,local_278);
    if ((uVar2 & 1) == 0) {
      _objc_msgSend_cropBoxFrame(param_1,local_278);
      local_220 = dVar8;
      dStack_218 = dVar7;
    }
    _objc_msgSend_setOriginalCropBoxSize_(local_220,param_1,local_278);
    _objc_msgSend_scrollView(param_1,local_278);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_contentOffset(uVar1,local_278);
    _objc_msgSend_setOriginalContentOffset_(uVar3,dStack_218,param_1,local_278);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_checkForCanReset(param_1,local_278);
    _objc_msgSend_matchForegroundToBackground(param_1,local_278);
  }
  return;
}

