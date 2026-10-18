// FUN_00079c40 @0x79c40


void FUN_00079c40(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  if ((lVar3 != 0) && (auVar4 = FUN_00297fa0(lVar3), auVar4._0_8_ != 0)) {

    FUN_002a2220(*(undefined8 *)(param_1 + 0x28),auVar4._8_8_,lVar3);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar4._0_8_;

    FUN_002a0060(uVar1,auVar4._8_8_,lVar3,&cf_ttsTriggerPrefix);

    FUN_002a4a40(uVar1);

    FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar2);

    _objc_release(uVar1);

  }

  _objc_release(lVar3);

  return;

}




