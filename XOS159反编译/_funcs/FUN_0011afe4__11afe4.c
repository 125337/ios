// FUN_0011afe4 @0x11afe4


void FUN_0011afe4(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  undefined1 auStack_68 [8];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  _objc_retain();

  if (param_1 != 0) {

    uVar1 = FUN_00297960(&_OBJC_CLASS___NSThread);

    if ((uVar1 & 1) == 0) {

      _objc_initWeak(auStack_38,param_1);

      local_60 = PTR___NSConcreteStackBlock_003886f0;

      local_58 = 0xc2000000;

      local_50 = FUN_0011b1c0;

      puStack_48 = &DAT_0038a150;

      _objc_copyWeak(auStack_40,auStack_38);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_60);

      _objc_destroyWeak(auStack_40);

      _objc_destroyWeak(auStack_38);

    }

    else {

      FUN_002a2e60(&_OBJC_CLASS___UIApplication);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      lVar3 = FUN_00291a00();

      if (lVar3 == 0) {

        FUN_002a6520(param_1);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        _objc_release(uVar2);

        if (lVar3 == 0) goto LAB_0011b0a8;

        _objc_getAssociatedObject(param_1,&DAT_003e8350);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        uVar1 = FUN_002924e0();

        if ((uVar1 & 1) == 0) {

          _objc_setAssociatedObject(param_1,&DAT_003e8350,PTR____kCFBooleanTrue_00388320,1);

          _objc_initWeak(auStack_38,param_1);

          local_88 = PTR___NSConcreteStackBlock_003886f0;

          local_80 = 0xc2000000;

          local_78 = FUN_0011b200;

          puStack_70 = &DAT_0038a150;

          _objc_copyWeak(auStack_68,auStack_38);

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_88);

          _objc_destroyWeak(auStack_68);

          _objc_destroyWeak(auStack_38);

        }

      }

      _objc_release(uVar2);

    }

  }

LAB_0011b0a8:

  _objc_release(param_1);

  return;

}




