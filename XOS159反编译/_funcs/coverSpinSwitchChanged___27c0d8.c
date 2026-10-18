// coverSpinSwitchChanged: @0x27c0d8


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockLiquidContainer::coverSpinSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_002979c0(param_3);

  _objc_release(param_3);

  FUN_0029d080(uVar1,extraout_x1,uVar2,&cf_xzy_dock_player_coverSpin);

  _objc_release(uVar1);

  FUN_002a5b60(param_1);

  return;

}




