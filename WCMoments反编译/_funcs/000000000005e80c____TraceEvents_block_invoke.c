// ___TraceEvents_block_invoke @0x5e80c

void ___TraceEvents_block_invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  uVar1 = _TraceEvents_events;
  _TraceEvents_events = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

