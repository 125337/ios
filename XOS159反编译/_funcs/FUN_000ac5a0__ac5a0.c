// FUN_000ac5a0 @0xac5a0


void FUN_000ac5a0(double param_1,undefined8 param_2)



{

  long lVar1;

  ulong uVar2;

  dispatch_time_t dVar3;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  

  _objc_retain();

  _objc_getAssociatedObject(param_2,PTR_LOOP_003e64c0);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if ((lVar1 == 0) || (uVar2 = FUN_002924e0(lVar1), (uVar2 & 1) == 0)) {

    _objc_setAssociatedObject(param_2,PTR_LOOP_003e64c0,PTR____kCFBooleanTrue_00388320,1);

    _objc_initWeak(auStack_48,param_2);

    dVar3 = _dispatch_time(0,(long)(param_1 * 1000000000.0));

    local_70 = PTR___NSConcreteStackBlock_003886f0;

    local_68 = 0xc2000000;

    local_60 = FUN_000ac79c;

    puStack_58 = &DAT_0038a150;

    _objc_copyWeak(auStack_50,auStack_48);

    _dispatch_after(dVar3,PTR___dispatch_main_q_00388740,&local_70);

    _objc_destroyWeak(auStack_50);

    _objc_destroyWeak(auStack_48);

  }

  _objc_release(lVar1);

  _objc_release(param_2);

  return;

}




