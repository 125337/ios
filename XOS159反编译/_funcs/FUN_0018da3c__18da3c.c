// FUN_0018da3c @0x18da3c


void FUN_0018da3c(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  if ((DAT_003e9628 & 1) != 0) {

    return;

  }

  DAT_003e9628 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  auVar3 = FUN_002924c0(uVar1,auVar3._8_8_,&cf_coversEnabled);

  uVar2 = auVar3._0_8_;

  if ((auVar3._0_4_ != 0) &&

     (uVar2 = FUN_002924c0(uVar1,auVar3._8_8_,&cf_mesMsgMergeEnabled), (int)uVar2 != 0)) {

    uVar2 = FUN_00005038();

  }

  DAT_003e95c8 = (undefined1)uVar2;

  DAT_003e9630 = FUN_0019e75c(uVar1,&cf_mesMsgMergeMessageOffsetOther);

  DAT_003e9638 = FUN_0019e75c(uVar1,&cf_mesMsgMergeMessageOffsetSelf);

  if (DAT_003e95d0 == 0) {

    DAT_003e95d0 = _objc_getClass("TextMessageSubViewModel");

  }

  if (DAT_003e9640 == 0) {

    DAT_003e9640 = _objc_getClass("MMCPLabel");

  }

  FUN_0018dc7c();

  _objc_release(uVar1);

  return;

}




