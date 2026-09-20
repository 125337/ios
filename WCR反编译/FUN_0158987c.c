// FUN_0158987c @ 0158987c

void FUN_0158987c(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create("com.wcrefine.profilecard.chatrooms",(dispatch_queue_attr_t)0x0);
  uVar1 = DAT_028e3930;
  DAT_028e3930 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

