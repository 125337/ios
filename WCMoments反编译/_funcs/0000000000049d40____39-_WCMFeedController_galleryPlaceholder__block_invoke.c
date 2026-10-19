// ___39-[WCMFeedController_galleryPlaceholder]_block_invoke @0x49d40

void ___39__WCMFeedController_galleryPlaceholder__block_invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  
  uVar1 = _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);
  uVar2 = 0x4072c00000000000;
  uVar3 = _CGSizeMake(0x406e000000000000);
  uVar2 = _objc_msgSend_initWithSize_(uVar3,uVar2,uVar1,local_40);
  _objc_msgSend_imageWithActions_(uVar2,local_40,&___block_literal_global_2036);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _galleryPlaceholder_image;
  _galleryPlaceholder_image = uVar3;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

