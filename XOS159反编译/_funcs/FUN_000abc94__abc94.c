// FUN_000abc94 @0xabc94


void FUN_000abc94(long param_1,long param_2)



{

  byte *pbVar1;

  byte *pbVar2;

  byte bVar3;

  uint uVar4;

  uint uVar5;

  int iVar6;

  int iVar7;

  ulong uVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  long lVar13;

  undefined1 auVar14 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  if ((param_1 == 0) ||

     (uVar8 = _objc_opt_respondsToSelector(param_1,"getHeadImageView"), (uVar8 & 1) == 0))

  goto LAB_000abfb8;

  FUN_000828e0();

  FUN_002959c0(param_1);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  if (lVar9 != 0) {

    _objc_retain(param_2);

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar13 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar13);

    auVar14 = _objc_opt_isKindOfClass(param_2,lVar13);

    lVar13 = param_2;

    if ((auVar14._0_8_ & 1) == 0) {

LAB_000abe78:

      _objc_getAssociatedObject(lVar13,PTR_LOOP_003e5ce0);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_002924e0();

      _objc_release(uVar11);

      uVar8 = _objc_opt_respondsToSelector(lVar13,"isSender");

      lVar10 = lVar13;

      if (((uVar8 & 1) == 0) &&

         (uVar8 = _objc_opt_respondsToSelector(param_2,"isSender"), lVar10 = param_2,

         (uVar8 & 1) == 0)) {

        iVar6 = 0;

      }

      else {

        iVar6 = FUN_00297a80(lVar10);

      }

      uVar8 = _objc_opt_respondsToSelector(lVar13,"messageWrap");

      lVar10 = lVar13;

      if (((uVar8 & 1) == 0) &&

         (uVar8 = _objc_opt_respondsToSelector(param_2,"messageWrap"), lVar10 = param_2,

         (uVar8 & 1) == 0)) {

        lVar10 = 0;

LAB_000abf44:

        iVar7 = 0;

      }

      else {

        FUN_00298ce0(lVar10);

        lVar10 = _objc_retainAutoreleasedReturnValue();

        if (lVar10 == 0) goto LAB_000abf44;

        iVar7 = FUN_000a8a64(lVar10);

      }

      pbVar2 = &DAT_003e7a28;

      if (iVar6 == 0) {

        pbVar2 = &DAT_003e7a2a;

      }

      pbVar1 = &DAT_003e7a29;

      if (iVar6 == 0) {

        pbVar1 = &DAT_003e7a2b;

      }

      if (iVar7 == 0) {

        pbVar2 = pbVar1;

      }

      bVar3 = *pbVar2;

      uVar5 = FUN_002978a0(lVar9);

      if (uVar5 != ((uVar4 | bVar3) & 1)) {

        FUN_0029e8a0(lVar9);

      }

    }

    else {

      FUN_002a6080(param_2,auVar14._8_8_,&cf_parentModel);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      if (lVar10 == 0) {

LAB_000abe6c:

        _objc_release(lVar10);

        goto LAB_000abe78;

      }

      _objc_retain(lVar10);

      _objc_release(param_2);

      _objc_getAssociatedObject(lVar10,PTR_LOOP_003e5ce0);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_002924e0();

      _objc_release(uVar11);

      _objc_getAssociatedObject(lVar10,PTR_LOOP_003e5cd0);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_002924e0();

      _objc_release(uVar11);

      lVar13 = lVar10;

      if ((((uVar4 | uVar5 ^ 0xffffffff) & 1) != 0) ||

         (auVar14 = _objc_opt_respondsToSelector(lVar10,"subViewModels"), (auVar14._0_8_ & 1) == 0))

      goto LAB_000abe6c;

      FUN_002a6080(lVar10,auVar14._8_8_,&cf_subViewModels);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar8 = FUN_00293860();

      if (uVar8 < 2) {

LAB_000abe60:

        _objc_release(uVar11);

        goto LAB_000abe6c;

      }

      FUN_00295440(uVar11);

      lVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (param_2 == lVar12) goto LAB_000abe60;

      auVar14 = FUN_002978a0(lVar9);

      if ((auVar14._0_8_ & 1) == 0) {

        FUN_0029e8a0(lVar9,auVar14._8_8_,1);

      }

      _objc_release(uVar11);

    }

    _objc_release(lVar10);

    _objc_release(lVar13);

  }

  _objc_release(lVar9);

LAB_000abfb8:

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




