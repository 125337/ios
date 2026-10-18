// FUN_00005038 @0x5038


undefined8 FUN_00005038(void)



{

  undefined8 uVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar4._0_8_;

  auVar4 = FUN_002924c0(uVar1,auVar4._8_8_,&cf_mesMsgMergeAvatarAboveBubble);

  if (((auVar4._0_8_ & 1) == 0) &&

     (uVar2 = FUN_002924c0(uVar1,auVar4._8_8_,&cf_mesMsgMergeAvatarAboveAnyChat), (uVar2 & 1) == 0))

  {

    uVar3 = FUN_000050c0(uVar1);

  }

  else {

    uVar3 = 1;

  }

  _objc_release(uVar1);

  return uVar3;

}




