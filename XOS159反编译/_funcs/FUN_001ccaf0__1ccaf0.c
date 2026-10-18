// FUN_001ccaf0 @0x1ccaf0


void FUN_001ccaf0(undefined8 param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  ulong uVar3;

  cfstringStruct *pcVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  auVar5 = FUN_00297fa0(param_1);

  if (auVar5._0_8_ == 0) {

    pcVar4 = &cf___;

  }

  else {

    if (DAT_003eaa08 == 0) {

      pcVar1 = (cfstringStruct *)0x0;

    }

    else {

      FUN_00299540(DAT_003eaa08,auVar5._8_8_,param_1);

      pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar3 = _objc_opt_isKindOfClass(pcVar1,uVar2);

    if ((uVar3 & 1) == 0) {

      FUN_001cbaa4(param_1);

      pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(pcVar1);

      pcVar4 = pcVar1;

    }

    _objc_release(pcVar1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar4);

  return;

}




