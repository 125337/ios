// FUN_000e0798 @ 000e0798

void FUN_000e0798(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create("wcr.chat-member-file",(dispatch_queue_attr_t)0x0);
  uVar1 = DAT_028c8380;
  DAT_028c8380 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

