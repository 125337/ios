// FUN_000b2838 @0xb2838


undefined8 FUN_000b2838(long param_1)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  _objc_retain(param_1);

  if ((DAT_003e74dc & 1) == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar2 = FUN_002924c0(auVar5._0_8_,auVar5._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

    _objc_release(auVar5._0_8_);

    if ((uVar2 & 1) != 0) {

      DAT_003e74dc = 1;

      goto LAB_000b28a0;

    }

LAB_000b2960:

    _objc_release(param_1);

  }

  else {

LAB_000b28a0:

    _objc_retain(param_1);

    if ((param_1 == 0) ||

       (uVar2 = _objc_opt_respondsToSelector(param_1,"canShowReplyMessage"), (uVar2 & 1) == 0)) {

      _objc_release(param_1);

      goto LAB_000b2960;

    }

    uVar2 = FUN_00292840(param_1);

    _objc_release(param_1);

    _objc_release(param_1);

    if ((uVar2 & 1) != 0) {

      FUN_000856e8(param_1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        iVar1 = FUN_00298760(lVar3);

        _objc_release(lVar3);

        if ((iVar1 == 0x22) && (uVar2 = FUN_000b1410(param_1), (uVar2 & 1) != 0)) goto LAB_000b2968;

      }

      uVar4 = 1;

      goto LAB_000b296c;

    }

  }

LAB_000b2968:

  uVar4 = 0;

LAB_000b296c:

  _objc_release(param_1);

  return uVar4;

}




