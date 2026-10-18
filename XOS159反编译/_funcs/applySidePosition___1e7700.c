// applySidePosition: @0x1e7700


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::applySidePosition_

               (ID param_1,SEL param_2,long_long param_3)



{

  undefined8 extraout_x1;

  undefined1 auVar1 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  ID local_38;

  

  if (5 < param_3 - 1) {

    param_3 = 0;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar1._0_8_,auVar1._8_8_,param_3,&cf_xzyChatListGroupingSidePosition);

  FUN_001e77e8(&cf_xzyChatListGroupingSidePosition);

  DAT_003eaab4 = DAT_003eaab4 + 1;

  local_58 = PTR___NSConcreteStackBlock_003886f0;

  local_50 = 0xc2000000;

  local_48 = FUN_001e7868;

  puStack_40 = &DAT_00388e60;

  DAT_003eaac8 = param_3;

  local_38 = param_1;

  FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1,&local_58);

  FUN_001c9388();

  _objc_release(auVar1._0_8_);

  return;

}




