// loadLibraryIfNeeded @0x265fec


/* Function Stack Size: 0x10 bytes */



void XZYDockPlayerEngine::loadLibraryIfNeeded(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  ID local_38;

  

  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {

    *(undefined1 *)(param_1 + 0x48) = 1;

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45e0(auVar4._0_8_,auVar4._8_8_,&cf_xzy_dock_player_playlistInput);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    pcVar2 = auVar5._0_8_;

    pcVar1 = &::cf___;

    if (pcVar2 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar2;

    }

    FUN_002a0720(param_1,auVar5._8_8_,pcVar1);

    _objc_release(pcVar2);

    _objc_release(auVar4._0_8_);

    FUN_00266138();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    auVar4 = FUN_00299020();

    FUN_0029f600(param_1,auVar4._8_8_,auVar4._0_8_);

    _objc_release(auVar4._0_8_);

    _objc_release(uVar3);

    FUN_0029acc0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    auVar4 = FUN_00299020();

    FUN_002a03e0(param_1,auVar4._8_8_,auVar4._0_8_);

    _objc_release(auVar4._0_8_);

    _objc_release(uVar3);

    FUN_0029ad80(param_1);

    FUN_00299800(param_1);

    local_58 = PTR___NSConcreteStackBlock_003886f0;

    local_50 = 0xc2000000;

    local_48 = FUN_002665f4;

    puStack_40 = &DAT_0038e500;

    local_38 = param_1;

    _dispatch_async(*(undefined8 *)(param_1 + 8),&local_58);

  }

  return;

}




