// FUN_00244c70 @0x244c70


void FUN_00244c70(undefined8 param_1,long param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar4 [16];

  

  _objc_retain();

  FUN_002a62a0(param_1,extraout_x1,&UNK_000024b8 + param_2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UILabel);

  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

  if ((uVar3 & 1) == 0) {

    _objc_alloc(&_OBJC_CLASS___UILabel);

    uVar2 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                         *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                         *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                         *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

    _objc_release(uVar1);

    FUN_002a1c80(uVar2,extraout_x1_00,&UNK_000024b8 + param_2);

    FUN_002a23c0(uVar2,extraout_x1_01,0);

    FUN_002a1d80(uVar2,extraout_x1_02,1);

    FUN_002a4aa0(0x4024000000000000,&_OBJC_CLASS___UIFont);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(uVar2,auVar4._8_8_,auVar4._0_8_);

    _objc_release(auVar4._0_8_);

    FUN_00291380(param_1,extraout_x1_03,uVar2);

    uVar1 = uVar2;

  }

  _objc_retain(uVar1);

  _objc_release(uVar1);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




