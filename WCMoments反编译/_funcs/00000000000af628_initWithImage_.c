// initWithImage: @0xaf628

/* Function Stack Size: 0x18 bytes */

ID WCMTOCropView::initWithImage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  local_18 = 0;
  local_18 = _objc_msgSend_initWithCroppingStyle_image_(IVar1,local_50,0,local_28);
  IVar1 = (*(code *)PTR__objc_retain_00110460)();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

