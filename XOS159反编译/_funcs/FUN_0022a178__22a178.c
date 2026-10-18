// FUN_0022a178 @0x22a178


void FUN_0022a178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  dispatch_time_t dVar5;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  long local_50;

  long local_48;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_1);

  FUN_00291900(param_3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_0022e74c(param_1,uVar2);

  if (iVar1 == 0) {

    FUN_0022eba8(param_1);

    (*DAT_003eb018)(param_1,param_2,param_3,param_4);

  }

  else {

    FUN_00290c60(&_OBJC_CLASS___NSUUID);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c80();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar3);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e7230,PTR____kCFBooleanTrue_00388320,1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e7238,lVar4,1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e7240,0,1);

    _objc_retain(param_1);

    _objc_retain(lVar4);

    if ((param_1 != 0) && (lVar4 != 0)) {

      dVar5 = _dispatch_time(0,500000000);

      local_70 = PTR___NSConcreteStackBlock_003886f0;

      local_68 = 0xc2000000;

      local_60 = FUN_0022ec74;

      puStack_58 = &DAT_00388d50;

      _objc_retain(param_1);

      local_50 = param_1;

      _objc_retain(lVar4);

      local_48 = lVar4;

      _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_70);

      _objc_release(local_48);

      _objc_release(local_50);

    }

    _objc_release(lVar4);

    _objc_release(param_1);

    _objc_release(lVar4);

  }

  _objc_release(uVar2);

  _objc_release(param_1);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




