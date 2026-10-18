// FUN_001e6364 @0x1e6364


void FUN_001e6364(void)



{

  undefined8 uVar1;

  cfstringStruct *pcVar2;

  undefined1 auVar3 [16];

  

  if ((0.01 <= ABS(DAT_003eaad8)) || (0.01 <= ABS(DAT_003eaae0))) {

    FUN_0021441c();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0021441c(DAT_003eaae0);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf___);

    pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(auVar3._0_8_);

    _objc_release(uVar1);

  }

  else {

    pcVar2 = &cf__;

  }

  _objc_autoreleaseReturnValue(pcVar2);

  return;

}




