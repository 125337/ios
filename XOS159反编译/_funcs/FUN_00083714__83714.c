// FUN_00083714 @0x83714


void FUN_00083714(undefined8 param_1)



{

  undefined *puVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  dispatch_time_t dVar5;

  undefined8 extraout_x1;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined8 local_60;

  undefined1 auStack_58 [8];

  undefined4 local_50;

  undefined1 auStack_48 [8];

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  if ((uVar3 & 1) != 0) {

    _objc_retain(param_1);

    FUN_002a6520(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6338);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uVar3 = FUN_002924e0();

      _objc_release(uVar2);

      if ((uVar3 & 1) == 0) {

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e6330);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_002974a0();

        _objc_release(uVar2);

        puVar1 = PTR_LOOP_003e6330;

        if (lVar4 < 4) {

          FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1,lVar4 + 1);

          uVar2 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_1,puVar1,uVar2,1);

          _objc_release(uVar2);

          _objc_setAssociatedObject(param_1,PTR_LOOP_003e6338,PTR____kCFBooleanTrue_00388320,1);

          FUN_000839f4(param_1);

          uVar2 = _objc_retainAutoreleasedReturnValue();

          FUN_000856e8();

          lVar4 = _objc_retainAutoreleasedReturnValue();

          if (lVar4 == 0) {

            local_50 = 0;

          }

          else {

            local_50 = FUN_00298740(lVar4);

          }

          _objc_release(lVar4);

          _objc_initWeak(auStack_48,param_1);

          dVar5 = _dispatch_time(0,35000000);

          local_80 = PTR___NSConcreteStackBlock_003886f0;

          local_78 = 0xc2000000;

          local_70 = FUN_000c3220;

          puStack_68 = &DAT_0038b138;

          _objc_copyWeak(auStack_58,auStack_48);

          local_60 = uVar2;

          _objc_retain(uVar2);

          _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_80);

          _objc_release(local_60);

          _objc_release(uVar2);

          _objc_destroyWeak(auStack_58);

          _objc_destroyWeak(auStack_48);

        }

      }

    }

    _objc_release(param_1);

  }

  _objc_release(param_1);

  return;

}




