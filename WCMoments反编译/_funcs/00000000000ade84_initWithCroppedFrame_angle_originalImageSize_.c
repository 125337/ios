// initWithCroppedFrame:angle:originalImageSize: @0xade84

/* Function Stack Size: 0x48 bytes */

ID WCMTOCroppedImageAttributes::initWithCroppedFrame_angle_originalImageSize_
             (ID param_1,SEL param_2,CGRect param_3,long_long param_4,CGSize param_5)

{
  long lVar1;
  ID IVar2;
  ID local_68;
  class_t *local_60;
  long_long local_58;
  SEL local_50;
  long local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  
  dStack_38 = param_5.field1_0x8;
  local_40 = param_5.field0_0x0;
  dStack_18 = param_3.field1_0x10.field1_0x8;
  local_20 = param_3.field1_0x10.field0_0x0;
  dStack_28 = param_3.field0_0x0.field1_0x8;
  local_30 = param_3.field0_0x0.field0_0x0;
  local_48 = 0;
  local_60 = &objc::class_t::WCMTOCroppedImageAttributes;
  local_68 = param_1;
  local_58 = param_4;
  local_50 = param_2;
  lVar1 = _objc_msgSendSuper2(&local_68,"init");
  local_48 = lVar1;
  _objc_storeStrong(&local_48);
  if (lVar1 != 0) {
    *(long_long *)(local_48 + 8) = local_58;
    *(double *)(local_48 + 0x28) = dStack_28;
    *(double *)(local_48 + 0x20) = local_30;
    *(double *)(local_48 + 0x38) = dStack_18;
    *(double *)(local_48 + 0x30) = local_20;
    *(double *)(local_48 + 0x18) = dStack_38;
    *(double *)(local_48 + 0x10) = local_40;
  }
  IVar2 = (*(code *)PTR__objc_retain_00110460)(local_48);
  _objc_storeStrong(&local_48,0);
  return IVar2;
}

