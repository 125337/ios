// onShowStickyChanged: @0x1eb6f8


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::onShowStickyChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar3 = FUN_002979c0(param_3);

  FUN_0029d080(uVar2,auVar3._8_8_,auVar3._0_8_,&cf_xzyChatListGroupingShowSticky);

  FUN_001e77e8(&cf_xzyChatListGroupingShowSticky);

  DAT_003e7158 = FUN_002979c0(param_3);

  DAT_003eaab4 = DAT_003eaab4 + 1;

  iVar1 = FUN_00297960(&_OBJC_CLASS___NSThread);

  if (iVar1 == 0) {

    _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038efb8);

  }

  else {

    FUN_001eb7e0();

  }

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




