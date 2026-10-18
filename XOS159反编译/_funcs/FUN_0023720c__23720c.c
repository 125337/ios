// FUN_0023720c @0x23720c


void FUN_0023720c(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar6 [16];

  

  _objc_retain();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_sf______1f__ld);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002373f0();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

  if ((uVar4 & 1) == 0) {

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 == lVar5) {

      lVar5 = 0;

    }

    else {

      FUN_00293320(param_1,&_OBJC_CLASS___UIImageSymbolConfiguration,extraout_x1_00,param_3);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4be0(&_OBJC_CLASS___UIImage,auVar6._8_8_,param_2,auVar6._0_8_);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

      FUN_00296620(uVar3,extraout_x1_01,2);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_00237460(uVar1,lVar5);

      _objc_release(uVar3);

    }

  }

  else {

    _objc_retain(lVar2);

    lVar5 = lVar2;

  }

  _objc_release(lVar2);

  _objc_release(uVar1);

  _objc_release(param_2);

  _objc_autoreleaseReturnValue(lVar5);

  return;

}




