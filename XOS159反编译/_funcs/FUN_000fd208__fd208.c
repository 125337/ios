// FUN_000fd208 @0xfd208


void FUN_000fd208(long param_1)



{

  int iVar1;

  long lVar2;

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  _objc_retain();

  if (param_1 != 0) {

    _object_getClass(param_1);

    iVar1 = FUN_000fd30c();

    if (iVar1 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6890);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 == 0) {

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6890,PTR____kCFBooleanTrue_00388320,1);

        _objc_initWeak(auStack_38,param_1);

        local_60 = PTR___NSConcreteStackBlock_003886f0;

        local_58 = 0xc2000000;

        local_50 = FUN_000fd544;

        puStack_48 = &DAT_0038a150;

        _objc_copyWeak(auStack_40,auStack_38);

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_60);

        _objc_destroyWeak(auStack_40);

        _objc_destroyWeak(auStack_38);

      }

    }

  }

  _objc_release(param_1);

  return;

}




