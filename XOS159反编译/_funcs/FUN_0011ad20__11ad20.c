// FUN_0011ad20 @0x11ad20


void FUN_0011ad20(long param_1)



{

  long lVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  _objc_retain();

  if ((param_1 == 0) || (auVar6 = FUN_00297fa0(param_1), uVar5 = auVar6._8_8_, auVar6._0_8_ == 0)) {

    lVar4 = 0;

    goto LAB_0011aea4;

  }

  if (DAT_003e8438 != -1) {

    thunk_FUN_00128d5c();

    uVar5 = extraout_x1;

  }

  FUN_00299540(DAT_003e8300,uVar5,param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar6._8_8_;

  lVar1 = auVar6._0_8_;

  if (lVar1 != 0) {

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    lVar4 = 0;

    if (lVar1 != lVar2) {

      lVar4 = lVar1;

    }

    _objc_retain(lVar4);

    goto LAB_0011ae94;

  }

  if (DAT_003e8330 != -1) {

    FUN_0028f378();

    uVar5 = extraout_x1_00;

  }

  if (DAT_003e8328 == 0) {

LAB_0011ae68:

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    lVar2 = auVar6._0_8_;

    FUN_002a00a0(DAT_003e8300,auVar6._8_8_,lVar2,param_1);

    lVar4 = 0;

  }

  else {

    FUN_00295820(DAT_003e8328,uVar5,param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) goto LAB_0011ae68;

    FUN_00298660(lVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    auVar6 = FUN_00297fa0();

    if (auVar6._0_8_ == 0) {

      FUN_00298620(lVar2);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      auVar6 = FUN_00297fa0();

      if (auVar6._0_8_ == 0) {

        _objc_release(lVar4);

        _objc_release(lVar3);

        _objc_release(lVar2);

        goto LAB_0011ae68;

      }

      FUN_002a00a0(DAT_003e8300,auVar6._8_8_,lVar4,param_1);

      _objc_release(lVar3);

    }

    else {

      FUN_002a00a0(DAT_003e8300,auVar6._8_8_,lVar3,param_1);

      lVar4 = lVar3;

    }

  }

LAB_0011ae94:

  _objc_release(lVar2);

  _objc_release(lVar1);

LAB_0011aea4:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar4);

  return;

}




