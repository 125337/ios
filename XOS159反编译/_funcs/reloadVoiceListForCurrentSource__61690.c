// reloadVoiceListForCurrentSource @0x61690


/* Function Stack Size: 0x10 bytes */



void _0x00bdda58::reloadVoiceListForCurrentSource(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  FUN_002a63a0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b240();

  _objc_release(uVar2);

  FUN_00292a40(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b240();

  _objc_release(uVar2);

  FUN_0029d920(param_1,extraout_x1,0);

  FUN_002a4dc0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924c0(auVar4._0_8_,auVar4._8_8_,&cf_ttsUseLocalVoiceList);

  _objc_release(auVar4._0_8_);

  if (iVar1 == 0) {

    FUN_002982a0(param_1);

    return;

  }

  uVar3 = FUN_002982c0(param_1);

  if ((uVar3 & 1) != 0) {

    return;

  }

  FUN_00298120(param_1);

  return;

}




