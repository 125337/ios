// FUN_00239254 @0x239254


void FUN_00239254(void)



{

  long lVar1;

  

  if (DAT_003eb269 == '\x01') {

    FUN_00238d64();

    lVar1 = DAT_003eb1a8;

    if (DAT_003eb1a8 != 0) {

      _objc_retain(DAT_003eb1a8);

      goto LAB_002392a4;

    }

  }

  FUN_002a64a0(&_OBJC_CLASS___UIColor);

  lVar1 = _objc_retainAutoreleasedReturnValue();

LAB_002392a4:

  _objc_autoreleaseReturnValue(lVar1);

  return;

}




