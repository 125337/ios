// FUN_000ac6e4 @0xac6e4


void FUN_000ac6e4(undefined8 param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  undefined8 local_28;

  

  _objc_retain();

  uVar1 = FUN_000a89d8();

  if ((uVar1 & 1) != 0) {

    uVar2 = _objc_getClass("BaseMsgContentViewController");

    uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar1 & 1) != 0) {

      local_48 = PTR___NSConcreteStackBlock_003886f0;

      local_40 = 0xc2000000;

      local_38 = FUN_000ac7fc;

      puStack_30 = &DAT_00388e60;

      _objc_retain(param_1);

      local_28 = param_1;

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_48);

      _objc_release(local_28);

    }

  }

  _objc_release(param_1);

  return;

}




