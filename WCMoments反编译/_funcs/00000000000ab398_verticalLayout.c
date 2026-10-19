// verticalLayout @0xab398

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::verticalLayout(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_88;
  
  _objc_msgSend_view(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_bounds(uVar1,local_88);
  dVar3 = (double)_CGRectGetWidth(uVar2);
  _objc_msgSend_view(param_1,local_88);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_bounds(uVar2,local_88);
  dVar5 = (double)_CGRectGetHeight(uVar4,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return (uint)(dVar3 < dVar5);
}

