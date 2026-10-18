// timeLabelSuffixSwitchChanged: @0x4011c


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::timeLabelSuffixSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  ID local_38;

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_xzyTimeLabelSuffixEnabled);

  FUN_002a4a40(uVar1);

  local_58 = PTR___NSConcreteStackBlock_003886f0;

  local_50 = 0xc2000000;

  local_48 = FUN_00040204;

  puStack_40 = &DAT_00388e60;

  local_38 = param_1;

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




