// FUN_000724dc @0x724dc


undefined8 FUN_000724dc(undefined8 param_1)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  _objc_retain();

  iVar2 = FUN_00297820(param_1,extraout_x1,&cf_fv);

  pcVar1 = &cf_ttsFineVoiceProxyEnabled;

  if (iVar2 == 0) {

    pcVar1 = &cf_ttsFishProxyEnabled;

  }

  _objc_retain(pcVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar6._0_8_;

  FUN_00299520(uVar3,auVar6._8_8_,pcVar1);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar4 == 0) {

    uVar5 = FUN_00297820(param_1,extraout_x1_00,&cf_fish);

  }

  else {

    uVar5 = FUN_002924c0(uVar3,extraout_x1_00,pcVar1);

  }

  _objc_release(uVar3);

  _objc_release(pcVar1);

  _objc_release(param_1);

  return uVar5;

}




