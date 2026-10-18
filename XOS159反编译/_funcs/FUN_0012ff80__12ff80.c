// FUN_0012ff80 @0x12ff80


void FUN_0012ff80(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  long local_38;

  

  _objc_retain();

  if ((param_1 != 0) && (uVar1 = FUN_0012ec80(param_1), (uVar1 & 1) != 0)) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6af8);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar1 = FUN_002924e0();

    if ((uVar1 & 1) == 0) {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e6af8,PTR____kCFBooleanTrue_00388320,1);

      local_58 = PTR___NSConcreteStackBlock_003886f0;

      local_50 = 0xc2000000;

      local_48 = FUN_00132fe0;

      puStack_40 = &DAT_00388e60;

      _objc_retain(param_1);

      local_38 = param_1;

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

      _objc_release(local_38);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  return;

}




