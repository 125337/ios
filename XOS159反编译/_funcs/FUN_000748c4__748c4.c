// FUN_000748c4 @0x748c4


void FUN_000748c4(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar3 [16];

  

  FUN_002a1200(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));

  FUN_002a1220(*(undefined8 *)(param_1 + 0x20),extraout_x1,*(undefined8 *)(param_1 + 0x30));

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_002a0060(uVar1,auVar3._8_8_,*(undefined8 *)(param_1 + 0x28),&cf_ttsSelectedVoice);

  FUN_002a0060(uVar1,extraout_x1_00,*(undefined8 *)(param_1 + 0x30),&cf_ttsSelectedVoiceName);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf__br_);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0002a854(0x400199999999999a,uVar2,0,1);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




