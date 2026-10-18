// FUN_0014a73c @0x14a73c


void FUN_0014a73c(long param_1)



{

  undefined8 uVar1;

  int iVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar5;

  undefined8 extraout_x1_02;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  FUN_0013e1a0();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(param_1 + 0x20));

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b3c0(auVar6._0_8_,auVar6._8_8_,uVar4,0);

  _objc_release(auVar6._0_8_);

  uVar5 = *(undefined8 *)(param_1 + 0x20);

  FUN_002a45e0(*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_CadisSelectedCardLight);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_00297820(uVar5,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  uVar5 = extraout_x1_00;

  if (iVar2 != 0) {

    FUN_0029b4a0(*(undefined8 *)(param_1 + 0x28),extraout_x1_00,&cf_CadisSelectedCardLight);

    uVar5 = extraout_x1_01;

  }

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  FUN_002a45e0(*(undefined8 *)(param_1 + 0x28),uVar5,&cf_CadisSelectedCardDark);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  iVar3 = FUN_00297820(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  if (iVar3 == 0) {

    if (iVar2 == 0) goto LAB_0014a84c;

  }

  else {

    FUN_0029b4a0(*(undefined8 *)(param_1 + 0x28),extraout_x1_02,&cf_CadisSelectedCardDark);

  }

  FUN_0013fe6c();

  FUN_00136604();

LAB_0014a84c:

  FUN_0029b120(*(undefined8 *)(param_1 + 0x30));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar6._8_8_,1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_,100);

  _objc_release(auVar7._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar4);

  return;

}




