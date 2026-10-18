// viewDidLoad @0x6d124


/* Function Stack Size: 0x10 bytes */



void XZYFvEmotionPickerViewController::viewDidLoad(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  ID IVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined1 auVar9 [16];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  long local_68;

  ID local_60;

  class_t *pcStack_58;

  

  pcStack_58 = &objc::class_t::XZYFvEmotionPickerViewController;

  local_60 = param_1;

  _objc_msgSendSuper2(&local_60,"viewDidLoad");

  FUN_00299de0(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  pcVar2 = auVar9._0_8_;

  pcVar1 = &::cf_F;

  if (pcVar2 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar2;

  }

  FUN_002a1f60(param_1,auVar9._8_8_,pcVar1);

  _objc_release(pcVar2);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar9._0_8_,auVar9._8_8_,uVar3);

  _objc_release(auVar9._0_8_);

  _objc_release(uVar3);

  FUN_002998e0(param_1);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    FUN_0006d5ac();

    lVar5 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(lVar4);

    lVar5 = lVar4;

  }

  _objc_release(lVar4);

  FUN_002a0440(param_1,extraout_x1,lVar5);

  FUN_00291600(lVar5);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar6 = FUN_00299020();

  _objc_release(uVar3);

  FUN_00299540(lVar5,extraout_x1_00,&cf_normal);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_none;

  if (lVar4 != 0) {

    pcVar1 = &cf_normal;

  }

  _objc_retain(pcVar1);

  _objc_release(lVar4);

  FUN_0029b460(uVar6,extraout_x1_01,pcVar1);

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc2000000;

  local_78 = FUN_0006d5f0;

  puStack_70 = &DAT_0038a0f0;

  _objc_retain(lVar5);

  local_68 = lVar5;

  FUN_002a3ee0(uVar6,extraout_x1_02,&local_88);

  FUN_00297000(uVar6,extraout_x1_03,pcVar1,0);

  FUN_0029e0a0(param_1,extraout_x1_04,uVar6);

  FUN_0029e4a0(param_1,extraout_x1_05,uVar6);

  auVar9 = _objc_alloc(&_OBJC_CLASS___UISearchController);

  auVar9 = FUN_00296de0(auVar9._0_8_,auVar9._8_8_,0);

  FUN_0029e080(param_1,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_00294ba0(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1060(auVar9._0_8_,auVar9._8_8_,param_1);

  _objc_release(auVar9._0_8_);

  FUN_00294ba0(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a00c0(auVar9._0_8_,auVar9._8_8_,0);

  _objc_release(auVar9._0_8_);

  FUN_00294ba0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bf00();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a06e0(auVar9._0_8_,auVar9._8_8_,&cf_d____b<h);

  _objc_release(auVar9._0_8_);

  _objc_release(uVar3);

  FUN_00294ba0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00299140(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1000(auVar9._0_8_,auVar9._8_8_,uVar3);

  _objc_release(auVar9._0_8_);

  _objc_release(uVar3);

  FUN_00299140(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8e0(auVar9._0_8_,auVar9._8_8_,0);

  _objc_release(auVar9._0_8_);

  FUN_0029dbc0(param_1,extraout_x1_06,1);

  FUN_002990e0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6260();

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  IVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar7);

  _objc_release(uVar3);

  if (IVar8 == param_1) {

    auVar9 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

    uVar3 = FUN_00296960(auVar9._0_8_,auVar9._8_8_,0,param_1,"closeEmotionPicker");

    FUN_00299140(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029f3c0(auVar9._0_8_,auVar9._8_8_,uVar3);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar3);

  }

  _objc_release(local_68);

  _objc_release(pcVar1);

  _objc_release(uVar6);

  _objc_release(lVar5);

  return;

}




