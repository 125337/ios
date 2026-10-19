// _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT @0xaeb64

void _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (*(code *)PTR__objc_retain_00110460)(&cf_WCMTOCropViewControllerBundle);
  local_28 = 0;
  uVar1 = _objc_opt_class(local_18);
  _objc_msgSend_bundleForClass_(&_OBJC_CLASS___NSBundle,local_40,uVar1);
  local_30 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_URLForResource_withExtension_(local_30,local_40,local_20,&cf_bundle);
  local_38 = _objc_retainAutoreleasedReturnValue();
  if (local_38 == 0) {
    _objc_storeStrong(&local_28,local_30);
  }
  else {
    uVar1 = _objc_alloc(&_OBJC_CLASS___NSBundle);
    uVar2 = _objc_msgSend_initWithURL_(uVar1,local_40,local_38);
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

