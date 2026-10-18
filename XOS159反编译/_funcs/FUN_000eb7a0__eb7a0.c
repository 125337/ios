// FUN_000eb7a0 @0xeb7a0


uint FUN_000eb7a0(undefined8 param_1)



{

  undefined *puVar1;

  uint uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e66e8);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e66f0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar2 = FUN_002924e0();

    goto LAB_000eb8d4;

  }

  if (DAT_003e7e40 != -1) {

    FUN_0028f180();

  }

  if (DAT_003e7e38 == 0) {

LAB_000eb880:

    uVar2 = 0;

  }

  else {

    FUN_002a4880(param_1);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) goto LAB_000eb880;

    do {

      uVar2 = _objc_opt_isKindOfClass(lVar5,DAT_003e7e38);

      lVar6 = lVar5;

      if ((uVar2 & 1) != 0) break;

      FUN_002a4880(lVar5);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar5);

      lVar5 = lVar6;

    } while (lVar6 != 0);

    _objc_release(lVar6);

  }

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e66e8,PTR____kCFBooleanTrue_00388320,1);

  puVar1 = PTR_LOOP_003e66f0;

  FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1,uVar2 & 1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_setAssociatedObject(param_1,puVar1,uVar4,1);

LAB_000eb8d4:

  _objc_release(uVar4);

  _objc_release(lVar3);

  _objc_release(param_1);

  return uVar2 & 1;

}




