// FUN_00118ecc @0x118ecc


void FUN_00118ecc(int param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  

  pcVar1 = &cf_right;

  if (param_1 == 0) {

    pcVar1 = &cf_left;

  }

  _objc_retain(pcVar1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf______);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(pcVar1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




