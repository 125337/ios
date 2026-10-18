// showVoiceExpressionSettings @0x766d0


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showVoiceExpressionSettings(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  auVar4 = _objc_alloc(&objc::class_t::XZYTTSVoiceExpressionSettingsController);

  uVar1 = FUN_00296ea0(auVar4._0_8_,auVar4._8_8_,2);

  _objc_initWeak(auStack_38,param_1);

  local_60 = PTR___NSConcreteStackBlock_003886f0;

  local_58 = 0xc2000000;

  local_50 = FUN_00076834;

  puStack_48 = &DAT_0038a150;

  _objc_copyWeak(auStack_40,auStack_38);

  FUN_002a1240(uVar1,extraout_x1,&local_60);

  FUN_002990e0(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 == 0) {

    auVar4 = _objc_alloc(&_OBJC_CLASS___UINavigationController);

    auVar4 = FUN_00296dc0(auVar4._0_8_,auVar4._8_8_,uVar1);

    uVar3 = auVar4._0_8_;

    FUN_0029a500(param_1,auVar4._8_8_,uVar3,1,0);

  }

  else {

    FUN_002990e0(param_1);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar4._0_8_;

    FUN_0029aa80(uVar3,auVar4._8_8_,uVar1,1);

  }

  _objc_release(uVar3);

  _objc_destroyWeak(auStack_40);

  _objc_destroyWeak(auStack_38);

  _objc_release(uVar1);

  return;

}




