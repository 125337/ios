// _TraceEvents @0x5e74c

void _TraceEvents(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_TraceEvents_once;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global_2924);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(_TraceEvents_events);
  return;
}

