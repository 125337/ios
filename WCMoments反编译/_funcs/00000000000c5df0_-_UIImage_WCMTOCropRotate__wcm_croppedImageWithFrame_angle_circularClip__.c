// -[UIImage(WCMTOCropRotate)_wcm_croppedImageWithFrame:angle:circularClip:] @0xc5df0

void __UIImage_WCMTOCropRotate__wcm_croppedImageWithFrame_angle_circularClip__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  byte local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_59 = param_8;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  local_68 = _objc_opt_new(&_OBJC_CLASS___UIGraphicsImageRendererFormat);
  iVar2 = ___isPlatformVersionAtLeast(2,0x11,0);
  if ((iVar2 != 0) &&
     (uVar3 = _objc_msgSend_isHighDynamicRange(local_48,local_e8), (uVar3 & 1) != 0)) {
    _objc_msgSend_traitCollectionWithImageDynamicRange_(&_OBJC_CLASS___UITraitCollection,local_e8,2)
    ;
    local_70 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_formatForTraitCollection_
              (&_OBJC_CLASS___UIGraphicsImageRendererFormat,local_e8,local_70);
    local_78 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_supportsHighDynamicRange(local_78,local_e8);
    if ((uVar3 & 1) != 0) {
      _objc_storeStrong(&local_68,local_78);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  uVar3 = _objc_msgSend_hasAlpha(local_48,local_e8);
  bVar1 = 0;
  if ((uVar3 & 1) == 0) {
    bVar1 = local_59 ^ 1;
  }
  _objc_msgSend_setOpaque_(local_68,local_e8,bVar1 & 1);
  _objc_msgSend_scale(local_48,local_e8);
  _objc_msgSend_setScale_(local_68,local_e8);
  uVar4 = _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);
  uVar4 = _objc_msgSend_initWithSize_format_(local_30,uStack_28,uVar4,local_e8,local_68);
  local_e0 = PTR___NSConcreteStackBlock_001104f0;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = 
  ___73__UIImage_WCMTOCropRotate__wcm_croppedImageWithFrame_angle_circularClip___block_invoke;
  local_c8 = &___block_descriptor_81_e8_32s_e40_v16__0__UIGraphicsImageRendererContext_8l;
  local_90 = local_59 & 1;
  uStack_b0 = uStack_38;
  local_b8 = local_40;
  uStack_a0 = uStack_28;
  local_a8 = local_30;
  local_98 = local_58;
  local_80 = uVar4;
  local_c0 = (*(code *)PTR__objc_retain_00110460)(local_48);
  _objc_msgSend_imageWithActions_(uVar4,local_e8,&local_e0);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  local_88 = uVar4;
  _objc_retainAutorelease();
  uVar4 = _objc_msgSend_CGImage(uVar4,local_e8);
  _objc_msgSend_scale(local_48,local_e8);
  _objc_msgSend_imageWithCGImage_scale_orientation_(&_OBJC_CLASS___UIImage,local_e8,uVar4,0);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

