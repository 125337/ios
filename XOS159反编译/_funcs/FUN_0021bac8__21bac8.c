// FUN_0021bac8 @0x21bac8


void FUN_0021bac8(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  _objc_retain();

  if ((param_1 != 0) && ((DAT_003ead50 & 1) == 0)) {

    _objc_setAssociatedObject(param_1,&DAT_003ead5d,0,1);

    _objc_setAssociatedObject(param_1,&DAT_003ead5e,0,1);

    _objc_getAssociatedObject(param_1,&DAT_003eaefa);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_002924e0();

    _objc_release(uVar2);

    if (iVar1 != 0) {

      FUN_00209f2c(param_1);

    }

    _objc_getAssociatedObject(param_1,&DAT_003eaefb);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924e0();

    _objc_release(uVar2);

    if ((uVar3 & 1) == 0) {

      _objc_getAssociatedObject(param_1,&DAT_003eaefc);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uVar3 = FUN_002924e0();

      if ((uVar3 & 1) == 0) {

        _objc_setAssociatedObject(param_1,&DAT_003eaefc,PTR____kCFBooleanTrue_00388320,1);

        _objc_initWeak(auStack_38,param_1);

        local_60 = PTR___NSConcreteStackBlock_003886f0;

        local_58 = 0xc2000000;

        local_50 = FUN_0021bc88;

        puStack_48 = &DAT_0038a150;

        _objc_copyWeak(auStack_40,auStack_38);

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_60);

        _objc_destroyWeak(auStack_40);

        _objc_destroyWeak(auStack_38);

      }

      _objc_release(uVar2);

    }

  }

  _objc_release(param_1);

  return;

}




