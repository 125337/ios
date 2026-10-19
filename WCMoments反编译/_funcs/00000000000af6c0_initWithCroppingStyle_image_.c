// initWithCroppingStyle:image: @0xaf6c0

/* Function Stack Size: 0x20 bytes */

ID WCMTOCropView::initWithCroppingStyle_image_(ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  undefined8 local_58;
  ID local_40;
  class_t *local_38;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = 0;
  local_38 = &objc::class_t::WCMTOCropView;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  local_18 = IVar1;
  _objc_storeStrong(&local_18);
  if (IVar1 != 0) {
    _objc_storeStrong(local_18 + (long)_image,local_30);
    *(long_long *)(local_18 + (long)_croppingStyle) = local_28;
    _objc_msgSend_setup(local_18,local_58);
  }
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

