// imageCropFrame @0xb67bc

/* Function Stack Size: 0x10 bytes */

CGRect __thiscall WCMTOCropView::imageCropFrame(WCMTOCropView *this,ID param_1,SEL param_2)

{
  CGRect CVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double in_d1;
  double dVar9;
  double in_d2;
  double in_d3;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_180;
  double dStack_28;
  
  dVar3 = (double)_objc_msgSend_imageSize(this);
  dVar8 = in_d1;
  _objc_msgSend_scrollView(this,local_180);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar4 = (double)_objc_msgSend_contentSize(uVar2,local_180);
  dVar9 = dVar8;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_cropBoxFrame(this,local_180);
  _objc_msgSend_scrollView(this,local_180);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)_objc_msgSend_contentOffset(uVar2,local_180);
  dVar7 = dVar9;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_scrollView(this,local_180);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar6 = (double)_objc_msgSend_contentInset(uVar2,local_180);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_198 = in_d1 / dVar8;
  if (dVar3 / dVar4 < local_198) {
    local_198 = dVar3 / dVar4;
  }
  dVar7 = (double)(float)(int)(((double)(float)(int)dVar5 + dVar7) * (dVar3 / dVar4));
  local_1a0 = dVar3;
  if (dVar7 < dVar3) {
    local_1a0 = dVar7;
  }
  if (local_1a0 <= 0.0) {
    local_1a8 = 0.0;
  }
  else {
    local_1a8 = local_1a0;
  }
  dVar8 = (double)(float)(int)(((double)(float)(int)dVar9 + dVar6) * (in_d1 / dVar8));
  local_1b0 = in_d1;
  if (dVar8 < in_d1) {
    local_1b0 = dVar8;
  }
  if (local_1b0 <= 0.0) {
    local_1b8 = 0.0;
  }
  else {
    local_1b8 = local_1b0;
  }
  local_1c0 = (double)(float)(int)(in_d2 * local_198);
  if (dVar3 - local_1a8 < local_1c0) {
    local_1c0 = dVar3 - local_1a8;
  }
  if ((double)(long)in_d2 == (double)(long)in_d3) {
    dStack_28 = local_1c0;
  }
  else {
    dStack_28 = (double)(float)(int)(in_d3 * local_198);
  }
  local_1c8 = in_d1 - local_1b8;
  if (dStack_28 <= local_1c8) {
    local_1c8 = dStack_28;
  }
  CVar1.field0_0x0.field1_0x8 = local_1b8;
  CVar1.field0_0x0.field0_0x0 = local_1a8;
  CVar1.field1_0x10.field0_0x0 = local_1c0;
  CVar1.field1_0x10.field1_0x8 = local_1c8;
  return CVar1;
}

