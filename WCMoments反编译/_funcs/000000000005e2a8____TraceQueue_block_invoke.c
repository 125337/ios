// ___TraceQueue_block_invoke @0x5e2a8

void ___TraceQueue_block_invoke(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create("WCMoments.diagnostics",(dispatch_queue_attr_t)0x0);
  uVar1 = _TraceQueue_queue;
  _TraceQueue_queue = pdVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

