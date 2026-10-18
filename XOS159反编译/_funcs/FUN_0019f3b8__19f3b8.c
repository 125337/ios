// FUN_0019f3b8 @0x19f3b8


void FUN_0019f3b8(long param_1)



{

  long lVar1;

  undefined8 extraout_x1;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  long local_28;

  

  _objc_retain();

  if (param_1 != 0) {

    FUN_002a6520(param_1);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if ((lVar1 != 0) && (FUN_0018da3c(), DAT_003e95c8 == '\x01')) {

      local_48 = PTR___NSConcreteStackBlock_003886f0;

      local_40 = 0xc2000000;

      local_38 = FUN_0019f4f0;

      puStack_30 = &DAT_00388e60;

      _objc_retain(param_1);

      local_28 = param_1;

      FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1,&local_48);

      _objc_release(local_28);

    }

  }

  _objc_release(param_1);

  return;

}




