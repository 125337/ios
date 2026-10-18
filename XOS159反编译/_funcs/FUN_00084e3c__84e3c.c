// FUN_00084e3c @0x84e3c


undefined8 FUN_00084e3c(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  if ((DAT_003e74dc & 1) == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_002924c0(auVar3._0_8_,auVar3._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

    _objc_release(auVar3._0_8_);

    if (iVar1 == 0) {

      uVar2 = 0;

    }

    else {

      uVar2 = 1;

      DAT_003e74dc = 1;

    }

  }

  else {

    uVar2 = 1;

  }

  return uVar2;

}




