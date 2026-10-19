// _WCMYBIBVideoBundle @0x81c74

void _WCMYBIBVideoBundle(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_WCMYBIBVideoBundle_onceToken;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global_22);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(_WCMYBIBVideoBundle_bundle);
  return;
}

