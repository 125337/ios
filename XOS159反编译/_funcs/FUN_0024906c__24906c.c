// FUN_0024906c @0x24906c


void FUN_0024906c(undefined8 param_1)



{

  undefined *puVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UIVisualEffectView);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  if ((uVar3 & 1) == 0) goto LAB_00249164;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e72e0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar6._8_8_;

  lVar4 = auVar6._0_8_;

  if ((lVar4 == 0) || (auVar6 = FUN_002974a0(lVar4), uVar2 = auVar6._8_8_, auVar6._0_8_ != 6)) {

LAB_002490f0:

    FUN_00294b00(&_OBJC_CLASS___UIBlurEffect,uVar2,6);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029df80(param_1,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    puVar1 = PTR_LOOP_003e72e0;

    FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_00,6);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar1,uVar2,1);

    _objc_release(uVar2);

  }

  else {

    FUN_00294ae0(param_1);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar2 = extraout_x1;

    if (lVar5 == 0) goto LAB_002490f0;

  }

  _objc_release(lVar4);

LAB_00249164:

  _objc_release(param_1);

  return;

}




