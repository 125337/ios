// FUN_000b8e00 @0xb8e00


void FUN_000b8e00(long param_1)



{

  int64_t delta;

  undefined *puVar1;

  int iVar2;

  undefined4 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  dispatch_time_t dVar9;

  undefined8 extraout_x1;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  undefined8 local_78;

  undefined1 auStack_70 [8];

  undefined4 local_68;

  undefined1 auStack_60 [32];

  

  _objc_retain();

  if (param_1 == 0) goto LAB_000b90a8;

  FUN_002a6520(param_1);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if ((lVar4 == 0) || (iVar2 = FUN_000b8330(param_1), iVar2 == 0)) goto LAB_000b90a8;

  iVar2 = FUN_000b83fc(param_1);

  if (iVar2 != 0) {

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e65c8,0,1);

    goto LAB_000b90a8;

  }

  FUN_000839f4(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_000b77ac(param_1);

  if (iVar2 == 0) {

LAB_000b8edc:

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e65d0);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar7 = FUN_002924e0();

    _objc_release(uVar6);

    if ((uVar7 & 1) == 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e65c8);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      lVar4 = FUN_002974a0();

      _objc_release(uVar6);

      puVar1 = PTR_LOOP_003e65c8;

      if (lVar4 < 5) {

        FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1,lVar4 + 1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar1,uVar6,1);

        _objc_release(uVar6);

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e65d0,PTR____kCFBooleanTrue_00388320,1);

        _objc_initWeak(auStack_60,param_1);

        FUN_000839f4(param_1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_000856e8();

        lVar8 = _objc_retainAutoreleasedReturnValue();

        if (lVar8 == 0) {

          uVar3 = 0;

        }

        else {

          uVar3 = FUN_00298740(lVar8);

        }

        _objc_release(lVar8);

        delta = 20000000;

        if (lVar4 != 0) {

          delta = (long)((double)lVar4 * 0.045 * 1000000000.0);

        }

        dVar9 = _dispatch_time(0,delta);

        local_98 = PTR___NSConcreteStackBlock_003886f0;

        local_90 = 0xc2000000;

        local_88 = FUN_000bab98;

        puStack_80 = &DAT_0038b138;

        _objc_copyWeak(auStack_70,auStack_60);

        local_78 = uVar6;

        local_68 = uVar3;

        _objc_retain(uVar6);

        _dispatch_after(dVar9,PTR___dispatch_main_q_00388740,&local_98);

        _objc_release(local_78);

        _objc_release(uVar6);

        _objc_destroyWeak(auStack_70);

        _objc_destroyWeak(auStack_60);

      }

    }

  }

  else {

    _objc_getAssociatedObject(uVar5,PTR_LOOP_003e6570);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar7 = FUN_002924e0();

    _objc_release(uVar6);

    if (((uVar7 & 1) != 0) || (iVar2 = FUN_000b182c(param_1,uVar5,auStack_60,0), iVar2 != 0))

    goto LAB_000b8edc;

  }

  _objc_release(uVar5);

LAB_000b90a8:

  _objc_release(param_1);

  return;

}




