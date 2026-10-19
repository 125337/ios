// _imageProperties @0x947b8

/* Function Stack Size: 0x10 bytes */

ID WCMYYImageDecoder::_imageProperties(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined8 local_20;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    local_20 = 0;
  }
  else {
    lVar1 = _CGImageSourceCopyProperties(*(undefined8 *)(param_1 + 0x50),0);
    if (lVar1 == 0) {
      local_20 = 0;
    }
    else {
      _objc_autoreleaseReturnValue();
      local_20 = _objc_retainAutoreleasedReturnValue(lVar1);
    }
  }
  IVar2 = _objc_autoreleaseReturnValue(local_20);
  return IVar2;
}

