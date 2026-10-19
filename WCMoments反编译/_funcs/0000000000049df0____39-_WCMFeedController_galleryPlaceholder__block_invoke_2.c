// ___39-[WCMFeedController_galleryPlaceholder]_block_invoke_2 @0x49df0

void ___39__WCMFeedController_galleryPlaceholder__block_invoke_2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = param_1;
  _objc_msgSend_secondarySystemBackgroundColor(&_OBJC_CLASS___UIColor,local_90);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFill(uVar1,local_90);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = 0;
  uVar3 = 0x406e000000000000;
  uVar1 = 0x4072c00000000000;
  local_48 = _CGRectMake(0);
  local_40 = uVar2;
  local_38 = uVar3;
  local_30 = uVar1;
  _UIRectFill(local_48,uVar2,uVar3,uVar1);
  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_90,&cf_photo);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_tertiaryLabelColor(&_OBJC_CLASS___UIColor,local_90);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageWithTintColor_renderingMode_(uVar1,local_90,uVar2,1);
  local_50 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = local_50;
  uVar2 = 0x4060400000000000;
  uVar4 = 0x4044000000000000;
  uVar5 = 0x4041000000000000;
  uVar3 = _CGRectMake(0x4059000000000000);
  _objc_msgSend_drawInRect_(uVar3,uVar2,uVar4,uVar5,uVar1,local_90);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_20,0);
  return;
}

