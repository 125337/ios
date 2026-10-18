// FUN_0018d4dc @0x18d4dc


undefined8

FUN_0018d4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

            undefined8 param_5,undefined8 param_6,undefined8 param_7)



{

  code *pcVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_7);

  if (DAT_003e94f1 == '\x01' && DAT_003e8e50 != 0) {

    auVar3 = _objc_alloc(&_OBJC_CLASS___WKUserScript);

    uVar2 = FUN_00296e40(auVar3._0_8_,auVar3._8_8_,DAT_003e8e50,1,0);

    FUN_002a5f60(param_7);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00291460(auVar3._0_8_,auVar3._8_8_,uVar2);

    _objc_release(auVar3._0_8_);

    _objc_release(uVar2);

  }

  pcVar1 = DAT_003e94e8;

  _objc_retain(param_5);

  uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);

  _objc_release(param_7);

  _objc_release(param_5);

  return uVar2;

}




