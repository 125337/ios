// activityViewControllerPlaceholderItem: @0xac634

/* Function Stack Size: 0x18 bytes */

ID WCMTOActivityCroppedImageProvider::activityViewControllerPlaceholderItem_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = _objc_alloc_init(&_OBJC_CLASS___UIImage);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

