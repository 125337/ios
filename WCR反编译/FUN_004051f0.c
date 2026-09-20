// FUN_004051f0 @ 004051f0

void FUN_004051f0(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create("com.wcrefine.keyword-alert.queue",(dispatch_queue_attr_t)0x0);
  uVar1 = DAT_028ca748;
  DAT_028ca748 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

