// FUN_0000f448 @0xf448


void FUN_0000f448(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  long lVar4;

  dispatch_time_t dVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar6 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  FUN_002a5020(uVar2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a64e0(&_OBJC_CLASS___NSCharacterSet);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(uVar1,auVar6._8_8_,auVar6._0_8_);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(uVar1);

  if ((pcVar3 == (cfstringStruct *)0x0) ||

     (auVar6 = FUN_00297fa0(pcVar3), uVar1 = auVar6._8_8_, auVar6._0_8_ == 0)) {

    _objc_release(pcVar3);

    pcVar3 = &cf_XOS;

    uVar1 = extraout_x1;

  }

  FUN_002a0060(*(undefined8 *)(param_1 + 0x28),uVar1,pcVar3,&cf_xzy_plugin_jump_keyword);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_00296020(*(undefined8 *)(param_1 + 0x30));

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar6._0_8_,auVar6._8_8_,0x3e9);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  uVar1 = extraout_x1_00;

  if (lVar4 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UILabel);

    auVar6 = _objc_opt_isKindOfClass(lVar4,uVar1);

    uVar1 = auVar6._8_8_;

    if ((auVar6._0_8_ & 1) != 0) {

      FUN_002a1d60(lVar4,uVar1,pcVar3);

      uVar1 = extraout_x1_01;

    }

  }

  FUN_002a4680(&_OBJC_CLASS___NSString,uVar1,&cf__wclsQ__n__N_);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar6._8_8_,0,auVar6._0_8_,1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x30),extraout_x1_02,uVar1,1,0);

  dVar5 = _dispatch_time(0,1500000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0000f710;

  puStack_50 = &DAT_00388e60;

  local_48 = uVar1;

  _objc_retain(uVar1);

  _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(local_48);

  _objc_release(uVar1);

  _objc_release(lVar4);

  _objc_release(pcVar3);

  _objc_release(uVar2);

  return;

}




