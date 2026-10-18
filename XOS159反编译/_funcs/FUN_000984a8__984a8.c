// FUN_000984a8 @0x984a8


void FUN_000984a8(undefined8 param_1)



{

  int iVar1;

  long lVar2;

  undefined1 auVar3 [16];

  

  (*DAT_003e7808)();

  iVar1 = FUN_000a89d8();

  if (iVar1 != 0) {

    FUN_00295b80(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      FUN_0029e140(0,lVar2);

      FUN_0029e180(0,lVar2);

      FUN_0029e160(0,lVar2);

    }

    _objc_release(lVar2);

  }

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00291280(auVar3._0_8_,auVar3._8_8_,param_1,"xzy_handleDarkModeChange:",

               &cf_com_xzy_bubbleDarkModeChanged,0);

  _objc_release(auVar3._0_8_);

  return;

}




