// FUN_001f2a40 @0x1f2a40


void FUN_001f2a40(long param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar8 [16];

  

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

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_00295de0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_retain(pcVar1);

  lVar5 = FUN_0020baec(uVar3);

  if (lVar5 != 0x7fffffffffffffff) {

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45c0(pcVar1,auVar8._8_8_,auVar8._0_8_);

    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(auVar8._0_8_);

    auVar8 = FUN_00297fa0(pcVar4);

    uVar6 = auVar8._8_8_;

    if (auVar8._0_8_ == 0) {

      _objc_release(pcVar4);

      pcVar4 = &cf__IN;

      uVar6 = extraout_x1;

    }

    FUN_00299500(DAT_003eaa10,uVar6,lVar5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar7 = FUN_00299020();

    _objc_release(uVar6);

    FUN_002a00a0(uVar7,extraout_x1_00,pcVar4,&cf_name);

    auVar8 = FUN_002937a0(uVar7);

    FUN_002a0040(DAT_003eaa10,auVar8._8_8_,auVar8._0_8_,lVar5);

    _objc_release(auVar8._0_8_);

    FUN_0020be94();

    DAT_003eaab4 = DAT_003eaab4 + 1;

    _objc_release(uVar7);

    _objc_release(pcVar4);

  }

  _objc_release(pcVar1);

  _objc_release(uVar3);

  _objc_release(uVar2);

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_00295de0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_001cc168(uVar3,0);

  _objc_release(uVar3);

  _objc_release(uVar2);

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_00295de0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_001cb9dc();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  auVar8 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_002a1f60(auVar8._0_8_,auVar8._8_8_,uVar6);

  _objc_release(auVar8._0_8_);

  _objc_release(uVar6);

  _objc_release(uVar3);

  _objc_release(uVar2);

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_002a4dc0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_001c9388();

  _objc_release(pcVar1);

  return;

}




