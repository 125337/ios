// toggleCoverSpin @0x27c158


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockLiquidContainer::toggleCoverSpin(ID param_1,SEL param_2)



{

  uint uVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  

  uVar1 = FUN_0027c064();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d080(auVar4._0_8_,auVar4._8_8_,uVar1 ^ 1,&cf_xzy_dock_player_coverSpin);

  _objc_release(auVar4._0_8_);

  FUN_00298b80(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_00293860();

  _objc_release(uVar2);

  if (2 < uVar3) {

    FUN_00298b80(param_1);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00299500(auVar4._0_8_,auVar4._8_8_,2);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,&DAT_00002393);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar5._0_8_);

    _objc_release(auVar4._0_8_);

    FUN_002a0120(uVar2,extraout_x1,uVar1 ^ 1);

    _objc_release(uVar2);

  }

  FUN_002a5b60(param_1);

  return;

}




