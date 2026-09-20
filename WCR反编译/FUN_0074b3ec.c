// FUN_0074b3ec @ 0074b3ec

void FUN_0074b3ec(void)

{
  undefined8 uVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create
                     ("com.qimiao.wcrefine.small-signal.state",(dispatch_queue_attr_t)0x0);
  uVar1 = DAT_028cc770;
  DAT_028cc770 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

