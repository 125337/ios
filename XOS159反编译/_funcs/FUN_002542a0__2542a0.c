// FUN_002542a0 @0x2542a0


void FUN_002542a0(long param_1)



{

  undefined8 uVar1;

  dispatch_time_t dVar2;

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  long local_38;

  

  _objc_retain();

  if (param_1 != 0) {

    FUN_0029bee0(param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_00261b20();

    _objc_release(uVar1);

    dVar2 = _dispatch_time(0,300000000);

    local_58 = PTR___NSConcreteStackBlock_003886f0;

    local_50 = 0xc2000000;

    local_48 = FUN_00261d78;

    puStack_40 = &DAT_00388e60;

    _objc_retain(param_1);

    local_38 = param_1;

    _dispatch_after(dVar2,PTR___dispatch_main_q_00388740,&local_58);

    _objc_release(local_38);

  }

  _objc_release(param_1);

  return;

}




