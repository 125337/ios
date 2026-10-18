// payBubbleSwitchChanged: @0x3d7fc


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::payBubbleSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  dispatch_time_t dVar2;

  undefined1 auVar3 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  ID local_38;

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar3 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar3._8_8_,auVar3._0_8_,&cf_mesMsgMergePayBubbleEnabled);

  FUN_002a4a40(uVar1);

  dVar2 = _dispatch_time(0,300000000);

  local_58 = PTR___NSConcreteStackBlock_003886f0;

  local_50 = 0xc2000000;

  local_48 = FUN_0003d8f4;

  puStack_40 = &DAT_00388e60;

  local_38 = param_1;

  _dispatch_after(dVar2,PTR___dispatch_main_q_00388740,&local_58);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




