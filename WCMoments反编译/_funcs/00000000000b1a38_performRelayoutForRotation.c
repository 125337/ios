// performRelayoutForRotation @0xb1a38

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::performRelayoutForRotation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double in_d1;
  double in_d2;
  double in_d3;
  double local_450;
  double local_448;
  double local_400;
  double local_3e8;
  double local_390;
  undefined8 local_388;
  
  _objc_msgSend_cropBoxFrame(param_1);
  dVar7 = in_d2;
  dVar6 = in_d3;
  dVar3 = (double)_objc_msgSend_contentBounds(param_1,local_388);
  local_390 = dVar6 / in_d3;
  if (dVar7 / in_d2 < local_390) {
    local_390 = dVar7 / in_d2;
  }
  _objc_msgSend_scrollView(param_1,local_388);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar4 = (double)_objc_msgSend_minimumZoomScale(uVar1,local_388);
  _objc_msgSend_setMinimumZoomScale_(dVar4 * local_390,uVar1,local_388);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dVar4 = (double)_objc_msgSend_baseMaximumZoomScale(param_1,local_388);
  _objc_msgSend_setBaseMaximumZoomScale_(dVar4 * local_390,param_1,local_388);
  _objc_msgSend_updateScrollViewMaximumZoomScale(param_1,local_388);
  _objc_msgSend_scrollView(param_1,local_388);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar4 = (double)_objc_msgSend_zoomScale(uVar1,local_388);
  _objc_msgSend_setZoomScale_(dVar4 * local_390,uVar1,local_388);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dVar4 = (double)(float)(int)(in_d2 * local_390);
  dVar5 = (double)(float)(int)(in_d3 * local_390);
  dVar6 = (double)(float)(int)(in_d1 + (dVar6 - dVar5) * 0.5);
  _objc_msgSend_setCropBoxFrame_
            ((double)(float)(int)(dVar3 + (dVar7 - dVar4) * 0.5),param_1,local_388);
  _objc_msgSend_captureStateForImageRotation(param_1,local_388);
  uVar1 = _objc_msgSend_rotationBoundFrame(param_1,local_388);
  dVar7 = (double)_CGRectGetMidX(uVar1);
  uVar1 = _objc_msgSend_rotationBoundFrame(param_1,local_388);
  dVar6 = (double)_CGRectGetMidY(uVar1,dVar6,dVar4);
  dVar4 = (double)_objc_msgSend_rotationContentOffset(param_1,local_388);
  dVar4 = dVar4 + dVar7;
  _objc_msgSend_rotationContentOffset(param_1,local_388);
  dVar3 = (double)_objc_msgSend_rotationContentSize(param_1,local_388);
  dVar4 = dVar4 / dVar3;
  local_450 = (double)_objc_msgSend_rotationContentSize(param_1,local_388);
  uVar1 = _objc_msgSend_contentBounds(param_1,local_388);
  dVar8 = (double)_CGRectGetMidX(uVar1);
  uVar1 = _objc_msgSend_contentBounds(param_1,local_388);
  local_3e8 = (double)_CGRectGetMidY(uVar1);
  _objc_msgSend_scrollView(param_1,local_388);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar9 = (double)_objc_msgSend_contentSize(uVar1,local_388);
  dVar9 = dVar9 * dVar4;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_scrollView(param_1,local_388);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentSize(uVar1,local_388);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dVar8 = (double)(float)(int)(dVar9 - dVar8);
  dVar7 = (double)(float)(int)(dVar4 * ((dVar7 + dVar6) / dVar3) - local_3e8);
  _objc_msgSend_scrollView(param_1,local_388);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentInset(uVar1,local_388);
  local_3e8 = -local_3e8;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (local_3e8 < dVar8) {
    local_3e8 = dVar8;
  }
  _objc_msgSend_scrollView(param_1,local_388);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_400 = (double)_objc_msgSend_contentInset(uVar1,local_388);
  local_400 = -local_400;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (local_400 < dVar7) {
    local_400 = dVar7;
  }
  _objc_msgSend_scrollView(param_1,local_388);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_448 = (double)_objc_msgSend_contentSize(uVar1,local_388);
  _objc_msgSend_bounds(param_1,local_388);
  _objc_msgSend_scrollView(param_1,local_388);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentInset(uVar2,local_388);
  local_450 = local_450 - dVar5;
  local_448 = local_448 - local_450;
  dVar7 = dVar5;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_scrollView(param_1,local_388);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentSize(uVar1,local_388);
  _objc_msgSend_bounds(param_1,local_388);
  _objc_msgSend_scrollView(param_1,local_388);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentInset(uVar2,local_388);
  local_450 = local_450 - (dVar7 - dVar5);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (local_3e8 < local_448) {
    local_448 = local_3e8;
  }
  if (local_400 < local_450) {
    local_450 = local_400;
  }
  _objc_msgSend_scrollView(param_1,local_388);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setContentOffset_(local_448,local_450,uVar1,local_388);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_matchForegroundToBackground(param_1,local_388);
  return;
}

