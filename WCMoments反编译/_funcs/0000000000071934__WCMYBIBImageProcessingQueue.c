// _WCMYBIBImageProcessingQueue @0x71934

void _WCMYBIBImageProcessingQueue(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_WCMYBIBImageProcessingQueue_onceToken;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(_WCMYBIBImageProcessingQueue_queue);
  return;
}

