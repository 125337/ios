// FUN_001169a8 @0x1169a8


void FUN_001169a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  undefined8 local_38;

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_xzyBubblePetEnabled);

  FUN_002a4a40(uVar1);

  DAT_003e82a8 = 0;

  local_58 = PTR___NSConcreteStackBlock_003886f0;

  local_50 = 0xc0000000;

  local_48 = FUN_001193d8;

  puStack_40 = &DAT_0038abe0;

  local_38 = param_1;

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




