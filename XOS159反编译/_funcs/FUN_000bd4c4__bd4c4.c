// FUN_000bd4c4 @0xbd4c4


void FUN_000bd4c4(undefined8 param_1,undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  

  _objc_retain();

  lVar1 = FUN_00297fa0(param_1);

  if (lVar1 != 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar3._0_8_;

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_msgMergeAvatarAbove___);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d080(uVar2,auVar3._8_8_,param_2,auVar3._0_8_);

    if (((int)param_2 != 0) &&

       (auVar4 = FUN_002924c0(uVar2,extraout_x1,&cf_mesMsgMergeAvatarAboveAnyChat),

       (auVar4._0_8_ & 1) == 0)) {

      FUN_0029d080(uVar2,auVar4._8_8_,1,&cf_mesMsgMergeAvatarAboveAnyChat);

    }

    FUN_002a4a40(uVar2);

    _objc_release(auVar3._0_8_);

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  return;

}




