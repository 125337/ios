// _VideoTraceEvents @0x5e6d8

void _VideoTraceEvents(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_VideoTraceEvents_once;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global_2923);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(_VideoTraceEvents_events);
  return;
}

