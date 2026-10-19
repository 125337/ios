// -[NSObject(WCMYBIBImageCache)_setWcm_ybib_imageCache:] @0x6ace0

void __NSObject_WCMYBIBImageCache__setWcm_ybib_imageCache__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_setAssociatedObject(local_18,_WCMYBIBImageCacheKey,local_28,1);
  _objc_storeStrong(&local_28,0);
  return;
}

