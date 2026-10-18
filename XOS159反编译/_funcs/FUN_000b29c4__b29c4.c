// FUN_000b29c4 @0xb29c4


void FUN_000b29c4(long param_1)



{

  long lVar1;

  undefined4 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined8 local_60;

  undefined1 auStack_58 [8];

  undefined4 local_50;

  undefined1 auStack_48 [8];

  

  _objc_retain();

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

  if ((uVar4 & 1) == 0) goto LAB_000b2bfc;

  _objc_retain(param_1);

  FUN_002a6520(param_1);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar5 != 0) {

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar5 = FUN_00291a00();

    _objc_release(uVar3);

    if (lVar5 == 0) {

      FUN_00084b98(param_1);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 == 0) {

LAB_000b2a98:

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e6428);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        uVar4 = FUN_002924e0();

        _objc_release(uVar3);

        if ((uVar4 & 1) == 0) {

          FUN_000839f4(param_1);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          lVar1 = param_1;

          if (lVar6 != 0) {

            lVar1 = lVar6;

          }

          _objc_retain(lVar1);

          _objc_release(lVar6);

          _objc_getAssociatedObject(lVar1,PTR_LOOP_003e6418);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          lVar6 = FUN_002974a0();

          _objc_release(uVar3);

          if (lVar6 < 2) {

            _objc_setAssociatedObject(param_1,PTR_LOOP_003e6428,PTR____kCFBooleanTrue_00388320,1);

            FUN_000839f4(param_1);

            uVar3 = _objc_retainAutoreleasedReturnValue();

            uVar2 = FUN_000b3dcc();

            _objc_initWeak(auStack_48,param_1);

            local_80 = PTR___NSConcreteStackBlock_003886f0;

            local_78 = 0xc2000000;

            local_70 = FUN_000b3e2c;

            puStack_68 = &DAT_0038b138;

            _objc_copyWeak(auStack_58,auStack_48);

            local_60 = uVar3;

            local_50 = uVar2;

            _objc_retain(uVar3);

            _dispatch_async(PTR___dispatch_main_q_00388740,&local_80);

            _objc_release(local_60);

            _objc_release(uVar3);

            _objc_destroyWeak(auStack_58);

            _objc_destroyWeak(auStack_48);

          }

          _objc_release(lVar1);

        }

      }

      else {

        _objc_getAssociatedObject(lVar5,PTR_LOOP_003e6580);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        uVar4 = FUN_002924e0();

        _objc_release(uVar3);

        if ((uVar4 & 1) == 0) goto LAB_000b2a98;

      }

      _objc_release(lVar5);

    }

  }

  _objc_release(param_1);

LAB_000b2bfc:

  _objc_release(param_1);

  return;

}




