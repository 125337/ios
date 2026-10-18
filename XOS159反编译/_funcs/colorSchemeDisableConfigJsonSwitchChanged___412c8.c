// colorSchemeDisableConfigJsonSwitchChanged: @0x412c8


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::colorSchemeDisableConfigJsonSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  dispatch_time_t dVar2;

  undefined1 auVar3 [16];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  ID local_40;

  ID IStack_38;

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar3 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar3._8_8_,auVar3._0_8_,&cf_xzyColorSchemeDisableConfigJson);

  FUN_002a4a40(uVar1);

  FUN_0012d700();

  dVar2 = _dispatch_time(0,300000000);

  local_60 = PTR___NSConcreteStackBlock_003886f0;

  local_58 = 0xc2000000;

  local_50 = FUN_000413dc;

  puStack_48 = &DAT_00388d50;

  local_40 = param_3;

  IStack_38 = param_1;

  _objc_retain(param_3);

  _dispatch_after(dVar2,PTR___dispatch_main_q_00388740,&local_60);

  _objc_release(local_40);

  _objc_release(param_3);

  _objc_release(uVar1);

  return;

}




