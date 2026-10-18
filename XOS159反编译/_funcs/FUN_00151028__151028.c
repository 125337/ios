// FUN_00151028 @0x151028


void FUN_00151028(undefined8 param_1)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  undefined8 local_38;

  

  if ((DAT_003e89e2 == '\x01') && (iVar1 = FUN_00297b80(), iVar1 != 0)) {

    FUN_002a6220(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar2);

    if (lVar3 != 0) {

      local_58 = PTR___NSConcreteStackBlock_003886f0;

      local_50 = 0xc0000000;

      local_48 = FUN_0015967c;

      puStack_40 = &DAT_0038abe0;

      local_38 = param_1;

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

    }

  }

  return;

}




