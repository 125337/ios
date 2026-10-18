// FUN_0006da8c @0x6da8c


void FUN_0006da8c(void)



{

  undefined8 uVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  undefined1 auVar5 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar5._0_8_,auVar5._8_8_,&cf_ttsFvEmotion);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0008a420();

  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  _objc_release(auVar5._0_8_);

  pcVar4 = &cf_normal;

  if (pcVar2 != (cfstringStruct *)0x0) {

    FUN_0006d5ac();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(auVar5._0_8_,auVar5._8_8_,pcVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      pcVar4 = pcVar2;

    }

    _objc_retain(pcVar4);

    _objc_release(lVar3);

    _objc_release(auVar5._0_8_);

  }

  _objc_release(pcVar2);

  _objc_autoreleaseReturnValue(pcVar4);

  return;

}




