// FUN_001fa568 @0x1fa568


void FUN_001fa568(void)



{

  undefined *puVar1;

  undefined1 auVar2 [16];

  

  if (((DAT_003ead50 & 1) == 0) && (DAT_003eae60 != '\0')) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    puVar1 = PTR____NSDictionary0__struct_00388310;

    if (DAT_003ea9e8 != (undefined *)0x0) {

      puVar1 = DAT_003ea9e8;

    }

    FUN_002a0060(auVar2._0_8_,auVar2._8_8_,puVar1,&cf_xzyChatListGroupingSideRailTitleSizes);

    _objc_release(auVar2._0_8_);

    FUN_001e77e8(&cf_xzyChatListGroupingSideRailTitleSizes);

    DAT_003eae60 = '\0';

  }

  return;

}




