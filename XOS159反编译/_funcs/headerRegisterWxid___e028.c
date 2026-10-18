// headerRegisterWxid: @0xe028


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::headerRegisterWxid_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  ID local_50;

  undefined8 local_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  _objc_retain(param_3);

  FUN_0029e0c0(param_3,extraout_x1,0);

  FUN_002a5380(param_3,extraout_x1_00,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_002a1f80(param_3,auVar2._8_8_,&cf__v_N_,0);

  _objc_initWeak(auStack_38,param_1);

  local_70 = PTR___NSConcreteStackBlock_003886f0;

  local_68 = 0xc2000000;

  local_60 = FUN_0000e188;

  puStack_58 = &DAT_00388ef0;

  _objc_copyWeak(auStack_40,auStack_38);

  _objc_retain(param_3);

  local_50 = param_3;

  _objc_retain(uVar1);

  local_48 = uVar1;

  FUN_001ba408(1,&local_70);

  _objc_release(local_48);

  _objc_release(local_50);

  _objc_destroyWeak(auStack_40);

  _objc_destroyWeak(auStack_38);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




