// FUN_00229ba0 @0x229ba0


void FUN_00229ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  dispatch_time_t dVar5;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  long local_60;

  long local_58;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_1);

  FUN_00291900(param_3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_0022e18c(param_1,uVar2);

  if (iVar1 == 0) {

    FUN_0022e520(param_1);

  }

  else {

    FUN_00290c60(&_OBJC_CLASS___NSUUID);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c80();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar3);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e7218,PTR____kCFBooleanTrue_00388320,1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e7220,lVar4,1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e7228,0,1);

    _objc_retain(param_1);

    _objc_retain(lVar4);

    if ((param_1 != 0) && (lVar4 != 0)) {

      dVar5 = _dispatch_time(0,500000000);

      local_80 = PTR___NSConcreteStackBlock_003886f0;

      local_78 = 0xc2000000;

      local_70 = FUN_0022e5c8;

      puStack_68 = &DAT_00388d50;

      _objc_retain(param_1);

      local_60 = param_1;

      _objc_retain(lVar4);

      local_58 = lVar4;

      _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_80);

      _objc_release(local_58);

      _objc_release(local_60);

    }

    _objc_release(lVar4);

    _objc_release(param_1);

    _objc_release(lVar4);

  }

  (*DAT_003eafe0)(param_1,param_2,param_3,param_4);

  _objc_release(uVar2);

  _objc_release(param_1);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




