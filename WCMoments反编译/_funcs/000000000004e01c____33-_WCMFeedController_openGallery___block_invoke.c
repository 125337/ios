// ___33-[WCMFeedController_openGallery:]_block_invoke @0x4e01c

void ___33__WCMFeedController_openGallery___block_invoke(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  
  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,param_2,&cf_arrow_triangle_2_circlepath);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_40);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageWithTintColor_renderingMode_(uVar1,local_40,uVar2,1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

