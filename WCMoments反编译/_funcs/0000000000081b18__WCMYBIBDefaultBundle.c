// _WCMYBIBDefaultBundle @0x81b18

void _WCMYBIBDefaultBundle(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_WCMYBIBDefaultBundle_onceToken;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(_WCMYBIBDefaultBundle_bundle);
  return;
}

