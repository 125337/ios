// FUN_001552b0 @0x1552b0


void FUN_001552b0(undefined8 param_1)



{

  long lVar1;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  long local_28;

  

  FUN_00136604();

  FUN_00298700(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    local_48 = PTR___NSConcreteStackBlock_003886f0;

    local_40 = 0xc2000000;

    local_38 = FUN_00165dd4;

    puStack_30 = &DAT_00388e60;

    _objc_retain(lVar1);

    local_28 = lVar1;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_48);

    _objc_release(local_28);

  }

  _objc_release(lVar1);

  return;

}




