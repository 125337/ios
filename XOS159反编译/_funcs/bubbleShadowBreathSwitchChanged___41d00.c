// bubbleShadowBreathSwitchChanged: @0x41d00


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::bubbleShadowBreathSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar7 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar7._8_8_,auVar7._0_8_,&cf_xzyBubbleShadowBreathEnabled);

  FUN_002a4a40(uVar1);

  FUN_002990e0(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    lVar4 = 0;

  }

  else {

    FUN_00299260(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 != 0) {

      _objc_retain(lVar4);

      _objc_release(lVar2);

      lVar2 = lVar4;

    }

  }

  FUN_002a5520(lVar2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar7._0_8_,auVar7._8_8_,0x3f1);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  _objc_release(uVar5);

  if (lVar6 != 0) {

    FUN_0029b140(lVar6);

  }

  _objc_release(lVar6);

  _objc_release(lVar4);

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




