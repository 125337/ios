// FUN_001cd030 @0x1cd030


void FUN_001cd030(long param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined1 auVar7 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  uVar2 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar2);

  _objc_retain(pcVar1);

  lVar5 = FUN_00297fa0(uVar2);

  if (lVar5 != 0) {

    if (DAT_003eaa08 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      lVar5 = DAT_003eaa08;

      DAT_003eaa08 = lVar6;

      _objc_release(lVar5);

    }

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45c0(pcVar1,auVar7._8_8_,auVar7._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    FUN_002a00a0(DAT_003eaa08,extraout_x1,uVar3,uVar2);

    FUN_0020bca8();

    DAT_003eaab4 = DAT_003eaab4 + 1;

    _objc_release(uVar3);

  }

  _objc_release(pcVar1);

  _objc_release(uVar2);

  FUN_001c9388();

  _objc_release(pcVar1);

  return;

}




