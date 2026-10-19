// _framePropertiesAtIndex: @0x946f4

/* Function Stack Size: 0x18 bytes */

ID WCMYYImageDecoder::_framePropertiesAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ulong uVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_20;
  
  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 0x70));
  if (param_3 < uVar1) {
    if (*(long *)(param_1 + 0x50) == 0) {
      local_20 = 0;
    }
    else {
      lVar2 = _CGImageSourceCopyPropertiesAtIndex(*(undefined8 *)(param_1 + 0x50),param_3,0);
      if (lVar2 == 0) {
        local_20 = 0;
      }
      else {
        _objc_autoreleaseReturnValue();
        local_20 = _objc_retainAutoreleasedReturnValue(lVar2);
      }
    }
  }
  else {
    local_20 = 0;
  }
  IVar3 = _objc_autoreleaseReturnValue(local_20);
  return IVar3;
}

