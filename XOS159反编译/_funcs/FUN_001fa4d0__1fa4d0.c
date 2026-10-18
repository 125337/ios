// FUN_001fa4d0 @0x1fa4d0


void FUN_001fa4d0(void)



{

  undefined *puVar1;

  undefined1 auVar2 [16];

  

  if (((DAT_003ead50 & 1) == 0) && (DAT_003eae58 != '\0')) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    puVar1 = PTR____NSDictionary0__struct_00388310;

    if (DAT_003ea9e0 != (undefined *)0x0) {

      puVar1 = DAT_003ea9e0;

    }

    FUN_002a0060(auVar2._0_8_,auVar2._8_8_,puVar1,&cf_xzyChatListGroupingSideRailIconSizes);

    _objc_release(auVar2._0_8_);

    FUN_001e77e8(&cf_xzyChatListGroupingSideRailIconSizes);

    DAT_003eae58 = '\0';

  }

  return;

}




