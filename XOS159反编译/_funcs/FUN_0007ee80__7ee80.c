// FUN_0007ee80 @0x7ee80


void FUN_0007ee80(undefined8 param_1,undefined8 param_2)



{

  cfstringStruct *pcVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar5 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  undefined8 local_38;

  

  if (DAT_003e74b8 == '\x01') {

    pcVar1 = &cf_dkHr_g_1YHefe0R;

    if (DAT_003e74a0 != (cfstringStruct *)0x0) {

      pcVar1 = DAT_003e74a0;

    }

    FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_Hr_g_1YHe,pcVar1,1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar5._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar5._8_8_,&cf_nx_,0,0);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar5._8_8_,auVar5._0_8_);

    _objc_release(auVar5._0_8_);

    FUN_0029a500(param_1,extraout_x1,uVar4,1,0);

  }

  else {

    lVar2 = FUN_00297fa0(DAT_003e74a8);

    uVar4 = DAT_003e74a8;

    if (lVar2 != 0) {

      _objc_retain(DAT_003e74a8);

      uVar3 = DAT_003e74a8;

      DAT_003e74a8 = 0;

      _objc_release(uVar3);

      FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,&cf_lQJT,uVar4,1);

      auVar5 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar5._0_8_;

      local_58 = PTR___NSConcreteStackBlock_003886f0;

      local_50 = 0xc0000000;

      local_48 = FUN_00090b68;

      puStack_40 = &DAT_0038aac0;

      local_38 = param_1;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar5._8_8_,&cf_nx_,0,&local_58);

      auVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

      _objc_release(auVar5._0_8_);

      FUN_0029a500(param_1,extraout_x1_01,uVar3,1,0);

      _objc_release(uVar3);

      _objc_release(uVar4);

      return;

    }

    uVar4 = _objc_alloc_init(&objc::class_t::_0x2f19de29);

    FUN_002990e0(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029aa80(auVar5._0_8_,auVar5._8_8_,uVar4,1);

    _objc_release(auVar5._0_8_);

  }

  _objc_release(uVar4);

  return;

}




