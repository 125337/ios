// FUN_000c8770 @0xc8770


void FUN_000c8770(undefined8 param_1)



{

  undefined *puVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6698);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  puVar1 = PTR_LOOP_003e6698;

  if (lVar2 == 0) {

    auVar6 = FUN_002978a0(param_1);

    FUN_00299380(&_OBJC_CLASS___NSNumber,auVar6._8_8_,auVar6._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar1,uVar3,1);

    _objc_release(uVar3);

  }

  FUN_002a4880(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_opt_class(&_OBJC_CLASS___UIButton);

  uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);

  _objc_release(uVar3);

  puVar1 = PTR_LOOP_003e66a0;

  uVar3 = extraout_x1;

  if ((uVar5 & 1) != 0) {

    FUN_002a4880(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar1,uVar3,0);

    _objc_release(uVar3);

    uVar3 = extraout_x1_00;

  }

  FUN_0029e8a0(param_1,uVar3,1);

  _objc_release(param_1);

  return;

}




