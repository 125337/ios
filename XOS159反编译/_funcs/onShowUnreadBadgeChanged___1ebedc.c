// onShowUnreadBadgeChanged: @0x1ebedc


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::onShowUnreadBadgeChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined1 auVar3 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_xzyChatListGroupingShowUnreadBadge);

  FUN_001e77e8(&cf_xzyChatListGroupingShowUnreadBadge);

  DAT_003e70f0 = FUN_002979c0(param_3);

  FUN_002a4dc0(param_1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar2._8_8_,4);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar2._0_8_,auVar3._8_8_,auVar3._0_8_,100);

  _objc_release(auVar3._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_001c9388();

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




