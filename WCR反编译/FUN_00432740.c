// FUN_00432740 @ 00432740

void FUN_00432740(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create
                     ("com.qimiao.wcrefine.layoutsize.config",(dispatch_queue_attr_t)0x0);
  uVar1 = DAT_028ca828;
  DAT_028ca828 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  FUN_00432820();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  FUN_00432eb4();
  return;
}

