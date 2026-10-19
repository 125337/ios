// contentBounds @0xbb380

/* Function Stack Size: 0x10 bytes */

CGRect __thiscall WCMTOCropView::contentBounds(WCMTOCropView *this,ID param_1,SEL param_2)

{
  CGRect CVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double in_d1;
  double in_d3;
  undefined8 local_178;
  
  dVar2 = (double)_objc_msgSend_cropViewPadding(this);
  _objc_msgSend_cropRegionInsets(this,local_178);
  dVar3 = (double)_objc_msgSend_cropViewPadding(this,local_178);
  dVar4 = (double)_objc_msgSend_cropRegionInsets(this,local_178);
  dVar3 = dVar3 + dVar4;
  uVar5 = _objc_msgSend_frame(this,local_178);
  dVar6 = (double)_CGRectGetWidth(uVar5);
  dVar7 = (double)_objc_msgSend_cropViewPadding(this,local_178);
  _objc_msgSend_cropRegionInsets(this,local_178);
  _objc_msgSend_cropRegionInsets(this,local_178);
  uVar5 = _objc_msgSend_frame(this,local_178);
  dVar8 = (double)_CGRectGetHeight(uVar5);
  dVar9 = (double)_objc_msgSend_cropViewPadding(this,local_178);
  dVar10 = (double)_objc_msgSend_cropRegionInsets(this,local_178);
  dVar9 = dVar10 + dVar9 * 2.0;
  _objc_msgSend_cropRegionInsets(this,local_178);
  CVar1.field0_0x0.field1_0x8 = dVar3;
  CVar1.field0_0x0.field0_0x0 = dVar2 + in_d1;
  CVar1.field1_0x10.field0_0x0 = dVar6 - (dVar4 + dVar7 * 2.0 + in_d3);
  CVar1.field1_0x10.field1_0x8 = dVar8 - (dVar9 + dVar10);
  return CVar1;
}

