// FUN_0024527c @0x24527c


void FUN_0024527c(undefined8 param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e72c8);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 == 0) {

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    auVar4 = FUN_00292e20(param_1);

    FUN_00299380(&_OBJC_CLASS___NSNumber,auVar4._8_8_,auVar4._0_8_);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar2,auVar4._8_8_,auVar4._0_8_,&cf_clips);

    _objc_release(auVar4._0_8_);

    FUN_00297e40(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    auVar4 = FUN_00298a60();

    FUN_00299380(&_OBJC_CLASS___NSNumber,auVar4._8_8_,auVar4._0_8_);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar2,auVar4._8_8_,auVar4._0_8_,&cf_masks);

    _objc_release(auVar4._0_8_);

    _objc_release(uVar3);

    FUN_00292080(param_1);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    lVar1 = auVar4._0_8_;

    if (lVar1 == 0) {

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      auVar4 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_002a00a0(uVar2,auVar4._8_8_,auVar4._0_8_,&cf_background);

    if (lVar1 == 0) {

      _objc_release(auVar4._0_8_);

    }

    _objc_release(lVar1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e72c8,uVar2,1);

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  return;

}




