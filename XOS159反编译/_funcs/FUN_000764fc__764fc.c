// FUN_000764fc @0x764fc


void FUN_000764fc(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(uVar3,auVar5._8_8_,auVar5._0_8_);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  auVar5 = FUN_00297fa0(uVar4);

  if (auVar5._0_8_ == 0) {

    FUN_0029b4a0(*(undefined8 *)(param_1 + 0x28),auVar5._8_8_,&cf_ttsCustomFishToken);

  }

  else {

    FUN_002a0060(*(undefined8 *)(param_1 + 0x28),auVar5._8_8_,uVar4,&cf_ttsCustomFishToken);

  }

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  _objc_release(uVar4);

  return;

}




