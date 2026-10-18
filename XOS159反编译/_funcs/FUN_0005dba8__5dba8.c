// FUN_0005dba8 @0x5dba8


void FUN_0005dba8(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  _objc_retain(param_2);

  _objc_getAssociatedObject(param_2,"textView");

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_2,"weakSelf");

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020(uVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  auVar6 = FUN_00297fa0();

  if (auVar6._0_8_ != 0) {

    FUN_002a1be0(uVar2,auVar6._8_8_,uVar3);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar6._0_8_;

    FUN_002a0060(uVar4,auVar6._8_8_,uVar3,&cf_aiChatSystemPrompt);

    FUN_002a4a40(uVar4);

    FUN_002a4dc0(uVar2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar5);

    _objc_release(uVar4);

  }

  FUN_002990e0(param_2);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a080(auVar6._0_8_,auVar6._8_8_,1);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_2);

  return;

}




