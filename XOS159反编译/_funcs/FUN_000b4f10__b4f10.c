// FUN_000b4f10 @0xb4f10


void FUN_000b4f10(long param_1)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  dispatch_time_t dVar4;

  double dVar5;

  double dVar6;

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  undefined1 auStack_98 [8];

  undefined1 auStack_90 [8];

  undefined1 auStack_88 [8];

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined1 auStack_60 [8];

  undefined1 auStack_58 [8];

  

  _objc_retain();

  if (param_1 != 0) {

    FUN_00295b80(param_1);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 == 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e63e0);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 != 0) {

        dVar5 = (double)_CACurrentMediaTime();

        dVar6 = (double)FUN_00294860(lVar1);

        if (dVar5 <= dVar6) {

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e6590);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          uVar2 = FUN_002924e0();

          _objc_release(uVar3);

          if ((uVar2 & 1) == 0) {

            _objc_setAssociatedObject(param_1,PTR_LOOP_003e6590,PTR____kCFBooleanTrue_00388320,1);

            _objc_initWeak(auStack_58,param_1);

            dVar4 = _dispatch_time(0,120000000);

            local_80 = PTR___NSConcreteStackBlock_003886f0;

            local_78 = 0xc2000000;

            local_70 = FUN_000b51cc;

            puStack_68 = &DAT_0038a150;

            _objc_copyWeak(auStack_60,auStack_58);

            _dispatch_after(dVar4,PTR___dispatch_main_q_00388740,&local_80);

            _objc_destroyWeak(auStack_60);

            _objc_destroyWeak(auStack_58);

          }

        }

      }

      _objc_release(lVar1);

      lVar1 = 0;

    }

    else {

      uVar2 = FUN_000a6724(param_1,lVar1);

      if ((uVar2 & 1) != 0) {

        _objc_getAssociatedObject(lVar1,PTR_LOOP_003e6598);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        uVar2 = FUN_002924e0();

        _objc_release(uVar3);

        if ((uVar2 & 1) == 0) {

          _objc_setAssociatedObject(lVar1,PTR_LOOP_003e6598,PTR____kCFBooleanTrue_00388320,1);

          _objc_initWeak(auStack_58,param_1);

          _objc_initWeak(auStack_88,lVar1);

          local_b8 = PTR___NSConcreteStackBlock_003886f0;

          local_b0 = 0xc2000000;

          local_a8 = FUN_000b528c;

          puStack_a0 = &DAT_0038ac20;

          _objc_copyWeak(auStack_98,auStack_88);

          _objc_copyWeak(auStack_90,auStack_58);

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_b8);

          _objc_destroyWeak(auStack_90);

          _objc_destroyWeak(auStack_98);

          _objc_destroyWeak(auStack_88);

          _objc_destroyWeak(auStack_58);

        }

      }

    }

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  return;

}




