// updateToImageCropFrame: @0xb45a8

/* Function Stack Size: 0x30 bytes */

void WCMTOCropView::updateToImageCropFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_238;
  double local_210;
  undefined8 local_1f8;
  
  dVar11 = param_3.field1_0x10.field0_0x0;
  dVar12 = param_3.field1_0x10.field1_0x8;
  _objc_msgSend_scrollView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar4 = (double)_objc_msgSend_minimumZoomScale(uVar1,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dVar5 = param_3.field0_0x0.field0_0x0 * dVar4;
  dVar6 = param_3.field0_0x0.field1_0x8 * dVar4;
  dVar7 = param_3.field1_0x10.field0_0x0 * dVar4;
  dVar8 = param_3.field1_0x10.field1_0x8 * dVar4;
  uVar1 = _objc_msgSend_contentBounds(param_1,local_1f8);
  dVar9 = dVar11 / dVar7;
  local_210 = dVar12 / dVar8;
  if (dVar9 < local_210) {
    local_210 = dVar9;
  }
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_238 = (double)_objc_msgSend_maximumZoomScale(uVar2,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar9 = (double)_objc_msgSend_minimumZoomScale(uVar2,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (local_238 < dVar9 * local_210) {
    local_238 = dVar9 * local_210;
  }
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setMaximumZoomScale_(local_238,uVar2,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar10 = (double)_objc_msgSend_minimumZoomScale(uVar2,local_1f8);
  dVar9 = local_210;
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setZoomScale_(dVar10 * local_210,uVar3,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar10 = (double)_objc_msgSend_contentSize(uVar2,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  dVar9 = (double)(float)(int)dVar9;
  uVar3 = _CGSizeMake((double)(float)(int)dVar10);
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setContentSize_(uVar3,dVar9,uVar2,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  dVar9 = (double)_CGRectGetMidX(uVar1,dVar4,dVar11,dVar12);
  dVar11 = (double)_CGRectGetMidY(uVar1,dVar4,dVar11,dVar12);
  dVar11 = (double)(float)(int)(dVar11 - (double)(float)(int)(dVar8 * local_210) * 0.5);
  _objc_msgSend_setCropBoxFrame_
            ((double)(float)(int)(dVar9 - (double)(float)(int)(dVar7 * local_210) * 0.5),param_1,
             local_1f8);
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentInset(uVar1,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar12 = (double)_objc_msgSend_contentInset(uVar1,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_scrollView(param_1,local_1f8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setContentOffset_
            ((double)(float)(int)(dVar5 * local_210 - dVar11),
             (double)(float)(int)(dVar6 * local_210 - dVar12),uVar1,local_1f8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

