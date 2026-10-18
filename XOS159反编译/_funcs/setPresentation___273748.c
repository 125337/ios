// setPresentation: @0x273748


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockLiquidContainer::setPresentation_(ID param_1,SEL param_2,long_long param_3)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  lVar1 = *(long *)(param_1 + (long)_presentation);

  *(long_long *)(param_1 + (long)_presentation) = param_3;

  if ((param_3 == 1) != (lVar1 != 1)) {

    return;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d080(auVar2._0_8_,auVar2._8_8_,param_3 == 1,&cf_xzy_dock_player_expanded);

  _objc_release(auVar2._0_8_);

  return;

}




