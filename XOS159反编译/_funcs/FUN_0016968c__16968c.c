// FUN_0016968c @0x16968c


void FUN_0016968c(undefined1 param_1)



{

  int iVar1;

  long lVar2;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  undefined1 local_28;

  

  local_48 = PTR___NSConcreteStackBlock_003886f0;

  local_40 = 0xc0000000;

  local_38 = FUN_00169734;

  puStack_30 = &DAT_0038d8d8;

  local_28 = param_1;

  lVar2 = _objc_retainBlock(&local_48);

  iVar1 = FUN_00297960(&_OBJC_CLASS___NSThread);

  if (iVar1 == 0) {

    _dispatch_async(PTR___dispatch_main_q_00388740,lVar2);

  }

  else {

    (**(code **)(lVar2 + 0x10))(lVar2);

  }

  _objc_release(lVar2);

  return;

}




