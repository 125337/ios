// _WCMYYCGColorSpaceGetDeviceGray @0x90f64

undefined8 _WCMYYCGColorSpaceGetDeviceGray(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_WCMYYCGColorSpaceGetDeviceGray_onceToken;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global_1);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return _WCMYYCGColorSpaceGetDeviceGray_space;
}

