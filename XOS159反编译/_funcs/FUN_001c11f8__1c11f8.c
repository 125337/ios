// FUN_001c11f8 @0x1c11f8


void FUN_001c11f8(void)



{

  dispatch_time_t dVar1;

  

  if ((DAT_003e97f8 & 1) != 0) {

    return;

  }

  DAT_003e97f8 = 1;

  dVar1 = _dispatch_time(0,450000000);

  _dispatch_after(dVar1,PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038e950);

  return;

}




