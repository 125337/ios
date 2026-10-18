// FUN_00214fe0 @0x214fe0


void FUN_00214fe0(void)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  DAT_003eae55 = 0;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar3._8_8_;

  uVar1 = auVar3._0_8_;

  if (DAT_003eae54 == '\x01') {

    FUN_002a0060(uVar1,uVar2,DAT_003ea938,&cf_xzyChatListGroupingDividerOffsets);

    FUN_001e77e8(&cf_xzyChatListGroupingDividerOffsets);

    DAT_003eae54 = '\0';

    uVar2 = extraout_x1;

  }

  if (DAT_003eae56 == '\x01') {

    FUN_002a0060(uVar1,uVar2,DAT_003ea940,&cf_xzyChatListGroupingDividerFontSizes);

    FUN_001e77e8(&cf_xzyChatListGroupingDividerFontSizes);

    DAT_003eae56 = '\0';

    uVar2 = extraout_x1_00;

  }

  if (DAT_003eae57 == '\x01') {

    FUN_002a0060(uVar1,uVar2,DAT_003ea948,&cf_xzyChatListGroupingDividerChevronOffsets);

    FUN_001e77e8(&cf_xzyChatListGroupingDividerChevronOffsets);

    DAT_003eae57 = '\0';

  }

  _objc_release(uVar1);

  return;

}




