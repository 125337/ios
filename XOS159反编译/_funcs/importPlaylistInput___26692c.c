// importPlaylistInput: @0x26692c


/* Function Stack Size: 0x18 bytes */



void XZYDockPlayerEngine::importPlaylistInput_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined8 local_40;

  ID IStack_38;

  

  _objc_retain(param_3);

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(param_3,auVar3._8_8_,auVar3._0_8_);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(param_3);

  _objc_release(auVar3._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar3._0_8_,auVar3._8_8_,uVar1,&cf_xzy_dock_player_playlistInput);

  _objc_release(auVar3._0_8_);

  FUN_002a0720(param_1,extraout_x1,uVar1);

  auVar3 = FUN_00297fa0(uVar1);

  FUN_0029ecc0(param_1,auVar3._8_8_,auVar3._0_8_ != 0);

  FUN_00299800(param_1);

  uVar2 = *(undefined8 *)(param_1 + 8);

  local_60 = PTR___NSConcreteStackBlock_003886f0;

  local_58 = 0xc2000000;

  local_50 = FUN_00266a5c;

  puStack_48 = &DAT_003901d8;

  local_40 = uVar1;

  IStack_38 = param_1;

  _objc_retain(uVar1);

  _dispatch_async(uVar2,&local_60);

  _objc_release(local_40);

  _objc_release(uVar1);

  return;

}




