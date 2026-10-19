// -[UIImage(WCMYYImageCoder)_setWcm_yy_isDecodedForDisplay:] @0x9a58c

void __UIImage_WCMYYImageCoder__setWcm_yy_isDecodedForDisplay__
               (undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,param_2,param_3 & 1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,"wcm_yy_isDecodedForDisplay",uVar1,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

