// FUN_001a9dbc @ 001a9dbc

void FUN_001a9dbc(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create("com.wcrefine.wxid-group-index",(dispatch_queue_attr_t)0x0);
  uVar1 = DAT_028c8a78;
  DAT_028c8a78 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

