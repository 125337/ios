// showPrivateGapInputAlert @0x3b314


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::showPrivateGapInputAlert(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar4;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  float fVar5;

  undefined1 auVar6 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined8 local_88;

  ID IStack_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  double local_58;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar6._0_8_;

  FUN_00299520(uVar2,auVar6._8_8_,&cf_mesMsgMergePrivateGapReduce);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == 0) {

    local_58 = -10.0;

    uVar4 = extraout_x1;

  }

  else {

    fVar5 = (float)FUN_00295460(uVar2,extraout_x1,&cf_mesMsgMergePrivateGapReduce);

    local_58 = (double)fVar5;

    uVar4 = extraout_x1_00;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar4,&cf_n_yJ_Q_,&cf_eQpe<P_,1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar4 = auVar6._0_8_;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc0000000;

  local_68 = FUN_0003b550;

  puStack_60 = &DAT_00389000;

  FUN_00291400(uVar4,auVar6._8_8_,&local_78);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  local_b0 = puVar1;

  local_a8 = 0xc2000000;

  local_a0 = FUN_0003b608;

  puStack_98 = &DAT_00388c90;

  _objc_retain(uVar4);

  local_90 = uVar4;

  _objc_retain(uVar2);

  local_88 = uVar2;

  IStack_80 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_b0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_0029a500(param_1,extraout_x1_03,uVar4,1,0);

  _objc_release(local_88);

  _objc_release(local_90);

  _objc_release(uVar4);

  _objc_release(uVar2);

  return;

}




