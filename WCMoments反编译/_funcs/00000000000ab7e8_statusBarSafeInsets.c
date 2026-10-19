// statusBarSafeInsets @0xab7e8

/* Function Stack Size: 0x10 bytes */

UIEdgeInsets WCMTOCropViewController::statusBarSafeInsets(ID param_1,SEL param_2)

{
  UIEdgeInsets UVar1;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_68;
  
  _objc_msgSend_view(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_safeAreaInsets(uVar2,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = _objc_msgSend_statusBarHeight(param_1,local_68);
  UVar1.field1_0x8 = (double)in_d1;
  UVar1.field0_0x0 = (double)uVar2;
  UVar1.field2_0x10 = (double)in_d2;
  UVar1.field3_0x18 = in_d3;
  return UVar1;
}

