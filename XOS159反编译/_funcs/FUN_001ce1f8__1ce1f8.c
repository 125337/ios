// FUN_001ce1f8 @0x1ce1f8


void FUN_001ce1f8(undefined8 param_1,int param_2)



{

  long lVar1;

  long lVar2;

  undefined *puVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  auVar5 = FUN_00297fa0(param_1);

  uVar4 = auVar5._8_8_;

  if (auVar5._0_8_ != 0) {

    if (DAT_003ea9b8 == 0) {

      FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      lVar1 = DAT_003ea9b8;

      DAT_003ea9b8 = lVar2;

      _objc_release(lVar1);

      uVar4 = extraout_x1;

    }

    if (param_2 == 0) {

      FUN_0029b460(DAT_003ea9b8,uVar4,param_1);

    }

    else {

      FUN_00291240(DAT_003ea9b8,uVar4,param_1);

    }

    puVar3 = PTR____NSArray0__struct_00388308;

    if (DAT_003ea9b8 != 0) {

      FUN_00291620();

      puVar3 = (undefined *)_objc_retainAutoreleasedReturnValue();

    }

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0060(auVar5._0_8_,auVar5._8_8_,puVar3,&cf_xzyChatListGroupingGroupIconHidden);

    _objc_release(auVar5._0_8_);

    FUN_001e77e8(&cf_xzyChatListGroupingGroupIconHidden);

    _objc_release(puVar3);

    FUN_0020c558(param_1);

  }

  _objc_release(param_1);

  return;

}




