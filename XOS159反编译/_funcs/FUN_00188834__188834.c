// FUN_00188834 @0x188834


undefined1 FUN_00188834(void)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  if ((DAT_003e8d58 & 1) == 0) {

    DAT_003e8d58 = 1;

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar4._0_8_;

    iVar1 = FUN_002924c0(uVar2,auVar4._8_8_,&cf_xzyHomeNameplateEnabled);

    if (iVar1 == 0) {

      DAT_003e8d59 = false;

    }

    else {

      lVar3 = FUN_00297480(uVar2,extraout_x1,&cf_xzyHomeNameplateMethod);

      DAT_003e8d59 = lVar3 == 1;

    }

    _objc_release(uVar2);

  }

  return DAT_003e8d59;

}




