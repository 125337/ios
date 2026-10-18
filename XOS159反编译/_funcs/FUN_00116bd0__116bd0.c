// FUN_00116bd0 @0x116bd0


void FUN_00116bd0(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar5 [16];

  

  auVar5 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar1 = auVar5._0_8_;

  FUN_002a1f60(uVar1,auVar5._8_8_,&cf_ll_n_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(uVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar2 = FUN_00296be0(uVar2,extraout_x1,2);

  _objc_release(uVar3);

  FUN_0029ce00(uVar2,extraout_x1_00,0x12);

  FUN_002a1c80(uVar2,extraout_x1_01,0x3ee);

  FUN_0029dca0(uVar2,extraout_x1_02,param_1);

  FUN_0029db40(uVar2,extraout_x1_03,param_1);

  FUN_002a6220(uVar1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 != 0) {

    FUN_00299260(lVar4);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    if (auVar5._0_8_ != 0) goto LAB_00116d30;

  }

  FUN_002990e0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

LAB_00116d30:

  FUN_0029aa80(auVar5._0_8_,auVar5._8_8_,uVar1,1);

  _objc_release(lVar4);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




