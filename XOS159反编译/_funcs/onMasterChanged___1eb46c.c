// onMasterChanged: @0x1eb46c


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::onMasterChanged_(ID param_1,SEL param_2,ID param_3)



{

  undefined1 uVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_002979c0(param_3);

  FUN_0029d080(uVar3,auVar5._8_8_,auVar5._0_8_,&cf_xzyChatListGroupingEnabled);

  FUN_001e77e8(&cf_xzyChatListGroupingEnabled);

  iVar2 = FUN_002924c0(uVar3,extraout_x1,&cf_coversEnabled);

  uVar1 = 0;

  if (iVar2 != 0) {

    uVar1 = FUN_002979c0(param_3);

  }

  DAT_003eaa30 = uVar1;

  DAT_003eaab4 = DAT_003eaab4 + 1;

  FUN_002a4dc0(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar4);

  FUN_001c9388();

  _objc_release(uVar3);

  _objc_release(param_3);

  return;

}




