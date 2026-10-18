// FUN_000750a4 @0x750a4


void FUN_000750a4(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_002a1140(*(undefined8 *)(param_1 + 0x20),param_2,&cf___xzy_tts_random_bg_sound__);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_002a0060(uVar1,auVar3._8_8_,&cf___xzy_tts_random_bg_sound__,&cf_ttsSelectedBgSound);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




