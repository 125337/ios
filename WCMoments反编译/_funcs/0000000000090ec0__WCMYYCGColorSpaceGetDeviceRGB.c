// _WCMYYCGColorSpaceGetDeviceRGB @0x90ec0

undefined8 _WCMYYCGColorSpaceGetDeviceRGB(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_WCMYYCGColorSpaceGetDeviceRGB_onceToken;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return _WCMYYCGColorSpaceGetDeviceRGB_space;
}

