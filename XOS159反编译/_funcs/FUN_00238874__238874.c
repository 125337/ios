// FUN_00238874 @0x238874


void FUN_00238874(undefined8 param_1,long param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined1 auVar3 [16];

  

  _objc_retain();

  FUN_00292660(&objc::class_t::XZYHomeDockButton,extraout_x1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_002a27e0(uVar1,auVar3._8_8_,param_1);

  FUN_002a2800(uVar1,extraout_x1_00,param_2);

  FUN_002913c0(uVar1,extraout_x1_01,uVar1,"xzy_handleTap",0x40);

  uVar2 = extraout_x1_02;

  if (param_2 == -2) {

    auVar3 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);

    uVar2 = FUN_00296f20(auVar3._0_8_,auVar3._8_8_,uVar1,"xzy_handleLongPress:");

    FUN_0029fce0(0x3fdccccccccccccd);

    FUN_0029d200(uVar2,extraout_x1_03,1);

    FUN_00291140(uVar1,extraout_x1_04,uVar2);

    _objc_release(uVar2);

    uVar2 = extraout_x1_05;

  }

  FUN_0029c980(uVar1,uVar2,0);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




