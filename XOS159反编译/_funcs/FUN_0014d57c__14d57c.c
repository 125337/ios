// FUN_0014d57c @0x14d57c


void FUN_0014d57c(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  uVar5 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar5);

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_00136588();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar6._0_8_;

  FUN_002a44a0(uVar5,auVar6._8_8_,&cf_Light);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar6._0_8_;

  FUN_002a44a0(uVar5,auVar6._8_8_,&cf_Dark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  auVar6 = FUN_00297fa0(param_2);

  if (auVar6._0_8_ == 0) {

    FUN_0029b4a0(uVar1,auVar6._8_8_,uVar2);

  }

  else {

    FUN_002a0060(uVar1,auVar6._8_8_,param_2,uVar2);

  }

  auVar6 = FUN_00297fa0(param_3);

  if (auVar6._0_8_ == 0) {

    FUN_0029b4a0(uVar1,auVar6._8_8_,uVar3);

    uVar4 = extraout_x1_00;

  }

  else {

    FUN_002a0060(uVar1,auVar6._8_8_,param_3,uVar3);

    uVar4 = extraout_x1;

  }

  FUN_0029b4a0(uVar1,uVar4,uVar5);

  FUN_00136604();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(uVar5);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar6._8_8_,*(undefined8 *)(param_1 + 0x30));

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_,5);

  _objc_release(auVar7._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




