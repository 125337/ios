// clampButtonFrame @0xc2964

/* Function Stack Size: 0x10 bytes */

CGRect WCMTOCropToolbar::clampButtonFrame(ID param_1,SEL param_2)

{
  CGRect CVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_80;
  
  _objc_msgSend_clampButton(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_bounds(uVar2,local_80);
  _objc_msgSend_clampButton(param_1,local_80);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_convertRect_fromView_(uVar4,param_1,local_80);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  CVar1.field0_0x0.field1_0x8 = (double)in_d1;
  CVar1.field0_0x0.field0_0x0 = (double)uVar4;
  CVar1.field1_0x10.field0_0x0 = (double)in_d2;
  CVar1.field1_0x10.field1_0x8 = in_d3;
  return CVar1;
}

