// FUN_0002fc4c @0x2fc4c


void FUN_0002fc4c(long param_1,undefined8 param_2,undefined8 param_3)



{

  long lVar1;

  dispatch_time_t dVar2;

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  long local_48;

  undefined8 local_40;

  undefined8 local_38;

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  if ((param_1 != 0) && (lVar1 = FUN_00297fa0(param_2), lVar1 != 0)) {

    dVar2 = _dispatch_time(0,250000000);

    local_68 = PTR___NSConcreteStackBlock_003886f0;

    local_60 = 0xc2000000;

    local_58 = FUN_00085cac;

    puStack_50 = &DAT_0038a3c0;

    _objc_retain(param_1);

    local_48 = param_1;

    _objc_retain(param_2);

    local_40 = param_2;

    _objc_retain(param_3);

    local_38 = param_3;

    _dispatch_after(dVar2,PTR___dispatch_main_q_00388740,&local_68);

    _objc_release(local_38);

    _objc_release(local_40);

    _objc_release(local_48);

  }

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




