// FUN_001cb9dc @0x1cb9dc


void FUN_001cb9dc(long param_1)



{

  cfstringStruct *pcVar1;

  long lVar2;

  cfstringStruct *pcVar3;

  undefined8 extraout_x1;

  

  _objc_retain();

  if (param_1 == 0) {

    pcVar3 = &cf_hQ;

  }

  else {

    if (DAT_003eaa00 == 0) {

      pcVar1 = (cfstringStruct *)0x0;

    }

    else {

      FUN_00299540(DAT_003eaa00,extraout_x1,param_1);

      pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    lVar2 = FUN_00297fa0(pcVar1);

    if (lVar2 == 0) {

      FUN_001cbaa4(param_1);

      pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(pcVar1);

      pcVar3 = pcVar1;

    }

    _objc_release(pcVar1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar3);

  return;

}




