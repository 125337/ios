// wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation: @0x7b27c

/* Function Stack Size: 0x38 bytes */

CGRect WCMYBIBImageData::wcm_yb_imageViewFrameWithContainerSize_imageSize_orientation_
                 (ID param_1,SEL param_2,CGSize param_3,CGSize param_4,long_long param_5)

{
  CGRect CVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_78;
  
  dVar6 = param_4.field1_0x8;
  dVar5 = param_4.field0_0x0;
  dVar4 = param_3.field1_0x8;
  _objc_msgSend_layout(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_wcm_yb_imageViewFrameWithContainerSize_imageSize_orientation_
                    (param_3.field0_0x0,uVar2,local_78,param_5);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  CVar1.field0_0x0.field1_0x8 = dVar4;
  CVar1.field0_0x0.field0_0x0 = (double)uVar3;
  CVar1.field1_0x10.field0_0x0 = dVar5;
  CVar1.field1_0x10.field1_0x8 = dVar6;
  return CVar1;
}

