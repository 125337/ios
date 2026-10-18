// onFollowThemeBadgeChanged: @0x1ec004


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::onFollowThemeBadgeChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_xzyChatListGroupingFollowThemeBadge);

  FUN_001e77e8(&cf_xzyChatListGroupingFollowThemeBadge);

  DAT_003e70e8 = FUN_002979c0(param_3);

  FUN_001ec0b4();

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




