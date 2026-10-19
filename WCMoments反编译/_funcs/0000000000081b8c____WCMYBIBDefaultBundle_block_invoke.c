// ___WCMYBIBDefaultBundle_block_invoke @0x81b8c

void ___WCMYBIBDefaultBundle_block_invoke(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  uVar1 = _NSClassFromString();
  _objc_msgSend_bundleForClass_(&_OBJC_CLASS___NSBundle,local_50,uVar1);
  local_28 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_pathForResource_ofType_(local_28,local_50,&cf_WCMYBImageBrowser,&cf_bundle);
  local_30 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bundleWithPath_(&_OBJC_CLASS___NSBundle,local_50,local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _WCMYBIBDefaultBundle_bundle;
  _WCMYBIBDefaultBundle_bundle = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

