// cropBoxAspectRatioIsPortrait @0xb6744

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::cropBoxAspectRatioIsPortrait(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  uVar1 = _objc_msgSend_cropBoxFrame(param_1);
  dVar2 = (double)_CGRectGetWidth(uVar1,in_d1,in_d2,in_d3);
  dVar3 = (double)_CGRectGetHeight(uVar1,in_d1,in_d2,in_d3);
  return (bool)(dVar2 < dVar3);
}

