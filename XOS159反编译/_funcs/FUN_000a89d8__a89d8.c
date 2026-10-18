// FUN_000a89d8 @0xa89d8


undefined1 FUN_000a89d8(void)



{

  undefined1 uVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  if ((DAT_003e7a2c & 1) == 0) {

    DAT_003e7a2c = 1;

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar4._0_8_;

    iVar2 = FUN_002924c0(uVar3,auVar4._8_8_,&cf_coversEnabled);

    uVar1 = 0;

    if (iVar2 != 0) {

      uVar1 = FUN_002924c0(uVar3,extraout_x1,&cf_mesMsgMergeEnabled);

    }

    DAT_003e7a2d = uVar1;

    _objc_release(uVar3);

  }

  return DAT_003e7a2d;

}




