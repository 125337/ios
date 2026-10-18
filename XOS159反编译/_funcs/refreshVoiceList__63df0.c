// refreshVoiceList @0x63df0


/* Function Stack Size: 0x10 bytes */



void _0x00bdda58::refreshVoiceList(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar5._0_8_;

  FUN_0029b4a0(uVar2,auVar5._8_8_,&cf_ttsVoiceListCache);

  FUN_002a4a40(uVar2);

  FUN_0002a854(0x3ff8000000000000,&cf_ck_W7RerRh,0,0);

  FUN_002a63a0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b240();

  _objc_release(uVar3);

  FUN_00292a40(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b240();

  _objc_release(uVar3);

  FUN_0029d920(param_1,extraout_x1,0);

  FUN_002a4dc0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924c0(auVar5._0_8_,auVar5._8_8_,&cf_ttsUseLocalVoiceList);

  _objc_release(auVar5._0_8_);

  if (iVar1 == 0) {

    FUN_002982a0(param_1);

  }

  else {

    uVar4 = FUN_002982c0(param_1);

    if ((uVar4 & 1) == 0) {

      FUN_00298120(param_1);

    }

  }

  _objc_release(uVar2);

  return;

}




