// FUN_0020c804 @0x20c804


void FUN_0020c804(undefined8 param_1,cfstringStruct *param_2)



{

  cfstringStruct *pcVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined *puVar5;

  undefined8 extraout_x1;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  auVar7 = FUN_00297fa0(param_1);

  uVar6 = auVar7._8_8_;

  if (auVar7._0_8_ != 0) {

    if (DAT_003ea9c8 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      lVar3 = DAT_003ea9c8;

      DAT_003ea9c8 = lVar2;

      _objc_release(lVar3);

      uVar6 = extraout_x1;

    }

    FUN_0029b4a0(DAT_003ea9d0,uVar6,param_1);

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf___;

    if (param_2 != (cfstringStruct *)0x0) {

      pcVar1 = param_2;

    }

    FUN_002a45c0(pcVar1,auVar7._8_8_,auVar7._0_8_);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    auVar7 = FUN_00297fa0(lVar3);

    if (auVar7._0_8_ == 0) {

      FUN_0029b4a0(DAT_003ea9c8,auVar7._8_8_,param_1);

    }

    else {

      FUN_00297da0(lVar3);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      lVar4 = auVar7._0_8_;

      lVar2 = lVar3;

      if (lVar4 != 0) {

        lVar2 = lVar4;

      }

      FUN_002a00a0(DAT_003ea9c8,auVar7._8_8_,lVar2,param_1);

      _objc_release(lVar4);

    }

    puVar5 = PTR____NSDictionary0__struct_00388310;

    if (DAT_003ea9c8 != 0) {

      puVar5 = (undefined *)FUN_002937a0();

    }

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0060(auVar7._0_8_,auVar7._8_8_,puVar5,&cf_xzyChatListGroupingSideRailIconPaths);

    _objc_release(auVar7._0_8_);

    FUN_001e77e8(&cf_xzyChatListGroupingSideRailIconPaths);

    _objc_release(puVar5);

    FUN_0020c558(param_1);

    _objc_release(lVar3);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




