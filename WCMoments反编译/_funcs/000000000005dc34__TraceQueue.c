// _TraceQueue @0x5dc34

void _TraceQueue(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_TraceQueue_once;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global_2895);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(_TraceQueue_queue);
  return;
}

