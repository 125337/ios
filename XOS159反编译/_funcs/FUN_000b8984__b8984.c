// FUN_000b8984 @0xb8984


void FUN_000b8984(long param_1)



{

  undefined *puVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined1 auVar10 [16];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined1 auStack_88 [8];

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined1 auStack_60 [8];

  undefined1 auStack_58 [8];

  

  _objc_retain();

  if (param_1 == 0) goto LAB_000b8d30;

  FUN_002a6520(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if ((lVar3 == 0) || (iVar2 = FUN_000b7704(param_1), iVar2 == 0)) goto LAB_000b8d30;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6608);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = FUN_002924e0();

  _objc_release(uVar4);

  if ((uVar5 & 1) == 0) goto LAB_000b8d30;

  FUN_000839f4(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_000856e8();

  lVar6 = _objc_retainAutoreleasedReturnValue();

  if (lVar6 == 0) {

    uVar4 = 0;

  }

  else {

    uVar4 = FUN_00298740(lVar6);

  }

  _objc_release(lVar6);

  if (((lVar3 != 0) || ((int)uVar4 != 0)) && (iVar2 = FUN_000b2838(lVar3), iVar2 != 0)) {

    _objc_retain(param_1);

    _objc_retain(lVar3);

    if (lVar3 == 0) {

LAB_000b8ae0:

      _objc_release(param_1);

    }

    else {

      _objc_getAssociatedObject(lVar3,PTR_LOOP_003e6618);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      lVar7 = FUN_000b921c(param_1);

      if ((lVar6 == 0) || (lVar7 == 0)) {

        _objc_release(lVar6);

        _objc_release(lVar3);

        goto LAB_000b8ae0;

      }

      lVar8 = FUN_002a5a20(lVar6);

      _objc_release(lVar6);

      _objc_release(lVar3);

      _objc_release(param_1);

      if (lVar8 == lVar7) goto LAB_000b8d28;

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6420);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    uVar5 = FUN_002924e0();

    _objc_release(uVar9);

    if ((uVar5 & 1) != 0) {

      auVar10 = FUN_000b921c(param_1);

      puVar1 = PTR_LOOP_003e6618;

      lVar6 = auVar10._0_8_;

      if (lVar6 == 0) {

        uVar9 = 0;

      }

      else {

        FUN_00299480(&_OBJC_CLASS___NSNumber,auVar10._8_8_,lVar6);

        uVar9 = _objc_retainAutoreleasedReturnValue();

      }

      _objc_setAssociatedObject(lVar3,puVar1,uVar9,1);

      if (lVar6 != 0) {

        _objc_release(uVar9);

      }

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e6610,lVar3,1);

      puVar1 = PTR_LOOP_003e6620;

      FUN_00299460(&_OBJC_CLASS___NSNumber,extraout_x1,uVar4);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_1,puVar1,uVar4,1);

      _objc_release(uVar4);

      FUN_00084b98(param_1);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if (lVar6 == 0) {

        _objc_initWeak(auStack_58,param_1);

        local_80 = PTR___NSConcreteStackBlock_003886f0;

        local_78 = 0xc2000000;

        local_70 = FUN_000b9f2c;

        puStack_68 = &DAT_0038a150;

        _objc_copyWeak(auStack_60,auStack_58);

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_80);

        _objc_destroyWeak(auStack_60);

        _objc_destroyWeak(auStack_58);

      }

      else {

        FUN_000ba548(lVar6,1);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(auVar10._0_8_,auVar10._8_8_,param_1);

        _objc_getAssociatedObject(lVar6,PTR_LOOP_003e6628);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        uVar5 = FUN_002924e0();

        _objc_release(uVar4);

        if ((uVar5 & 1) == 0) {

          _objc_setAssociatedObject(lVar6,PTR_LOOP_003e6628,PTR____kCFBooleanTrue_00388320,1);

          _objc_initWeak(auStack_58,lVar6);

          local_a8 = PTR___NSConcreteStackBlock_003886f0;

          local_a0 = 0xc2000000;

          local_98 = FUN_000ba5fc;

          puStack_90 = &DAT_0038a150;

          _objc_copyWeak(auStack_88,auStack_58);

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_a8);

          _objc_destroyWeak(auStack_88);

          _objc_destroyWeak(auStack_58);

        }

        _objc_release(auVar10._0_8_);

      }

      _objc_release(lVar6);

    }

  }

LAB_000b8d28:

  _objc_release(lVar3);

LAB_000b8d30:

  _objc_release(param_1);

  return;

}




