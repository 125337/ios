// refreshPluginConfigurationSummary @0x2d46c


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::refreshPluginConfigurationSummary(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar7 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_002924c0(auVar7._0_8_,auVar7._8_8_,&cf_coversEnabled);

  _objc_release(auVar7._0_8_);

  FUN_00296020(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar7._0_8_,auVar7._8_8_,

               "System/Library/Frameworks/AudioToolbox.framework/AudioToolbox");

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_00296020(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar7._0_8_,auVar7._8_8_,

               "ystem/Library/Frameworks/AudioToolbox.framework/AudioToolbox");

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_00296020(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar7._0_8_,auVar7._8_8_,

               "stem/Library/Frameworks/AudioToolbox.framework/AudioToolbox");

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  if (iVar2 == 0) {

    FUN_002a4b60(&_OBJC_CLASS___UIColor);

    auVar7 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002a4b80();

    auVar7 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0029cf60(uVar3,auVar7._8_8_,auVar7._0_8_);

  pcVar1 = &cf___T_u;

  if (iVar2 == 0) {

    pcVar1 = &cf__sQ;

  }

  _objc_release(auVar7._0_8_);

  FUN_002a1d60(uVar4,extraout_x1,pcVar1);

  pcVar1 = &cf_sQ;

  if (iVar2 == 0) {

    pcVar1 = &::cf___;

  }

  FUN_002a1f80(uVar5,extraout_x1_00,pcVar1,0);

  FUN_002a4dc0(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  return;

}




