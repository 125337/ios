// imageViewFrame @0xb7700

/* Function Stack Size: 0x10 bytes */

CGRect WCMTOCropView::imageViewFrame(ID param_1,SEL param_2)

{
  CGRect CVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double in_d1;
  undefined8 local_80;
  
  _objc_msgSend_scrollView(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)_objc_msgSend_contentOffset(uVar2,local_80);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_scrollView(param_1,local_80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentOffset(uVar2,local_80);
  dVar4 = -in_d1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_scrollView(param_1,local_80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend_contentSize(uVar2,local_80);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  CVar1.field0_0x0.field1_0x8 = dVar4;
  CVar1.field0_0x0.field0_0x0 = -dVar3;
  CVar1.field1_0x10.field0_0x0 = (double)uVar5;
  CVar1.field1_0x10.field1_0x8 = in_d1;
  return CVar1;
}

