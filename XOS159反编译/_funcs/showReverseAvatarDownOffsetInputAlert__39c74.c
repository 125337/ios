// showReverseAvatarDownOffsetInputAlert @0x39c74


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::showReverseAvatarDownOffsetInputAlert(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar4 [16];

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  undefined8 local_78;

  ID IStack_70;

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  long local_48;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar4._0_8_;

  auVar4 = FUN_00297480(uVar1,auVar4._8_8_,&cf_mesMsgMergeReverseAvatarDownOffset);

  lVar2 = auVar4._0_8_;

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar4._8_8_,&cf_n_4YPTNOPy,&cf_eQpe<P_,1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  local_a0 = PTR___NSConcreteStackBlock_003886f0;

  uVar3 = auVar4._0_8_;

  if (lVar2 < -99) {

    lVar2 = -100;

  }

  if (99 < lVar2) {

    lVar2 = 100;

  }

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc0000000;

  local_58 = FUN_00039e94;

  puStack_50 = &DAT_00389000;

  local_48 = lVar2;

  FUN_00291400(uVar3,auVar4._8_8_,&local_68);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_98 = 0xc2000000;

  local_90 = FUN_00039f4c;

  puStack_88 = &DAT_00388c90;

  _objc_retain(uVar3);

  local_80 = uVar3;

  _objc_retain(uVar1);

  local_78 = uVar1;

  IStack_70 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_nx_,0,&local_a0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_01,uVar3,1,0);

  _objc_release(local_78);

  _objc_release(local_80);

  _objc_release(uVar3);

  _objc_release(uVar1);

  return;

}




