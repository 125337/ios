// FUN_001bc4e0 @0x1bc4e0


void FUN_001bc4e0(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar3._0_8_;

  FUN_00299520(uVar2,auVar3._8_8_,&cf_coversEnabled);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  if (auVar3._0_8_ != 0) {

    iVar1 = FUN_002924c0(uVar2,auVar3._8_8_,&cf_coversEnabled);

    _objc_release(auVar3._0_8_);

    if (iVar1 != 0) {

      DAT_003e9788 = FUN_002924c0(uVar2,extraout_x1,&cf_xzyCoverParallaxLightingEnabled);

      goto LAB_001bc55c;

    }

  }

  DAT_003e9788 = 0;

LAB_001bc55c:

  DAT_003e9789 = 1;

  DAT_003e7088 = DAT_003e7088 + 1;

  _objc_release(uVar2);

  return;

}




