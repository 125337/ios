// showCustomSpeechRateInput @0x7563c


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showCustomSpeechRateInput(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar3 [16];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined8 local_88;

  ID IStack_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  ID local_58;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf__IN,&cf_eQ0,1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar2 = auVar3._0_8_;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_000757dc;

  puStack_60 = &DAT_00388f20;

  local_58 = param_1;

  FUN_00291400(uVar2,auVar3._8_8_,&local_78);

  local_a8 = puVar1;

  local_a0 = 0xc2000000;

  local_98 = FUN_0007589c;

  puStack_90 = &DAT_00388d20;

  _objc_retain(uVar2);

  local_88 = uVar2;

  IStack_80 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_nx_,0,&local_a8);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_01,uVar2,1,0);

  _objc_release(local_88);

  _objc_release(uVar2);

  return;

}




