// toggleReverseMerge: @0x39a88


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::toggleReverseMerge_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar3 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar3._8_8_,auVar3._0_8_,&cf_mesMsgMergeReverse);

  FUN_002a4a40(uVar1);

  FUN_002a6220(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar3._0_8_,auVar3._8_8_,0x3ea);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  if (lVar2 != 0) {

    FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,2);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b1c0(lVar2,auVar3._8_8_,auVar3._0_8_,100);

    _objc_release(auVar3._0_8_);

  }

  _objc_release(lVar2);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




