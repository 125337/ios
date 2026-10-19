// imageCropFrame @0xab328

/* Function Stack Size: 0x10 bytes */

CGRect WCMTOCropViewController::imageCropFrame(ID param_1,SEL param_2)

{
  CGRect CVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_50;
  
  _objc_msgSend_cropView(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_imageCropFrame(uVar2,local_50);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  CVar1.field0_0x0.field1_0x8 = (double)in_d1;
  CVar1.field0_0x0.field0_0x0 = (double)uVar3;
  CVar1.field1_0x10.field0_0x0 = (double)in_d2;
  CVar1.field1_0x10.field1_0x8 = in_d3;
  return CVar1;
}

