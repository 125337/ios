// initWithImage:cropFrame:angle:circular: @0xac4b8

/* Function Stack Size: 0x44 bytes */

ID WCMTOActivityCroppedImageProvider::initWithImage_cropFrame_angle_circular_
             (ID param_1,SEL param_2,ID param_3,CGRect param_4,long_long param_5,bool param_6)

{
  double *pdVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_68;
  class_t *local_60;
  byte local_51;
  long_long local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  
  dStack_18 = param_4.field1_0x10.field1_0x8;
  local_20 = param_4.field1_0x10.field0_0x0;
  dStack_28 = param_4.field0_0x0.field1_0x8;
  local_30 = param_4.field0_0x0.field0_0x0;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  IVar3 = local_38;
  local_51 = (byte)param_6;
  local_50 = param_5;
  uVar2 = _objc_opt_new(&_OBJC_CLASS___UIImage);
  local_38 = 0;
  local_68 = IVar3;
  local_60 = &objc::class_t::WCMTOActivityCroppedImageProvider;
  IVar3 = _objc_msgSendSuper2(&local_68,"initWithPlaceholderItem:");
  local_38 = IVar3;
  _objc_storeStrong(&local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (IVar3 != 0) {
    _objc_storeStrong(local_38 + (long)_image,local_48);
    pdVar1 = (double *)(local_38 + (long)_cropFrame);
    pdVar1[1] = dStack_28;
    *pdVar1 = local_30;
    pdVar1[3] = dStack_18;
    pdVar1[2] = local_20;
    *(long_long *)(local_38 + (long)_angle) = local_50;
    *(byte *)(local_38 + (long)_circular) = local_51 & 1;
  }
  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return IVar3;
}

