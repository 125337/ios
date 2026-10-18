// FUN_00254464 @0x254464


void FUN_00254464(long param_1)



{

  long lVar1;

  cfstringStruct *pcVar2;

  undefined1 auVar3 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    pcVar2 = &cf___;

  }

  else {

    _UIImagePNGRepresentation(param_1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    lVar1 = auVar3._0_8_;

    if (lVar1 == 0) {

      pcVar2 = &cf___;

    }

    else {

      FUN_00292140(lVar1,auVar3._8_8_,0);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_data_image_png_base64___);

      pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      _objc_release(auVar3._0_8_);

    }

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar2);

  return;

}




