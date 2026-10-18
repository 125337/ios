// FUN_0005f494 @0x5f494


void FUN_0005f494(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined1 auVar5 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  if ((lVar3 != 0) && (lVar4 = FUN_00297fa0(lVar3), lVar4 != 0)) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0060(auVar5._0_8_,auVar5._8_8_,lVar3,&cf_aiChatDefaultIconCode);

    _objc_release(auVar5._0_8_);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4a40();

    _objc_release(uVar1);

    FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar1);

  }

  _objc_release(lVar3);

  return;

}




