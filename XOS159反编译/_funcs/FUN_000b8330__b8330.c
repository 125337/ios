// FUN_000b8330 @0xb8330


undefined8 FUN_000b8330(undefined8 param_1)



{

  int iVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  if ((DAT_003e74dc & 1) == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_002924c0(auVar4._0_8_,auVar4._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

    _objc_release(auVar4._0_8_);

    if (iVar1 != 0) {

      DAT_003e74dc = 1;

      goto LAB_000b8390;

    }

  }

  else {

LAB_000b8390:

    uVar2 = FUN_0008336c(param_1);

    if (((uVar2 & 1) != 0) || (uVar2 = FUN_000b7704(param_1), (uVar2 & 1) != 0)) {

      uVar3 = 1;

      goto LAB_000b83bc;

    }

  }

  uVar3 = FUN_000b77ac(param_1);

LAB_000b83bc:

  _objc_release(param_1);

  return uVar3;

}




