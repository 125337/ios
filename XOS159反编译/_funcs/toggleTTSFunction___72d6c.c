// toggleTTSFunction: @0x72d6c


/* Function Stack Size: 0x18 bytes */



void _0x016d26c7::toggleTTSFunction_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar3 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar3._8_8_,auVar3._0_8_,&cf_ttsFunctionEnabled);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




