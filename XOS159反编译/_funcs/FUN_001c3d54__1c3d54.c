// FUN_001c3d54 @0x1c3d54


void FUN_001c3d54(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  long local_38;

  

  _objc_retain();

  if (param_1 == 0) {

    lVar4 = 0;

  }

  else {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    lVar4 = param_1;

    if ((uVar3 & 1) == 0) {

      lVar4 = 0;

    }

  }

  _objc_retain(lVar4);

  iVar1 = FUN_00297960(&_OBJC_CLASS___NSThread);

  if (iVar1 == 0) {

    local_58 = PTR___NSConcreteStackBlock_003886f0;

    local_50 = 0xc2000000;

    local_48 = FUN_001c4778;

    puStack_40 = &DAT_00388e60;

    _objc_retain(lVar4);

    local_38 = lVar4;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

    _objc_release(local_38);

  }

  else {

    FUN_001c3e58(lVar4);

  }

  _objc_release(lVar4);

  _objc_release(param_1);

  return;

}




