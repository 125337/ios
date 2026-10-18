// FUN_0010b2c8 @0x10b2c8


void FUN_0010b2c8(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,undefined8 param_4)



{

  long lVar1;

  long lVar2;

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  (*DAT_003e81a8)();

  FUN_001079e0();

  if (DAT_003e8119 == '\x01' && (DAT_003e8128 & 0xfffffffffffffffb) != 0) {

    FUN_000822c8(param_4);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if ((lVar1 != 0) && (FUN_00295600(lVar1), 0.0 < param_3)) {

      FUN_0010c338(param_4,lVar1);

      _objc_getAssociatedObject(param_4,PTR_LOOP_003e6948);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 == 0) {

        _objc_setAssociatedObject(param_4,PTR_LOOP_003e6948,PTR____kCFBooleanTrue_00388320,1);

        _objc_initWeak(auStack_38,param_4);

        local_60 = PTR___NSConcreteStackBlock_003886f0;

        local_58 = 0xc2000000;

        local_50 = FUN_0010f348;

        puStack_48 = &DAT_0038a150;

        _objc_copyWeak(auStack_40,auStack_38);

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_60);

        _objc_destroyWeak(auStack_40);

        _objc_destroyWeak(auStack_38);

      }

    }

    _objc_release(lVar1);

  }

  return;

}




