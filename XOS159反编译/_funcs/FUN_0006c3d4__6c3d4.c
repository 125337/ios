// FUN_0006c3d4 @0x6c3d4


void FUN_0006c3d4(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar8 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a64e0(&_OBJC_CLASS___NSCharacterSet);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(uVar3,auVar8._8_8_,auVar8._0_8_);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar8._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar8._0_8_;

  FUN_00299520(uVar1,auVar8._8_8_,&cf_ttsVoiceCustomPrefixes);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar5 = FUN_00299020();

  if (lVar5 == 0) {

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    lVar6 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(lVar5);

    lVar6 = lVar5;

  }

  _objc_release(lVar5);

  _objc_release(uVar2);

  auVar8 = FUN_00297fa0(uVar4);

  if (auVar8._0_8_ == 0) {

    FUN_0029b4a0(lVar6,auVar8._8_8_,*(undefined8 *)(param_1 + 0x28));

    uVar2 = extraout_x1_00;

  }

  else {

    FUN_002a00a0(lVar6,auVar8._8_8_,uVar4);

    FUN_00299520(uVar1,extraout_x1,&cf_ttsVoiceCustomPrefixNames);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar5 = FUN_00299020();

    if (lVar5 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar7 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar5);

      lVar7 = lVar5;

    }

    _objc_release(lVar5);

    _objc_release(uVar2);

    FUN_002a00a0(lVar7,extraout_x1_01,*(undefined8 *)(param_1 + 0x30),

                 *(undefined8 *)(param_1 + 0x28));

    FUN_002a0060(uVar1,extraout_x1_02,lVar7,&cf_ttsVoiceCustomPrefixNames);

    _objc_release(lVar7);

    uVar2 = extraout_x1_03;

  }

  FUN_002a0060(uVar1,uVar2,lVar6,&cf_ttsVoiceCustomPrefixes);

  uVar2 = DAT_003e7538;

  DAT_003e7538 = 0;

  _objc_release(uVar2);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x38));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  auVar8 = FUN_00297fa0(uVar4);

  if (auVar8._0_8_ == 0) {

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar8._8_8_,&cf__yd0_);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar8._8_8_,&cf__n_0_);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0002a854(0x4004000000000000,&cf_n_bR,uVar2,1);

  _objc_release(uVar2);

  _objc_release(lVar6);

  _objc_release(uVar1);

  _objc_release(uVar4);

  return;

}




