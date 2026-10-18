// FUN_00217a98 @0x217a98


uint FUN_00217a98(undefined8 param_1)



{

  long lVar1;

  uint uVar2;

  

  _objc_retain();

  if (DAT_003eaec0 != -1) {

    FUN_0028fb18();

  }

  lVar1 = DAT_003eaeb8;

  _objc_retain(DAT_003eaeb8);

  _objc_autorelease(lVar1);

  uVar2 = 0;

  if (lVar1 != 0) {

    uVar2 = _objc_opt_isKindOfClass(param_1,lVar1);

  }

  _objc_release(param_1);

  return uVar2 & 1;

}




