// FUN_0008336c @0x8336c


undefined8 FUN_0008336c(undefined8 param_1)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  FUN_000839f4(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    _objc_retain(lVar1);

    uVar2 = _objc_opt_respondsToSelector(lVar1,"canShowReplyMessage");

    if ((uVar2 & 1) != 0) {

      uVar2 = FUN_00292840(lVar1);

      _objc_release(lVar1);

      if ((uVar2 & 1) == 0) goto LAB_00083400;

LAB_000833d8:

      uVar4 = 1;

      goto LAB_000834cc;

    }

    _objc_release(lVar1);

LAB_00083400:

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar3 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar3);

    auVar5 = _objc_opt_isKindOfClass(lVar1,lVar3);

    if ((auVar5._0_8_ & 1) != 0) {

      FUN_002a6080(lVar1,auVar5._8_8_,&cf_parentModel);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _objc_retain(lVar3);

        uVar2 = _objc_opt_respondsToSelector(lVar3,"canShowReplyMessage");

        if ((uVar2 & 1) == 0) {

          _objc_release(lVar3);

        }

        else {

          uVar2 = FUN_00292840(lVar3);

          _objc_release(lVar3);

          if ((uVar2 & 1) != 0) {

            _objc_release(lVar3);

            goto LAB_000833d8;

          }

        }

      }

      _objc_release(lVar3);

    }

  }

  uVar4 = 0;

LAB_000834cc:

  _objc_release(lVar1);

  _objc_release(param_1);

  return uVar4;

}




