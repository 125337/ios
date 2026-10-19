// ___VideoTraceEvents_block_invoke @0x5e7c0

void ___VideoTraceEvents_block_invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  uVar1 = _VideoTraceEvents_events;
  _VideoTraceEvents_events = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

