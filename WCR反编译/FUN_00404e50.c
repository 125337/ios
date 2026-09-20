// FUN_00404e50 @ 00404e50

void FUN_00404e50(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create("com.wcrefine.keyword-alert.state",(dispatch_queue_attr_t)0x0);
  uVar1 = DAT_028ca6f0;
  DAT_028ca6f0 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

