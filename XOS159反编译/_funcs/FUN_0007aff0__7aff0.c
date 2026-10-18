// FUN_0007aff0 @0x7aff0


void FUN_0007aff0(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  

  FUN_0029b300(&objc::class_t::_0x00bdda58,param_2,*(undefined8 *)(param_1 + 0x20));

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  FUN_00299520(uVar1,auVar5._8_8_,&cf_ttsVoiceCustomPrefixNames);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_00299020();

  if (lVar3 == 0) {

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    lVar4 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(lVar3);

    lVar4 = lVar3;

  }

  _objc_release(lVar3);

  _objc_release(uVar2);

  FUN_0029b4a0(lVar4,extraout_x1,*(undefined8 *)(param_1 + 0x20));

  FUN_002a0060(uVar1,extraout_x1_00,lVar4,&cf_ttsVoiceCustomPrefixNames);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(lVar4);

  _objc_release(uVar1);

  return;

}




