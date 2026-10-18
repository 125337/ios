// FUN_001bc5b8 @0x1bc5b8


void FUN_001bc5b8(void)



{

  dispatch_time_t dVar1;

  double dVar2;

  

  if ((DAT_003e9789 & 1) == 0) {

    FUN_001bc4e0();

  }

  if (((DAT_003e9788 == '\x01') && (dVar2 = (double)_CACurrentMediaTime(), (DAT_003e978a & 1) == 0))

     && (0.12 <= dVar2 - DAT_003e9790)) {

    DAT_003e978a = 1;

    dVar1 = _dispatch_time(0,80000000);

    _dispatch_after(dVar1,PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038e7f0);

    return;

  }

  return;

}




