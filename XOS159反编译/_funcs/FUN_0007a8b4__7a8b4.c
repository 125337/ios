// FUN_0007a8b4 @0x7a8b4


void FUN_0007a8b4(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_0029b4a0(uVar1,auVar3._8_8_,&cf_ttsVoiceCustomPrefixes);

  FUN_0029b4a0(uVar1,extraout_x1,&cf_ttsVoiceCustomPrefixNames);

  uVar2 = DAT_003e7538;

  DAT_003e7538 = 0;

  _objc_release(uVar2);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




