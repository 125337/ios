// FUN_0020bc04 @0x20bc04


void FUN_0020bc04(void)



{

  undefined *puVar1;

  undefined1 auVar2 [16];

  

  puVar1 = PTR____NSDictionary0__struct_00388310;

  if (DAT_003eaa00 != 0) {

    puVar1 = (undefined *)FUN_002937a0();

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar2._0_8_,auVar2._8_8_,puVar1,&cf_xzyChatListGroupingGroupNames);

  _objc_release(auVar2._0_8_);

  FUN_001e77e8(&cf_xzyChatListGroupingGroupNames);

  _objc_release(puVar1);

  return;

}




