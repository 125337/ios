// initWithSize:title: @0xae26c

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCMTOCropViewControllerAspectRatioPreset::initWithSize_title_
          (WCMTOCropViewControllerAspectRatioPreset *this,ID param_1,SEL param_2,CGSize param_3,
          ID param_4)

{
  ID IVar1;
  WCMTOCropViewControllerAspectRatioPreset *local_48;
  class_t *local_40;
  undefined8 local_38;
  ID local_30;
  WCMTOCropViewControllerAspectRatioPreset *local_28;
  double local_20;
  double dStack_18;
  
  dStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  local_38 = 0;
  local_30 = param_1;
  local_28 = this;
  _objc_storeStrong(&local_38,param_2);
  local_48 = local_28;
  local_28 = (WCMTOCropViewControllerAspectRatioPreset *)0x0;
  local_40 = &objc::class_t::WCMTOCropViewControllerAspectRatioPreset;
  local_28 = (WCMTOCropViewControllerAspectRatioPreset *)_objc_msgSendSuper2(&local_48,"init");
  _objc_storeStrong(&local_28);
  if (local_28 != (WCMTOCropViewControllerAspectRatioPreset *)0x0) {
    *(double *)(local_28 + 0x18) = dStack_18;
    *(double *)(local_28 + 0x10) = local_20;
    _objc_storeStrong(local_28 + 8,local_38);
  }
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return IVar1;
}

