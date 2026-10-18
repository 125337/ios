// FUN_001040f4 @0x1040f4


void FUN_001040f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  double dVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  _objc_retainAutorelease(param_3);

  lVar1 = FUN_00290a40();

  if ((((lVar1 == 0) || (lVar2 = FUN_00296500(param_3), lVar2 != 0)) ||

      (lVar2 = _CGImageGetWidth(lVar1), lVar2 != 0xac)) ||

     (lVar2 = _CGImageGetHeight(lVar1), lVar2 != 0x79)) {

    _UIGraphicsBeginImageContextWithOptions(param_1,param_2,0,0);

    FUN_00294900(0,0,param_1,param_2,param_3);

    _UIGraphicsGetImageFromCurrentImageContext();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _UIGraphicsEndImageContext();

  }

  else {

    dVar4 = (double)FUN_0029bda0(param_3);

    if (dVar4 == 3.0) {

      _objc_retain(param_3);

      uVar3 = param_3;

    }

    else {

      auVar5 = FUN_00296500(param_3);

      FUN_002965a0(0x4008000000000000,&_OBJC_CLASS___UIImage,auVar5._8_8_,lVar1,auVar5._0_8_);

      uVar3 = _objc_retainAutoreleasedReturnValue();

    }

  }

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}




