// FUN_0109a050 @ 0109a050

void FUN_0109a050(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create("wcr.le.sendable",(dispatch_queue_attr_t)0x0);
  uVar1 = DAT_028e32c0;
  DAT_028e32c0 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

