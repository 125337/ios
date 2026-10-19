// ___52-[WCMTOCropView_moveCroppedContentToCenterAnimated:]_block_invoke @0xb83dc

void ___52__WCMTOCropView_moveCroppedContentToCenterAnimated___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double local_1b0;
  double local_190;
  double local_140;
  undefined8 local_110;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  local_38 = _objc_loadWeakRetained(param_1 + 0x28);
  _objc_msgSend_setDisableForgroundMatching_(local_38,local_110,1);
  if ((*(double *)(param_1 + 0x30) < 0.9999998807907104) ||
     (1.0000001192092896 < *(double *)(param_1 + 0x30))) {
    _objc_msgSend_scrollView(local_38,local_110);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar4 = (double)_objc_msgSend_zoomScale(uVar1,local_110);
    _objc_msgSend_setZoomScale_(dVar4 * *(double *)(param_1 + 0x30),uVar1,local_110);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_scrollView(local_38,local_110);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar4 = (double)_objc_msgSend_maximumZoomScale(uVar1,local_110);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_scrollView(local_38,local_110);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_140 = (double)_objc_msgSend_zoomScale(uVar1,local_110);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    if (dVar4 < local_140) {
      local_140 = dVar4;
    }
    _objc_msgSend_scrollView(local_38,local_110);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setZoomScale_(local_140,uVar1,local_110);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_msgSend_scrollView(local_38,local_110);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar4 = (double)_objc_msgSend_zoomScale(uVar1,local_110);
  _objc_msgSend_scrollView(local_38,local_110);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)_objc_msgSend_maximumZoomScale(uVar2,local_110);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (dVar4 < dVar5 - 1.1920928955078125e-07) {
    dVar4 = (double)_CGRectGetMaxX(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                                   *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    _objc_msgSend_scrollView(local_38,local_110);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)_objc_msgSend_contentSize(uVar1,local_110);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    local_190 = *(double *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x20);
    if (-dVar4 + dVar5 < local_190) {
      local_190 = -dVar4 + dVar5;
    }
    *(double *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x20) = local_190;
    dVar5 = *(double *)(param_1 + 0x40);
    dVar4 = (double)_CGRectGetMaxY(*(undefined8 *)(param_1 + 0x38),dVar5,
                                   *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    _objc_msgSend_scrollView(local_38,local_110);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_contentSize(uVar1,local_110);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    local_1b0 = *(double *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    if (-dVar4 + dVar5 < local_1b0) {
      local_1b0 = -dVar4 + dVar5;
    }
    *(double *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) = local_1b0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    _objc_msgSend_scrollView(local_38,local_110);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setContentOffset_(uVar2,uVar6,uVar1,local_110);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_msgSend_setCropBoxFrame_
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),local_38,local_110);
  _objc_msgSend_setDisableForgroundMatching_(local_38,local_110,0);
  _objc_msgSend_matchForegroundToBackground(local_38,local_110);
  _objc_storeStrong(&local_38,0);
  return;
}

