// FUN_0010f81c @0x10f81c


undefined1 FUN_0010f81c(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  if ((DAT_003e82a8 & 1) == 0) {

    DAT_003e82a8 = 1;

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar3._0_8_;

    iVar1 = FUN_002924c0(uVar2,auVar3._8_8_,&cf_coversEnabled);

    if (iVar1 == 0) {

      DAT_003e82ab = 0;

    }

    else {

      FUN_00299520(uVar2,extraout_x1,&cf_xzyBubblePetEnabled);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      if (auVar3._0_8_ == 0) {

        DAT_003e82ab = 0;

      }

      else {

        DAT_003e82ab = FUN_002924c0(uVar2,auVar3._8_8_,&cf_xzyBubblePetEnabled);

      }

      _objc_release(auVar3._0_8_);

    }

    _objc_release(uVar2);

  }

  return DAT_003e82ab;

}




