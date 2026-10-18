// colorSchemeNicknameSwitchChanged: @0x410c4


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::colorSchemeNicknameSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_xzyColorSchemeNicknameEnabled);

  FUN_002a4a40(uVar1);

  FUN_0012d700();

  FUN_00292fa0(param_1,extraout_x1,0);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




