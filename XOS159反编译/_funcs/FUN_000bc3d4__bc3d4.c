// FUN_000bc3d4 @0xbc3d4


void FUN_000bc3d4(long param_1)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  undefined8 local_70;

  undefined1 auStack_68 [8];

  undefined4 local_60;

  undefined1 auStack_58 [8];

  

  _objc_retain();

  if (param_1 == 0) goto LAB_000bc740;

  FUN_002a6520(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 == 0) goto LAB_000bc740;

  if ((DAT_003e74dc & 1) == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_002924c0(auVar7._0_8_,auVar7._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

    _objc_release(auVar7._0_8_);

    if (iVar1 == 0) goto LAB_000bc740;

    DAT_003e74dc = 1;

  }

  _objc_retain(param_1);

  _objc_retain(param_1);

  lVar2 = param_1;

  do {

    uVar3 = _objc_opt_respondsToSelector(lVar2,"viewModel");

    lVar4 = lVar2;

    if ((uVar3 & 1) != 0) break;

    FUN_002a4880(lVar2);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar2);

    lVar2 = lVar4;

  } while (lVar4 != 0);

  _objc_release(param_1);

  _objc_retain(lVar4);

  if (lVar4 == 0) {

LAB_000bc730:

    _objc_release(lVar4);

  }

  else {

    if (DAT_003e7b98 != -1) {

      FUN_0028f08c();

    }

    if (DAT_003e7b90 == 0) goto LAB_000bc730;

    uVar3 = _objc_opt_isKindOfClass(lVar4);

    _objc_release(lVar4);

    if ((uVar3 & 1) != 0) {

      _objc_setAssociatedObject(lVar4,PTR_LOOP_003e6308,0,1);

      _objc_setAssociatedObject(lVar4,PTR_LOOP_003e6328,0,1);

      _objc_getAssociatedObject(lVar4,PTR_LOOP_003e65b8);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      iVar1 = FUN_002924e0();

      if (iVar1 == 0) {

        _objc_getAssociatedObject(lVar4,PTR_LOOP_003e65b0);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        iVar1 = FUN_002924e0();

        _objc_release(uVar6);

        _objc_release(uVar5);

        if (iVar1 == 0) {

          FUN_000b6e80(lVar4);

          goto LAB_000bc738;

        }

      }

      else {

        _objc_release(uVar5);

      }

      _objc_getAssociatedObject(lVar4,PTR_LOOP_003e65b8);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      uVar3 = FUN_002924e0();

      _objc_release(uVar5);

      if ((uVar3 & 1) == 0) {

        _objc_setAssociatedObject(lVar4,PTR_LOOP_003e6308,0,1);

        _objc_setAssociatedObject(lVar4,PTR_LOOP_003e6328,0,1);

        FUN_000b7b78(lVar4);

      }

      _objc_retain(lVar4);

      FUN_002a6520(lVar4);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 != 0) {

        _objc_getAssociatedObject(lVar4,PTR_LOOP_003e65c0);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        uVar3 = FUN_002924e0();

        _objc_release(uVar5);

        if ((uVar3 & 1) == 0) {

          _objc_setAssociatedObject(lVar4,PTR_LOOP_003e65c0,PTR____kCFBooleanTrue_00388320,1);

          FUN_000839f4(lVar4);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_000856e8();

          lVar2 = _objc_retainAutoreleasedReturnValue();

          if (lVar2 == 0) {

            local_60 = 0;

          }

          else {

            local_60 = FUN_00298740(lVar2);

          }

          _objc_release(lVar2);

          _objc_initWeak(auStack_58,lVar4);

          local_90 = PTR___NSConcreteStackBlock_003886f0;

          local_88 = 0xc2000000;

          local_80 = FUN_000bc82c;

          puStack_78 = &DAT_0038b138;

          _objc_copyWeak(auStack_68,auStack_58);

          local_70 = uVar5;

          _objc_retain(uVar5);

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_90);

          _objc_release(local_70);

          _objc_release(uVar5);

          _objc_destroyWeak(auStack_68);

          _objc_destroyWeak(auStack_58);

        }

      }

      goto LAB_000bc730;

    }

  }

LAB_000bc738:

  _objc_release(lVar4);

LAB_000bc740:

  _objc_release(param_1);

  return;

}




