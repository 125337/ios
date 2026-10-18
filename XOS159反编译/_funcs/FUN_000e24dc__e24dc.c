// FUN_000e24dc @0xe24dc


void FUN_000e24dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  ulong uVar1;

  undefined1 auVar2 [16];

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  undefined8 local_28;

  

  _objc_retain(param_4);

  uVar1 = FUN_000e2584();

  if ((uVar1 & 1) != 0) {

    auVar2 = _objc_opt_class(&_OBJC_CLASS___UIImage);

    local_48 = PTR___NSConcreteStackBlock_003886f0;

    local_40 = 0xc0000000;

    local_38 = FUN_000e2604;

    puStack_30 = &DAT_0038bfd0;

    local_28 = param_1;

    FUN_00298240(param_4,auVar2._8_8_,auVar2._0_8_,&local_48);

    _objc_unsafeClaimAutoreleasedReturnValue();

  }

  _objc_release(param_4);

  return;

}




