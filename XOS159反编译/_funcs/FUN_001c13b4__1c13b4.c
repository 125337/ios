// FUN_001c13b4 @0x1c13b4


undefined8 FUN_001c13b4(long param_1,long param_2)



{

  code *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long *in_x6;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  pcVar1 = (code *)0x0;

  if (param_2 != 0) {

    pcVar1 = FUN_001c1b2c;

  }

  uVar2 = (*DAT_003e9808)(param_1,pcVar1);

  if ((((in_x6 != (long *)0x0) && ((int)uVar2 == 0)) && (param_1 != 0)) && (*in_x6 != 0)) {

    FUN_001c1c50();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_sync_enter();

    FUN_00293fc0(&_OBJC_CLASS___NSData,extraout_x1,param_1,0x28);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_001c1c50();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6180(&_OBJC_CLASS___NSValue,auVar5._8_8_,*in_x6);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(auVar5._0_8_,auVar6._8_8_,uVar4,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(auVar5._0_8_);

    _objc_release(uVar4);

    _objc_sync_exit(uVar3);

    _objc_release(uVar3);

    if (param_2 != 0) {

      FUN_001c1c94();

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_sync_enter();

      FUN_002a6180(&_OBJC_CLASS___NSValue,extraout_x1_00,param_2);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_001c1c94();

      auVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6180(&_OBJC_CLASS___NSValue,auVar5._8_8_,*in_x6);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(auVar5._0_8_,auVar6._8_8_,uVar4,auVar6._0_8_);

      _objc_release(auVar6._0_8_);

      _objc_release(auVar5._0_8_);

      _objc_release(uVar4);

      _objc_sync_exit(uVar3);

      _objc_release(uVar3);

    }

  }

  return uVar2;

}




