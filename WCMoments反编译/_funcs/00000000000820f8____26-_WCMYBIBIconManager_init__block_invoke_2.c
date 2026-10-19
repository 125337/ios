// ___26-[WCMYBIBIconManager_init]_block_invoke_2 @0x820f8

void ___26__WCMYBIBIconManager_init__block_invoke_2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  
  _WCMYBIBDefaultBundle();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_ybib_imageNamed_bundle_(&_OBJC_CLASS___UIImage,local_40,&cf_wcm_ybib_save);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

