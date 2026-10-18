// FUN_0007a04c @0x7a04c


void FUN_0007a04c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar4 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  FUN_002a5020(uVar2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a64e0(&_OBJC_CLASS___NSCharacterSet);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(uVar1,auVar4._8_8_,auVar4._0_8_);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(uVar1);

  if ((pcVar3 == (cfstringStruct *)0x0) ||

     (auVar4 = FUN_00297fa0(pcVar3), uVar1 = auVar4._8_8_, auVar4._0_8_ == 0)) {

    _objc_release(pcVar3);

    pcVar3 = &cf_r;

    uVar1 = extraout_x1;

  }

  FUN_002a0060(*(undefined8 *)(param_1 + 0x28),uVar1,pcVar3,&cf_xzy_voice_jump_keyword);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_rlsQ__);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0002a854(0x4004000000000000,&cf_n_bR,uVar1,1);

  _objc_release(uVar1);

  _objc_release(pcVar3);

  _objc_release(uVar2);

  return;

}




