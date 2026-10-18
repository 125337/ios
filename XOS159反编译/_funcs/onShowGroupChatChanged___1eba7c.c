// onShowGroupChatChanged: @0x1eba7c


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::onShowGroupChatChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_xzyChatListGroupingShowGroupChat);

  FUN_001e77e8(&cf_xzyChatListGroupingShowGroupChat);

  DAT_003e715b = FUN_002979c0(param_3);

  DAT_003eaab4 = DAT_003eaab4 + 1;

  FUN_001c9388();

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




